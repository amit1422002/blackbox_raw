package com.anubis.skin;

/**
 * Shared ESP UI state between control overlay and draw overlay.
 */
public final class FarlightEspSettings {

    private static volatile boolean espEnabled = true;
    private static volatile int enemyCount = 0;
    private static volatile int nativeScreenW = 0;
    private static volatile int nativeScreenH = 0;

    private FarlightEspSettings() {
    }

    public static boolean isEspEnabled() {
        return espEnabled;
    }

    public static void setEspEnabled(boolean enabled) {
        espEnabled = enabled;
    }

    public static int getEnemyCount() {
        return enemyCount;
    }

    public static void setEnemyCount(int count) {
        enemyCount = Math.max(0, count);
    }

    public static void setNativeScreenSize(int width, int height) {
        if (width > 0 && height > 0) {
            nativeScreenW = landscapeWidth(width, height);
            nativeScreenH = landscapeHeight(width, height);
        }
    }

    /** Farlight runs landscape — always max×min so W2S matches overlay. */
    public static int landscapeWidth(int w, int h) {
        return Math.max(w, h);
    }

    public static int landscapeHeight(int w, int h) {
        return Math.min(w, h);
    }

    public static int getNativeScreenWidth() {
        return nativeScreenW;
    }

    public static int getNativeScreenHeight() {
        return nativeScreenH;
    }
}
