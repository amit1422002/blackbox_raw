#pragma once

#include <cstddef>

/** Load ELF bytes via memfd + android_dlopen_ext (no .so path on disk/maps). */
bool hasad_load_elf_from_memory(const void *bytes, size_t len);
