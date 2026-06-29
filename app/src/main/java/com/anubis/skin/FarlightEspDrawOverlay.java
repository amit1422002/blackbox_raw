package com.anubis.skin;

import android.content.Context;
import android.graphics.PixelFormat;
import android.os.Build;
import android.provider.Settings;
import android.util.DisplayMetrics;
import android.view.Gravity;
import android.view.ViewConfiguration;
import android.view.WindowManager;

/**
 * Full-screen ESP canvas — touch-through (valoloader style).
 */
final class FarlightEspDrawOverlay {

    private static FarlightEspOverlayView sView;
    private static WindowManager sWindowManager;
    private static android.view.ViewGroup sDecorParent;
    private static volatile boolean sAttached;
    private static volatile boolean sDecorMode;

    private FarlightEspDrawOverlay() {
    }

    static boolean isAttached() {
        return sAttached && sView != null;
    }

    static void attach(Context context) {
        if (context == null) {
            FarlightEspDebug.w("draw overlay attach: context null");
            return;
        }
        if (sView != null) {
            FarlightEspDebug.dbg("draw overlay already attached mode=" + (sDecorMode ? "decor" : "wm"));
            return;
        }
        Context app = context.getApplicationContext();
        boolean canOverlay = Settings.canDrawOverlays(app);
        FarlightEspDebug.dbg("draw overlay canDrawOverlays=" + canOverlay
                + " pkg=" + app.getPackageName());
        if (!canOverlay) {
            FarlightEspDebug.w("draw overlay: no overlay perm — use attachToActivity() fallback");
            return;
        }
        attachViaWindowManager(app);
    }

    /** Fallback when guest clone lacks SYSTEM_ALERT_WINDOW — draws on GameActivity decor. */
    static void attachToActivity(android.app.Activity activity) {
        if (activity == null || activity.isFinishing()) {
            return;
        }
        if (sView != null) {
            FarlightEspDebug.dbg("draw overlay already attached");
            applyScreenSize(activity);
            return;
        }
        if (Settings.canDrawOverlays(activity.getApplicationContext())) {
            attach(activity.getApplicationContext());
            return;
        }
        try {
            android.view.View decor = activity.getWindow().getDecorView();
            if (!(decor instanceof android.view.ViewGroup)) {
                FarlightEspDebug.w("draw decor fallback: decor not ViewGroup");
                return;
            }
            sDecorParent = (android.view.ViewGroup) decor;
            sView = new FarlightEspOverlayView(activity);
            applyScreenSize(activity);
            android.widget.FrameLayout.LayoutParams lp = new android.widget.FrameLayout.LayoutParams(
                    android.view.ViewGroup.LayoutParams.MATCH_PARENT,
                    android.view.ViewGroup.LayoutParams.MATCH_PARENT);
            sDecorParent.addView(sView, lp);
            sDecorMode = true;
            sAttached = true;
            FarlightEspDebug.i("draw overlay ADDED via decor (no overlay perm) activity="
                    + activity.getClass().getSimpleName());
        } catch (Throwable t) {
            FarlightEspDebug.w("draw decor fallback FAILED", t);
            sView = null;
            sDecorParent = null;
            sDecorMode = false;
            sAttached = false;
        }
    }

    private static void attachViaWindowManager(Context app) {
        try {
            sWindowManager = (WindowManager) app.getSystemService(Context.WINDOW_SERVICE);
            if (sWindowManager == null) {
                FarlightEspDebug.w("draw overlay: WindowManager null");
                return;
            }
            sView = new FarlightEspOverlayView(app);
            applyScreenSize(app);

            int layoutFlag = Build.VERSION.SDK_INT >= Build.VERSION_CODES.O
                    ? WindowManager.LayoutParams.TYPE_APPLICATION_OVERLAY
                    : WindowManager.LayoutParams.TYPE_PHONE;

            WindowManager.LayoutParams params = new WindowManager.LayoutParams(
                    WindowManager.LayoutParams.MATCH_PARENT,
                    WindowManager.LayoutParams.MATCH_PARENT,
                    0,
                    navigationBarHeight(app),
                    layoutFlag,
                    WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE
                            | WindowManager.LayoutParams.FLAG_NOT_TOUCHABLE
                            | WindowManager.LayoutParams.FLAG_LAYOUT_NO_LIMITS,
                    PixelFormat.RGBA_8888);

            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
                params.layoutInDisplayCutoutMode =
                        WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
            }

            params.gravity = Gravity.TOP | Gravity.START;

            sWindowManager.addView(sView, params);
            sDecorMode = false;
            sAttached = true;
            FarlightEspDebug.i("draw overlay ADDED touch-through (RGBA_8888)");
        } catch (Throwable t) {
            FarlightEspDebug.w("draw overlay attach FAILED", t);
            sView = null;
            sWindowManager = null;
            sDecorMode = false;
            sAttached = false;
        }
    }

    static void detach() {
        if (sView == null) {
            return;
        }
        try {
            if (sDecorMode && sDecorParent != null) {
                sDecorParent.removeView(sView);
                FarlightEspDebug.i("draw overlay REMOVED (decor)");
            } else if (sWindowManager != null) {
                sWindowManager.removeView(sView);
                FarlightEspDebug.i("draw overlay REMOVED (wm)");
            }
        } catch (Throwable t) {
            FarlightEspDebug.w("draw overlay detach failed", t);
        }
        sView = null;
        sWindowManager = null;
        sDecorParent = null;
        sDecorMode = false;
        sAttached = false;
    }

    static void applyScreenSize(Context context) {
        if (context == null) {
            return;
        }
        DisplayMetrics dm = context.getResources().getDisplayMetrics();
        if (dm.widthPixels > 0 && dm.heightPixels > 0) {
            FarlightEspNative.setScreenSize(
                    FarlightEspSettings.landscapeWidth(dm.widthPixels, dm.heightPixels),
                    FarlightEspSettings.landscapeHeight(dm.widthPixels, dm.heightPixels));
        } else {
            FarlightEspDebug.w("applyScreenSize: invalid metrics " + dm.widthPixels + "x" + dm.heightPixels);
        }
    }

    private static int navigationBarHeight(Context context) {
        boolean hasMenuKey = ViewConfiguration.get(context).hasPermanentMenuKey();
        int resourceId = context.getResources().getIdentifier("navigation_bar_height", "dimen", "android");
        if (resourceId > 0 && !hasMenuKey) {
            return context.getResources().getDimensionPixelSize(resourceId);
        }
        return 0;
    }
}
