#include "ProcFsHook.h"

#include <IO.h>
#include <Log.h>
#include <Dobby/dobby.h>

#include <dlfcn.h>
#include <cstdarg>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>
#include <cstdio>
#include <string>

#if defined(__aarch64__)
#define PROC_HOOK_NR_OPENAT 56
#define PROC_HOOK_NR_OPENAT2 437
#elif defined(__arm__)
#define PROC_HOOK_NR_OPENAT 322
#define PROC_HOOK_NR_OPENAT2 437
#else
#define PROC_HOOK_NR_OPENAT 0
#define PROC_HOOK_NR_OPENAT2 0
#endif

namespace {

static bool is_proc_path(const char *path) {
    return path != nullptr && strncmp(path, "/proc/", 6) == 0;
}

static const char *redirect_io_path(const char *path) {
    if (path == nullptr) {
        return path;
    }
    if (strstr(path, "/.vfs/") != nullptr) {
        const char *redirected = IO::redirectPath(path);
        return redirected;
    }
    if (strncmp(path, "/proc/", 6) == 0) {
        return IO::redirectPath(path);
    }
    const char *redirected = IO::redirectPath(path);
    return redirected;
}

static const char *redirect_proc_path(const char *path) {
    return redirect_io_path(path);
}

static void release_redirect(const char *original, const char *redirected) {
    if (redirected != nullptr && redirected != original) {
        free((void *) redirected);
    }
}

typedef int (*openat_fn)(int, const char *, int, ...);
typedef int (*open_fn)(const char *, int, ...);
typedef FILE *(*fopen_fn)(const char *, const char *);
typedef ssize_t (*readlinkat_fn)(int, const char *, char *, size_t);
typedef long (*syscall_fn)(long, ...);

static openat_fn orig_openat = nullptr;
static open_fn orig_open = nullptr;
static fopen_fn orig_fopen = nullptr;
static readlinkat_fn orig_readlinkat = nullptr;
static syscall_fn orig_syscall = nullptr;

static int call_openat(int fd, const char *path, int flags, mode_t mode) {
    if (orig_openat == nullptr) {
        return -1;
    }
    return orig_openat(fd, path, flags, mode);
}

static int fake_openat(int fd, const char *pathname, int flags, ...) {
    mode_t mode = 0;
    if (flags & O_CREAT) {
        va_list ap;
        va_start(ap, flags);
        mode = static_cast<mode_t>(va_arg(ap, int));
        va_end(ap);
    }
    const char *redirected = redirect_proc_path(pathname);
    int ret = call_openat(fd, redirected, flags, mode);
    release_redirect(pathname, redirected);
    return ret;
}

static int fake_open(const char *pathname, int flags, ...) {
    mode_t mode = 0;
    if (flags & O_CREAT) {
        va_list ap;
        va_start(ap, flags);
        mode = static_cast<mode_t>(va_arg(ap, int));
        va_end(ap);
    }
    const char *redirected = redirect_proc_path(pathname);
    int ret = orig_open != nullptr ? orig_open(redirected, flags, mode) : -1;
    release_redirect(pathname, redirected);
    return ret;
}

static FILE *fake_fopen(const char *pathname, const char *mode) {
    const char *redirected = redirect_proc_path(pathname);
    FILE *file = orig_fopen != nullptr ? orig_fopen(redirected, mode) : nullptr;
    release_redirect(pathname, redirected);
    return file;
}

static ssize_t fake_readlinkat(int dirfd, const char *pathname, char *buf, size_t size) {
    const char *redirected = redirect_proc_path(pathname);
    ssize_t ret = orig_readlinkat != nullptr
            ? orig_readlinkat(dirfd, redirected, buf, size)
            : -1;
    release_redirect(pathname, redirected);
    return ret;
}

static long forward_syscall(long number, long a1, long a2, long a3, long a4, long a5, long a6) {
    if (orig_syscall == nullptr) {
        return -1;
    }
    return orig_syscall(number, a1, a2, a3, a4, a5, a6);
}

static long fake_syscall(long number, ...) {
    va_list ap;
    va_start(ap, number);
    long a1 = va_arg(ap, long);
    long a2 = va_arg(ap, long);
    long a3 = va_arg(ap, long);
    long a4 = va_arg(ap, long);
    long a5 = va_arg(ap, long);
    long a6 = va_arg(ap, long);
    va_end(ap);

#if PROC_HOOK_NR_OPENAT != 0
    if (number == PROC_HOOK_NR_OPENAT || number == PROC_HOOK_NR_OPENAT2) {
        const char *path = reinterpret_cast<const char *>(a2);
        const char *redirected = redirect_io_path(path);
        if (redirected != path) {
            long ret = forward_syscall(number, a1, reinterpret_cast<long>(redirected), a3, a4, a5, a6);
            release_redirect(path, redirected);
            return ret;
        }
    }
#endif
    return forward_syscall(number, a1, a2, a3, a4, a5, a6);
}

static bool hook_sym(void *handle, const char *name, void *replace, void **orig) {
    void *sym = dlsym(handle, name);
    if (sym == nullptr || orig == nullptr) {
        return false;
    }
    if (DobbyHook(sym, replace, orig) == 0) {
        ALOGD("ProcFsHook: hooked %s", name);
        return true;
    }
    return false;
}

} // namespace

std::string ProcFsHook::readFileBypass(const char *path) {
    if (path == nullptr || orig_openat == nullptr) {
        return {};
    }
    int fd = orig_openat(AT_FDCWD, path, O_RDONLY, 0);
    if (fd < 0) {
        return {};
    }
    std::string out;
    char buf[4096];
    ssize_t n;
    while ((n = read(fd, buf, sizeof(buf))) > 0) {
        out.append(buf, static_cast<size_t>(n));
    }
    close(fd);
    return out;
}

void ProcFsHook::init(JNIEnv *env) {
    (void) env;
    static bool installed = false;
    if (installed) {
        return;
    }
    void *libc = dlopen("libc.so", RTLD_NOW);
    if (libc == nullptr) {
        ALOGE("ProcFsHook: dlopen libc failed");
        return;
    }
    hook_sym(libc, "openat", (void *) fake_openat, (void **) &orig_openat);
    hook_sym(libc, "open", (void *) fake_open, (void **) &orig_open);
    hook_sym(libc, "fopen", (void *) fake_fopen, (void **) &orig_fopen);
    hook_sym(libc, "readlinkat", (void *) fake_readlinkat, (void **) &orig_readlinkat);
    hook_sym(libc, "syscall", (void *) fake_syscall, (void **) &orig_syscall);
    installed = true;
    ALOGD("ProcFsHook installed (proc + io redirect)");
}
