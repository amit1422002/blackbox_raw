package com.anubis.loader.utils;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.fake.frameworks.BActivityManager;

/**
 * Resolves OAuth guest package for hooks running in virtual GMS (separate process).
 * Local static flags in GmsCore are not shared across processes — always query server session.
 */
public final class GmsOAuthLaunchContext {
    private GmsOAuthLaunchContext() {
    }

    public static String guestForGmsHooks() {
        String appPkg = BActivityThread.getAppPackageName();
        if (appPkg == null || !GmsCore.isGoogleAppOrService(appPkg)) {
            return null;
        }
        if (GmsCore.isPlayStoreAuthActive()) {
            return GmsCore.playStoreAuthGuestPackage();
        }
        String guest = GmsCore.getActiveOAuthGuestPackage();
        if (guest != null) {
            return guest;
        }
        try {
            BActivityManager am = BlackBoxCore.getBActivityManager();
            if (am.isOAuthSessionActive()) {
                return am.getOAuthGuestPackage();
            }
        } catch (Throwable t) {
            Slog.w("GmsOAuthCtx", "server oauth session query failed", t);
        }
        return null;
    }

    public static boolean isActiveForGmsHooks() {
        return guestForGmsHooks() != null;
    }
}
