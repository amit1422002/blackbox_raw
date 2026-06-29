package com.anubis.skin;

import android.app.Activity;
import android.content.Context;
import android.provider.Settings;

/**
 * valoloader-style ESP UI: touch-through draw + float menu.
 */
public final class FarlightEspOverlayManager {

    private static final String GAME_ACTIVITY = "GameActivity";
    private static volatile boolean sAttached;

    private FarlightEspOverlayManager() {
    }

    private static boolean isGameActivity(Activity activity) {
        return activity != null && GAME_ACTIVITY.equals(activity.getClass().getSimpleName());
    }

    public static void attach(Activity activity) {
        if (!isGameActivity(activity) || activity.isFinishing()) {
            if (activity != null && FarlightEspHelper.isFarlightPackage(activity.getPackageName())) {
                FarlightEspDebug.dbg("overlay skip activity=" + activity.getClass().getSimpleName());
            }
            return;
        }
        activity.runOnUiThread(() -> {
            try {
                if (!isGameActivity(activity) || activity.isFinishing()) {
                    return;
                }
                Context app = activity.getApplicationContext();
                boolean canOverlay = Settings.canDrawOverlays(app);
                FarlightEspDebug.i("attach GameActivity overlayPerm=" + canOverlay
                        + " jni=" + FarlightEspNative.isNativesBound()
                        + " " + FarlightEspDebug.snapshot());

                if (sAttached) {
                    FarlightEspDrawOverlay.applyScreenSize(activity);
                    return;
                }
                if (canOverlay) {
                    FarlightEspDrawOverlay.attach(app);
                } else {
                    FarlightEspDrawOverlay.attachToActivity(activity);
                }
                FarlightEspFloatOverlay.attach(app, activity, canOverlay);
                sAttached = FarlightEspDrawOverlay.isAttached();
                FarlightEspDebug.i("overlays attach done draw=" + FarlightEspDrawOverlay.isAttached()
                        + " mode=" + (canOverlay ? "wm" : "decor"));
            } catch (Throwable t) {
                FarlightEspDebug.w("overlay attach failed", t);
            }
        });
    }

    public static void detach(Activity activity) {
        if (!isGameActivity(activity)) {
            return;
        }
        activity.runOnUiThread(() -> {
            try {
                FarlightEspDrawOverlay.detach();
                FarlightEspFloatOverlay.detach();
                sAttached = false;
                FarlightEspDebug.i("overlays detached");
            } catch (Throwable t) {
                FarlightEspDebug.w("overlay detach failed", t);
            }
        });
    }
}
