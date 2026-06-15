package top.niunaijun.blackbox.gms;

import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.ActivityInfo;

import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.utils.Slog;

/** Redirect microG {@code LoginActivity} to BlackBox bridge that skips the broken CookieManager gate. */
public final class MicroGLoginRedirect {
    private static final String TAG = "MicroGLoginRedirect";
    private static final String MICROG_LOGIN = "org.microg.gms.auth.login.LoginActivity";

    private MicroGLoginRedirect() {}

    public static boolean redirectIfNeeded(Intent intent, ActivityInfo info) {
        if (!redirectIfNeeded(intent)) return false;
        if (info != null) {
            info.name = MicroGLoginBridgeActivity.class.getName();
            info.packageName = BlackBoxCore.getHostPkg();
            if (info.applicationInfo != null) {
                info.applicationInfo.packageName = BlackBoxCore.getHostPkg();
            }
        }
        return true;
    }

    public static boolean redirectIfNeeded(Intent intent) {
        if (intent == null) return false;
        ComponentName cn = intent.getComponent();
        if (cn == null) return false;
        if (!MICROG_LOGIN.equals(cn.getClassName())) return false;
        Slog.d(TAG, "Redirect " + MICROG_LOGIN + " -> MicroGLoginBridgeActivity");
        intent.setComponent(new ComponentName(
                BlackBoxCore.getHostPkg(),
                MicroGLoginBridgeActivity.class.getName()));
        return true;
    }
}
