package com.anubis.loader.utils;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.accounts.AccountManagerFuture;
import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.proxy.GoogleAccountPickerActivity;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.List;
/**
 * Host-side Google token bridge — bypasses virtual GMS OAuth validation.
 */
public final class GmsOAuthHostFallback {
    public static final String TAG = "GmsOAuthHost";
    public static final int REQ_AUTH_RECOVERY = 9101;
    public static final int REQ_AM_CONSENT = 9102;
    public static final int REQ_HOST_GMS = 9103;

    private static volatile PendingAuth sPending;

    private GmsOAuthHostFallback() {
    }

    public static void clearPending() {
        sPending = null;
    }

    public interface Callback {
        void onSuccess(Intent signInResult);

        void onFailure(String reason);
    }

    private interface TokenReceiver {
        void onToken(String token);

        void onConsent(Intent consent);
    }

    private static final class PendingAuth {
        final Activity activity;
        final Intent gmsLaunchIntent;
        final Account account;
        final String clientId;
        final String guestPkg;
        final String scope;
        final Callback callback;
        int retryCount;

        PendingAuth(Activity activity, Intent gmsLaunchIntent, Account account, String clientId,
                    String guestPkg, String scope, Callback callback) {
            this.activity = activity;
            this.gmsLaunchIntent = gmsLaunchIntent;
            this.account = account;
            this.clientId = clientId;
            this.guestPkg = guestPkg;
            this.scope = scope;
            this.callback = callback;
        }
    }

    private static final class TokenAttempt {
        final String token;
        final Intent recoveryIntent;

        TokenAttempt(String token, Intent recoveryIntent) {
            this.token = token;
            this.recoveryIntent = recoveryIntent;
        }
    }

    /** Obtain serverAuthCode via real GMS and build SignInHub result. */
    public static void fetchSignInResultForAccount(Activity activity, Intent gmsLaunchIntent,
                                                   Account account, String serverClientIdOverride,
                                                   Callback callback) {
        if (activity == null || account == null || callback == null) {
            return;
        }
        Handler main = new Handler(Looper.getMainLooper());
        main.post(() -> {
            try {
                prepareLaunchIntentClassLoader(gmsLaunchIntent);
                String clientId = serverClientIdOverride;
                if (clientId == null || clientId.isEmpty()) {
                    clientId = resolveServerClientId(gmsLaunchIntent);
                }
                if (clientId == null) {
                    postFailure(callback, "no web client id in SignInConfiguration");
                    return;
                }
                String guestPkg = com.anubis.loader.core.GmsCore.getOAuthGuestPackage(gmsLaunchIntent);
                String scope = "oauth2:server:client_id:" + clientId;
                Slog.d(TAG, "token bridge for " + account.name + " client=" + clientId);
                if (guestPkg != null) {
                    com.anubis.loader.core.GmsCore.activateOAuthSession(guestPkg);
                }
                com.anubis.loader.core.GmsCore.rePatchSignInConfigForGetToken();
                PendingAuth pending = new PendingAuth(activity, gmsLaunchIntent, account, clientId,
                        guestPkg, scope, callback);
                sPending = pending;
                continueSilentTokenFetch(pending, main);
            } catch (Throwable t) {
                Slog.w(TAG, "fetchSignInResultForAccount failed", t);
                postFailure(callback, t.getMessage());
            }
        });
    }

    public static void onAuthUiResult(Activity activity, int requestCode, int resultCode, Intent data) {
        PendingAuth pending = sPending;
        if (pending == null || pending.activity != activity) {
            return;
        }
        Handler main = new Handler(Looper.getMainLooper());
        if (requestCode == REQ_HOST_GMS) {
            sPending = null;
            if (resultCode == Activity.RESULT_OK && data != null) {
                prepareLaunchIntentClassLoader(data);
                com.anubis.loader.core.GmsCore.rePatchSignInConfigForGetToken();
                Intent result = normalizeGmsSignInResult(data, pending.account);
                if (result != null) {
                    Slog.d(TAG, "host GMS sign-in ok for " + pending.account.name);
                    postSuccess(pending.callback, result);
                } else {
                    postFailure(pending.callback, "GMS returned empty sign-in data");
                }
            } else {
                Slog.w(TAG, "host GMS sign-in cancelled code=" + resultCode);
                postFailure(pending.callback, "GMS sign-in cancelled");
            }
            return;
        }
        if (requestCode == REQ_AUTH_RECOVERY || requestCode == REQ_AM_CONSENT) {
            if (resultCode != Activity.RESULT_OK) {
                Slog.w(TAG, "auth UI cancelled code=" + resultCode);
                if (pending.retryCount < 2) {
                    pending.retryCount++;
                    main.post(() -> requestDeviceAuthToken(pending, main));
                    return;
                }
                main.post(() -> launchHostGmsSignIn(pending));
                return;
            }
            if (requestCode == REQ_AUTH_RECOVERY && data != null) {
                prepareLaunchIntentClassLoader(data);
                String authCode = extractServerAuthCodeFromResult(data);
                if (authCode != null && !authCode.isEmpty()) {
                    sPending = null;
                    Slog.d(TAG, "recovery UI returned serverAuthCode");
                    deliverAssembledResult(pending.account, authCode, pending.callback);
                    return;
                }
            }
            pending.retryCount++;
            continueSilentTokenFetch(pending, main);
        }
    }

    private static void continueInteractiveTokenFetch(PendingAuth pending, Handler main) {
        requestDeviceAuthToken(pending, main);
    }

    /** Virtual AccountManager (BGMI) or device AM — avoids GoogleAuthUtil manifest check. */
    private static void requestDeviceAuthToken(PendingAuth pending, Handler main) {
        main.post(() -> requestAuthTokenWithActivity(pending, new TokenReceiver() {
            @Override
            public void onToken(String token) {
                if (token != null && !token.isEmpty()) {
                    sPending = null;
                    new Thread(() -> deliverAssembledResult(pending.account, token,
                            pending.callback), "GmsOAuthHostAssemble").start();
                    return;
                }
                Slog.w(TAG, "virtual AM empty token — try GetToken UI");
                if (pending.guestPkg != null
                        && com.anubis.loader.utils.GmsOAuthSignatureSpoof.BGMI_PKG
                        .equals(pending.guestPkg)) {
                    main.post(() -> launchVirtualGetToken(pending));
                    return;
                }
                main.post(() -> launchHostGmsSignIn(pending));
            }

            @Override
            public void onConsent(Intent consent) {
                if (consent != null && consent.getComponent() != null
                        && consent.getComponent().getClassName() != null
                        && consent.getComponent().getClassName().contains("AccountManager")) {
                    launchConsentIntent(pending, consent);
                } else {
                    launchRecoveryIntent(pending, consent);
                }
            }
        }));
    }

    private static void continueSilentTokenFetch(PendingAuth pending, Handler main) {
        new Thread(() -> {
            boolean serverScope = pending.scope != null
                    && pending.scope.startsWith("oauth2:server:client_id:");
            if (serverScope) {
                Slog.d(TAG, "server scope — virtual AccountManager (skip GoogleAuthUtil)");
                main.post(() -> requestDeviceAuthToken(pending, main));
                return;
            }
            TokenAttempt attempt = tryGetTokenAllContexts(BlackBoxCore.getContext(),
                    pending.account, pending.scope, pending.guestPkg);
            if (attempt.token != null && !attempt.token.isEmpty()) {
                sPending = null;
                deliverAssembledResult(pending.account, attempt.token, pending.callback);
                return;
            }
            final Intent recoveryIntent = attempt.recoveryIntent;
            if (recoveryIntent != null) {
                main.post(() -> launchRecoveryIntent(pending, recoveryIntent));
                return;
            }
            Slog.d(TAG, "silent token failed — trying interactive AccountManager");
            main.post(() -> continueInteractiveTokenFetch(pending, main));
        }, "GmsOAuthHostFetch").start();
    }

    /** Recovery intent from virtual guest app only — avoids Invalid consumer package on host. */
    private static TokenAttempt tryGuestRecoveryIntent(Account account, String scope, String guestPkg) {
        try {
            Context guestApp = BActivityThread.getApplication();
            if (guestApp != null) {
                TokenAttempt attempt = googleAuthUtilGetTokenAttempt(guestApp, account, scope);
                if (attempt.recoveryIntent != null) {
                    Slog.d(TAG, "guest recovery intent from virtual app");
                    return attempt;
                }
            }
            if (guestPkg != null) {
                Context guest = BlackBoxCore.getContext().createPackageContext(guestPkg,
                        Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY);
                TokenAttempt attempt = googleAuthUtilGetTokenAttempt(guest, account, scope);
                if (attempt.recoveryIntent != null) {
                    Slog.d(TAG, "guest recovery intent from " + guestPkg);
                    return attempt;
                }
            }
        } catch (Throwable t) {
            Slog.w(TAG, "tryGuestRecoveryIntent failed", t);
        }
        return new TokenAttempt(null, null);
    }

    private static void dismissBlockingProgress(Activity activity) {
        // Picker no longer shows progress — no-op.
    }

    private static void launchVirtualGetToken(PendingAuth pending) {
        try {
            Intent getToken = pending.gmsLaunchIntent != null
                    ? new Intent(pending.gmsLaunchIntent) : new Intent();
            getToken.setComponent(new ComponentName(
                    "com.google.android.gms",
                    "com.google.android.gms.auth.uiflows.gettoken.GetTokenActivity"));
            getToken.putExtra("account", pending.account);
            getToken.putExtra("authAccount", pending.account.name);
            getToken.putExtra("accountType", pending.account.type);
            if (pending.scope != null) {
                getToken.putExtra("authTokenType", pending.scope);
                getToken.putExtra("service", pending.scope);
            }
            if (pending.gmsLaunchIntent != null) {
                com.anubis.loader.core.GmsCore.copyOAuthSignInExtras(pending.gmsLaunchIntent, getToken);
                prepareLaunchIntentClassLoader(getToken);
            }
            if (pending.guestPkg != null) {
                com.anubis.loader.core.GmsCore.activateOAuthSession(pending.guestPkg);
                com.anubis.loader.core.GmsCore.prepareVirtualGmsSignIn(getToken, pending.guestPkg);
                getToken.putExtra(com.anubis.loader.core.GmsCore.EXTRA_GMS_TARGET + "_guest_pkg",
                        pending.guestPkg);
            }
            com.anubis.loader.core.GmsCore.patchSignInConfigurationInteractive(
                    getToken, pending.account.name);
            com.anubis.loader.core.GmsCore.markOAuthInternalLaunch(getToken);
            Slog.d(TAG, "launching virtual GetToken for " + pending.account.name);
            pending.activity.startActivityForResult(getToken, REQ_AUTH_RECOVERY);
        } catch (Throwable t) {
            sPending = null;
            Slog.w(TAG, "virtual GetToken launch failed", t);
            postFailure(pending.callback, "GetToken launch failed");
        }
    }

    private static void launchRecoveryIntent(PendingAuth pending, Intent recovery) {
        try {
            Slog.d(TAG, "launching Google auth recovery UI");
            if (pending.guestPkg != null) {
                com.anubis.loader.core.GmsCore.activateOAuthSession(pending.guestPkg);
                recovery.putExtra(com.anubis.loader.core.GmsCore.EXTRA_GMS_TARGET + "_guest_pkg",
                        pending.guestPkg);
            }
            com.anubis.loader.core.GmsCore.markOAuthInternalLaunch(recovery);
            dismissBlockingProgress(pending.activity);
            pending.activity.startActivityForResult(recovery, REQ_AUTH_RECOVERY);
        } catch (Throwable t) {
            Slog.w(TAG, "recovery intent launch failed", t);
            sPending = null;
            postFailure(pending.callback, "auth recovery launch failed");
        }
    }

    private static void launchConsentIntent(PendingAuth pending, Intent consent) {
        try {
            Slog.d(TAG, "launching AccountManager consent UI");
            com.anubis.loader.core.GmsCore.markOAuthInternalLaunch(consent);
            dismissBlockingProgress(pending.activity);
            pending.activity.startActivityForResult(consent, REQ_AM_CONSENT);
        } catch (Throwable t) {
            Slog.w(TAG, "consent intent launch failed", t);
            sPending = null;
            postFailure(pending.callback, "auth consent launch failed");
        }
    }

    private static void launchHostGmsSignIn(PendingAuth pending) {
        try {
            Intent gms = new Intent(pending.gmsLaunchIntent);
            com.anubis.loader.core.GmsCore.prepareGuestExternalGmsSignIn(gms, pending.guestPkg);
            com.anubis.loader.core.GmsCore.patchSignInConfigurationInteractive(
                    gms, pending.account.name);
            dismissBlockingProgress(pending.activity);
            // Same req as GoogleOAuthProxy GMS_REQUEST_CODE so relay can deliver to SignInHub.
            pending.activity.startActivityForResult(gms, 1);
        } catch (Throwable t) {
            sPending = null;
            Slog.w(TAG, "host GMS SignIn launch failed", t);
            postFailure(pending.callback, "GMS sign-in launch failed");
        }
    }

    private static TokenAttempt tryGetTokenAllContexts(Context base, Account account, String scope,
                                                       String guestPkg) {
        List<Context> contexts = new ArrayList<>();
        Context root = base != null ? base : BlackBoxCore.getContext();
        // Host GMS first when virtual clone is removed (BGMI OAuth path).
        contexts.add(root);
        try {
            Context guestApp = BActivityThread.getApplication();
            if (guestApp != null) {
                contexts.add(guestApp);
            }
        } catch (Throwable ignored) {
        }
        if (guestPkg != null) {
            contexts.add(guestIdentityContext(root, guestPkg));
            try {
                contexts.add(root.createPackageContext(guestPkg,
                        Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY));
            } catch (Throwable ignored) {
            }
        }
        for (String pkg : new String[]{"com.google.android.gms", "com.android.vending"}) {
            try {
                contexts.add(base.createPackageContext(pkg,
                        Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY));
            } catch (Throwable ignored) {
            }
        }
        Intent recovery = null;
        for (Context ctx : contexts) {
            TokenAttempt attempt = googleAuthUtilGetTokenAttempt(ctx, account, scope);
            if (attempt.token != null && !attempt.token.isEmpty()) {
                Slog.d(TAG, "token ok via ctx=" + ctx.getPackageName());
                return attempt;
            }
            if (attempt.recoveryIntent != null) {
                recovery = attempt.recoveryIntent;
            }
        }
        return new TokenAttempt(null, recovery);
    }

    public static void fetchSignInResultForAccount(Intent gmsLaunchIntent, Account account,
                                                   String serverClientIdOverride, Callback callback) {
        postFailure(callback, "token request requires Activity context");
    }

    public static void fetchSignInResultForAccount(Intent gmsLaunchIntent, Account account, Callback callback) {
        postFailure(callback, "token request requires Activity context");
    }

    private static void deliverAssembledResult(Account account, String authCode, Callback callback) {
        Intent result = assembleSignInResult(account, authCode);
        if (result == null) {
            postFailure(callback, "assembleSignInResult failed");
            return;
        }
        Slog.d(TAG, "host auth code ok for " + account.name);
        postSuccess(callback, result);
    }

    private static Intent normalizeGmsSignInResult(Intent data, Account account) {
        prepareLaunchIntentClassLoader(data);
        String authCode = extractServerAuthCodeFromResult(data);
        if (authCode != null && !authCode.isEmpty()) {
            Slog.d(TAG, "GMS result contains serverAuthCode");
            return data;
        }
        Slog.w(TAG, "GMS result has no serverAuthCode — returning raw intent");
        return data;
    }

    private static String extractServerAuthCodeFromResult(Intent data) {
        if (data == null) {
            return null;
        }
        Bundle extras = data.getExtras();
        if (extras == null) {
            return null;
        }
        try {
            extras.setClassLoader(gmsClassLoader());
            for (String key : extras.keySet()) {
                Object value;
                try {
                    value = extras.get(key);
                } catch (Throwable ignored) {
                    continue;
                }
                if (value == null) {
                    continue;
                }
                if (value.getClass().getName().contains("GoogleSignInAccount")) {
                    return scanObjectForAuthCode(value);
                }
            }
        } catch (Throwable t) {
            Slog.w(TAG, "extractServerAuthCodeFromResult failed", t);
        }
        return null;
    }

    private static String scanObjectForAuthCode(Object root) {
        if (root == null) {
            return null;
        }
        try {
            Class<?> type = root.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    if (field.getType() != String.class) {
                        continue;
                    }
                    field.setAccessible(true);
                    Object val = field.get(root);
                    if (val instanceof String) {
                        String s = (String) val;
                        if (s.length() > 20 && !s.contains("@") && !s.contains(".apps.googleusercontent.com")) {
                            return s;
                        }
                        if ("serverAuthCode".equals(field.getName()) || "f".equals(field.getName())
                                || "j".equals(field.getName())) {
                            if (!s.isEmpty()) {
                                return s;
                            }
                        }
                    }
                }
                type = type.getSuperclass();
            }
            try {
                Method getCode = root.getClass().getMethod("getServerAuthCode");
                Object code = getCode.invoke(root);
                if (code instanceof String && !((String) code).isEmpty()) {
                    return (String) code;
                }
            } catch (Throwable ignored) {
            }
        } catch (Throwable ignored) {
        }
        return null;
    }

    /** Host process Context that reports guest package to GoogleAuthUtil. */
    private static Context guestIdentityContext(Context base, String guestPkg) {
        final Context wrapped = base != null ? base : BlackBoxCore.getContext();
        return new ContextWrapper(wrapped) {
            @Override
            public String getPackageName() {
                return guestPkg;
            }

            @Override
            public Context getApplicationContext() {
                return this;
            }
        };
    }

    private static Context resolveTokenContext(Context base, String guestPkg) {
        if (guestPkg != null) {
            Context guestIdentity = guestIdentityContext(base, guestPkg);
            if (hasGmsVersionMeta(guestIdentity) || hasGmsVersionMeta(wrappedBase(base))) {
                Slog.d(TAG, "token ctx guest identity=" + guestPkg);
                return guestIdentity;
            }
        }
        if (guestPkg != null) {
            try {
                Context guest = wrappedBase(base).createPackageContext(guestPkg,
                        Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY);
                if (hasGmsVersionMeta(guest)) {
                    Slog.d(TAG, "token ctx guest=" + guestPkg);
                    return guest;
                }
            } catch (Throwable ignored) {
            }
        }
        try {
            Context guestApp = BActivityThread.getApplication();
            if (guestApp != null && hasGmsVersionMeta(guestApp)) {
                Slog.d(TAG, "token ctx virtual app");
                return guestApp;
            }
        } catch (Throwable ignored) {
        }
        for (String pkg : new String[]{"com.google.android.gms", "com.android.vending"}) {
            try {
                Context gms = wrappedBase(base).createPackageContext(pkg,
                        Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY);
                Slog.d(TAG, "token ctx " + pkg);
                return gms;
            } catch (Throwable ignored) {
            }
        }
        return wrappedBase(base);
    }

    private static Context wrappedBase(Context base) {
        return base != null ? base : BlackBoxCore.getContext();
    }

    private static boolean hasGmsVersionMeta(Context ctx) {
        try {
            ApplicationInfo ai = ctx.getPackageManager()
                    .getApplicationInfo(ctx.getPackageName(), PackageManager.GET_META_DATA);
            return ai.metaData != null && ai.metaData.containsKey("com.google.android.gms.version");
        } catch (Throwable ignored) {
            return false;
        }
    }

    public static String resolveServerClientId(Intent intent) {
        String cached = com.anubis.loader.core.GmsCore.getCachedOAuthServerClientId();
        if (cached != null && !cached.isEmpty()) {
            return cached;
        }
        String fromIntent = extractServerClientId(intent);
        if (fromIntent != null) {
            return fromIntent;
        }
        String guestPkg = com.anubis.loader.core.GmsCore.getOAuthGuestPackage(intent);
        if (guestPkg == null) {
            try {
                guestPkg = BActivityThread.getAppPackageName();
            } catch (Throwable ignored) {
            }
        }
        return readDefaultWebClientId(guestPkg);
    }

    public static String extractServerClientIdFromObject(Object root) {
        return scanObjectForClientId(root, 0);
    }

    public static String readDefaultWebClientId(String guestPkg) {
        if (guestPkg == null || guestPkg.isEmpty()) {
            return null;
        }
        try {
            Context ctx = BActivityThread.getApplication();
            if (ctx == null || !guestPkg.equals(ctx.getPackageName())) {
                ctx = BlackBoxCore.getContext().createPackageContext(
                        guestPkg, Context.CONTEXT_IGNORE_SECURITY | Context.CONTEXT_INCLUDE_CODE);
            }
            int id = ctx.getResources().getIdentifier("default_web_client_id", "string", guestPkg);
            if (id != 0) {
                String value = ctx.getString(id);
                if (isClientId(value)) {
                    Slog.d(TAG, "default_web_client_id from " + guestPkg);
                    return value;
                }
            }
        } catch (Throwable t) {
            Slog.w(TAG, "readDefaultWebClientId failed for " + guestPkg, t);
        }
        return null;
    }

    public static Intent tryBuildHostSignInResult(Intent gmsLaunchIntent) {
        prepareLaunchIntentClassLoader(gmsLaunchIntent);
        String clientId = resolveServerClientId(gmsLaunchIntent);
        if (clientId == null) {
            Slog.w(TAG, "no web client id in SignInConfiguration");
            return null;
        }
        Account[] accounts = loadHostAccounts();
        if (accounts == null) {
            return null;
        }
        Context hostCtx = BlackBoxCore.getContext();
        for (Account account : accounts) {
            String authCode = requestServerAuthCode(hostCtx, account, clientId);
            if (authCode == null || authCode.isEmpty()) {
                continue;
            }
            Intent result = assembleSignInResult(account, authCode);
            if (result != null) {
                Slog.d(TAG, "host fallback auth code ok for " + account.name);
                return result;
            }
        }
        Slog.w(TAG, "host fallback could not obtain auth code");
        return null;
    }

    public static Account[] loadHostAccounts() {
        Account[] accounts = OAuthHostAccountStore.load();
        if (accounts == null || accounts.length == 0) {
            GmsOAuthAccountBridge.refreshHostAccountCache();
            accounts = GmsOAuthAccountBridge.getCachedHostAccounts();
        }
        if (accounts == null || accounts.length == 0) {
            Slog.w(TAG, "no host Google accounts");
            return null;
        }
        return accounts;
    }

    private static void prepareLaunchIntentClassLoader(Intent intent) {
        if (intent == null) {
            return;
        }
        try {
            if (BActivityThread.getApplication() != null) {
                intent.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
    }

    private static void postSuccess(Callback callback, Intent result) {
        new Handler(Looper.getMainLooper()).post(() -> callback.onSuccess(result));
    }

    private static void postFailure(Callback callback, String reason) {
        new Handler(Looper.getMainLooper()).post(() -> callback.onFailure(reason));
    }

    public static String extractServerClientId(Intent intent) {
        if (intent == null) {
            return null;
        }
        prepareLaunchIntentClassLoader(intent);
        Bundle extras = intent.getExtras();
        if (extras == null) {
            return null;
        }
        try {
            ClassLoader cl = extras.getClassLoader();
            if (cl == null && BActivityThread.getApplication() != null) {
                cl = BActivityThread.getApplication().getClassLoader();
                extras.setClassLoader(cl);
            }
            for (String key : extras.keySet()) {
                Object value;
                try {
                    value = extras.get(key);
                } catch (Throwable t) {
                    Slog.w(TAG, "skip extra " + key + ": " + t.getMessage());
                    continue;
                }
                if (value == null) {
                    continue;
                }
                if (value instanceof Bundle) {
                    String fromBundle = extractServerClientIdFromBundle((Bundle) value);
                    if (fromBundle != null) {
                        return fromBundle;
                    }
                }
                if (value.getClass().getName().contains("SignInConfiguration")
                        || value.getClass().getName().contains("GoogleSignInOptions")) {
                    String fromConfig = scanObjectForClientId(value, 0);
                    if (fromConfig != null) {
                        return fromConfig;
                    }
                }
                String fromValue = stringIfClientId(value);
                if (fromValue != null) {
                    return fromValue;
                }
            }
        } catch (Throwable t) {
            Slog.w(TAG, "extractServerClientId failed", t);
        }
        return null;
    }

    private static String extractServerClientIdFromBundle(Bundle bundle) {
        if (bundle == null) {
            return null;
        }
        for (String key : bundle.keySet()) {
            Object value = bundle.get(key);
            if (value == null) {
                continue;
            }
            if (value instanceof Bundle) {
                String nested = extractServerClientIdFromBundle((Bundle) value);
                if (nested != null) {
                    return nested;
                }
            }
            if (value.getClass().getName().contains("SignInConfiguration")
                    || value.getClass().getName().contains("GoogleSignInOptions")) {
                String fromConfig = scanObjectForClientId(value, 0);
                if (fromConfig != null) {
                    return fromConfig;
                }
            }
            String fromValue = stringIfClientId(value);
            if (fromValue != null) {
                return fromValue;
            }
        }
        return null;
    }

    private static String stringIfClientId(Object value) {
        if (value instanceof String) {
            return isClientId((String) value) ? (String) value : null;
        }
        if (value instanceof CharSequence) {
            String s = value.toString();
            return isClientId(s) ? s : null;
        }
        return null;
    }

    private static boolean isClientId(String s) {
        return s != null && s.contains(".apps.googleusercontent.com");
    }

    private static String scanObjectForClientId(Object root, int depth) {
        if (root == null || depth > 6) {
            return null;
        }
        String viaMethod = invokeClientIdGetters(root);
        if (viaMethod != null) {
            return viaMethod;
        }
        try {
            Class<?> type = root.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    field.setAccessible(true);
                    Object val = field.get(root);
                    String fromVal = stringIfClientId(val);
                    if (fromVal != null) {
                        return fromVal;
                    }
                    if (val != null && !isPrimitiveOrBoxed(val.getClass())) {
                        String nested = scanObjectForClientId(val, depth + 1);
                        if (nested != null) {
                            return nested;
                        }
                    }
                }
                type = type.getSuperclass();
            }
        } catch (Throwable ignored) {
        }
        return null;
    }

    private static String invokeClientIdGetters(Object root) {
        try {
            Class<?> type = root.getClass();
            while (type != null && type != Object.class) {
                for (Method method : type.getDeclaredMethods()) {
                    if (method.getParameterTypes().length != 0) {
                        continue;
                    }
                    if (method.getReturnType() != String.class) {
                        continue;
                    }
                    String name = method.getName().toLowerCase();
                    if (!name.contains("serverclient")
                            && !name.contains("webclient")
                            && !name.equals("getserverclientid")
                            && !name.equals("zzc")
                            && !name.equals("zzd")) {
                        continue;
                    }
                    try {
                        method.setAccessible(true);
                        Object result = method.invoke(root);
                        String fromMethod = stringIfClientId(result);
                        if (fromMethod != null) {
                            return fromMethod;
                        }
                    } catch (Throwable ignored) {
                    }
                }
                type = type.getSuperclass();
            }
        } catch (Throwable ignored) {
        }
        return null;
    }

    private static boolean isPrimitiveOrBoxed(Class<?> c) {
        return c.isPrimitive()
                || c == String.class
                || c == Integer.class
                || c == Long.class
                || c == Boolean.class;
    }

    private static String requestServerAuthCode(Context ctx, Account account, String serverClientId) {
        String scope = "oauth2:server:client_id:" + serverClientId;
        String guestPkg = null;
        try {
            guestPkg = BActivityThread.getAppPackageName();
        } catch (Throwable ignored) {
        }
        Context tokenCtx = resolveTokenContext(ctx, guestPkg);
        return googleAuthUtilGetToken(tokenCtx, account, scope);
    }

    private static void requestAuthTokenWithActivity(PendingAuth pending, TokenReceiver receiver) {
        Activity activity = pending.activity;
        Account account = pending.account;
        String scope = pending.scope;
        try {
            Bundle options;
            if (pending.guestPkg != null
                    && com.anubis.loader.utils.GmsOAuthSignatureSpoof.BGMI_PKG
                    .equals(pending.guestPkg)) {
                options = com.anubis.loader.fake.service.IAccountManagerProxy
                        .patchOAuthLoginOptionsForVirtualGuest(null, pending.guestPkg);
                Slog.d(TAG, "getAuthToken loginOptions pkg=" + pending.guestPkg);
            } else {
                options = com.anubis.loader.fake.service.IAccountManagerProxy
                        .patchOAuthLoginOptionsForHost(null);
            }
            AccountManager.get(activity).getAuthToken(account, scope, options, activity,
                    (AccountManagerFuture<Bundle> future) -> {
                        try {
                            Bundle bundle = future.getResult();
                            if (bundle == null) {
                                receiver.onToken(null);
                                return;
                            }
                            String token = bundle.getString(AccountManager.KEY_AUTHTOKEN);
                            if (token != null && !token.isEmpty()) {
                                receiver.onToken(token);
                                return;
                            }
                            Intent consent = bundle.getParcelable(AccountManager.KEY_INTENT);
                            if (consent != null) {
                                receiver.onConsent(consent);
                                return;
                            }
                            receiver.onToken(null);
                        } catch (Throwable t) {
                            Intent recovery = extractRecoveryIntent(t);
                            if (recovery != null) {
                                receiver.onConsent(recovery);
                            } else {
                                Slog.w(TAG, "AccountManager.getAuthToken failed for " + account.name, t);
                                receiver.onToken(null);
                            }
                        }
                    }, null);
        } catch (Throwable t) {
            Slog.w(TAG, "AccountManager.getAuthToken error", t);
            receiver.onToken(null);
        }
    }

    private static ClassLoader authApiClassLoader() {
        try {
            return Class.forName("com.google.android.gms.auth.GoogleAuthUtil").getClassLoader();
        } catch (Throwable ignored) {
        }
        try {
            if (BActivityThread.getApplication() != null) {
                return BActivityThread.getApplication().getClassLoader();
            }
        } catch (Throwable ignored) {
        }
        return BlackBoxCore.getContext().getClassLoader();
    }

    private static TokenAttempt googleAuthUtilGetTokenAttempt(Context ctx, Account account, String scope) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            return new TokenAttempt(null, null);
        }
        try {
            ClassLoader cl = authApiClassLoader();
            Class<?> util = Class.forName("com.google.android.gms.auth.GoogleAuthUtil", true, cl);
            Method getToken = util.getMethod("getToken", Context.class, Account.class, String.class);
            Object token = getToken.invoke(null, ctx, account, scope);
            if (token instanceof String) {
                return new TokenAttempt((String) token, null);
            }
        } catch (java.lang.reflect.InvocationTargetException e) {
            Intent recovery = extractRecoveryIntent(e.getCause());
            if (recovery != null) {
                Slog.d(TAG, "GoogleAuthUtil needs recovery UI ctx=" + ctx.getPackageName());
                return new TokenAttempt(null, recovery);
            }
            Slog.w(TAG, "GoogleAuthUtil.getToken failed for " + account.name + " ctx="
                    + ctx.getPackageName(), e.getCause());
        } catch (Throwable t) {
            Intent recovery = extractRecoveryIntent(t);
            if (recovery != null) {
                return new TokenAttempt(null, recovery);
            }
            Slog.w(TAG, "GoogleAuthUtil.getToken failed for " + account.name, t);
        }
        return new TokenAttempt(null, null);
    }

    private static Intent extractRecoveryIntent(Throwable cause) {
        if (cause == null) {
            return null;
        }
        try {
            Class<?> ure = Class.forName(
                    "com.google.android.gms.auth.UserRecoverableAuthException", false, authApiClassLoader());
            if (ure.isInstance(cause)) {
                Method getIntent = ure.getMethod("getIntent");
                Object intent = getIntent.invoke(cause);
                if (intent instanceof Intent) {
                    return (Intent) intent;
                }
            }
        } catch (Throwable ignored) {
        }
        Throwable nested = cause.getCause();
        if (nested != null && nested != cause) {
            return extractRecoveryIntent(nested);
        }
        return null;
    }

    private static String googleAuthUtilGetToken(Context ctx, Account account, String scope) {
        TokenAttempt attempt = googleAuthUtilGetTokenAttempt(ctx, account, scope);
        return attempt.token;
    }

    static Intent assembleSignInResult(Account account, String serverAuthCode) {
        try {
            ClassLoader cl = gmsClassLoader();
            Object gsiAccount = buildGoogleSignInAccount(cl, account, serverAuthCode);
            if (gsiAccount == null) {
                return null;
            }
            Object okStatus = buildSuccessStatus(cl);
            if (okStatus == null) {
                return null;
            }

            Intent data = new Intent();
            data.setExtrasClassLoader(cl);
            putParcelableExtra(data, cl, gsiAccount,
                    "googleSignInAccount",
                    "com.google.android.gms.auth.api.signin.GoogleSignInAccount");
            putParcelableExtra(data, cl, okStatus,
                    "googleSignInStatus",
                    "com.google.android.gms.common.api.Status");
            return data;
        } catch (Throwable t) {
            Slog.w(TAG, "assembleSignInResult failed", t);
            return null;
        }
    }

    private static ClassLoader gmsClassLoader() {
        try {
            if (BActivityThread.getApplication() != null) {
                return BActivityThread.getApplication().getClassLoader();
            }
        } catch (Throwable ignored) {
        }
        return BlackBoxCore.getContext().getClassLoader();
    }

    private static Object buildGoogleSignInAccount(ClassLoader cl, Account account, String serverAuthCode) {
        try {
            Class<?> accountClass = Class.forName(
                    "com.google.android.gms.auth.api.signin.GoogleSignInAccount", true, cl);

            Object fromAccount = invokeStaticReturning(accountClass, account);
            if (fromAccount != null) {
                if (injectServerAuthCode(fromAccount, serverAuthCode)) {
                    return fromAccount;
                }
            }

            Object viaFactory = invokeCreateFactory(accountClass, account, serverAuthCode);
            if (viaFactory != null) {
                return viaFactory;
            }

            Constructor<?> ctor = accountClass.getDeclaredConstructor();
            ctor.setAccessible(true);
            Object empty = ctor.newInstance();
            setAllStringFields(empty, account.name);
            injectServerAuthCode(empty, serverAuthCode);
            return empty;
        } catch (Throwable t) {
            Slog.w(TAG, "buildGoogleSignInAccount failed", t);
            return null;
        }
    }

    private static Object invokeStaticReturning(Class<?> type, Account account) {
        for (Method method : type.getDeclaredMethods()) {
            if (!Modifier.isStatic(method.getModifiers())) {
                continue;
            }
            if (!type.isAssignableFrom(method.getReturnType())) {
                continue;
            }
            Class<?>[] params = method.getParameterTypes();
            if (params.length == 1 && params[0] == Account.class) {
                try {
                    method.setAccessible(true);
                    return method.invoke(null, account);
                } catch (Throwable ignored) {
                }
            }
        }
        try {
            Method fromAccount = type.getMethod("fromAccount", Account.class);
            return fromAccount.invoke(null, account);
        } catch (Throwable ignored) {
        }
        return null;
    }

    private static Object invokeCreateFactory(Class<?> type, Account account, String serverAuthCode) {
        for (Method method : type.getDeclaredMethods()) {
            if (!Modifier.isStatic(method.getModifiers())) {
                continue;
            }
            if (!type.isAssignableFrom(method.getReturnType())) {
                continue;
            }
            String name = method.getName().toLowerCase();
            if (!name.contains("create") && !name.equals("a") && !name.equals("zzc")) {
                continue;
            }
            try {
                method.setAccessible(true);
                Object[] args = buildStringArgs(method.getParameterTypes(), account, serverAuthCode);
                if (args != null) {
                    Object result = method.invoke(null, args);
                    if (result != null) {
                        return result;
                    }
                }
            } catch (Throwable ignored) {
            }
        }
        return null;
    }

    private static Object[] buildStringArgs(Class<?>[] params, Account account, String serverAuthCode) {
        Object[] args = new Object[params.length];
        int strIdx = 0;
        for (int i = 0; i < params.length; i++) {
            Class<?> p = params[i];
            if (p == String.class) {
                if (strIdx == 0) {
                    args[i] = account.name;
                } else if (strIdx == 1) {
                    args[i] = serverAuthCode;
                } else {
                    args[i] = null;
                }
                strIdx++;
            } else if (p == long.class) {
                args[i] = 0L;
            } else if (p == int.class) {
                args[i] = 0;
            } else if (p == boolean.class) {
                args[i] = false;
            } else if (p.getName().equals("android.net.Uri")) {
                args[i] = null;
            } else {
                return null;
            }
        }
        return args;
    }

    private static boolean injectServerAuthCode(Object gsiAccount, String serverAuthCode) {
        if (setFieldIfPresent(gsiAccount, "serverAuthCode", serverAuthCode)) {
            return true;
        }
        if (setFieldIfPresent(gsiAccount, "f", serverAuthCode)) {
            return true;
        }
        if (setFieldIfPresent(gsiAccount, "j", serverAuthCode)) {
            return true;
        }
        for (Field field : getAllFields(gsiAccount.getClass())) {
            if (field.getType() != String.class) {
                continue;
            }
            try {
                field.setAccessible(true);
                Object val = field.get(gsiAccount);
                if (val == null || ((String) val).isEmpty()) {
                    field.set(gsiAccount, serverAuthCode);
                    return true;
                }
            } catch (Throwable ignored) {
            }
        }
        return false;
    }

    private static void setAllStringFields(Object target, String value) {
        for (Field field : getAllFields(target.getClass())) {
            if (field.getType() == String.class) {
                try {
                    field.setAccessible(true);
                    if (field.get(target) == null) {
                        field.set(target, value);
                    }
                } catch (Throwable ignored) {
                }
            }
        }
    }

    private static List<Field> getAllFields(Class<?> type) {
        List<Field> fields = new ArrayList<>();
        while (type != null && type != Object.class) {
            for (Field field : type.getDeclaredFields()) {
                fields.add(field);
            }
            type = type.getSuperclass();
        }
        return fields;
    }

    private static boolean setFieldIfPresent(Object target, String name, String value) {
        try {
            Field field = target.getClass().getDeclaredField(name);
            field.setAccessible(true);
            field.set(target, value);
            return true;
        } catch (Throwable ignored) {
            return false;
        }
    }

    private static Object buildSuccessStatus(ClassLoader cl) {
        try {
            Class<?> statusClass = Class.forName("com.google.android.gms.common.api.Status", true, cl);
            try {
                Field successField = statusClass.getField("RESULT_SUCCESS");
                return successField.get(null);
            } catch (Throwable ignored) {
            }
            try {
                Constructor<?> ctor = statusClass.getConstructor(int.class);
                return ctor.newInstance(0);
            } catch (Throwable ignored) {
            }
            Constructor<?> empty = statusClass.getDeclaredConstructor();
            empty.setAccessible(true);
            return empty.newInstance();
        } catch (Throwable t) {
            Slog.w(TAG, "buildSuccessStatus failed", t);
            return null;
        }
    }

    private static void putParcelableExtra(Intent data, ClassLoader cl, Object parcelable,
                                           String key, String className) {
        data.putExtra(key, (android.os.Parcelable) parcelable);
        try {
            Class<?> type = Class.forName(className, false, cl);
            if (type.isInstance(parcelable)) {
                data.putExtra(key, (android.os.Parcelable) parcelable);
            }
        } catch (Throwable ignored) {
        }
    }
}
