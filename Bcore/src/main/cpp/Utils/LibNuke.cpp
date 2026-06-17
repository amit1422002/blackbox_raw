#include "LibNuke.h"

#include <android/log.h>
#include <dlfcn.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <sys/mman.h>

#include "MapsHide.h"

#define LOG_TAG "LibNuke"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)

struct MapRegion {
    uintptr_t start;
    uintptr_t end;
    char perms[8];
    char path[512];
};

static bool parse_maps_line(const char *line, MapRegion *region) {
    if (line == nullptr || region == nullptr) {
        return false;
    }
    unsigned long start = 0;
    unsigned long end = 0;
    char perms[8] = {};
    char path[512] = {};
    int matched = sscanf(line, "%lx-%lx %7s %*s %*s %*s %511[^\n]", &start, &end, perms, path);
    if (matched < 3) {
        return false;
    }
    region->start = static_cast<uintptr_t>(start);
    region->end = static_cast<uintptr_t>(end);
    strncpy(region->perms, perms, sizeof(region->perms) - 1);
    strncpy(region->path, path, sizeof(region->path) - 1);
    return true;
}

static bool path_matches_lib(const char *path, const char *lib_substring) {
    if (path == nullptr || lib_substring == nullptr || lib_substring[0] == '\0') {
        return false;
    }
    return strstr(path, lib_substring) != nullptr;
}

static void nuke_elf_destroy_for_lib(const char *lib_substring) {
    int fd = maps_hide_open_raw("/proc/self/maps", O_RDONLY);
    if (fd < 0) {
        LOGW("open raw maps failed");
        return;
    }

    FILE *fp = fdopen(fd, "r");
    if (fp == nullptr) {
        close(fd);
        return;
    }

    char line[1024];
    int destroyed = 0;
    while (fgets(line, sizeof(line), fp) != nullptr) {
        MapRegion region{};
        if (!parse_maps_line(line, &region)) {
            continue;
        }
        if (!path_matches_lib(region.path, lib_substring)) {
            continue;
        }
        if (strchr(region.perms, 'w') != nullptr) {
            continue;
        }

        const size_t len = region.end - region.start;
        if (len == 0 || len > 64 * 1024 * 1024) {
            continue;
        }

        void *addr = reinterpret_cast<void *>(region.start);
        if (mprotect(addr, len, PROT_READ | PROT_WRITE | PROT_EXEC) != 0) {
            if (mprotect(addr, len, PROT_READ | PROT_WRITE) != 0) {
                continue;
            }
        }
        const size_t wipe = len < 0x1000 ? len : 0x1000;
        memset(addr, 0, wipe);
        destroyed++;
    }

    fclose(fp);
    LOGD("ELF destroy on %s: wiped %d mapping(s)", lib_substring, destroyed);
}

static void nuke_shdr_hide_for_lib(const char *lib_substring) {
    int fd = maps_hide_open_raw("/proc/self/maps", O_RDONLY);
    if (fd < 0) {
        return;
    }
    FILE *fp = fdopen(fd, "r");
    if (fp == nullptr) {
        close(fd);
        return;
    }

    char line[1024];
    while (fgets(line, sizeof(line), fp) != nullptr) {
        MapRegion region{};
        if (!parse_maps_line(line, &region) || !path_matches_lib(region.path, lib_substring)) {
            continue;
        }
        const size_t len = region.end - region.start;
        if (len < 0x80) {
            continue;
        }
        void *addr = reinterpret_cast<void *>(region.start);
        if (mprotect(addr, len, PROT_READ | PROT_WRITE) != 0) {
            continue;
        }
        auto *bytes = static_cast<uint8_t *>(addr);
        if (bytes[0] == 0x7f && bytes[1] == 'E' && bytes[2] == 'L' && bytes[3] == 'F') {
            memset(bytes + 0x28, 0, 0x40);
        }
    }
    fclose(fp);
}

void nuke_target_library(const char *lib_name_substring, int layer_mask) {
    if (lib_name_substring == nullptr || lib_name_substring[0] == '\0') {
        return;
    }

    if (layer_mask & NUKE_L4_ELF_DESTROY) {
        nuke_elf_destroy_for_lib(lib_name_substring);
    }
    if (layer_mask & NUKE_L5_SHDR_HIDE) {
        nuke_shdr_hide_for_lib(lib_name_substring);
    }

    if (layer_mask & ~(NUKE_L4_ELF_DESTROY | NUKE_L5_SHDR_HIDE)) {
        LOGD("nuke %s mask=0x%x (only L4/L5 implemented in blackbox)", lib_name_substring, layer_mask);
    }
}
