#ifndef PROC_FS_HOOK_H
#define PROC_FS_HOOK_H

#include <jni.h>
#include <string>

/**
 * Virtual-env boundary: redirect /proc reads to sanitized mirror files.
 * Does not hook game dlopen, Runtime.nativeLoad, or guest library paths.
 */
class ProcFsHook {
public:
    static void init(JNIEnv *env);

    /** Internal scrubber input — real kernel maps, not the guest-visible mirror. */
    static std::string readFileBypass(const char *path);
};

#endif
