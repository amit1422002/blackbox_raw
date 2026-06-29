package com.anubis.loader.closecode;

import android.os.Process;

import com.anubis.loader.core.env.GamePackages;
import com.anubis.loader.utils.Slog;

/**
 * Guest anti-cheat bootstrap: path stealth (elsewhere) + in-process temp F992 mem patches.
 *
 * <p><b>Not 100%.</b> No tool can guarantee zero virtual-env / 3rd-party detection — server-side checks remain.
 * This combines the best safe pieces already in the tree:
 * <ul>
 *   <li>{@code res/raw/temp} feature 992 — {@code libanogs + 0x575550}, {@code libgcloud + 0x421164}</li>
 *   <li>DFM / PUBG — temp F992 patch table ({@link GameMemPatchProfiles})</li>
 *   <li>Farlight — path stealth + {@code libNetHTProtect.so} in-process ({@link FarlightHtProtectInProcessPatcher})</li>
 * </ul>
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

    /** DFM: exact temp F992 in-process (libanogs + gcloud RVAs from temp binary). */
    private static void armDeltaForce(String packageName) {
        Slog.i(TAG, "DFM arm: pkg=" + packageName + " temp992 in-process (libanogs+0x575550 gcloud+0x421164)");
        DeltaForceAnogsInProcessPatcher.start();
    }

    /** Farlight: path stealth + HTProtect native bypass (no libanogs/gcloud temp992). */
    private static void armFarlight(String packageName) {
        Slog.i(TAG, "Farlight arm: pkg=" + packageName + " path stealth + HTProtect");
        FarlightNertcInProcessPatcher.start();
        FarlightHtProtectInProcessPatcher.start();
    }

    /** PUBG / BGMI: temp feature 992 patch table. */
    private static void armPubgFamily(String packageName) {
        Slog.i(TAG, "PUBG arm: pkg=" + packageName + " temp992 in-process");
        AyanStyleInProcessPatcher.start(GameMemPatchProfiles.PUBG_ANOGS_F2);
    }
}
