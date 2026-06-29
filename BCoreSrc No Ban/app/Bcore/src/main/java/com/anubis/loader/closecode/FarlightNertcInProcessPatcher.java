package com.anubis.loader.closecode;

import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.NativeCore;
import com.anubis.loader.gms.GmsBootHelper;
import com.anubis.loader.core.env.GamePackages;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.ContextCompat;

/**
 * Farlight 84 — virtual-env stealth only (context identity + /proc scrub).
 * No libanogs/gcloud mem patches — those RVAs are DFM/PUBG-specific and trigger env bans on Farlight.
 */
public final class FarlightNertcInProcessPatcher {

    private static final String TAG = "FARLIGHT_STEALTH";

    private FarlightNertcInProcessPatcher() {
    }

    public static boolean isFarlight(String packageName) {
        return GamePackages.isFarlight(packageName)
                || "com.farlightgames.farlight84.gray".equals(packageName);
    }

    public static void start() {
        try {
            android.app.Application app = BActivityThread.getApplication();
            if (app != null) {
                ContextCompat.fix(app);
            }
        } catch (Throwable t) {
            Slog.w(TAG, "context re-fix failed: " + t.getMessage());
        }
        GmsBootHelper.ensureBootable(BActivityThread.getUserId());
        NativeCore.refreshStealthProcNowAsync();
    }
}
