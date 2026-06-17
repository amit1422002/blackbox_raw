#include "MapsHide.h"

#include <android/log.h>
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unistd.h>

#include <sys/mman.h>
#include <sys/syscall.h>

#include "Dobby/dobby.h"
#include "xdl.h"

#ifndef MFD_CLOEXEC
#define MFD_CLOEXEC 0x0001U
#endif

#ifndef __NR_memfd_create
#if defined(__aarch64__)
#define __NR_memfd_create 279
#elif defined(__arm__)
#define __NR_memfd_create 385
#endif
#endif

#define LOG_TAG "MapsHide"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)

static int (*orig_open)(const char *pathname, int flags, ...) = nullptr;
static int (*orig_open64)(const char *pathname, int flags, ...) = nullptr;
static int (*orig_openat)(int dirfd, const char *pathname, int flags, ...) = nullptr;
static FILE *(*orig_fopen)(const char *pathname, const char *mode) = nullptr;
static FILE *(*orig_fopen64)(const char *pathname, const char *mode) = nullptr;
/** Resolved for internal bypass only — never hooked (hooking syscall breaks read/close during filter). */
static long (*libc_syscall_fn)(long number, ...) = nullptr;

#ifndef __NR_openat
#if defined(__aarch64__)
#define __NR_openat 56
#elif defined(__arm__)
#define __NR_openat 322
#endif
#endif

#ifndef AT_FDCWD
#define AT_FDCWD (-100)
#endif

static pthread_once_t g_maps_hide_once = PTHREAD_ONCE_INIT;
static pthread_mutex_t g_maps_hide_lock = PTHREAD_MUTEX_INITIALIZER;
static thread_local bool g_in_maps_filter = false;

static int maps_raw_open(const char *path, int flags);
static int read_fd_to_string(int fd, std::string *out);

/** Only the real host APK libanubis.so mapping — not every BlackBox virtual vma. */
static bool maps_line_is_host_libanubis(const char *line) {
    static constexpr const char kLib[] = "libanubis.so";
    static constexpr size_t kLibLen = sizeof(kLib) - 1; // 12 — was 14 for libblackbox.so

    if (line == nullptr || strstr(line, kLib) == nullptr) {
        return false;
    }
    if (strstr(line, "top.niunaijun.blackbox") == nullptr) {
        return false;
    }
    if (strstr(line, "/lib/arm64/libanubis.so") == nullptr
            && strstr(line, "/lib/arm64-v8a/libanubis.so") == nullptr) {
        return false;
    }
    const char *base = strrchr(line, '/');
    if (base == nullptr) {
        return false;
    }
    base++;
    return strncmp(base, kLib, kLibLen) == 0
           && (base[kLibLen] == '\0' || base[kLibLen] == '\n' || base[kLibLen] == '\r'
               || base[kLibLen] == ' ');
}

void maps_hide_register_near_address(const void *addr) {
    (void) addr;
}

void maps_hide_refresh_inject_paths() {
    // Path-only hide — no vma registration (avoids inode-0 mass false positives).
}

/** True kernel entry — never goes through Dobby-hooked libc wrappers. */
static int maps_raw_open(const char *path, int flags) {
#if defined(__NR_openat)
    if (libc_syscall_fn) {
        return static_cast<int>(libc_syscall_fn(__NR_openat, AT_FDCWD, path, flags));
    }
    return static_cast<int>(syscall(__NR_openat, AT_FDCWD, path, flags, 0));
#else
    (void) path;
    (void) flags;
    errno = ENOSYS;
    return -1;
#endif
}

static int memfd_create_anon(const char *name) {
#if defined(__NR_memfd_create)
    if (libc_syscall_fn) {
        return static_cast<int>(libc_syscall_fn(__NR_memfd_create, name, MFD_CLOEXEC));
    }
    return static_cast<int>(syscall(__NR_memfd_create, name, MFD_CLOEXEC));
#else
    (void) name;
    errno = ENOSYS;
    return -1;
#endif
}

static bool is_proc_maps_path(const char *path) {
    if (path == nullptr || strncmp(path, "/proc/", 6) != 0) {
        return false;
    }
    return strstr(path, "/maps") != nullptr;
}

static bool should_hide_maps_line(const char *line) {
    return maps_line_is_host_libanubis(line);
}

struct MapsFilterStats {
    std::string content;
    int total_lines = 0;
    int hidden_lines = 0;
};

static MapsFilterStats filter_maps_content(const std::string &raw) {
    MapsFilterStats stats;
    stats.content.reserve(raw.size());

    size_t line_start = 0;
    while (line_start < raw.size()) {
        size_t line_end = raw.find('\n', line_start);
        if (line_end == std::string::npos) {
            line_end = raw.size();
        }

        const size_t line_len = line_end - line_start;
        const char *line_ptr = raw.data() + line_start;
        if (line_len > 0) {
            stats.total_lines++;
            const std::string line(line_ptr, line_len);
            if (should_hide_maps_line(line.c_str())) {
                stats.hidden_lines++;
            } else {
                stats.content.append(line_ptr, line_len);
                stats.content.push_back('\n');
            }
        }

        line_start = (line_end < raw.size()) ? line_end + 1 : raw.size();
    }
    return stats;
}

static int read_fd_to_string(int fd, std::string *out) {
    if (fd < 0 || out == nullptr) {
        return -1;
    }
    out->clear();
    char buf[4096];
    ssize_t n;
    while ((n = read(fd, buf, sizeof(buf))) > 0) {
        out->append(buf, static_cast<size_t>(n));
    }
    return (n < 0) ? -1 : 0;
}

static int open_filtered_maps_fd(const char *path) {
    int src = maps_raw_open(path, O_RDONLY | O_CLOEXEC);
    if (src < 0) {
        return src;
    }

    std::string raw;
    if (read_fd_to_string(src, &raw) != 0) {
        close(src);
        return -1;
    }
    close(src);

    const MapsFilterStats stats = filter_maps_content(raw);

    if (stats.hidden_lines > 0) {
        LOGI("filtered %s pid=%d: %d lines -> %d visible (hid %d)",
             path, getpid(), stats.total_lines,
             stats.total_lines - stats.hidden_lines, stats.hidden_lines);
    } else {
        LOGD("passthrough %s pid=%d: %d lines (nothing hidden)",
             path, getpid(), stats.total_lines);
    }

    int mfd = memfd_create_anon("maps");
    if (mfd < 0) {
        return mfd;
    }

    size_t written = 0;
    while (written < stats.content.size()) {
        ssize_t n = write(mfd, stats.content.data() + written, stats.content.size() - written);
        if (n <= 0) {
            close(mfd);
            return -1;
        }
        written += static_cast<size_t>(n);
    }
    lseek(mfd, 0, SEEK_SET);
    return mfd;
}

static bool maps_open_for_read(int flags) {
    return (flags & O_ACCMODE) == O_RDONLY;
}

static int try_return_filtered_maps_fd(const char *pathname, int flags) {
    if (pathname == nullptr || !is_proc_maps_path(pathname) || !maps_open_for_read(flags)) {
        return -1;
    }
    g_in_maps_filter = true;
    pthread_mutex_lock(&g_maps_hide_lock);
    const int filtered = open_filtered_maps_fd(pathname);
    pthread_mutex_unlock(&g_maps_hide_lock);
    g_in_maps_filter = false;
    return filtered;
}

int maps_hide_open_raw(const char *path, int flags) {
    return maps_raw_open(path, flags);
}

static int call_orig_open(const char *pathname, int flags, mode_t mode, bool has_mode) {
    if (!orig_open) {
        errno = ENOSYS;
        return -1;
    }
    if (has_mode) {
        return orig_open(pathname, flags, mode);
    }
    return orig_open(pathname, flags);
}

static int my_open(const char *pathname, int flags, ...) {
    if (g_in_maps_filter) {
        bool has_mode = (flags & O_CREAT) != 0;
        mode_t mode = 0;
        va_list args;
        va_start(args, flags);
        if (has_mode) {
            mode = va_arg(args, mode_t);
        }
        va_end(args);
        return call_orig_open(pathname, flags, mode, has_mode);
    }

    bool has_mode = (flags & O_CREAT) != 0;
    mode_t mode = 0;
    va_list args;
    va_start(args, flags);
    if (has_mode) {
        mode = va_arg(args, mode_t);
    }
    va_end(args);

    if (is_proc_maps_path(pathname) && maps_open_for_read(flags)) {
        const int filtered = try_return_filtered_maps_fd(pathname, flags);
        if (filtered >= 0) {
            return filtered;
        }
    }
    return call_orig_open(pathname, flags, mode, has_mode);
}

static int my_open64(const char *pathname, int flags, ...) {
    bool has_mode = (flags & O_CREAT) != 0;
    mode_t mode = 0;
    va_list args;
    va_start(args, flags);
    if (has_mode) {
        mode = va_arg(args, mode_t);
    }
    va_end(args);

    if (!g_in_maps_filter && is_proc_maps_path(pathname) && maps_open_for_read(flags)) {
        const int filtered = try_return_filtered_maps_fd(pathname, flags);
        if (filtered >= 0) {
            return filtered;
        }
    }
    if (orig_open64) {
        if (has_mode) {
            return orig_open64(pathname, flags, mode);
        }
        return orig_open64(pathname, flags);
    }
    return call_orig_open(pathname, flags, mode, has_mode);
}

static int my_openat(int dirfd, const char *pathname, int flags, ...) {
    bool has_mode = (flags & O_CREAT) != 0;
    mode_t mode = 0;
    va_list args;
    va_start(args, flags);
    if (has_mode) {
        mode = va_arg(args, mode_t);
    }
    va_end(args);

    if (!g_in_maps_filter && pathname != nullptr && is_proc_maps_path(pathname) &&
        maps_open_for_read(flags)) {
        const int filtered = try_return_filtered_maps_fd(pathname, flags);
        if (filtered >= 0) {
            return filtered;
        }
    }
    if (orig_openat) {
        if (has_mode) {
            return orig_openat(dirfd, pathname, flags, mode);
        }
        return orig_openat(dirfd, pathname, flags);
    }
    errno = ENOSYS;
    return -1;
}

static FILE *my_fopen(const char *pathname, const char *mode) {
    if (pathname != nullptr && mode != nullptr && strchr(mode, 'w') == nullptr &&
        strchr(mode, 'a') == nullptr && strchr(mode, '+') == nullptr &&
        !g_in_maps_filter) {
        const int fd = try_return_filtered_maps_fd(pathname, O_RDONLY);
        if (fd >= 0) {
            return fdopen(fd, mode);
        }
    }
    return orig_fopen ? orig_fopen(pathname, mode) : nullptr;
}

static FILE *my_fopen64(const char *pathname, const char *mode) {
    if (pathname != nullptr && mode != nullptr && strchr(mode, 'w') == nullptr &&
        strchr(mode, 'a') == nullptr && strchr(mode, '+') == nullptr &&
        !g_in_maps_filter) {
        const int fd = try_return_filtered_maps_fd(pathname, O_RDONLY);
        if (fd >= 0) {
            return fdopen(fd, mode);
        }
    }
    if (orig_fopen64) {
        return orig_fopen64(pathname, mode);
    }
    return my_fopen(pathname, mode);
}

static void install_maps_hide_hooks_impl() {
    void *handle = xdl_open("libc.so", XDL_DEFAULT);
    if (!handle) {
        LOGW("xdl_open libc.so failed");
        return;
    }

    int hooked = 0;

    libc_syscall_fn = reinterpret_cast<long (*)(long, ...)>(xdl_sym(handle, "syscall", nullptr));

    void *sym_openat = xdl_sym(handle, "openat", nullptr);
    if (sym_openat && DobbyHook(sym_openat, reinterpret_cast<void *>(my_openat),
                                reinterpret_cast<void **>(&orig_openat)) == 0) {
        hooked++;
    }

    void *sym_fopen = xdl_sym(handle, "fopen", nullptr);
    if (sym_fopen && DobbyHook(sym_fopen, reinterpret_cast<void *>(my_fopen),
                               reinterpret_cast<void **>(&orig_fopen)) == 0) {
        hooked++;
    }

    void *sym_fopen64 = xdl_sym(handle, "fopen64", nullptr);
    if (sym_fopen64 && DobbyHook(sym_fopen64, reinterpret_cast<void *>(my_fopen64),
                                 reinterpret_cast<void **>(&orig_fopen64)) == 0) {
        hooked++;
    }

    xdl_close(handle);
    LOGI("proc maps hide hooks installed ok=%d (libanubis.so only)", hooked);
}

FILE *maps_hide_fopen_proc_self(void) {
    install_maps_hide_hooks();
    g_in_maps_filter = true;
    pthread_mutex_lock(&g_maps_hide_lock);
    const int fd = open_filtered_maps_fd("/proc/self/maps");
    pthread_mutex_unlock(&g_maps_hide_lock);
    g_in_maps_filter = false;
    if (fd < 0) {
        return nullptr;
    }
    return fdopen(fd, "r");
}

int maps_hide_count_visible_inject_lines() {
    FILE *fp = maps_hide_fopen_proc_self();
    if (fp == nullptr) {
        LOGW("inject maps probe fopen failed errno=%d", errno);
        return -1;
    }
    char line[1024];
    int visible = 0;
    while (fgets(line, sizeof(line), fp) != nullptr) {
        if (should_hide_maps_line(line)) {
            visible++;
        }
    }
    fclose(fp);
    LOGD("inject maps probe visible=%d", visible);
    return visible;
}

void install_maps_hide_hooks() {
    pthread_once(&g_maps_hide_once, install_maps_hide_hooks_impl);
}

extern "C" __attribute__((visibility("default"))) void blackbox_install_maps_hide(void) {
    install_maps_hide_hooks();
}

extern "C" __attribute__((visibility("default"))) FILE *blackbox_fopen_proc_maps(void) {
    return maps_hide_fopen_proc_self();
}
