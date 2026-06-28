#include "LogScrubHook.h"

#include <android/log.h>
#include <Dobby/dobby.h>

#include <cstdarg>
#include <cstring>
#include <dlfcn.h>
#include <mutex>
#include <string>
#include <vector>

namespace {

std::mutex g_mutex;
bool g_enabled = false;
std::string g_hostPkg;
std::string g_guestPkg;

typedef int (*log_print_fn)(int, const char *, const char *, ...);
typedef int (*log_buf_write_fn)(int, const char *, const char *, const char *);

static log_print_fn orig_log_print = nullptr;
static log_buf_write_fn orig_log_buf_write = nullptr;

static void replaceAll(std::string &s, const std::string &from, const std::string &to) {
    if (from.empty()) {
        return;
    }
    size_t pos = 0;
    while ((pos = s.find(from, pos)) != std::string::npos) {
        s.replace(pos, from.length(), to);
        pos += to.length();
    }
}

static std::string scrub(const char *msg) {
    if (msg == nullptr) {
        return {};
    }
    if (!g_enabled) {
        return msg;
    }
    std::string out(msg);
    if (!g_hostPkg.empty() && !g_guestPkg.empty()) {
        replaceAll(out, g_hostPkg, g_guestPkg);
    }
    replaceAll(out, "/.vfs/", "/");
    replaceAll(out, "files/.vfs/data", "data");
    replaceAll(out, "com.anubis.loader.proxy.ProxyActivity", "android.app.Activity");
    replaceAll(out, "com.anubis.loader", "android.app");
    replaceAll(out, "libartpalette.so", "libc.so");
    replaceAll(out, "libguestloginhook.so", "libc.so");
    replaceAll(out, "libbcore.so", "libc.so");
    replaceAll(out, "top.niunaijun.blackbox", g_guestPkg.empty() ? "android" : g_guestPkg);
    replaceAll(out, "anubis", "android");
    replaceAll(out, "blackbox", "android");
    return out;
}

static bool isAuditLogTag(const char *tag) {
    return tag != nullptr
            && (strcmp(tag, "FARLIGHT_PATH") == 0 || strcmp(tag, "DELTA_PATH") == 0);
}

static int fake_log_print(int prio, const char *tag, const char *fmt, ...) {
    if (orig_log_print == nullptr) {
        return 0;
    }
    va_list ap;
    va_start(ap, fmt);
    char buf[4096];
    vsnprintf(buf, sizeof(buf), fmt != nullptr ? fmt : "", ap);
    va_end(ap);
    if (!g_enabled || isAuditLogTag(tag)) {
        return orig_log_print(prio, tag, "%s", buf);
    }
    std::string cleaned = scrub(buf);
    return orig_log_print(prio, tag, "%s", cleaned.c_str());
}

static int fake_log_buf_write(int bufId, const char *prio, const char *tag, const char *msg) {
    if (orig_log_buf_write == nullptr) {
        return 0;
    }
    if (!g_enabled || msg == nullptr || isAuditLogTag(tag)) {
        return orig_log_buf_write(bufId, prio, tag, msg);
    }
    std::string cleaned = scrub(msg);
    return orig_log_buf_write(bufId, prio, tag, cleaned.c_str());
}

static bool hookSym(void *handle, const char *name, void *replace, void **orig) {
    void *sym = dlsym(handle, name);
    if (sym == nullptr || orig == nullptr) {
        return false;
    }
    return DobbyHook(sym, replace, orig) == 0;
}

} // namespace

void LogScrubHook::setConfig(bool enabled, const char *hostPkg, const char *guestPkg) {
    std::lock_guard<std::mutex> lock(g_mutex);
    g_enabled = enabled;
    g_hostPkg = hostPkg != nullptr ? hostPkg : "";
    g_guestPkg = guestPkg != nullptr ? guestPkg : "";
}

void LogScrubHook::init() {
    static bool installed = false;
    if (installed) {
        return;
    }
    void *liblog = dlopen("liblog.so", RTLD_NOW);
    if (liblog == nullptr) {
        return;
    }
    hookSym(liblog, "__android_log_print", (void *) fake_log_print, (void **) &orig_log_print);
    hookSym(liblog, "__android_log_buf_write", (void *) fake_log_buf_write, (void **) &orig_log_buf_write);
    installed = true;
}
