package com.anubis.skin;

import android.system.Os;
import android.util.Log;

import com.anubis.loader.core.NativeCore;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

/**
 * Memfd-loads guest hook; stealth maps refresh is handled by caller after load.
 */
public final class GuestMemoryLoader {

    private static final String TAG = "GuestLogin";
    private static final String HOOK_FILES_ENV = "XT_GUEST_HOOK_DIR";
    private static final String DISK_HOOK_NAME = "libguestloginhook.so";

    private GuestMemoryLoader() {
    }

    public static void prepareGuestHookFilesDir(String absoluteDir) throws Exception {
        if (absoluteDir == null || absoluteDir.isEmpty()) {
            return;
        }
        String path = absoluteDir.endsWith("/") ? absoluteDir : absoluteDir + "/";
        Os.setenv(HOOK_FILES_ENV, path, true);
    }

    public static boolean loadHookFromMemory(byte[] elf) {
        if (elf == null || elf.length < 1024) {
            return false;
        }
        if (!NativeCore.memfdLoadElf(elf)) {
            return false;
        }
        Log.i(TAG, "memfd hook loaded pid=" + android.os.Process.myPid());
        return true;
    }

    public static boolean loadHookFromDisk(File guestFilesDir, byte[] elf) {
        if (guestFilesDir == null || elf == null || elf.length < 1024) {
            return false;
        }
        File hook = new File(guestFilesDir, DISK_HOOK_NAME);
        try (FileOutputStream out = new FileOutputStream(hook, false)) {
            out.write(elf);
        } catch (IOException e) {
            Log.w(TAG, "write hook so failed", e);
            return false;
        }
        try {
            System.load(hook.getAbsolutePath());
            Log.i(TAG, "System.load hook ok path=" + hook.getAbsolutePath());
            return true;
        } catch (Throwable t) {
            Log.w(TAG, "System.load hook failed", t);
            if (!hook.delete()) {
                hook.deleteOnExit();
            }
            return false;
        }
    }
}
