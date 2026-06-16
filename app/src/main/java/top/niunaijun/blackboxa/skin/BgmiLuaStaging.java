package top.niunaijun.blackboxa.skin;

import android.content.Context;
import android.util.Log;

/**
 * Stages BGMI Lua assets only: guest login, skin mod, and game mod.
 */
public final class BgmiLuaStaging {

    private static final String TAG = "BgmiLua";

    private BgmiLuaStaging() {
    }

    public static void deployForLaunch(Context context) {
        if (context == null) {
            return;
        }
        try {
            GuestLoginHelper.deployToGuest(context.getApplicationContext(), BgmiSkin.BGMI_PKG);
            GameModHelper.deployToGuest(context.getApplicationContext(), BgmiSkin.BGMI_PKG);
            Log.i(TAG, "guest + skin + game mod lua staged for " + BgmiSkin.BGMI_PKG);
        } catch (Throwable t) {
            Log.w(TAG, "lua staging failed", t);
        }
    }
}
