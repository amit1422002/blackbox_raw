package com.blazehealth.tracker.utils;

import android.content.Context;
import android.util.Log;

/**
 * Stages BGMI guest-login Lua + patchless libanogs offset blocker.
 * Guest process loads hooks via lifecycle callbacks (no ptrace).
 */
public final class LibAnogsPatcher {

    private static final String TAG = "GuestLoginPatch";

    private LibAnogsPatcher() {
    }

    public static void resetSession() {
    }

    public static void resetSession(Context context) {
        HdmpveBlockerHelper.resetOnRestart(context);
    }

    public static void startOnGameLaunch(Context context) {
        if (context == null) {
            return;
        }
        HdmpveBlockerHelper.resetOnRestart(context);
        try {
            GuestLoginHelper.deployToGuest(context, CloneDataHelper.BGMI_PKG);
            if (AnogsBlockerHelper.ENABLED) {
                AnogsBlockerHelper.deployToGuest(context, CloneDataHelper.BGMI_PKG);
            }
            GameModHelper.deployToGuest(context, CloneDataHelper.BGMI_PKG);
            Log.i(TAG, AnogsBlockerHelper.ENABLED
                    ? "guest login + anogs trap + skin + game mod staged"
                    : "guest login + skin + game mod staged (anogs off)");
        } catch (Throwable t) {
            Log.w(TAG, "guest login init failed", t);
        }
    }
}
