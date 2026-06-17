package com.anubis.loader.utils;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.accounts.IAccountManagerResponse;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.RemoteException;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.fake.frameworks.BActivityManager;

/**
 * Play Store addAccount — pick existing phone Google account.
 */
public final class PlayStoreSignInHelper {
    public static final String TAG = "PlayStoreSignIn";

    public static final String ACTION_ACCOUNT_PICKED =
            "com.anubis.loader.action.PLAYSTORE_ACCOUNT_PICKED";
    public static final String ACTION_ACCOUNT_CANCELLED =
            "com.anubis.loader.action.PLAYSTORE_ACCOUNT_CANCELLED";
    public static final String EXTRA_EMAIL = "email";
    public static final String EXTRA_TARGET_PACKAGE = "target_package";

    private static final long PICKER_TIMEOUT_MS = 45_000L;
    private static final long AUTH_SESSION_END_MS = 120_000L;

    private static volatile PendingSignIn sPending;
    private static volatile BroadcastReceiver sReceiver;
    private static volatile String sTargetPackage;
    private static volatile Runnable sTimeoutRunnable;
    private static volatile Runnable sAuthSessionEndRunnable;

    private static final class PendingSignIn {
        final IAccountManagerResponse response;
        final String accountType;

        PendingSignIn(IAccountManagerResponse response, String accountType) {
            this.response = response;
            this.accountType = accountType;
        }
    }

    private PlayStoreSignInHelper() {
    }

    public static boolean hasHostGoogleAccounts() {
        Account[] accounts = GmsOAuthAccountBridge.getCachedHostAccounts();
        if (accounts == null || accounts.length == 0) {
            accounts = OAuthHostAccountStore.load();
        }
        return accounts != null && accounts.length > 0;
    }

    public static boolean launchAccountPicker(IAccountManagerResponse response, String accountType) {
        if (response == null || accountType == null) {
            return false;
        }
        if (!hasHostGoogleAccounts()) {
            return false;
        }
        if (sPending != null) {
            Slog.d(TAG, "picker already active");
            return true;
        }
        sPending = new PendingSignIn(response, accountType);
        sTargetPackage = BActivityThread.getAppPackageName();
        registerResultReceiver();
        GmsOAuthAccountBridge.refreshHostAccountCache();
        GmsOAuthAccountBridge.seedAllHostAccountsForPlayStore();

        Intent picker = new Intent();
        picker.setComponent(new ComponentName(
                BlackBoxCore.getHostPkg(),
                "com.anubis.loader.proxy.PlayStoreAccountPickerActivity"));
        picker.putExtra(EXTRA_TARGET_PACKAGE, sTargetPackage);
        picker.putExtra(GmsCore.EXTRA_PLAY_STORE_SIGN_IN, true);
        picker.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK
                | Intent.FLAG_ACTIVITY_CLEAR_TOP
                | Intent.FLAG_ACTIVITY_SINGLE_TOP
                | Intent.FLAG_ACTIVITY_NO_HISTORY);
        try {
            BActivityManager.get().startActivity(picker, BActivityThread.getUserId());
            schedulePickerTimeout();
            Slog.d(TAG, "launched full-screen picker proc=" + sTargetPackage);
            return true;
        } catch (Throwable t) {
            cleanup();
            Slog.w(TAG, "launch picker failed", t);
            return false;
        }
    }

    private static void registerResultReceiver() {
        unregisterResultReceiver();
        Context ctx = BActivityThread.getApplication();
        if (ctx == null) {
            return;
        }
        sReceiver = new BroadcastReceiver() {
            @Override
            public void onReceive(Context context, Intent intent) {
                if (intent == null) {
                    return;
                }
                String action = intent.getAction();
                if (ACTION_ACCOUNT_PICKED.equals(action)) {
                    notifyAccountPicked(intent.getStringExtra(EXTRA_EMAIL));
                } else if (ACTION_ACCOUNT_CANCELLED.equals(action)) {
                    notifyCancelled();
                }
            }
        };
        IntentFilter filter = new IntentFilter();
        filter.addAction(ACTION_ACCOUNT_PICKED);
        filter.addAction(ACTION_ACCOUNT_CANCELLED);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
            ctx.registerReceiver(sReceiver, filter, Context.RECEIVER_NOT_EXPORTED);
        } else {
            ctx.registerReceiver(sReceiver, filter);
        }
    }

    private static void unregisterResultReceiver() {
        if (sReceiver == null) {
            return;
        }
        try {
            Context ctx = BActivityThread.getApplication();
            if (ctx != null) {
                ctx.unregisterReceiver(sReceiver);
            }
        } catch (Throwable ignored) {
        }
        sReceiver = null;
    }

    /** Called from picker activity (any process) — delivers to vending via broadcast. */
    public static void deliverAccountPick(String email, String targetPackage) {
        if (email == null || email.isEmpty()) {
            deliverCancel(targetPackage);
            return;
        }
        sendBroadcast(ACTION_ACCOUNT_PICKED, email, targetPackage);
    }

    public static void deliverCancel(String targetPackage) {
        sendBroadcast(ACTION_ACCOUNT_CANCELLED, null, targetPackage);
    }

    public static void notifyAccountPicked(String email) {
        completePending(email);
    }

    public static void notifyCancelled() {
        cancelPending();
    }

    private static void completePending(String email) {
        if (email == null || email.isEmpty()) {
            cancelPending();
            return;
        }
        PendingSignIn pending = sPending;
        clearPendingState();
        if (pending == null) {
            Slog.w(TAG, "completePending: no pending addAccount");
            return;
        }
        GmsOAuthAccountBridge.seedOAuthAccount(email, GmsCore.VENDING_PKG);
        GmsCore.setOAuthSelectedAccount(email);
        OAuthHostAccountStore.persistSelectedAccount(email);
        OAuthHostAccountStore.ensureAccountListed(email);
        schedulePlayStoreAuthSessionEnd();
        Bundle result = new Bundle();
        result.putString(AccountManager.KEY_ACCOUNT_NAME, email);
        result.putString(AccountManager.KEY_ACCOUNT_TYPE, pending.accountType);
        result.putBoolean(AccountManager.KEY_BOOLEAN_RESULT, true);
        try {
            pending.response.onResult(result);
            Slog.d(TAG, "addAccount completed for " + email);
        } catch (RemoteException e) {
            Slog.w(TAG, "onResult failed", e);
        }
        launchPlayStoreGetToken(email);
    }

    /** Must start from virtual vending — host cannot open non-exported GMS GetTokenActivity. */
    private static void launchPlayStoreGetToken(String email) {
        Context ctx = BActivityThread.getApplication();
        if (ctx == null) {
            Slog.w(TAG, "no vending context for GetToken");
            return;
        }
        GmsCore.beginPlayStoreAuthSession(GmsCore.VENDING_PKG);
        Account account = new Account(email, GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE);
        Intent getToken = new Intent();
        getToken.setComponent(new ComponentName(
                GmsCore.GMS_PKG,
                "com.google.android.gms.auth.uiflows.gettoken.GetTokenActivity"));
        getToken.putExtra("account", account);
        getToken.putExtra("authAccount", email);
        getToken.putExtra("accountType", account.type);
        getToken.putExtra("authTokenType", "weblogin:required");
        getToken.putExtra("service", "weblogin:required");
        getToken.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
        try {
            ctx.startActivity(getToken);
            Slog.d(TAG, "vending -> host GMS GetToken for " + email);
        } catch (Throwable t) {
            Slog.w(TAG, "GetToken launch failed", t);
        }
    }

    private static void cancelPending() {
        PendingSignIn pending = sPending;
        clearPendingState();
        GmsCore.endPlayStoreAuthSession();
        cancelPlayStoreAuthSessionEnd();
        if (pending == null) {
            return;
        }
        try {
            pending.response.onError(AccountManager.ERROR_CODE_CANCELED, "cancelled");
            Slog.d(TAG, "addAccount cancelled");
        } catch (RemoteException e) {
            Slog.w(TAG, "onError failed", e);
        }
    }

    private static void sendBroadcast(String action, String email, String targetPackage) {
        try {
            Intent intent = new Intent(action);
            if (email != null) {
                intent.putExtra(EXTRA_EMAIL, email);
            }
            if (targetPackage != null) {
                intent.setPackage(targetPackage);
            }
            BlackBoxCore.getContext().sendBroadcast(intent);
        } catch (Throwable t) {
            Slog.w(TAG, "sendBroadcast failed", t);
        }
    }

    private static void schedulePickerTimeout() {
        cancelPickerTimeout();
        Context ctx = BActivityThread.getApplication();
        if (ctx == null) {
            return;
        }
        sTimeoutRunnable = () -> {
            if (sPending != null) {
                Slog.w(TAG, "picker timeout — resetting pending addAccount");
                cancelPending();
            }
        };
        new Handler(Looper.getMainLooper()).postDelayed(sTimeoutRunnable, PICKER_TIMEOUT_MS);
    }

    private static void cancelPickerTimeout() {
        if (sTimeoutRunnable == null) {
            return;
        }
        new Handler(Looper.getMainLooper()).removeCallbacks(sTimeoutRunnable);
        sTimeoutRunnable = null;
    }

    private static void clearPendingState() {
        sPending = null;
        sTargetPackage = null;
        cancelPickerTimeout();
        unregisterResultReceiver();
    }

    private static void cleanup() {
        clearPendingState();
    }

    private static void schedulePlayStoreAuthSessionEnd() {
        cancelPlayStoreAuthSessionEnd();
        sAuthSessionEndRunnable = () -> {
            GmsCore.endPlayStoreAuthSession();
            Slog.d(TAG, "play store auth session ended");
        };
        new Handler(Looper.getMainLooper()).postDelayed(sAuthSessionEndRunnable, AUTH_SESSION_END_MS);
    }

    private static void cancelPlayStoreAuthSessionEnd() {
        if (sAuthSessionEndRunnable == null) {
            return;
        }
        new Handler(Looper.getMainLooper()).removeCallbacks(sAuthSessionEndRunnable);
        sAuthSessionEndRunnable = null;
    }

    public static boolean isPlayStorePickerActive() {
        return sPending != null;
    }
}
