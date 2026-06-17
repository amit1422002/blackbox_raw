package top.niunaijun.blackboxa.skin;

import android.content.Context;
import android.util.Log;

import com.anubis.loader.BlackBoxCore;

/**
 * Stage Lua + hook ELF into cloned BGMI before launch (host process only).
 */
public final class BgmiSkinLauncher {

    private static final String TAG = "BgmiSkin";

    private BgmiSkinLauncher() {
    }

    public static void onBeforeLaunch(String packageName, int userId) {
        if (!BgmiSkin.isBgmi(packageName)) {
            return;
        }
        Context ctx = BlackBoxCore.getContext();
        if (ctx == null) {
            return;
        }
        try {
            BgmiLuaStaging.deployForLaunch(ctx.getApplicationContext(), userId);
            Log.i(TAG, "staged lua for " + packageName + " user=" + userId);
        } catch (Throwable t) {
            Log.w(TAG, "stage failed for " + packageName, t);
        }
    }
}
