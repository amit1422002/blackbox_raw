package com.anubis.loader.core;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.os.Bundle;
import android.os.IBinder;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;

import black.android.app.BRActivityThread;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.entity.pm.InstallResult;
import com.anubis.loader.fake.frameworks.BActivityManager;
import com.anubis.loader.utils.GmsOAuthAccountBridge;
import com.anubis.loader.utils.GmsOAuthHostFallback;
import com.anubis.loader.utils.GmsOAuthSignatureSpoof;
import com.anubis.loader.utils.Slog;
import org.lsposed.lsparanoid.Obfuscate;

@Obfuscate
public class GmsCore {
    private static final HashSet<String> GOOGLE_APP = new HashSet<>();
    private static final HashSet<String> GOOGLE_SERVICE = new HashSet<>();
    public static final String GMS_PKG = "com.google.android.gms";
    public static final String GSF_PKG = "com.google.android.gsf";
    public static final String VENDING_PKG = "com.android.vending";
    public static final String SETTINGS_PKG = "com.android.settings";
    private static final String GMS_PRE_ADD_ACCOUNT =
            "com.google.android.gms.auth.uiflows.addaccount.PreAddAccountActivity";
    public static final String EXTRA_EXTERNAL_GMS = "_B_|_external_gms_";
    public static final String EXTRA_GMS_TARGET = "_B_|_google_oauth_target_";
    public static final String EXTRA_OAUTH_RESULT_TO = "_B_|_oauth_result_to_";
    public static final String EXTRA_OAUTH_RESULT_WHO = "_B_|_oauth_result_who_";
    public static final String EXTRA_OAUTH_REQUEST_CODE = "_B_|_oauth_request_code_";
    public static final String EXTRA_OAUTH_INTERNAL_LAUNCH = "_B_|_oauth_internal_gms_";
    public static final String EXTRA_OAUTH_SERVER_CLIENT_ID = "_B_|_oauth_server_client_id_";
    public static final String EXTRA_SELECTED_ACCOUNT = "_B_|_oauth_selected_account_";
    public static final String EXTRA_PLAY_STORE_SIGN_IN = "_B_|_play_store_sign_in_";
    public static final String EXTRA_GUEST_EXTERNAL_GMS = "_B_|_guest_external_gms_";
    private static final String OAUTH_PROXY = "com.anubis.loader.proxy.GoogleOAuthProxyActivity";
    private static final String ACCOUNT_PICKER = "com.anubis.loader.proxy.GoogleAccountPickerActivity";
    private static final String PLAY_STORE_PICKER = "com.anubis.loader.proxy.PlayStoreAccountPickerActivity";

    private static volatile ExternalOAuthPending sExternalOAuthPending;
    private static volatile boolean sOAuthSignatureSpoofActive;
    private static volatile Object sPendingSignInConfig;
    private static volatile String sPendingGuestPkg;
    private static volatile String sPendingServerClientId;
    /** Matches SignInConfiguration.a — host for picker validation, guest for GetToken. */
    private static volatile String sOAuthSignInCallingPackage;
    private static volatile String sOAuthSelectedAccount;
    private static volatile boolean sPlayStoreAuthActive;
    private static volatile String sPlayStoreAuthGuestPkg;

    private static final class ExternalOAuthPending {
        final IBinder stubToken;
        final int gmsRequestCode;
        final IBinder signInHubResultTo;
        final String signInHubResultWho;
        final int signInHubRequestCode;

        ExternalOAuthPending(IBinder stubToken, int gmsRequestCode,
                             IBinder signInHubResultTo, String signInHubResultWho,
                             int signInHubRequestCode) {
            this.stubToken = stubToken;
            this.gmsRequestCode = gmsRequestCode;
            this.signInHubResultTo = signInHubResultTo;
            this.signInHubResultWho = signInHubResultWho;
            this.signInHubRequestCode = signInHubRequestCode;
        }
    }

    static {
        GOOGLE_APP.add(VENDING_PKG);
        GOOGLE_APP.add("com.google.android.play.games");
        GOOGLE_APP.add("com.google.android.wearable.app");
        GOOGLE_APP.add("com.google.android.wearable.app.cn");

        GOOGLE_SERVICE.add(GMS_PKG);
        GOOGLE_SERVICE.add(GSF_PKG);
        GOOGLE_SERVICE.add("com.google.android.gsf.login");
        GOOGLE_SERVICE.add("com.google.android.backuptransport");
        GOOGLE_SERVICE.add("com.google.android.backup");
        GOOGLE_SERVICE.add("com.google.android.configupdater");
        GOOGLE_SERVICE.add("com.google.android.syncadapters.contacts");
        GOOGLE_SERVICE.add("com.google.android.feedback");
        GOOGLE_SERVICE.add("com.google.android.onetimeinitializer");
        GOOGLE_SERVICE.add("com.google.android.partnersetup");
        GOOGLE_SERVICE.add("com.google.android.setupwizard");
        GOOGLE_SERVICE.add("com.google.android.syncadapters.calendar");
    }

    public static boolean isGoogleAppOrService(String str) {
        return GOOGLE_APP.contains(str) || GOOGLE_SERVICE.contains(str);
    }

    public static void prepareVirtualGmsSignIn(Intent intent, String guestPkg) {
        if (intent == null || guestPkg == null) {
            return;
        }
        intent.putExtra(EXTRA_OAUTH_INTERNAL_LAUNCH, true);
        intent.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
        try {
            if (BActivityThread.getApplication() != null) {
                intent.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
        sOAuthSignatureSpoofActive = true;
        sPendingGuestPkg = guestPkg;
        GmsOAuthAccountBridge.refreshHostAccountCache();
        try {
            BlackBoxCore.getBActivityManager().beginOAuthSession(guestPkg);
        } catch (Throwable t) {
            Slog.w("GmsCore", "beginOAuthSession failed", t);
        }
        pinVirtualGmsSignInComponent(intent);
        rememberSignInConfiguration(intent, guestPkg);
        String selected = getOAuthSelectedAccount();
        if (selected != null && !selected.isEmpty()) {
            patchSignInConfigurationInteractive(intent, selected);
        }
        // Keep game's SignInConfiguration untouched; identity hooks use guest via server session.
        persistOAuthSignInCallingPackage(guestPkg);
        Slog.d("GmsCore", "virtual SignIn: preserve config, identity -> " + guestPkg
                + " component=" + intent.getComponent());
    }

    private static void rememberSignInConfiguration(Intent intent, String guestPkg) {
        Bundle extras = intent != null ? intent.getExtras() : null;
        if (extras == null) {
            return;
        }
        try {
            for (String key : extras.keySet()) {
                Object value = extras.get(key);
                if (value != null && value.getClass().getName().contains("SignInConfiguration")) {
                    sPendingSignInConfig = value;
                    sPendingGuestPkg = guestPkg;
                    sPendingServerClientId = GmsOAuthHostFallback.extractServerClientIdFromObject(value);
                    if (sPendingServerClientId == null) {
                        sPendingServerClientId = GmsOAuthHostFallback.extractServerClientId(intent);
                    }
                    if (sPendingServerClientId != null) {
                        Slog.d("GmsCore", "cached OAuth server client id");
                    }
                    return;
                }
            }
        } catch (Throwable ignored) {
        }
    }

    public static String getOAuthSignInCallingPackage() {
        try {
            BActivityManager am = BlackBoxCore.getBActivityManager();
            if (am.isOAuthSessionActive()) {
                String pkg = am.getOAuthSignInCallingPackage();
                if (pkg != null) {
                    return pkg;
                }
            }
        } catch (Throwable ignored) {
        }
        return sOAuthSignInCallingPackage;
    }

    private static void persistOAuthSignInCallingPackage(String pkg) {
        sOAuthSignInCallingPackage = pkg;
        try {
            BlackBoxCore.getBActivityManager().setOAuthSignInCallingPackage(pkg);
        } catch (Throwable t) {
            Slog.w("GmsCore", "persistOAuthSignInCallingPackage failed", t);
        }
    }

    /** Enables OAuth hooks (signature spoof, device AM token bridge) for guest sign-in. */
    public static void activateOAuthSession(String guestPkg) {
        if (guestPkg == null) {
            return;
        }
        sOAuthSignatureSpoofActive = true;
        sPendingGuestPkg = guestPkg;
        persistOAuthSignInCallingPackage(guestPkg);
        Slog.d("GmsCore", "activateOAuthSession guest=" + guestPkg);
    }

    public static void setOAuthSelectedAccount(String email) {
        sOAuthSelectedAccount = email;
        if (email != null && !email.isEmpty()) {
            com.anubis.loader.utils.OAuthHostAccountStore.persistSelectedAccount(email);
        }
        try {
            BlackBoxCore.getBActivityManager().setOAuthSelectedAccount(email);
        } catch (Throwable ignored) {
        }
    }

    public static String getOAuthSelectedAccount() {
        try {
            String fromServer = BlackBoxCore.getBActivityManager().getOAuthSelectedAccount();
            if (fromServer != null && !fromServer.isEmpty()) {
                return fromServer;
            }
        } catch (Throwable ignored) {
        }
        if (sOAuthSelectedAccount != null && !sOAuthSelectedAccount.isEmpty()) {
            return sOAuthSelectedAccount;
        }
        return com.anubis.loader.utils.OAuthHostAccountStore.getSelectedAccount();
    }

    public static boolean isOAuthSessionActive() {
        try {
            return BlackBoxCore.getBActivityManager().isOAuthSessionActive();
        } catch (Throwable ignored) {
            return false;
        }
    }

    private static void pinVirtualGmsSignInComponent(Intent intent) {
        if (intent == null || !GMS_PKG.equals(getIntentPackage(intent))) {
            return;
        }
        if (intent.getComponent() != null) {
            return;
        }
        String action = intent.getAction();
        if (action != null && action.toLowerCase().contains("google_sign_in")) {
            intent.setComponent(new ComponentName(GMS_PKG,
                    "com.google.android.gms.auth.api.signin.ui.SignInActivity"));
            intent.setPackage(GMS_PKG);
        }
    }
    public static String getIntentPackage(Intent intent) {
        if (intent == null) return null;
        String pkg = intent.getPackage();
        if (pkg == null && intent.getComponent() != null) {
            pkg = intent.getComponent().getPackageName();
        }
        return pkg;
    }

    public static boolean isGoogleIntent(Intent intent) {
        if (intent == null) return false;
        String action = intent.getAction();
        if (action != null) {
            String lower = action.toLowerCase();
            if (lower.contains("google.android.gms")
                    || lower.contains("google_sign_in")
                    || lower.contains("choose_account")
                    || lower.contains("credentials")) {
                return true;
            }
        }
        String pkg = getIntentPackage(intent);
        if (pkg != null && isGoogleAppOrService(pkg)) return true;
        if (intent.getCategories() != null) {
            for (String cat : intent.getCategories()) {
                if (cat != null && cat.toLowerCase().contains("google")) return true;
            }
        }
        return false;
    }

    public static boolean isGoogleIntentArray(Intent[] intents) {
        if (intents == null) return false;
        for (Intent intent : intents) {
            if (isGoogleIntent(intent)) return true;
        }
        return false;
    }

    private static PackageManager getSystemPackageManager() {
        try {
            Class<?> at = Class.forName("android.app.ActivityThread");
            Object thread = at.getMethod("currentActivityThread").invoke(null);
            Context ctx = (Context) at.getMethod("getSystemContext").invoke(thread);
            return ctx.getPackageManager();
        } catch (Throwable ignored) {
            return BlackBoxCore.getContext().getPackageManager();
        }
    }

    public static int getHostPackageUid(String guestPkg) {
        if (guestPkg == null) return -1;
        try {
            return getSystemPackageManager().getApplicationInfo(guestPkg, 0).uid;
        } catch (PackageManager.NameNotFoundException ignored) {
            return -1;
        }
    }

    public static boolean isGoogleOAuthProxy(Intent intent) {
        ComponentName component = intent != null ? intent.getComponent() : null;
        return component != null && isOAuthHelperClass(component.getClassName());
    }

    public static boolean isGoogleOAuthProxyClass(String className) {
        return isOAuthHelperClass(className);
    }

    public static boolean isOAuthHelperClass(String className) {
        return className != null
                && (className.equals(OAUTH_PROXY)
                || className.equals(ACCOUNT_PICKER)
                || className.equals(PLAY_STORE_PICKER));
    }

    public static boolean isPlayStoreAccountPicker(Intent intent) {
        ComponentName component = intent != null ? intent.getComponent() : null;
        return component != null && PLAY_STORE_PICKER.equals(component.getClassName());
    }

    public static boolean isPlayStoreAccountPickerClass(String className) {
        return PLAY_STORE_PICKER.equals(className);
    }

    public static void beginPlayStoreAuthSession(String guestPkg) {
        sPlayStoreAuthActive = true;
        sPlayStoreAuthGuestPkg = guestPkg != null ? guestPkg : VENDING_PKG;
        Slog.d("GmsCore", "beginPlayStoreAuthSession guest=" + sPlayStoreAuthGuestPkg);
    }

    public static void endPlayStoreAuthSession() {
        if (sPlayStoreAuthActive) {
            Slog.d("GmsCore", "endPlayStoreAuthSession guest=" + sPlayStoreAuthGuestPkg);
        }
        sPlayStoreAuthActive = false;
        sPlayStoreAuthGuestPkg = null;
    }

    public static boolean isPlayStoreAuthActive() {
        return sPlayStoreAuthActive;
    }

    public static String playStoreAuthGuestPackage() {
        return sPlayStoreAuthGuestPkg != null ? sPlayStoreAuthGuestPkg : VENDING_PKG;
    }

    /** Virtual GMS auth/token UI during Play Store sign-in — must run on host GMS. */
    public static boolean isPlayStoreGmsAuthIntent(Intent intent) {
        if (intent == null) {
            return false;
        }
        String targetPkg = getIntentPackage(intent);
        if (!GMS_PKG.equals(targetPkg)) {
            return false;
        }
        ComponentName component = intent.getComponent();
        if (component != null) {
            String cls = component.getClassName().toLowerCase();
            if (cls.contains("gettoken") || cls.contains("addaccount")
                    || cls.contains("preaddaccount") || cls.contains("uiflows")
                    || cls.contains("signin") || cls.contains("sign_in")
                    || cls.contains("accountintro") || cls.contains("minutemaid")) {
                return true;
            }
        }
        String action = intent.getAction();
        if (action != null) {
            String lower = action.toLowerCase();
            return lower.contains("auth") || lower.contains("sign_in")
                    || lower.contains("signin") || lower.startsWith("com.google.android.gms");
        }
        return false;
    }

    public static String getCachedOAuthServerClientId() {
        return sPendingServerClientId;
    }

    /** Guest OAuth config on host GMS — keeps com.pubg.imobile in SignInConfiguration. */
    public static void prepareGuestExternalGmsSignIn(Intent intent, String guestPkg) {
        if (intent == null || guestPkg == null) {
            return;
        }
        pinIntentToHost(intent);
        intent.putExtra(EXTRA_EXTERNAL_GMS, true);
        intent.putExtra(EXTRA_GUEST_EXTERNAL_GMS, true);
        intent.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
        try {
            if (BActivityThread.getApplication() != null) {
                intent.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
        sOAuthSignatureSpoofActive = true;
        sPendingGuestPkg = guestPkg;
        GmsOAuthAccountBridge.refreshHostAccountCache();
        try {
            BlackBoxCore.getBActivityManager().beginOAuthSession(guestPkg);
        } catch (Throwable t) {
            Slog.w("GmsCore", "beginOAuthSession failed", t);
        }
        rememberSignInConfiguration(intent, guestPkg);
        String selected = getOAuthSelectedAccount();
        if (selected != null && !selected.isEmpty()) {
            patchSignInConfigurationInteractive(intent, selected);
        }
        persistOAuthSignInCallingPackage(guestPkg);
        Slog.d("GmsCore", "guest external SignIn: identity -> " + guestPkg);
    }

    /** Launch real host GMS SignInActivity (after account picker). */
    public static Intent buildHostGmsSignInIntent(Intent gmsLaunch, String guestPkg, String accountEmail) {
        Intent gms = new Intent(gmsLaunch);
        try {
            if (BActivityThread.getApplication() != null) {
                gms.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
        if (guestPkg != null) {
            gms.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
            try {
                BlackBoxCore.getBActivityManager().beginOAuthSession(guestPkg);
            } catch (Throwable t) {
                Slog.w("GmsCore", "beginOAuthSession failed", t);
            }
        }
        // Host package for real GMS UI + device AM; guest identity via PM hooks only.
        prepareExternalGmsSignIn(gms, guestPkg != null ? guestPkg : BlackBoxCore.getHostPkg());
        patchSignInConfigurationInteractive(gms, accountEmail);
        Slog.d("GmsCore", "host GMS SignIn guest=" + guestPkg + " account=" + accountEmail);
        return gms;
    }

    public static Intent buildAccountPickerIntent(Intent gmsLaunch, String guestPkg) {
        try {
            if (BActivityThread.getApplication() != null && gmsLaunch != null) {
                gmsLaunch.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
        Intent picker = new Intent();
        picker.setComponent(new ComponentName(BlackBoxCore.getHostPkg(), ACCOUNT_PICKER));
        picker.putExtra(EXTRA_GMS_TARGET, new Intent(gmsLaunch));
        if (guestPkg != null) {
            picker.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
        }
        String clientId = sPendingServerClientId;
        if (clientId == null) {
            clientId = GmsOAuthHostFallback.extractServerClientId(gmsLaunch);
        }
        if (clientId == null && guestPkg != null) {
            clientId = GmsOAuthHostFallback.readDefaultWebClientId(guestPkg);
        }
        if (clientId != null) {
            picker.putExtra(EXTRA_OAUTH_SERVER_CLIENT_ID, clientId);
            sPendingServerClientId = clientId;
        }
        return picker;
    }

    public static void markOAuthInternalLaunch(Intent intent) {
        if (intent != null) {
            intent.putExtra(EXTRA_OAUTH_INTERNAL_LAUNCH, true);
        }
    }

    /** Copy SignInConfiguration (and related OAuth extras) for GetToken / recovery intents. */
    public static void copyOAuthSignInExtras(Intent from, Intent to) {
        if (from == null || to == null) {
            return;
        }
        Bundle src = from.getExtras();
        if (src == null) {
            return;
        }
        try {
            prepareIntentExtrasClassLoader(from);
            for (String key : src.keySet()) {
                Object value = src.get(key);
                if (value == null) {
                    continue;
                }
                String cls = value.getClass().getName();
                if (cls.contains("SignInConfiguration")
                        || cls.contains("SignInAccount")
                        || cls.contains("GoogleSignInOptions")
                        || cls.contains("Config")) {
                    if (value instanceof android.os.Parcelable) {
                        to.putExtra(key, (android.os.Parcelable) value);
                    } else if (value instanceof java.io.Serializable) {
                        to.putExtra(key, (java.io.Serializable) value);
                    }
                }
            }
            String guestPkg = from.getStringExtra(EXTRA_GMS_TARGET + "_guest_pkg");
            if (guestPkg != null) {
                to.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "copyOAuthSignInExtras failed", t);
        }
    }

    public static boolean shouldLaunchExternalGmsSignIn(Intent intent, String guestPkg) {
        if (intent == null) {
            return false;
        }
        if (isGoogleOAuthProxy(intent) || intent.getBooleanExtra(EXTRA_EXTERNAL_GMS, false)) {
            return false;
        }
        if (intent.getBooleanExtra(EXTRA_OAUTH_INTERNAL_LAUNCH, false)) {
            return false;
        }
        if (isPlayStoreAuthActive() && isPlayStoreGmsAuthIntent(intent)) {
            return true;
        }
        if (!shouldUseHostGoogle(guestPkg)) {
            return false;
        }
        // Recovery / consent / virtual GMS during an active OAuth session — launch directly.
        if (isOAuthSessionActive() || isOAuthSignatureSpoofActive()) {
            return false;
        }
        String targetPkg = getIntentPackage(intent);
        if (!GMS_PKG.equals(targetPkg)) return false;
        String action = intent.getAction();
        if (action != null) {
            String lower = action.toLowerCase();
            if (lower.contains("sign_in") || lower.contains("signin")
                    || lower.contains("google_sign_in") || lower.contains("auth")) {
                return true;
            }
        }
        ComponentName component = intent.getComponent();
        if (component != null) {
            String cls = component.getClassName().toLowerCase();
            if (cls.contains("signin") || cls.contains("sign_in") || cls.contains("auth")
                    || cls.contains("addaccount") || cls.contains("preaddaccount")
                    || cls.contains("accountintro") || cls.contains("minutemaid")) {
                return true;
            }
        }
        return action != null && action.startsWith("com.google.android.gms");
    }

    public static Intent wrapGmsSignInIntent(Intent gmsIntent, String guestPkg) {
        Intent gms = new Intent(gmsIntent);
        if (guestPkg != null) {
            gms.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
        }
        Intent wrap = new Intent();
        wrap.setComponent(new ComponentName(BlackBoxCore.getHostPkg(), OAUTH_PROXY));
        wrap.putExtra(EXTRA_GMS_TARGET, gms);
        if (guestPkg != null) {
            wrap.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
        }
        return wrap;
    }

    public static void prepareExternalGmsSignIn(Intent intent, String guestPkg) {
        pinIntentToHost(intent);
        intent.putExtra(EXTRA_EXTERNAL_GMS, true);
        intent.putExtra(EXTRA_GMS_TARGET + "_guest_pkg", guestPkg);
        try {
            if (BActivityThread.getApplication() != null) {
                intent.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
        sOAuthSignatureSpoofActive = true;
        GmsOAuthAccountBridge.refreshHostAccountCache();
        // Host package opens real GMS picker; GetToken re-patch uses guestPkg in proxy onActivityResult.
        String hostPkg = BlackBoxCore.getHostPkg();
        alignSignInConfigurationCallingPackage(intent, guestPkg, hostPkg);
        Slog.d("GmsCore", "external SignIn: config.a -> " + hostPkg + " (guest=" + guestPkg + ")");
    }

    public static boolean isOAuthSignatureSpoofActive() {
        return sOAuthSignatureSpoofActive || hasExternalOAuthPending();
    }

    private static void endOAuthSignatureSpoof() {
        sOAuthSignatureSpoofActive = false;
        sOAuthSignInCallingPackage = null;
    }

    private static void alignSignInConfigurationCallingPackage(Intent intent, String guestPkg, String hostPkg) {
        if (intent == null || guestPkg == null || hostPkg == null) return;
        Bundle extras = intent.getExtras();
        if (extras == null) return;
        try {
            for (String key : extras.keySet()) {
                Object value = extras.get(key);
                if (value == null) continue;
                if (!value.getClass().getName().contains("SignInConfiguration")) continue;

                // Store reference for Phase 2 re-patch
                sPendingSignInConfig = value;
                sPendingGuestPkg = guestPkg;

                if (patchSignInConfigurationFieldA(value, hostPkg)) {
                    Slog.d("GmsCore", "SignInConfiguration.a -> " + hostPkg + " (launch match)");
                } else if (isSignInConfigurationFieldA(value, hostPkg)) {
                    Slog.d("GmsCore", "SignInConfiguration.a already " + hostPkg);
                }
                persistOAuthSignInCallingPackage(hostPkg);
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "alignSignInConfigurationCallingPackage failed", t);
        }
    }

    /**
     * Call this when picker returns RESULT_OK — re-patch config back to guest package
     * so GetToken uses com.pubg.imobile + BGMI SHA-1 for Google server validation.
     */
    public static void rePatchSignInConfigForGetToken() {
        if (sPendingSignInConfig != null && sPendingGuestPkg != null) {
            if (patchSignInConfigurationFieldA(sPendingSignInConfig, sPendingGuestPkg)) {
                Slog.d("GmsCore", "Phase 2: SignInConfiguration.a -> " + sPendingGuestPkg + " (for GetToken)");
            }
            persistOAuthSignInCallingPackage(sPendingGuestPkg);
            sPendingSignInConfig = null;
            sPendingGuestPkg = null;
        }
    }

    /** Re-patch SignInConfiguration inside an activity intent (same object refs as launch intent). */
    public static void patchSignInConfigInIntent(Intent intent, String guestPkg) {
        if (intent == null || guestPkg == null) {
            return;
        }
        Bundle extras = intent.getExtras();
        if (extras == null) {
            return;
        }
        try {
            for (String key : extras.keySet()) {
                Object value = extras.get(key);
                if (value != null && value.getClass().getName().contains("SignInConfiguration")) {
                    patchSignInConfigurationFieldA(value, guestPkg);
                }
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "patchSignInConfigInIntent failed", t);
        }
    }

    private static boolean patchSignInConfigurationFieldA(Object config, String pkg) {
        boolean patched = false;
        try {
            Field fieldA = config.getClass().getDeclaredField("a");
            fieldA.setAccessible(true);
            Object val = fieldA.get(config);
            if (!pkg.equals(val)) {
                fieldA.set(config, pkg);
                Slog.d("GmsCore", "patched SignInConfiguration.a " + val + " -> " + pkg);
                patched = true;
            }
        } catch (Throwable ignored) {
        }
        String hostPkg = BlackBoxCore.getHostPkg();
        try {
            Class<?> type = config.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    if (field.getType() != String.class) {
                        continue;
                    }
                    field.setAccessible(true);
                    Object raw = field.get(config);
                    if (!(raw instanceof String)) {
                        continue;
                    }
                    String val = (String) raw;
                    if (!val.contains(".") || val.length() < 3) {
                        continue;
                    }
                    if (!val.equals(hostPkg) && !val.equals(GmsOAuthSignatureSpoof.BGMI_PKG)
                            && !val.equals(GMS_PKG)) {
                        continue;
                    }
                    if (pkg.equals(val)) {
                        continue;
                    }
                    field.set(config, pkg);
                    Slog.d("GmsCore", "patched SignInConfiguration." + field.getName()
                            + " " + val + " -> " + pkg);
                    patched = true;
                }
                type = type.getSuperclass();
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "patchSignInConfigurationFieldA scan failed", t);
        }
        return patched;
    }

    private static boolean isSignInConfigurationFieldA(Object config, String pkg) {
        try {
            Field fieldA = config.getClass().getDeclaredField("a");
            fieldA.setAccessible(true);
            return pkg.equals(fieldA.get(config));
        } catch (Throwable ignored) {
            return false;
        }
    }

    public static void patchPendingSignInConfigurationInteractive(String accountEmail) {
        if (sPendingSignInConfig == null || accountEmail == null || accountEmail.isEmpty()) {
            return;
        }
        android.accounts.Account account = new android.accounts.Account(
                accountEmail, GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE);
        int patched = patchSignInConfigObject(sPendingSignInConfig, account);
        Slog.d("GmsCore", "patchPendingSignInConfiguration patched=" + patched);
    }

    /** Disable silent-only SignIn so GMS shows consent UI instead of instant cancel. */
    public static void patchSignInConfigurationInteractive(Intent intent, String accountEmail) {
        if (intent == null) {
            return;
        }
        android.accounts.Account account = null;
        if (accountEmail != null && !accountEmail.isEmpty()) {
            account = new android.accounts.Account(
                    accountEmail, GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE);
        }
        prepareIntentExtrasClassLoader(intent);
        int patched = 0;
        Bundle extras = intent.getExtras();
        if (extras != null) {
            patched += patchSignInInBundle(extras, account, 0);
        }
        if (sPendingSignInConfig != null && account != null) {
            patched += patchSignInConfigObject(sPendingSignInConfig, account);
        }
        Slog.d("GmsCore", "patchSignInConfigurationInteractive patched=" + patched);
        intent.removeExtra("accountName");
        intent.removeExtra(android.accounts.AccountManager.KEY_ACCOUNT_NAME);
        intent.removeExtra("authAccount");
    }

    private static void prepareIntentExtrasClassLoader(Intent intent) {
        try {
            if (BActivityThread.getApplication() != null) {
                intent.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
            Bundle extras = intent.getExtras();
            if (extras != null && BActivityThread.getApplication() != null) {
                extras.setClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
    }

    private static int patchSignInInBundle(Bundle bundle, android.accounts.Account account, int depth) {
        if (bundle == null || depth > 10) {
            return 0;
        }
        int patched = 0;
        try {
            for (String key : bundle.keySet()) {
                Object value;
                try {
                    value = bundle.get(key);
                } catch (Throwable ignored) {
                    continue;
                }
                if (value instanceof Bundle) {
                    patched += patchSignInInBundle((Bundle) value, account, depth + 1);
                } else if (value != null) {
                    patched += patchSignInConfigObject(value, account);
                }
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "patchSignInInBundle failed", t);
        }
        return patched;
    }

    private static int patchSignInConfigObject(Object value, android.accounts.Account account) {
        if (value == null) {
            return 0;
        }
        if (isSignInConfigurationLike(value)) {
            forceSignInConfigurationInteractive(value, account);
            Slog.d("GmsCore", "patched SignInConfiguration " + value.getClass().getName());
            return 1;
        }
        if (isGoogleSignInOptionsLike(value) && account != null) {
            Object rebuilt = rebuildGoogleSignInOptions(value, account.name);
            if (rebuilt != null) {
                injectAccountIntoGoogleSignInOptions(rebuilt, account);
            }
            Slog.d("GmsCore", "patched GoogleSignInOptions " + value.getClass().getName());
            return 1;
        }
        return 0;
    }

    private static boolean isSignInConfigurationLike(Object obj) {
        return obj.getClass().getName().contains("SignInConfiguration");
    }

    private static boolean isGoogleSignInOptionsLike(Object obj) {
        String cn = obj.getClass().getName();
        return cn.contains("GoogleSignInOptions") && !cn.contains("SignInConfiguration");
    }

    private static boolean hasFieldOfType(Object obj, Class<?> type) {
        try {
            Class<?> cls = obj.getClass();
            while (cls != null && cls != Object.class) {
                for (Field field : cls.getDeclaredFields()) {
                    if (field.getType() == type) {
                        return true;
                    }
                }
                cls = cls.getSuperclass();
            }
        } catch (Throwable ignored) {
        }
        return false;
    }

    private static void forceSignInConfigurationInteractive(Object config,
                                                            android.accounts.Account account) {
        if (account != null) {
            injectAccountIntoSignInConfiguration(config, account);
            String pkg = getOAuthSignInCallingPackage();
            if (pkg == null) {
                pkg = sPendingGuestPkg;
            }
            if (pkg != null) {
                patchSignInConfigurationFieldA(config, pkg);
            }
            Object gso = findGoogleSignInOptionsInObject(config);
            if (gso != null) {
                injectAccountIntoGoogleSignInOptions(gso, account);
                Slog.d("GmsCore", "set GoogleSignInOptions account -> " + account.name);
            }
            // Only relax account-only gate — do not zero all boolean/int config fields.
            disableSignInAccountOnlyField(config);
            return;
        }
        disableSignInConfigurationSilentOnly(config);
        disableSilentModeNumericFlags(config);
        disableSignInAccountOnlyField(config);
    }

    private static void disableSignInAccountOnlyField(Object config) {
        try {
            Class<?> type = config.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    String name = field.getName().toLowerCase();
                    if (!name.contains("accountonly") && !name.equals("zzd") && !name.equals("zzg")) {
                        continue;
                    }
                    if (field.getType() == boolean.class || field.getType() == Boolean.TYPE) {
                        field.setAccessible(true);
                        setFieldValueIgnoringFinal(field, config, false);
                        Slog.d("GmsCore", "disabled SignInConfiguration." + field.getName());
                    }
                }
                type = type.getSuperclass();
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "disableSignInAccountOnlyField failed", t);
        }
    }

    private static void clearAccountFromGoogleSignInOptions(Object options) {
        if (options == null) {
            return;
        }
        try {
            Class<?> type = options.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    if (field.getType() != android.accounts.Account.class
                            && field.getType() != String.class) {
                        continue;
                    }
                    field.setAccessible(true);
                    String fname = field.getName().toLowerCase();
                    if (field.getType() == String.class
                            && !fname.contains("account") && !fname.equals("zzb")) {
                        continue;
                    }
                    setFieldValueIgnoringFinal(field, options,
                            field.getType() == String.class ? null : null);
                    Slog.d("GmsCore", "cleared GoogleSignInOptions." + field.getName());
                }
                type = type.getSuperclass();
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "clearAccountFromGoogleSignInOptions failed", t);
        }
    }

    private static Object findGoogleSignInOptionsInObject(Object root) {
        if (root == null) {
            return null;
        }
        if (isGoogleSignInOptionsLike(root)) {
            return root;
        }
        if (isSignInConfigurationLike(root)) {
            // Search nested fields only — never treat SignInConfiguration as GoogleSignInOptions.
        } else {
            return null;
        }
        try {
            Class<?> type = root.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    field.setAccessible(true);
                    Object val = field.get(root);
                    if (val != null && isGoogleSignInOptionsLike(val)) {
                        return val;
                    }
                }
                type = type.getSuperclass();
            }
        } catch (Throwable ignored) {
        }
        return null;
    }

    private static void replaceFieldHoldingObject(Object holder, Object oldVal, Object newVal) {
        try {
            Class<?> type = holder.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    field.setAccessible(true);
                    if (field.get(holder) == oldVal) {
                        setFieldValueIgnoringFinal(field, holder, newVal);
                        Slog.d("GmsCore", "replaced " + field.getName() + " on "
                                + holder.getClass().getSimpleName());
                        return;
                    }
                }
                type = type.getSuperclass();
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "replaceFieldHoldingObject failed", t);
        }
    }

    private static Object rebuildGoogleSignInOptions(Object existing, String accountName) {
        if (existing == null || accountName == null) {
            return existing;
        }
        try {
            Class<?> gsoClass = existing.getClass();
            Class<?> builderClass = null;
            for (Class<?> inner : gsoClass.getDeclaredClasses()) {
                if ("Builder".equals(inner.getSimpleName())) {
                    builderClass = inner;
                    break;
                }
            }
            if (builderClass == null) {
                try {
                    builderClass = Class.forName(gsoClass.getName() + "$Builder", true,
                            gsoClass.getClassLoader());
                } catch (ClassNotFoundException ignored) {
                    return existing;
                }
            }
            Constructor<?> ctor = builderClass.getConstructor(gsoClass);
            Object builder = ctor.newInstance(existing);
            Method setAccountName = builderClass.getMethod("setAccountName", String.class);
            builder = setAccountName.invoke(builder, accountName);
            Method build = builderClass.getMethod("build");
            Object built = build.invoke(builder);
            Slog.d("GmsCore", "rebuilt GoogleSignInOptions for " + accountName);
            return built;
        } catch (Throwable t) {
            Slog.w("GmsCore", "rebuildGoogleSignInOptions failed", t);
            return existing;
        }
    }

    private static void disableSilentModeNumericFlags(Object config) {
        try {
            Class<?> type = config.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    if (field.getType() != int.class && field.getType() != Integer.TYPE) {
                        continue;
                    }
                    field.setAccessible(true);
                    if (field.getInt(config) == 1) {
                        setFieldValueIgnoringFinal(field, config, 0);
                        Slog.d("GmsCore", "zeroed SignInConfiguration." + field.getName());
                    }
                }
                type = type.getSuperclass();
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "disableSilentModeNumericFlags failed", t);
        }
    }

    private static void disableSignInConfigurationSilentOnly(Object config) {
        if (config == null) {
            return;
        }
        try {
            Class<?> type = config.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    if (field.getType() != boolean.class && field.getType() != Boolean.TYPE) {
                        continue;
                    }
                    field.setAccessible(true);
                    boolean current = field.getBoolean(config);
                    if (!current) {
                        continue;
                    }
                    setFieldValueIgnoringFinal(field, config, false);
                    Slog.d("GmsCore", "disabled SignInConfiguration." + field.getName());
                }
                type = type.getSuperclass();
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "disableSignInConfigurationSilentOnly failed", t);
        }
    }

    private static void setFieldValueIgnoringFinal(Field field, Object target, Object value)
            throws IllegalAccessException {
        try {
            Field modifiers = Field.class.getDeclaredField("accessFlags");
            modifiers.setAccessible(true);
            modifiers.setInt(field, field.getModifiers() & ~Modifier.FINAL);
        } catch (Throwable ignored) {
        }
        field.set(target, value);
    }

    /** @deprecated use {@link #patchSignInConfigurationInteractive} */
    public static void patchSignInConfigurationSelectedAccount(Intent intent, String accountEmail) {
        patchSignInConfigurationInteractive(intent, accountEmail);
    }

    private static void injectAccountIntoSignInConfiguration(Object config,
                                                             android.accounts.Account account) {
        if (config == null || account == null) {
            return;
        }
        try {
            Class<?> type = config.getClass();
            while (type != null && type != Object.class) {
                for (Field field : type.getDeclaredFields()) {
                    field.setAccessible(true);
                    if (field.getType() == android.accounts.Account.class) {
                        setFieldValueIgnoringFinal(field, config, account);
                        Slog.d("GmsCore", "patched SignInConfiguration." + field.getName()
                                + " -> " + account.name);
                    }
                    Object val = field.get(config);
                    if (val != null && isGoogleSignInOptionsLike(val)) {
                        injectAccountIntoGoogleSignInOptions(val, account);
                    }
                }
                type = type.getSuperclass();
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "injectAccountIntoSignInConfiguration failed", t);
        }
    }

    private static void injectAccountIntoGoogleSignInOptions(Object options,
                                                             android.accounts.Account account) {
        try {
            Class<?> type = options.getClass();
            for (Field field : type.getDeclaredFields()) {
                if (field.getType() == android.accounts.Account.class) {
                    field.setAccessible(true);
                    setFieldValueIgnoringFinal(field, options, account);
                    Slog.d("GmsCore", "patched GoogleSignInOptions." + field.getName()
                            + " -> " + account.name);
                    return;
                }
            }
            for (String name : new String[]{"zza", "zzb", "account", "zze", "zzf"}) {
                try {
                    Field field = type.getDeclaredField(name);
                    if (field.getType() == android.accounts.Account.class) {
                        field.setAccessible(true);
                        setFieldValueIgnoringFinal(field, options, account);
                        Slog.d("GmsCore", "patched GoogleSignInOptions." + name + " -> " + account.name);
                        return;
                    }
                } catch (NoSuchFieldException ignored) {
                }
            }
            for (java.lang.reflect.Method method : type.getDeclaredMethods()) {
                if (method.getParameterTypes().length == 1
                        && method.getParameterTypes()[0] == android.accounts.Account.class) {
                    method.setAccessible(true);
                    method.invoke(options, account);
                    Slog.d("GmsCore", "patched GoogleSignInOptions via " + method.getName());
                    return;
                }
            }
        } catch (Throwable t) {
            Slog.w("GmsCore", "injectAccountIntoGoogleSignInOptions failed", t);
        }
    }

    public static void registerExternalOAuthPending(IBinder stubToken, int gmsRequestCode,
                                                    IBinder signInHubResultTo, String signInHubResultWho,
                                                    int signInHubRequestCode) {
        if (stubToken == null || signInHubResultTo == null) return;
        sExternalOAuthPending = new ExternalOAuthPending(
                stubToken, gmsRequestCode, signInHubResultTo, signInHubResultWho, signInHubRequestCode);
        Slog.d("GmsCore", "registered external OAuth relay req=" + gmsRequestCode);
    }

    public static void clearExternalOAuthPending() {
        sExternalOAuthPending = null;
        sOAuthSelectedAccount = null;
        endOAuthSignatureSpoof();
        try {
            BlackBoxCore.getBActivityManager().setOAuthSelectedAccount(null);
        } catch (Throwable ignored) {
        }
    }

    public static boolean isGoogleSignInResultData(Intent data) {
        if (data == null) {
            return false;
        }
        Bundle extras = data.getExtras();
        if (extras == null || extras.isEmpty()) {
            return false;
        }
        try {
            if (BActivityThread.getApplication() != null) {
                extras.setClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
        if (extras.containsKey("googleSignInAccount") || extras.containsKey("googleSignInStatus")) {
            return true;
        }
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
            String name = value.getClass().getName();
            if (name.contains("GoogleSignInAccount") || name.contains("com.google.android.gms.common.api.Status")) {
                return true;
            }
        }
        return false;
    }

    public static boolean hasExternalOAuthPending() {
        return sExternalOAuthPending != null;
    }

    public static boolean tryRelayExternalOAuthResult(IBinder stubToken, int requestCode,
                                                      int resultCode, Intent data) {
        ExternalOAuthPending pending = sExternalOAuthPending;
        if (pending == null) return false;
        boolean tokenMatch = pending.stubToken == stubToken
                || (stubToken != null && stubToken.equals(pending.stubToken));
        if (!tokenMatch || pending.gmsRequestCode != requestCode) {
            Slog.w("GmsCore", "relay token/req mismatch: tokenMatch=" + tokenMatch
                    + " reqMatch=" + (pending.gmsRequestCode == requestCode));
            return false;
        }
        // Let GoogleOAuthProxyActivity handle cancel/fallback — premature relay crashes SignInHub.
        if (resultCode == android.app.Activity.RESULT_CANCELED) {
            Slog.d("GmsCore", "defer cancel relay to OAuth proxy");
            return false;
        }
        if (data != null && data.hasExtra(EXTRA_SELECTED_ACCOUNT)) {
            Slog.d("GmsCore", "skip relay — account picker handoff only");
            return false;
        }
        if (!isGoogleSignInResultData(data)) {
            Slog.d("GmsCore", "skip relay — not a GMS sign-in result");
            return false;
        }
        sExternalOAuthPending = null;
        endOAuthSignatureSpoof();
        if (data != null) {
            try {
                if (BActivityThread.getApplication() != null) {
                    data.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
                }
            } catch (Throwable ignored) {
            }
        }
        try {
            BRActivityThread.get(BlackBoxCore.mainThread()).sendActivityResult(
                    pending.signInHubResultTo,
                    pending.signInHubResultWho,
                    pending.signInHubRequestCode,
                    resultCode,
                    data);
            Slog.d("GmsCore", "relayed external GMS result to SignInHub code=" + resultCode);
            return true;
        } catch (Throwable t) {
            Slog.e("GmsCore", "relay external GMS result failed", t);
            return false;
        }
    }

    public static void pinIntentToHost(Intent intent) {
        if (intent == null) return;
        try {
            ResolveInfo resolveInfo = getSystemPackageManager()
                    .resolveActivity(intent, PackageManager.MATCH_DEFAULT_ONLY);
            if (resolveInfo != null && resolveInfo.activityInfo != null) {
                intent.setComponent(new ComponentName(
                        resolveInfo.activityInfo.packageName,
                        resolveInfo.activityInfo.name));
            }
        } catch (Throwable ignored) {
        }
    }

    public static ResolveInfo resolveActivityOnHost(Intent intent, int flags) {
        if (intent == null) return null;
        try {
            return getSystemPackageManager().resolveActivity(intent, flags);
        } catch (Throwable ignored) {
            return null;
        }
    }

    public static boolean shouldUseHostGoogle(String callerPackage) {
        return callerPackage != null
                && !callerPackage.equals(BlackBoxCore.getHostPkg())
                && !isGoogleAppOrService(callerPackage);
    }

    public static Set<String> getAllGooglePackages() {
        Set<String> all = new HashSet<>();
        all.addAll(GOOGLE_APP);
        all.addAll(GOOGLE_SERVICE);
        return all;
    }

    private static InstallResult installPackages(Set<String> list, int userId) {
        BlackBoxCore blackBoxCore = BlackBoxCore.get();
        for (String packageName : list) {
            if (blackBoxCore.isInstalled(packageName, userId)) continue;
            try {
                BlackBoxCore.getContext().getPackageManager().getApplicationInfo(packageName, 0);
            } catch (PackageManager.NameNotFoundException ignored) {
                continue;
            }
            InstallResult installResult = blackBoxCore.installPackageAsUser(packageName, userId);
            if (!installResult.success) return installResult;
        }
        return new InstallResult();
    }

    private static void uninstallPackages(Set<String> list, int userId) {
        BlackBoxCore blackBoxCore = BlackBoxCore.get();
        for (String packageName : list) {
            blackBoxCore.uninstallPackageAsUser(packageName, userId);
        }
    }

    public static InstallResult installGApps(int userId) {
        LinkedHashSet<String> ordered = new LinkedHashSet<>();
        ordered.add(GSF_PKG);
        ordered.add("com.google.android.gsf.login");
        ordered.add(GMS_PKG);
        ordered.add("com.google.android.partnersetup");
        ordered.add(SETTINGS_PKG);
        ordered.add(VENDING_PKG);
        ordered.addAll(GOOGLE_SERVICE);
        ordered.addAll(GOOGLE_APP);
        InstallResult installResult = installPackagesOrdered(ordered, userId);
        if (!installResult.success) {
            uninstallGApps(userId);
            return installResult;
        }
        return installResult;
    }

    private static InstallResult installPackagesOrdered(Set<String> list, int userId) {
        BlackBoxCore blackBoxCore = BlackBoxCore.get();
        for (String packageName : list) {
            if (blackBoxCore.isInstalled(packageName, userId)) {
                continue;
            }
            try {
                BlackBoxCore.getContext().getPackageManager().getApplicationInfo(packageName, 0);
            } catch (PackageManager.NameNotFoundException ignored) {
                Slog.d("GmsCore", "skip clone — not on device: " + packageName);
                continue;
            }
            InstallResult installResult = blackBoxCore.installPackageAsUser(packageName, userId);
            if (!installResult.success) {
                if (SETTINGS_PKG.equals(packageName)) {
                    Slog.w("GmsCore", "Settings clone failed (non-fatal): " + installResult.msg);
                    continue;
                }
                return installResult;
            }
            Slog.d("GmsCore", "cloned " + packageName);
        }
        return new InstallResult();
    }

    /**
     * Play Store Sign In opens host Settings AddAccount — redirect to virtual GMS account UI.
     */
    public static boolean rewriteGoogleAccountIntent(Intent intent) {
        if (intent == null || !BlackBoxCore.get().isInstalled(GMS_PKG, BActivityThread.getUserId())) {
            return false;
        }
        String action = intent.getAction();
        ComponentName component = intent.getComponent();
        boolean addAccount = false;
        if (action != null) {
            String lower = action.toLowerCase();
            addAccount = "android.settings.ADD_ACCOUNT_SETTINGS".equals(action)
                    || "android.settings.add_account_settings".equals(lower)
                    || lower.contains("add_account");
        }
        if (!addAccount && component != null) {
            if (SETTINGS_PKG.equals(component.getPackageName())) {
                addAccount = true;
            } else {
                String cls = component.getClassName().toLowerCase();
                addAccount = cls.contains("addaccount");
            }
        }
        if (!addAccount) {
            return false;
        }

        Bundle extras = intent.getExtras() != null ? new Bundle(intent.getExtras()) : new Bundle();
        String[] types = extras.getStringArray("account_types");
        if (types == null) {
            types = extras.getStringArray("android.provider.extra.ACCOUNT_TYPES");
        }
        if (types == null) {
            types = new String[]{"com.google"};
        }
        extras.putStringArray("accountTypes", types);

        intent.setAction("com.google.android.gms.auth.addaccount.PRE_ADD_ACCOUNT");
        intent.setComponent(new ComponentName(GMS_PKG, GMS_PRE_ADD_ACCOUNT));
        intent.setPackage(GMS_PKG);
        intent.replaceExtras(extras);
        intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
        Slog.d("GmsCore", "redirect AddAccount -> GMS PreAddAccountActivity");
        return true;
    }

    public static void uninstallGApps(int userId) {
        uninstallPackages(GOOGLE_SERVICE, userId);
        uninstallPackages(GOOGLE_APP, userId);
    }

    public static void remove(String packageName) {
        GOOGLE_SERVICE.remove(packageName);
        GOOGLE_APP.remove(packageName);
    }

    public static boolean isSupportGms() {
        try {
            BlackBoxCore.getPackageManager().getPackageInfo(GMS_PKG, 0);
            return true;
        } catch (PackageManager.NameNotFoundException ignored) { }
        return false;
    }

        // ===== Missing methods used by other files =====

        public static boolean isOAuthInternalGmsLaunch(Intent intent) {
            if (intent == null) return false;
            return intent.getBooleanExtra(EXTRA_OAUTH_INTERNAL_LAUNCH, false);
        }
    
        public static String getOAuthGuestPackage(Intent intent) {
            if (intent == null) return null;
            // Try EXTRA_GMS_TARGET first (internal wrapped intent)
            Intent target = intent.getParcelableExtra(EXTRA_GMS_TARGET);
            if (target != null) {
                String pkg = target.getStringExtra(EXTRA_GMS_TARGET + "_guest_pkg");
                if (pkg != null) return pkg;
            }
            // Try direct extra
            String pkg = intent.getStringExtra(EXTRA_GMS_TARGET + "_guest_pkg");
            if (pkg != null) return pkg;
            // Fallback: get from app process
            return BActivityThread.getAppPackageName();
        }
    
        public static String getActiveOAuthGuestPackage() {
            try {
                BActivityManager am = BlackBoxCore.getBActivityManager();
                if (am.isOAuthSessionActive()) {
                    String guest = am.getOAuthGuestPackage();
                    if (guest != null) {
                        return guest;
                    }
                }
            } catch (Throwable ignored) {
            }
            if (sPendingGuestPkg != null) {
                return sPendingGuestPkg;
            }
            String appPkg = BActivityThread.getAppPackageName();
            if (appPkg != null && shouldUseHostGoogle(appPkg)) {
                return appPkg;
            }
            return null;
        }

    public static boolean isInstalledGoogleService(int userId) {
        return BlackBoxCore.get().isInstalled(GMS_PKG, userId);
    }
}