#include "MemfdBootstrap.h"

#include <android/dlext.h>
#include <dlfcn.h>
#include <errno.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

#include <sys/mman.h>
#include <sys/syscall.h>

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

static int memfd_create_anon() {
#if defined(__NR_memfd_create)
    return static_cast<int>(syscall(__NR_memfd_create, "dmabuf", MFD_CLOEXEC));
#else
    errno = ENOSYS;
    return -1;
#endif
}

void *memfd_dlopen_elf(const void *bytes, size_t len, const char *fake_soname) {
    if (bytes == nullptr || len < 4 || fake_soname == nullptr) {
        return nullptr;
    }

    int fd = memfd_create_anon();
    if (fd < 0) {
        return nullptr;
    }

    const auto *data = static_cast<const uint8_t *>(bytes);
    size_t off = 0;
    while (off < len) {
        ssize_t n = write(fd, data + off, len - off);
        if (n <= 0) {
            close(fd);
            return nullptr;
        }
        off += static_cast<size_t>(n);
    }

    android_dlextinfo ext{};
    ext.flags = ANDROID_DLEXT_USE_LIBRARY_FD;
#ifdef ANDROID_DLEXT_FORCE_LOAD
    ext.flags |= ANDROID_DLEXT_FORCE_LOAD;
#endif
    ext.library_fd = fd;
    ext.library_fd_offset = 0;

    void *handle = android_dlopen_ext(fake_soname, RTLD_NOW, &ext);
    close(fd);
    return handle;
}
