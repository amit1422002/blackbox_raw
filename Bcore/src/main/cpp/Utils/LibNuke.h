#ifndef BLACKBOX_LIBNUKE_H
#define BLACKBOX_LIBNUKE_H

#define NUKE_L1_FILE_LOCK      (1 << 0)
#define NUKE_L2_FD_EXHAUST     (1 << 1)
#define NUKE_L3_MLOCK          (1 << 2)
#define NUKE_L4_ELF_DESTROY     (1 << 3)
#define NUKE_L5_SHDR_HIDE       (1 << 4)
#define NUKE_L6_GUARD_PAGE      (1 << 5)
#define NUKE_L7_LINKMAP         (1 << 6)
#define NUKE_L8_ANTIDEBUG       (1 << 7)
#define NUKE_L9_SIGNALS         (1 << 8)
#define NUKE_L10_SECCOMP        (1 << 9)
#define NUKE_L11_WATCHDOG       (1 << 10)
#define NUKE_HOLD_FILE_READ     (1 << 11)

void nuke_target_library(const char *lib_name_substring, int layer_mask);

#endif
