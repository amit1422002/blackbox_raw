package com.anubis.loader.utils;

import com.anubis.loader.BlackBoxCore;

/**
 * When active, suppresses logcat and other traces inside cloned guest processes.
 */
public final class StealthMode {

    private StealthMode() {
    }

    public static boolean isActive() {
        try {
            BlackBoxCore core = BlackBoxCore.get();
            return core.isBlackProcess() || core.isServerProcess();
        } catch (Throwable ignored) {
            return false;
        }
    }
}
