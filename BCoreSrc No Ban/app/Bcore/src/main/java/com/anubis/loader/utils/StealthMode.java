package com.anubis.loader.utils;

import com.anubis.loader.AnubisCore;

/**
 * When active, suppresses logcat and other traces inside cloned guest processes.
 */
public final class StealthMode {

    private StealthMode() {
    }

    public static boolean isActive() {
        try {
            AnubisCore core = AnubisCore.get();
            return core.isAnubisProcess() || core.isServerProcess();
        } catch (Throwable ignored) {
            return false;
        }
    }
}
