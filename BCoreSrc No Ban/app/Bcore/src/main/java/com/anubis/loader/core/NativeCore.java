package com.anubis.loader.core;

import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.util.Log;

import androidx.annotation.Keep;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.Locale;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;

/**
 * Extended patched NativeCore with more anti-detection shims to cover
 * additional probes observed in the logs (proc/self/root, profile files, dev/urandom, etc.).
 *
 * Notes:
 *  - This uses simple path-to-path redirections via addIORule() implemented in native layer.
 *  - For profile files that are system-owned (permission denied), we create a benign copy
 *    under the BlackBox app's private storage and redirect the game's access to it.
 *
 * Keep expanding addIORule() targets when you find new probe paths in logs.
 */
public class NativeCore {
    public static final String TAG = "NativeCore";

    static {
        System.loadLibrary("HASAD");
        // Guest inject .so files are loaded per-game from BoxApplication (elite), not here.
        // Loading libbgmi.so in static init broke BGMI/Korea guests when both were injected.
    }
 

    public static void init(int apiLevel) {
        // Hide virtual traces
        
        // Nuke anti-cheat
//         try {
//            nukeTargetLibrary("libanogs", 
//     NUKE_L1_FILE_LOCK |
//     // NUKE_L2_FD_EXHAUST |
//     // NUKE_L3_MLOCK |
//      NUKE_L4_ELF_DESTROY |
//      NUKE_L5_SHDR_HIDE |
//     // NUKE_L6_GUARD_PAGE //|
//     NUKE_L7_LINKMAP |
//      NUKE_L8_ANTIDEBUG |
//      NUKE_L9_SIGNALS |
//     // NUKE_L10_SECCOMP |
//      NUKE_L11_WATCHDOG
// );
           // nukeTargetLibrary("libanort", NUKE_L4_ELF_DESTROY);
        //     Log.i(TAG, "NUKE sent in init");
        // } catch (Throwable t) {
        //     Log.e(TAG, "NUKE init failed", t);
        // }


 
        


        initNative(apiLevel,
                top.niunaijun.jnihook.jni.JniHook.class,
                top.niunaijun.jnihook.MethodUtils.class);


                applyGuestHostDataRedirect();
    }

    /**
     * Redirect legacy host paths to the current guest's data dir (per package), so Global and
     * BGMI do not share com.tencent.ig data when both are cloned.
     */
    private static void applyGuestHostDataRedirect() {
        try {
            String guestPkg = BActivityThread.getAppPackageName();
            if (guestPkg == null || guestPkg.isEmpty()) return;
            Context ctx = BlackBoxCore.getContext();
            if (ctx == null) return;
            String hostPkg = BlackBoxCore.getHostPkg();
            String guestData =
                    com.anubis.loader.core.env.BEnvironment
                            .getDataDir(guestPkg, BActivityThread.getUserId())
                            .getAbsolutePath();
            if (guestData.isEmpty()) return;
            addIORule("/data/user/0/" + hostPkg, guestData);
            addIORule("/data/data/" + hostPkg, guestData);
            // Older host package names still referenced in native probes.
            if (!"com.pubgm".equals(hostPkg)) {
                addIORule("/data/user/0/com.pubgm", guestData);
                addIORule("/data/data/com.pubgm", guestData);
            }
            if (Build.TYPE.equals("eng") || Build.TYPE.equals("userdebug")) {
                Log.i(TAG, "IO guest data redirect applied");
            }
        } catch (Exception ignored) {
        }
    }
    private static native void initNative(int apiLevel, Class<?> jniHook, Class<?> methodUtils);

    public static native void enableIO();

    public static native void addIORule(String targetPath, String relocatePath);

    public static native void hideXposed();

    public static native boolean disableHiddenApi();

    public static native void init_seccomp();

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
    public static final int NUKE_LAYERS_README_11 =
            NUKE_L1_FILE_LOCK | NUKE_L2_FD_EXHAUST | NUKE_L3_MLOCK | NUKE_L4_ELF_DESTROY | NUKE_L5_SHDR_HIDE
                    | NUKE_L6_GUARD_PAGE | NUKE_L7_LINKMAP | NUKE_L8_ANTIDEBUG | NUKE_L9_SIGNALS | NUKE_L10_SECCOMP
                    | NUKE_L11_WATCHDOG;
    public static final int NUKE_LAYERS_ALL = NUKE_LAYERS_README_11 | NUKE_HOLD_FILE_READ;

    /**
     * {@link #NUKE_L2_FD_EXHAUST} + {@link #NUKE_L10_SECCOMP} — block almost all files/syscalls in the process;
     * fine for README demo, lethal for a live game / ART.
     */
    public static final int NUKE_LAYERS_FATAL_FOR_GAME = NUKE_L2_FD_EXHAUST | NUKE_L10_SECCOMP;

    /**
     * All 11 readme layers minus FD exhaustion and BPF seccomp so the guest process keeps normal file I/O.
     * Prefer this from virtualized game bootstrap; extend with caution.
     */
    public static final int NUKE_LAYERS_GUEST_STABLE = NUKE_LAYERS_README_11 & ~NUKE_LAYERS_FATAL_FOR_GAME;

    /**
     * Stable guest mask + optional hold-read thread.
     */
    public static final int NUKE_LAYERS_GUEST_STABLE_WITH_HOLD = NUKE_LAYERS_GUEST_STABLE | NUKE_HOLD_FILE_READ;

    /**
     * Subset that tended to SIGABRT in virtualized Tencent guests: stripping ELF/{@code mmap} PROT_NONE guards,
     * {@code chmod} on {@code /data/app/…/lib/}, and anti-debug prctl/ptrace. {@link #NUKE_L9_SIGNALS} kept on user request.
     */
    public static final int NUKE_LAYERS_ABORT_HEAVY_IN_GUEST =
            NUKE_L1_FILE_LOCK
                    | NUKE_L4_ELF_DESTROY
                    | NUKE_L5_SHDR_HIDE
                    | NUKE_L6_GUARD_PAGE
                    | NUKE_L8_ANTIDEBUG;

    /** Live guest: {@code mlock}, L7, L9 (signals), L11 watchdog, hold FD; still omits L1/L4-L6/L8 and fatal L2/L10. */
    public static final int NUKE_LAYERS_GUEST_ULTRA_SOFT =
            NUKE_LAYERS_GUEST_STABLE_WITH_HOLD & ~NUKE_LAYERS_ABORT_HEAVY_IN_GUEST;

    /**
     * Same as {@link #NUKE_LAYERS_GUEST_ULTRA_SOFT} but without {@link #NUKE_L11_WATCHDOG}: no background thread
     * re-applying layers every second (often implicated in delayed / long-session instability).
     */
    public static final int NUKE_LAYERS_GUEST_ULTRA_SOFT_NO_WATCHDOG =
            NUKE_LAYERS_GUEST_ULTRA_SOFT & ~NUKE_L11_WATCHDOG;

    /**
     * Long sessions: {@link #NUKE_LAYERS_GUEST_ULTRA_SOFT} minus periodic watchdog (L11) and minus hold-read (keeps an
     * FD open indefinitely). Prefer this when the guest crashes after many minutes with ULTRA_SOFT.
     */
    public static final int NUKE_LAYERS_GUEST_LONG_PLAY =
            NUKE_LAYERS_GUEST_ULTRA_SOFT & ~(NUKE_L11_WATCHDOG | NUKE_HOLD_FILE_READ);

    /**
     * Same as {@link #NUKE_LAYERS_GUEST_LONG_PLAY} but without {@link #NUKE_L9_SIGNALS}. Custom SIGTRAP/SIGILL
     * handlers can interact badly with UE / libsigchain during long play; prefer this when inject causes delayed exits.
     */
    public static final int NUKE_LAYERS_GUEST_LONG_PLAY_NO_L9 =
            NUKE_LAYERS_GUEST_LONG_PLAY & ~NUKE_L9_SIGNALS;

    /**
     * Runs {@code nukeLibrary} with every layer bit set (including {@link #NUKE_HOLD_FILE_READ}).
     * For manual control use {@link #nukeTargetLibrary(String, int)} with a mask.
     */
    @Keep
    public static void nukeTargetLibrary(String libNameSubstring) {
        nukeTargetLibrary(libNameSubstring, NUKE_LAYERS_ALL);
    }

    /**
     * Same as README {@code nukeLibrary}: bitmask enables which of the 11 (+ optional hold-read) layers run.
     * <p><b>Warning:</b> one-way; seccomp / FD exhaustion are process-wide. Layer 7 does not unlink (SIGSEGV risk).
     */
    @Keep
    public static native void nukeTargetLibrary(String libNameSubstring, int layerMask);

    /** Memfd-load ELF bytes in guest without host BLAZEBOX / base.apk maps. */
    public static native boolean memfdLoadElf(byte[] elf);

    @Keep
    public static int getCallingUid(int origCallingUid) {
        if (origCallingUid > 0 && origCallingUid < Process.FIRST_APPLICATION_UID)
            return origCallingUid;
        if (origCallingUid > Process.LAST_APPLICATION_UID)
            return origCallingUid;

        if (origCallingUid == BlackBoxCore.getHostUid()) {
            if (BActivityThread.getAppPackageName().equals("com.google.android.gms")) {
                return Process.ROOT_UID;
            }

            if (BActivityThread.getAppPackageName().equals("com.google.android.webview")) {
                return Process.myUid();
            }
            return BActivityThread.getCallingBUid();
        }
        return origCallingUid;
    }

    @Keep
    public static String redirectPath(String path) {
        return IOCore.get().redirectPath(path);
    }

    @Keep
    public static File redirectPath(File path) {
        return IOCore.get().redirectPath(path);
    }
}