#ifndef BLACKBOX_MEMFD_BOOTSTRAP_H
#define BLACKBOX_MEMFD_BOOTSTRAP_H

#include <stddef.h>

void *memfd_dlopen_elf(const void *bytes, size_t len, const char *fake_soname);

#endif
