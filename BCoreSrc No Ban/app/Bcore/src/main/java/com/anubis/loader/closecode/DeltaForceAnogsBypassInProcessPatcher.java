package com.anubis.loader.closecode;

import com.anubis.loader.core.env.GamePackages;

/**
 * @deprecated Use {@link DeltaForceAnogsInProcessPatcher} — temp992 removed.
 */
@Deprecated
public final class DeltaForceAnogsBypassInProcessPatcher {

    private DeltaForceAnogsBypassInProcessPatcher() {
    }

    public static boolean isDeltaForce(String packageName) {
        return DeltaForceAnogsInProcessPatcher.isDeltaForce(packageName);
    }

    public static void start() {
        DeltaForceAnogsInProcessPatcher.start();
    }
}
