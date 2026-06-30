package com.anubis.loader.closecode;

import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.ContextCompat;

/**
 * DFM — path / context stealth in guest; libanogs patches on host ({@code com.anubis.skin.LibAnogsPatcher}).
 */
public final class DeltaForceStealthBootstrap {

    private static final String TAG = "DFM_STEALTH";

    private DeltaForceStealthBootstrap() {
    }

    public static void start() {
        try {
            android.app.Application app = BActivityThread.getApplication();
            if (app != null) {
                ContextCompat.fix(app);
                ContextCompat.fixGuestIdentity(app);
            }
        } catch (Throwable t) {
            Slog.w(TAG, "context re-fix failed: " + t.getMessage());
        }
    }
}
