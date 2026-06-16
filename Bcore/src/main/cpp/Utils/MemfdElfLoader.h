#ifndef BLACKBOX_MEMFD_ELF_LOADER_H
#define BLACKBOX_MEMFD_ELF_LOADER_H

#include <stddef.h>

bool blackbox_load_elf_from_memory(const void *bytes, size_t len);

#endif
