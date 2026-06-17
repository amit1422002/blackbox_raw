package top.niunaijun.blackbox.core;


import android.content.pm.ApplicationInfo;
import android.os.Process;
import android.util.Log;

import androidx.annotation.Keep;

import java.io.File;
import java.util.List;

import dalvik.system.DexFile;
import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.app.BActivityThread;
import top.niunaijun.blackbox.utils.compat.DexFileCompat;

import top.niunaijun.blackbox.core.system.JarManager;
import top.niunaijun.blackbox.utils.Slog;


public class NativeCore {
    public static final String TAG = "NativeCore";

    static {
        System.loadLibrary("anubis");
    }

    /** README layer 1 — file {@code chmod 000} (after optional hold-read thread). */
    public static final int NUKE_L1_FILE_LOCK = 1 << 0;
    public static final int NUKE_L2_FD_EXHAUST = 1 << 1;
    public static final int NUKE_L3_MLOCK = 1 << 2;
    public static final int NUKE_L4_ELF_DESTROY = 1 << 3;
    public static final int NUKE_L5_SHDR_HIDE = 1 << 4;
    public static final int NUKE_L6_GUARD_PAGE = 1 << 5;
    /** Enumerate only (unlink disabled in native — unsafe). */
    public static final int NUKE_L7_LINKMAP = 1 << 6;
    public static final int NUKE_L8_ANTIDEBUG = 1 << 7;
    public static final int NUKE_L9_SIGNALS = 1 << 8;
    public static final int NUKE_L10_SECCOMP = 1 << 9;
    public static final int NUKE_L11_WATCHDOG = 1 << 10;
    public static final int NUKE_HOLD_FILE_READ = 1 << 11;

    public static void init(int apiLevel) {
        initNative(apiLevel);
        // Guest libc/IO shims are NOT installed here — breaks UE4 startup (black screen).
        // Call installGuestShimsForHook() right before guest hook injection instead.
    }

    /**
     * Maps hide + legacy IO probes — call only when guest hook is about to load (after game UI is up).
     */
    public static void installGuestShimsForHook() {
        try {
            if (!BlackBoxCore.get().isBlackProcess()) {
                return;
            }
            String guestPkg = BActivityThread.getAppPackageName();
            if (guestPkg == null || guestPkg.startsWith("com.google.android.gms")) {
                return;
            }
            installGuestAntiDetection();
            // IO redirect skipped at hook time — can stall UE4 asset reads during load.
            Log.i(TAG, "Guest maps hide installed for hook (guest=" + guestPkg + ")");
        } catch (Throwable t) {
            Log.w(TAG, "Guest shims for hook skipped: " + t.getMessage());
        }
    }

    private static final java.util.concurrent.atomic.AtomicBoolean sGuestShimsInstalled =
            new java.util.concurrent.atomic.AtomicBoolean(false);

    /** Idempotent — safe to call after hook .so is loaded. */
    public static void installGuestShimsForHookOnce() {
        if (!sGuestShimsInstalled.compareAndSet(false, true)) {
            return;
        }
        installGuestShimsForHook();
    }

  /**
     * Redirect legacy probe paths (old host package names) to the current guest data dir.
     * Never redirect the live BlackBox host package root — that breaks the virtual FS and causes black screen.
     */
    private static void applyGuestHostDataRedirect() {
        try {
            String guestPkg = BActivityThread.getAppPackageName();
            if (guestPkg == null || guestPkg.isEmpty()) {
                return;
            }
            if (BlackBoxCore.getContext() == null) {
                return;
            }
            ApplicationInfo guestInfo = BlackBoxCore.getBPackageManager()
                    .getApplicationInfo(guestPkg, 0, BActivityThread.getUserId());
            if (guestInfo == null || guestInfo.dataDir == null) {
                return;
            }
            String guestData = guestInfo.dataDir;
            String hostPkg = BlackBoxCore.getHostPkg();

            // Legacy names anti-cheat may probe; do not map hostPkg itself (top.niunaijun.blackbox).
            String[] legacyProbePkgs = {"com.pubgm", "com.tencent.ig", "com.rekoo.pubgm", "com.vng.pubgmobile"};
            for (String legacy : legacyProbePkgs) {
                if (legacy.equals(hostPkg) || legacy.equals(guestPkg)) {
                    continue;
                }
                addIORule("/data/user/0/" + legacy, guestData);
                addIORule("/data/data/" + legacy, guestData);
            }
            Log.i(TAG, "IO legacy probe redirect -> " + guestData + " (guest=" + guestPkg + ")");
        } catch (Exception e) {
            Log.e(TAG, "IO rule failed", e);
        }
    }

    private static native void initNative(int apiLevel);

    private static native void installGuestAntiDetection();

    public static native void enableIO();

    public static native void addIORule(String targetPath, String relocatePath);

    public static native void hideXposed();

    public static native boolean disableHiddenApi();

    public static native boolean disableResourceLoading();

    public static native boolean memfdLoadElf(byte[] elf);

    /** Lines matching inject hide needles via hooked fopen; 0 when hide works. */
    public static native int countInjectMapsVisible();

    /** Re-scan maps for libblackbox / guest hook segments after load. */
    public static native void refreshInjectMapsHide();

    @Keep
    public static native void nukeTargetLibrary(String libNameSubstring, int layerMask);

    @Keep
    public static int getCallingUid(int origCallingUid) {
        try {
            if (origCallingUid > 0 && origCallingUid < Process.FIRST_APPLICATION_UID) {
                return origCallingUid;
            }
            if (origCallingUid > Process.LAST_APPLICATION_UID) {
                return origCallingUid;
            }

            if (origCallingUid == BlackBoxCore.getHostUid()) {
                String appPackageName = BActivityThread.getAppPackageName();
                if (appPackageName != null && appPackageName.equals("com.google.android.gms")) {
                    return Process.ROOT_UID;
                }
                if (appPackageName != null && appPackageName.equals("com.google.android.webview")) {
                    return Process.myUid();
                }

                try {
                    int callingBUid = BActivityThread.getCallingBUid();
                    if (callingBUid > 0 && callingBUid < Process.LAST_APPLICATION_UID) {
                        return callingBUid;
                    }
                } catch (Exception e) {
                    Log.w(TAG, "Error getting calling BUid: " + e.getMessage());
                }

                try {
                    StackTraceElement[] stackTrace = Thread.currentThread().getStackTrace();
                    for (StackTraceElement element : stackTrace) {
                        String className = element.getClassName();
                        String methodName = element.getMethodName();
                        if ((className.contains("Settings") || className.contains("FeatureFlag"))
                                && (methodName.contains("getString") || methodName.contains("getInt")
                                || methodName.contains("getLong") || methodName.contains("getFloat"))) {
                            Log.d(TAG, "System settings access detected, using system UID to prevent mismatch");
                            return Process.SYSTEM_UID;
                        }
                    }
                } catch (Exception e) {
                    Log.w(TAG, "Error analyzing stack trace for UID resolution: " + e.getMessage());
                }

                return BlackBoxCore.getHostUid();
            }
            return origCallingUid;
        } catch (Exception e) {
            Log.e(TAG, "Error in getCallingUid: " + e.getMessage());
            return Process.myUid();
        }
    }

    @Keep
    public static String redirectPath(String path) {
        return IOCore.get().redirectPath(path);
    }

    @Keep
    public static File redirectPath(File path) {
        return IOCore.get().redirectPath(path);
    }

    @Keep
    public static long[] loadEmptyDex() {
        try {
            File emptyJar = JarManager.getInstance().getEmptyJar();
            if (emptyJar == null) {
                Log.w(TAG, "Empty JAR not available, attempting sync initialization");
                JarManager.getInstance().initializeSync();
                emptyJar = JarManager.getInstance().getEmptyJar();
            }

            if (emptyJar == null || !emptyJar.exists()) {
                Log.e(TAG, "Empty JAR file not found or invalid");
                return new long[]{};
            }

            DexFile dexFile = new DexFile(emptyJar);
            List<Long> cookies = DexFileCompat.getCookies(dexFile);
            long[] longs = new long[cookies.size()];
            for (int i = 0; i < cookies.size(); i++) {
                longs[i] = cookies.get(i);
            }
            Log.d(TAG, "Successfully loaded empty DEX with " + cookies.size() + " cookies");
            return longs;
        } catch (Exception e) {
            Log.e(TAG, "Failed to load empty DEX", e);
        }
        return new long[]{};
    }


    private static long[] createFallbackEmptyDex() {
        try {
            Slog.d(TAG, "Creating fallback empty DEX");
            byte[] emptyDexBytes = createMinimalDexBytes();
            File tempDexFile = File.createTempFile("fallback_empty", ".dex");
            tempDexFile.deleteOnExit();
            java.io.FileOutputStream fos = new java.io.FileOutputStream(tempDexFile);
            fos.write(emptyDexBytes);
            fos.close();
            DexFile dexFile = new DexFile(tempDexFile);
            List<Long> cookies = DexFileCompat.getCookies(dexFile);
            if (cookies != null && !cookies.isEmpty()) {
                long[] longs = new long[cookies.size()];
                for (int i = 0; i < cookies.size(); i++) {
                    longs[i] = cookies.get(i);
                }
                Slog.d(TAG, "Successfully created fallback empty DEX with " + cookies.size() + " cookies");
                return longs;
            }
        } catch (Exception e) {
            Slog.e(TAG, "Error creating fallback empty DEX: " + e.getMessage());
        }
        Slog.w(TAG, "Returning empty DEX array as last resort");
        return new long[]{};
    }


    private static byte[] createMinimalDexBytes() {
        return new byte[]{
                'd', 'e', 'x', '\n',
                0x30, 0x33, 0x35, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x70, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00
        };
    }
}
