package com.anubis.loader.closecode;

/**
 * Delta Force (com.proxima.dfm) — in-process libanogs patcher.
 * Logic ported from ayan RE; offsets live in {@link GameMemPatchProfiles#DELTA_FORCE}.
 */
public final class DeltaForceAnogsInProcessPatcher {

    private DeltaForceAnogsInProcessPatcher() {
    }

    public static boolean isDeltaForce(String packageName) {
        return GameMemPatchProfiles.DELTA_FORCE.matches(packageName);
    }

    public static void start() {
        if (!DeltaForceAnogsConfig.APPLY_BYPASS_PATCHES) {
            return;
        }
        AyanStyleInProcessPatcher.start(GameMemPatchProfiles.DELTA_FORCE);
    }
}
