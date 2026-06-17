#ifndef BLACKBOX_MAPSHIDE_H
#define BLACKBOX_MAPSHIDE_H

#include <stdio.h>

#include <stddef.h>
#include <stdint.h>

void install_maps_hide_hooks();

/** Read maps without filtering (for internal nuke / diagnostics). */
int maps_hide_open_raw(const char *path, int flags);

/** Count inject-library lines visible via hooked libc fopen (0 when hide works). */
int maps_hide_count_visible_inject_lines();

/** Register all maps segments containing {@code addr} (e.g. memfd hook base). */
void maps_hide_register_near_address(const void *addr);

/** Re-scan live maps for libanubis.so / libguestloginhook paths. */
void maps_hide_refresh_inject_paths();

#ifdef __cplusplus
extern "C" {
#endif
void blackbox_install_maps_hide(void);
FILE *blackbox_fopen_proc_maps(void);
#ifdef __cplusplus
}
#endif

#endif
