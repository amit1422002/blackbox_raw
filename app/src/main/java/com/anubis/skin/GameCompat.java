package com.anubis.skin;

import com.anubis.loader.core.env.GamePackages;

/**
 * Host-side game helpers. UE4 titles use in-clone download (obb.png) — not BGMI OBB copy.
 */
public final class GameCompat {

    private GameCompat() {
    }

    public static boolean isFarlight(String packageName) {
        return GamePackages.isFarlight(packageName);
    }

    public static boolean isArenaBreakout(String packageName) {
        return GamePackages.isArenaBreakout(packageName);
    }

    public static boolean isDeltaForce(String packageName) {
        return GamePackages.isDeltaForce(packageName);
    }

    public static boolean isPackageDataGame(String packageName) {
        return GamePackages.isPackageDataGame(packageName);
    }

    /** BGMI only — classic split OBB in Android/obb. */
    public static boolean hasObbCopyMenu(String packageName) {
        return BgmiSkin.isBgmi(packageName);
    }

    public static boolean hasDataCopyMenu(String packageName) {
        return BgmiSkin.isBgmi(packageName);
    }
}
