#include <android/log.h>

#define TAG "NativeCore"

#define log_print_error(...) ((void)0)
#define log_print_debug(...) ((void)0)

#define ALOGE(...) log_print_error(__VA_ARGS__)
#define ALOGD(...) log_print_debug(__VA_ARGS__)

#ifndef SPEED_LOG_H
#define SPEED_LOG_H 1

#endif
