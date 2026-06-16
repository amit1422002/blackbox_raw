#include "MapsGameLibsDump.h"

#include <android/log.h>

#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>
#include <unordered_set>
#include <unistd.h>

namespace {

constexpr const char *kInjectTag = "INJECT";
constexpr const char *kMapsTag = "MAPS_DUMP";

static bool lineHasGameSo(const char *line) {
    if (line == nullptr || line[0] == '\0') {
        return false;
    }
    if (strstr(line, "com.pubg.imobile") != nullptr && strstr(line, ".so") != nullptr) {
        return true;
    }
    return false;
}

static std::string extractMapPath(const char *line) {
    const char *slash = strchr(line, '/');
    if (slash == nullptr) {
        return {};
    }
    std::string path = slash;
    while (!path.empty() && (path.back() == '\r' || path.back() == '\n' || path.back() == ' ')) {
        path.pop_back();
    }
    return path;
}

static void dumpGameLibsMaps() {
    std::ifstream maps("/proc/self/maps");
    if (!maps.is_open()) {
        __android_log_print(ANDROID_LOG_ERROR, kMapsTag, "open /proc/self/maps failed");
        return;
    }

    std::unordered_set<std::string> seen;
    std::string line;
    int count = 0;
    while (std::getline(maps, line)) {
        if (!lineHasGameSo(line.c_str())) {
            continue;
        }
        const std::string path = extractMapPath(line.c_str());
        if (path.empty() || !seen.insert(path).second) {
            continue;
        }
        __android_log_print(ANDROID_LOG_ERROR, kMapsTag, "FOUND: %s", line.c_str());
        ++count;
    }
    __android_log_print(ANDROID_LOG_ERROR, kMapsTag, "TOTAL game libs=%d pid=%d", count, getpid());
}

} // namespace

void blaze_log_inject_and_game_maps(const char *hook_name) {
    const char *label = (hook_name != nullptr && hook_name[0] != '\0')
                                ? hook_name
                                : "guest-hook";
    __android_log_print(ANDROID_LOG_ERROR, kInjectTag, "NATIVE CODE OK: %s (in-process)",
                        label);
    dumpGameLibsMaps();
}
