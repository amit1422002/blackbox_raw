package top.niunaijun.blackbox.utils;

import top.niunaijun.blackbox.BlackBoxCore;

/**
 * When active, suppresses logcat and other traces inside cloned guest processes.
 */
public final class StealthMode {

    private StealthMode() {
    }

    public static boolean isActive() {
        try {
            BlackBoxCore core = BlackBoxCore.get();
            return core.isBlackProcess() || core.isSandboxedEnvironment();
        } catch (Throwable ignored) {
            return false;
        }
    }
}
