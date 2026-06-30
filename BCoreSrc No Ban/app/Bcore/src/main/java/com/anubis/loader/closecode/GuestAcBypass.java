package com.anubis.loader.closecode;

import android.os.Process;

import com.anubis.loader.core.env.GamePackages;
import com.anubis.loader.utils.Slog;

/**
 * Guest anti-cheat bootstrap per game.
 *
 * <p>DFM — {@link DeltaForceStealthBootstrap} only; libanogs mem patches run loader-side ({@code com.anubis.skin.LibAnogsPatcher}).
 * <p>Farlight — HTProtect in-process ({@link FarlightHtProtectInProcessPatcher}).
 * <p>PUBG/BGMI — no libanogs mem patches (legacy temp992 {@code 0x575550} removed — OOB crash).
 */
public final class GuestAcBypass {

    private static final String TAG = "GUEST_AC_BYPASS";

    private GuestAcBypass() {
    }

    public static boolean isSupportedGame(String packageName) {
        if (packageName == null || packageName.isEmpty()) {
            return false;
        }
        return GamePackages.isDeltaForce(packageName)
                || GamePackages.isFarlight(packageName)
                || "com.farlightgames.farlight84.gray".equals(packageName)
                || GamePackages.isBgmi(packageName);
    }

    public static void arm(String packageName) {
        if (packageName == null || packageName.isEmpty()) {
            Slog.w(TAG, "arm() skipped — empty packageName");
            return;
        }
        Slog.i(TAG, "arm() START pkg=" + packageName + " pid=" + Process.myPid());
        if (GamePackages.isDeltaForce(packageName)) {
            armDeltaForce(packageName);
        } else if (GamePackages.isFarlight(packageName)
                || "com.farlightgames.farlight84.gray".equals(packageName)) {
            armFarlight(packageName);
        } else if (GamePackages.isBgmi(packageName)) {
            armPubgFamily(packageName);
        } else {
            Slog.i(TAG, "arm() SKIP — not DFM/Farlight/PUBG (pkg=" + packageName + ")");
        }
        Slog.i(TAG, "arm() END pkg=" + packageName);
    }

    /** DFM: stealth + libanogs ACE bypass (Farlight HTProtect equivalent). */
    private static void armDeltaForce(String packageName) {
        Slog.i(TAG, "DFM arm: pkg=" + packageName + " stealth only (libanogs patches on loader side)");
        DeltaForceStealthBootstrap.start();
    }

    /** Farlight: path stealth + HTProtect native bypass (no libanogs/gcloud temp992). */
    private static void armFarlight(String packageName) {
        Slog.i(TAG, "Farlight arm: pkg=" + packageName + " path stealth + HTProtect");
        FarlightNertcInProcessPatcher.start();
        FarlightHtProtectInProcessPatcher.start();
    }

    /** PUBG / BGMI: path stealth only — temp992 libanogs {@code 0x575550} disabled (faulty OOB). */
    private static void armPubgFamily(String packageName) {
        Slog.i(TAG, "PUBG arm: pkg=" + packageName + " SKIP temp992 (0x575550 disabled)");
    }
}
