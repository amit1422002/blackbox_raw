package com.anubis.skin;

import android.content.Context;
import android.graphics.PixelFormat;
import android.os.Build;
import android.provider.Settings;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.WindowManager;

/**
 * Draggable float menu — touchable only here.
 */
final class FarlightEspFloatOverlay {

    private static FarlightEspControlBar sBar;
    private static WindowManager sWindowManager;
    private static WindowManager.LayoutParams sParams;
    private static android.view.ViewGroup sDecorParent;
    private static android.widget.FrameLayout.LayoutParams sDecorLp;
    private static volatile boolean sDecorMode;

    private FarlightEspFloatOverlay() {
    }

    static void attach(Context context) {
        attach(context, null, Settings.canDrawOverlays(context.getApplicationContext()));
    }

    static void attach(Context context, android.app.Activity activity, boolean canOverlay) {
        if (context == null || sBar != null) {
            return;
        }
        Context app = context.getApplicationContext();
        if (!canOverlay && activity != null && !activity.isFinishing()) {
            attachToDecor(activity);
            return;
        }
        if (!canOverlay) {
            FarlightEspDebug.w("float menu skipped — no overlay permission");
            return;
        }
        attachViaWindowManager(app);
    }

    private static void attachViaWindowManager(Context app) {
        try {
            sWindowManager = (WindowManager) app.getSystemService(Context.WINDOW_SERVICE);
            if (sWindowManager == null) {
                return;
            }
            sBar = new FarlightEspControlBar(app);
            sParams = buildParams();
            sBar.setOnTouchListener(FarlightEspFloatOverlay::onDrag);
            sWindowManager.addView(sBar, sParams);
            FarlightEspDebug.i("float menu ADDED (draggable wm)");
        } catch (Throwable t) {
            FarlightEspDebug.w("float menu attach FAILED", t);
            sBar = null;
            sWindowManager = null;
            sParams = null;
        }
    }

    private static void attachToDecor(android.app.Activity activity) {
        try {
            android.view.View decor = activity.getWindow().getDecorView();
            if (!(decor instanceof android.view.ViewGroup)) {
                FarlightEspDebug.w("float decor fallback: decor not ViewGroup");
                return;
            }
            android.view.ViewGroup parent = (android.view.ViewGroup) decor;
            sBar = new FarlightEspControlBar(activity);
            android.widget.FrameLayout.LayoutParams lp = new android.widget.FrameLayout.LayoutParams(
                    android.view.ViewGroup.LayoutParams.WRAP_CONTENT,
                    android.view.ViewGroup.LayoutParams.WRAP_CONTENT);
            lp.gravity = Gravity.TOP | Gravity.START;
            lp.topMargin = 100;
            sDecorLp = lp;
            sBar.setOnTouchListener(FarlightEspFloatOverlay::onDragDecor);
            parent.addView(sBar, lp);
            sDecorParent = parent;
            sDecorMode = true;
            FarlightEspDebug.i("float menu ADDED via decor");
        } catch (Throwable t) {
            FarlightEspDebug.w("float decor fallback FAILED", t);
            sBar = null;
            sDecorParent = null;
            sDecorMode = false;
        }
    }

    static void detach() {
        if (sBar == null) {
            return;
        }
        try {
            if (sDecorMode && sDecorParent != null) {
                sDecorParent.removeView(sBar);
                FarlightEspDebug.i("float menu REMOVED (decor)");
            } else if (sWindowManager != null) {
                sWindowManager.removeView(sBar);
                FarlightEspDebug.i("float menu REMOVED (wm)");
            }
        } catch (Throwable t) {
            FarlightEspDebug.w("float menu detach failed", t);
        }
        sBar = null;
        sWindowManager = null;
        sParams = null;
        sDecorParent = null;
        sDecorLp = null;
        sDecorMode = false;
    }

    private static WindowManager.LayoutParams buildParams() {
        int type;
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            type = WindowManager.LayoutParams.TYPE_APPLICATION_OVERLAY;
        } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.N) {
            type = WindowManager.LayoutParams.TYPE_PHONE;
        } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            type = WindowManager.LayoutParams.TYPE_TOAST;
        } else {
            type = WindowManager.LayoutParams.TYPE_SYSTEM_ALERT;
        }

        WindowManager.LayoutParams params = new WindowManager.LayoutParams(
                WindowManager.LayoutParams.WRAP_CONTENT,
                WindowManager.LayoutParams.WRAP_CONTENT,
                type,
                WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE,
                PixelFormat.TRANSLUCENT);
        params.gravity = Gravity.TOP | Gravity.START;
        params.x = 0;
        params.y = 100;
        return params;
    }

    private static boolean onDrag(android.view.View v, MotionEvent event) {
        if (sParams == null || sWindowManager == null) {
            return false;
        }
        switch (event.getAction()) {
            case MotionEvent.ACTION_DOWN:
                return true;
            case MotionEvent.ACTION_MOVE:
                sParams.x = (int) event.getRawX() - v.getWidth() / 2;
                sParams.y = (int) event.getRawY() - v.getHeight() / 2;
                try {
                    sWindowManager.updateViewLayout(v, sParams);
                } catch (Throwable ignored) {
                }
                return true;
            default:
                return false;
        }
    }

    private static boolean onDragDecor(android.view.View v, MotionEvent event) {
        if (sDecorLp == null || sDecorParent == null) {
            return false;
        }
        switch (event.getAction()) {
            case MotionEvent.ACTION_DOWN:
                return true;
            case MotionEvent.ACTION_MOVE:
                sDecorLp.leftMargin = (int) event.getRawX() - v.getWidth() / 2;
                sDecorLp.topMargin = (int) event.getRawY() - v.getHeight() / 2;
                v.setLayoutParams(sDecorLp);
                return true;
            default:
                return false;
        }
    }
}
