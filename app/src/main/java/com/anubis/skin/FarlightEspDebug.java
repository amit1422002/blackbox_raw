package com.anubis.skin;

import android.util.Log;

import com.anubis.loader.core.NativeCore;

/**
 * Central ESP debug logging — filter logcat: {@code adb logcat -s FarlightEsp FarlightEspDbg}
 */
public final class FarlightEspDebug {

    public static final String TAG = "FarlightEsp";
    public static final String TAG_DBG = "FarlightEspDbg";

    private static volatile long sLastLogMs;
    private static volatile int sPollCalls;
    private static volatile int sLastPollCount;
    private static volatile int sDrawFrames;
    private static volatile int sLastDrawnBoxes;
    private static volatile String sLastNativeStatus = "init";

    private FarlightEspDebug() {
    }

    public static void i(String msg) {
        Log.i(TAG, msg);
    }

    public static void w(String msg) {
        Log.w(TAG, msg);
    }

    public static void w(String msg, Throwable t) {
        Log.w(TAG, msg, t);
    }

    public static void dbg(String msg) {
        Log.i(TAG_DBG, msg);
    }

    public static void setNativeStatus(String status) {
        sLastNativeStatus = status != null ? status : "?";
    }

    public static void onPoll(int enemyCount, boolean nativesBound) {
        sPollCalls++;
        sLastPollCount = enemyCount;
        long now = System.currentTimeMillis();
        if (now - sLastLogMs >= 3000L) {
            sLastLogMs = now;
            int[] st = null;
            try {
                st = NativeCore.getFarlightEspBridgeStatus();
            } catch (Throwable ignored) {
            }
            dbg("poll enemies=" + enemyCount
                    + " natives=" + nativesBound
                    + " espOn=" + FarlightEspSettings.isEspEnabled()
                    + " nativeStatus=" + sLastNativeStatus
                    + " pollCalls=" + sPollCalls
                    + " last=" + (st != null && st.length > 0 ? st[0] : -1)
                    + " client=" + (st != null && st.length > 1 ? st[1] : -1)
                    + " listen=" + (st != null && st.length > 2 ? st[2] : -1)
                    + " memfd=" + (st != null && st.length > 3 ? st[3] : -1));
        }
    }

    public static void onDraw(int enemyCount, int drawnBoxes, int viewW, int viewH,
                              boolean espEnabled, boolean overlayAttached) {
        sDrawFrames++;
        sLastDrawnBoxes = drawnBoxes;
        long now = System.currentTimeMillis();
        if (now - sLastLogMs >= 3000L) {
            sLastLogMs = now;
            dbg("draw espOn=" + espEnabled
                    + " enemies=" + enemyCount
                    + " drawn=" + drawnBoxes
                    + " view=" + viewW + "x" + viewH
                    + " overlay=" + overlayAttached
                    + " frames=" + sDrawFrames);
        }
    }

    public static String snapshot() {
        return "enemies=" + sLastPollCount
                + " drawn=" + sLastDrawnBoxes
                + " native=" + sLastNativeStatus
                + " espOn=" + FarlightEspSettings.isEspEnabled();
    }
}
