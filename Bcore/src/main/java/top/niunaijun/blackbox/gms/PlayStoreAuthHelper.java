package top.niunaijun.blackbox.gms;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.content.ComponentName;
import android.content.Intent;
import android.text.TextUtils;

import top.niunaijun.blackbox.fake.frameworks.BAccountManager;
import top.niunaijun.blackbox.utils.Slog;

/**
 * Play Store auth helpers — redirect unauthenticated UI and expose accounts to GMS/vending.
 */
public final class PlayStoreAuthHelper {
    private static final String TAG = "PlayStoreAuthHelper";
    private static final String VENDING = "com.android.vending";
    private static final String ASSET_BROWSER = "com.android.vending.AssetBrowserActivity";

    private PlayStoreAuthHelper() {}

    public static boolean isUnauthenticatedActivity(String className) {
        return className != null && className.contains("UnauthenticatedMainActivity");
    }

    /** Rewrite launch/start intents away from the sign-in gate when we already have an account. */
    public static boolean redirectIfAuthenticated(Intent intent) {
        if (intent == null || !GmsAccountManagerProxy.hasGoogleAccount()) return false;
        ComponentName cn = intent.getComponent();
        if (cn == null || !VENDING.equals(cn.getPackageName())) return false;
        if (!isUnauthenticatedActivity(cn.getClassName())) return false;
        Slog.d(TAG, "Redirect " + cn.getClassName() + " -> " + ASSET_BROWSER);
        intent.setComponent(new ComponentName(VENDING, ASSET_BROWSER));
        return true;
    }

    public static void ensureGmsVisibility(Account acct) {
        if (acct == null) return;
        for (String pkg : GoogleSignInHelper.GMS_PACKAGES) {
            try {
                BAccountManager.get().setAccountVisibility(acct, pkg, AccountManager.VISIBILITY_VISIBLE);
            } catch (Throwable ignored) {}
        }
        try {
            BAccountManager.get().setAccountVisibility(acct, VENDING, AccountManager.VISIBILITY_VISIBLE);
        } catch (Throwable ignored) {}
    }

    public static void bridgePlayTokenSync(Account acct) {
        if (acct == null) return;
        String tok = HostAccountBridge.fetchHostToken(
                top.niunaijun.blackbox.BlackBoxCore.getContext(), acct, HostAccountBridge.SCOPE_GOOGLEPLAY);
        if (!TextUtils.isEmpty(tok)) {
            Slog.d(TAG, "Bridged googleplay token for " + acct.name);
        }
    }
}
