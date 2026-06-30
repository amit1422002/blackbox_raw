package com.anubis.loader.closecode;

/**
 * @deprecated Use {@link DeltaForceLibAnogsPatcher}.
 */
public final class DeltaForceAnogsInProcessPatcher {

    private DeltaForceAnogsInProcessPatcher() {
    }

    public static boolean isDeltaForce(String packageName) {
        return DeltaForceLibAnogsPatcher.isDeltaForce(packageName);
    }

    public static void start() {
        DeltaForceLibAnogsPatcher.start();
    }
}
