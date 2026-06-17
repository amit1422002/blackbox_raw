#include "MemfdElfLoader.h"

#include <android/log.h>
#include <dlfcn.h>

#include "MemfdBootstrap.h"

#define MEMFD_TAG "GuestLogin"

bool blackbox_load_elf_from_memory(const void *bytes, size_t len) {
    if (bytes == nullptr || len < 4) {
        return false;
    }

    void *handle = memfd_dlopen_elf(bytes, len, "libguestloginhook.so");
    if (handle == nullptr) {
        __android_log_print(ANDROID_LOG_ERROR, MEMFD_TAG, "memfd dlopen failed: %s",
                            dlerror() != nullptr ? dlerror() : "unknown");
        return false;
    }

    using bootstrap_fn = void (*)();
    auto bootstrap = reinterpret_cast<bootstrap_fn>(dlsym(handle, "guest_hook_bootstrap"));
    if (bootstrap == nullptr) {
        bootstrap = reinterpret_cast<bootstrap_fn>(dlsym(RTLD_DEFAULT, "guest_hook_bootstrap"));
    }
    if (bootstrap != nullptr) {
        bootstrap();
        __android_log_print(ANDROID_LOG_INFO, MEMFD_TAG, "memfd bootstrap ok (dlsym)");
    } else {
        // Constructor already started the worker; never dlclose — unmapping kills the worker thread.
        __android_log_print(ANDROID_LOG_INFO, MEMFD_TAG,
                            "memfd dlopen ok (constructor worker; dlsym bootstrap unavailable)");
    }
    return true;
}
