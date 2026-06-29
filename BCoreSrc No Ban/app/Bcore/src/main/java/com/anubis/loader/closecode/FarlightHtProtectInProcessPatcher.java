package com.anubis.loader.closecode;

import com.anubis.loader.core.env.GamePackages;

/**
 * Farlight 84 — in-process {@code libNetHTProtect.so} bypass (virtual-env / installedApk reporter).
 */
public final class FarlightHtProtectInProcessPatcher {

    private static final AyanStylePatchProfile PROFILE = new AyanStylePatchProfile(
            "HTPROTECT_FARLIGHT",
            new String[] {
                    GamePackages.FARLIGHT,
                    GamePackages.FARLIGHT_LEGACY,
                    "com.farlightgames.farlight84.gray",
            },
            FarlightHtProtectConfig.MIN_MAPPED_BYTES,
            FarlightHtProtectConfig.LIBRARIES
    );

    private FarlightHtProtectInProcessPatcher() {
    }

    public static boolean isFarlight(String packageName) {
        return PROFILE.matches(packageName);
    }

    public static void start() {
        if (!FarlightHtProtectConfig.APPLY_BYPASS_PATCHES) {
            return;
        }
        AyanStyleInProcessPatcher.start(PROFILE);
    }
}
