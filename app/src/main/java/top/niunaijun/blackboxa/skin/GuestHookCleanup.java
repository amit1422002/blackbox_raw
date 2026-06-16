package top.niunaijun.blackboxa.skin;

import android.util.Log;

import top.niunaijun.blackbox.core.env.BEnvironment;

import java.io.File;

/** Removes legacy on-disk hook artifacts; Lua loads via memfd guest hook only. */
public final class GuestHookCleanup {

    private static final String TAG = "GuestHookCleanup";

    private static final String[] DEPRECATED_FILES = {
            ".guest_hook_elf",
            "libgamemodhook.so",
    };

    private GuestHookCleanup() {
    }

    public static void removeDeprecatedHooks(String packageName) {
        if (packageName == null || packageName.isEmpty()) {
            return;
        }
        try {
            BEnvironment.load();
            File filesDir = BEnvironment.getDataFilesDir(packageName, 0);
            if (filesDir == null || !filesDir.isDirectory()) {
                return;
            }
            for (String name : DEPRECATED_FILES) {
                File f = new File(filesDir, name);
                if (f.isFile() && f.delete()) {
                    Log.i(TAG, "removed deprecated guest hook: " + f.getAbsolutePath());
                }
            }
        } catch (Throwable t) {
            Log.w(TAG, "cleanup failed", t);
        }
    }
}
