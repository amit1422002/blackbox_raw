package com.anubis.loader.fake.service;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.accounts.IAccountManagerResponse;
import android.content.Context;
import android.os.Bundle;
import android.os.Process;

import java.lang.reflect.Method;
import java.util.Map;

import black.android.accounts.BRIAccountManagerStub;
import black.android.os.BRServiceManager;
import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.fake.frameworks.BAccountManager;
import com.anubis.loader.fake.hook.BinderInvocationStub;
import com.anubis.loader.fake.hook.MethodHook;
import com.anubis.loader.fake.hook.ProxyMethod;
import com.anubis.loader.utils.GmsOAuthAccountBridge;
import com.anubis.loader.utils.GmsOAuthSignatureSpoof;
import com.anubis.loader.utils.PlayStoreSignInHelper;
import com.anubis.loader.utils.Slog;

/**
 * Created by Milk on 2022/2/14.
 * * ∧＿∧
 * (`･ω･∥
 * 丶　つ０
 * しーＪ
 * 此处无Bug
 */
public class IAccountManagerProxy extends BinderInvocationStub {
    public static final String TAG = "IAccountManagerProxy";

    /** Real system IAccountManager captured before virtual AM hook is installed. */
    private static volatile Object sDeviceAccountManager;

    public IAccountManagerProxy() {
        super(BRServiceManager.get().getService(Context.ACCOUNT_SERVICE));
    }

    @Override
    protected Object getWho() {
        return BRIAccountManagerStub.get().asInterface(BRServiceManager.get().getService(Context.ACCOUNT_SERVICE));
    }

    @Override
    protected void inject(Object baseInvocation, Object proxyInvocation) {
        sDeviceAccountManager = baseInvocation;
        replaceSystemService(Context.ACCOUNT_SERVICE);
    }

    public static Object invokeOnDeviceAccountManager(Method method, Object[] args) throws Throwable {
        Object am = sDeviceAccountManager;
        if (am == null) {
            return null;
        }
        return method.invoke(am, args);
    }

    /** Device AM requires host package — guest pkg causes UID masquerade SecurityException. */
    public static Bundle patchOAuthLoginOptionsForHost(Bundle in) {
        Bundle options = in != null ? new Bundle(in) : new Bundle();
        options.putString(AccountManager.KEY_ANDROID_PACKAGE_NAME, BlackBoxCore.getHostPkg());
        options.putInt(AccountManager.KEY_CALLER_UID, Process.myUid());
        options.putInt(AccountManager.KEY_CALLER_PID, Process.myPid());
        return options;
    }

    /**
     * Virtual GMS authenticator must see the guest OAuth package (e.g. com.pubg.imobile)
     * so server client id validation matches BGMI's Google Cloud registration.
     */
    public static Bundle patchOAuthLoginOptionsForVirtualGuest(Bundle in, String guestPkg) {
        Bundle options = in != null ? new Bundle(in) : new Bundle();
        String pkg = guestPkg != null ? guestPkg : BActivityThread.getAppPackageName();
        if (pkg == null || pkg.isEmpty()) {
            pkg = BlackBoxCore.getHostPkg();
        }
        options.putString(AccountManager.KEY_ANDROID_PACKAGE_NAME, pkg);
        options.putInt(AccountManager.KEY_CALLER_UID, Process.myUid());
        options.putInt(AccountManager.KEY_CALLER_PID, Process.myPid());
        return options;
    }

    private static boolean isOAuthTokenBridgeActive() {
        return GmsCore.isOAuthSignatureSpoofActive()
                || GmsCore.hasExternalOAuthPending()
                || GmsCore.isOAuthSessionActive();
    }

    private static boolean shouldForwardOAuthTokenToDevice(Account account, String authTokenType) {
        if (!isOAuthTokenBridgeActive()) {
            return false;
        }
        if (account == null || authTokenType == null) {
            return false;
        }
        if (!GmsOAuthAccountBridge.isGoogleAccountType(account.type)) {
            return false;
        }
        if (authTokenType.startsWith("oauth2:server:client_id:")) {
            // BGMI server scope must use virtual GMS authenticator (device AM rejects host UID).
            String appPkg = BActivityThread.getAppPackageName();
            if (GmsOAuthSignatureSpoof.BGMI_PKG.equals(appPkg)) {
                return false;
            }
            return GmsCore.isOAuthSessionActive() || GmsCore.isOAuthSignatureSpoofActive();
        }
        return authTokenType.contains("oauth2:")
                || authTokenType.contains("weblogin")
                || authTokenType.contains("audience:server:client_id");
    }

    private static boolean shouldForwardOAuthPeekToDevice(Account account, String authTokenType) {
        if (!isOAuthTokenBridgeActive()) {
            return false;
        }
        if (account == null || authTokenType == null) {
            return false;
        }
        return GmsOAuthAccountBridge.isGoogleAccountType(account.type);
    }

    /** Play Store / cloned GMS sign-in — not the BGMI OAuth game path. */
    private static boolean isPlayStoreStackProcess() {
        String appPkg = BActivityThread.getAppPackageName();
        if (appPkg == null) {
            return false;
        }
        if (GmsOAuthSignatureSpoof.BGMI_PKG.equals(appPkg)) {
            return false;
        }
        return GmsCore.VENDING_PKG.equals(appPkg) || GmsCore.isGoogleAppOrService(appPkg);
    }

    private static boolean shouldForwardGoogleTokenToDevice(Account account, String authTokenType) {
        if (account == null || authTokenType == null) {
            return false;
        }
        if (!GmsOAuthAccountBridge.isGoogleAccountType(account.type)) {
            return false;
        }
        return shouldForwardOAuthTokenToDevice(account, authTokenType);
    }

    private static boolean shouldForwardGooglePeekToDevice(Account account, String authTokenType) {
        if (account == null || authTokenType == null) {
            return false;
        }
        if (!GmsOAuthAccountBridge.isGoogleAccountType(account.type)) {
            return false;
        }
        return shouldForwardOAuthPeekToDevice(account, authTokenType);
    }

    private static Bundle patchLoginOptionsForDevice(Bundle in) {
        if (isOAuthTokenBridgeActive()) {
            return patchOAuthLoginOptionsForHost(in);
        }
        return patchOAuthLoginOptionsForHost(in);
    }

    /** Device Google accounts — bypasses virtual AccountManager in guest processes. */
    public static Account[] getDeviceGoogleAccounts() {
        Object am = sDeviceAccountManager;
        if (am == null) {
            return null;
        }
        String type = GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE;
        String hostPkg = com.anubis.loader.BlackBoxCore.getHostPkg();
        try {
            for (java.lang.reflect.Method method : am.getClass().getMethods()) {
                if (!"getAccountsAsUser".equals(method.getName())) {
                    continue;
                }
                Class<?>[] params = method.getParameterTypes();
                Object result;
                if (params.length == 2
                        && params[0] == String.class
                        && params[1] == int.class) {
                    result = method.invoke(am, type, 0);
                } else if (params.length == 3
                        && params[0] == String.class
                        && params[1] == int.class
                        && params[2] == String.class) {
                    result = method.invoke(am, type, 0, hostPkg);
                } else {
                    continue;
                }
                if (result instanceof Account[]) {
                    Account[] accounts = (Account[]) result;
                    if (accounts.length > 0) {
                        return accounts;
                    }
                }
            }
        } catch (Throwable t) {
            Slog.w(TAG, "getDeviceGoogleAccounts failed", t);
        }
        return null;
    }

    @Override
    protected void onBindMethod() {
        super.onBindMethod();
    }

    @Override
    public boolean isBadEnv() {
        return false;
    }

    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        Slog.d(TAG, "call " + method.getName());
        return super.invoke(proxy, method, args);
    }

    @ProxyMethod("getPassword")
    public static class getPassword extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().getPassword((Account) args[0]);
        }
    }

    @ProxyMethod("getUserData")
    public static class getUserData extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().getUserData((Account) args[0], (String) args[1]);
        }
    }

    @ProxyMethod("getAuthenticatorTypes")
    public static class getAuthenticatorTypes extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().getAuthenticatorTypes();
        }
    }

    @ProxyMethod("getAccountsForPackage")
    public static class getAccountsForPackage extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String packageName = (String) args[0];
            if (GmsOAuthAccountBridge.shouldBridgeForPackage(packageName)) {
                Account[] bridged = GmsOAuthAccountBridge.maybeBridge(GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE);
                if (bridged != null) {
                    return bridged;
                }
            }
            return BAccountManager.get().getAccountsForPackage(packageName, (int) args[1]);
        }
    }

    @ProxyMethod("getAccountsByTypeForPackage")
    public static class getAccountsByTypeForPackage extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String accountType = (String) args[0];
            String packageName = (String) args[1];
            if (GmsOAuthAccountBridge.shouldBridgeForPackage(packageName)) {
                Account[] bridged = GmsOAuthAccountBridge.maybeBridge(accountType);
                if (bridged != null) {
                    return bridged;
                }
            }
            return BAccountManager.get().getAccountsByTypeForPackage(accountType, packageName);
        }
    }

    @ProxyMethod("getAccountByTypeAndFeatures")
    public static class getAccountByTypeAndFeatures extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            IAccountManagerResponse response = (IAccountManagerResponse) args[0];
            String accountType = (String) args[1];
            Account[] bridged = GmsOAuthAccountBridge.maybeBridge(accountType);
            if (bridged != null) {
                response.onResult(GmsOAuthAccountBridge.accountsBundle(bridged));
                return 0;
            }
            BAccountManager.get().getAccountByTypeAndFeatures(response, accountType, (String[]) args[2]);
            return 0;
        }
    }

    @ProxyMethod("getAccountsByFeatures")
    public static class getAccountsByFeatures extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            IAccountManagerResponse response = (IAccountManagerResponse) args[0];
            String accountType = (String) args[1];
            Account[] bridged = GmsOAuthAccountBridge.maybeBridge(accountType);
            if (bridged != null) {
                Account[] filtered = GmsOAuthAccountBridge.filterSelectedAccount(bridged);
                response.onResult(GmsOAuthAccountBridge.accountsBundle(filtered));
                return 0;
            }
            BAccountManager.get().getAccountsByFeatures(response, accountType, (String[]) args[2]);
            return 0;
        }
    }

    @ProxyMethod("getAccountsAsUser")
    public static class getAccountsAsUser extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Account[] bridged = GmsOAuthAccountBridge.maybeBridge((String) args[0]);
            if (bridged != null) {
                return bridged;
            }
            return BAccountManager.get().getAccountsAsUser((String) args[0]);
        }
    }

    @ProxyMethod("addAccountExplicitly")
    public static class addAccountExplicitly extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().addAccountExplicitly((Account) args[0], (String) args[1], (Bundle) args[2]);
        }
    }

    @ProxyMethod("removeAccountAsUser")
    public static class removeAccountAsUser extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().removeAccountAsUser((IAccountManagerResponse) args[0], (Account) args[1], (boolean) args[2]);
            return 0;
        }
    }

    @ProxyMethod("removeAccountExplicitly")
    public static class removeAccountExplicitly extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().removeAccountExplicitly((Account) args[0]);
        }
    }

    @ProxyMethod("copyAccountToUser")
    public static class copyAccountToUser extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().copyAccountToUser((IAccountManagerResponse) args[0], (Account) args[1], (int) args[2], (int) args[3]);
            return 0;
        }
    }

    @ProxyMethod("invalidateAuthToken")
    public static class invalidateAuthToken extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().invalidateAuthToken((String) args[0], (String) args[1]);
            return 0;
        }
    }

    @ProxyMethod("peekAuthToken")
    public static class peekAuthToken extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Account account = (Account) args[0];
            String authTokenType = (String) args[1];
            if (shouldForwardGooglePeekToDevice(account, authTokenType)) {
                Object token = invokeOnDeviceAccountManager(method, args);
                if (token instanceof String && !((String) token).isEmpty()) {
                    Slog.d(TAG, "forward peekAuthToken to device AM for " + account.name
                            + " proc=" + BActivityThread.getAppPackageName());
                    return token;
                }
            }
            return BAccountManager.get().peekAuthToken((Account) args[0], (String) args[1]);
        }
    }

    @ProxyMethod("setAuthToken")
    public static class setAuthToken extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().setAuthToken((Account) args[0], (String) args[1], (String) args[2]);
            return 0;
        }
    }

    @ProxyMethod("setPassword")
    public static class setPassword extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().setPassword((Account) args[0], (String) args[1]);
            return 0;
        }
    }

    @ProxyMethod("clearPassword")
    public static class clearPassword extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().clearPassword((Account) args[0]);
            return 0;
        }
    }

    @ProxyMethod("setUserData")
    public static class setUserData extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().setUserData((Account) args[0], (String) args[1], (String) args[2]);
            return 0;
        }
    }

    @ProxyMethod("updateAppPermission")
    public static class updateAppPermission extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().updateAppPermission((Account) args[0], (String) args[1], (int) args[2], (boolean) args[3]);
            return 0;
        }
    }

    @ProxyMethod("getAuthToken")
    public static class getAuthToken extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Account account = (Account) args[1];
            String authTokenType = (String) args[2];
            if (shouldForwardGoogleTokenToDevice(account, authTokenType)) {
                Slog.d(TAG, "forward getAuthToken to device AM for " + account.name
                        + " type=" + authTokenType
                        + " proc=" + BActivityThread.getAppPackageName());
                if (args.length > 5) {
                    Bundle loginOptions = args[5] instanceof Bundle ? (Bundle) args[5] : null;
                    args[5] = patchLoginOptionsForDevice(loginOptions);
                }
                Object result = invokeOnDeviceAccountManager(method, args);
                return result != null ? result : 0;
            }
            if (authTokenType != null && authTokenType.startsWith("oauth2:server:client_id:")
                    && GmsOAuthSignatureSpoof.BGMI_PKG.equals(BActivityThread.getAppPackageName())) {
                Slog.d(TAG, "virtual AM getAuthToken for " + account.name
                        + " scope=" + authTokenType);
                if (args.length > 5) {
                    Bundle loginOptions = args[5] instanceof Bundle ? (Bundle) args[5] : null;
                    args[5] = patchOAuthLoginOptionsForVirtualGuest(loginOptions,
                            GmsOAuthSignatureSpoof.BGMI_PKG);
                }
            }
            BAccountManager.get().getAuthToken((IAccountManagerResponse) args[0],
                    (Account) args[1],
                    (String) args[2],
                    (boolean) args[3],
                    (boolean) args[4],
                    (Bundle) args[5]);
            return 0;
        }
    }

    @ProxyMethod("addAccount")
    public static class addAccount extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String accountType = (String) args[1];
            if (isPlayStoreStackProcess()
                    && GmsOAuthAccountBridge.isGoogleAccountType(accountType)) {
                if (PlayStoreSignInHelper.isPlayStorePickerActive()) {
                    Slog.d(TAG, "addAccount: picker already open");
                    return 0;
                }
                if (PlayStoreSignInHelper.hasHostGoogleAccounts()
                        && PlayStoreSignInHelper.launchAccountPicker(
                        (IAccountManagerResponse) args[0], accountType)) {
                    Slog.d(TAG, "addAccount -> in-process picker proc=" + BActivityThread.getAppPackageName());
                    return 0;
                }
                if (!PlayStoreSignInHelper.hasHostGoogleAccounts()) {
                    Slog.d(TAG, "forward addAccount to device AM (no host accounts)");
                    args[5] = patchLoginOptionsForDevice(args[5] instanceof Bundle ? (Bundle) args[5] : null);
                    Object result = invokeOnDeviceAccountManager(method, args);
                    GmsOAuthAccountBridge.refreshHostAccountCache();
                    GmsOAuthAccountBridge.seedAllHostAccountsForPlayStore();
                    return result != null ? result : 0;
                }
            }
            BAccountManager.get().addAccount((IAccountManagerResponse) args[0],
                    (String) args[1],
                    (String) args[2],
                    (String[]) args[3],
                    (boolean) args[4],
                    (Bundle) args[5]);
            return 0;
        }
    }

    @ProxyMethod("addAccountAsUser")
    public static class addAccountAsUser extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String accountType = (String) args[1];
            if (isPlayStoreStackProcess()
                    && GmsOAuthAccountBridge.isGoogleAccountType(accountType)) {
                if (PlayStoreSignInHelper.isPlayStorePickerActive()) {
                    return 0;
                }
                if (PlayStoreSignInHelper.hasHostGoogleAccounts()
                        && PlayStoreSignInHelper.launchAccountPicker(
                        (IAccountManagerResponse) args[0], accountType)) {
                    Slog.d(TAG, "addAccountAsUser -> in-process picker");
                    return 0;
                }
                if (!PlayStoreSignInHelper.hasHostGoogleAccounts()) {
                    Slog.d(TAG, "forward addAccountAsUser to device AM");
                    args[5] = patchLoginOptionsForDevice(args[5] instanceof Bundle ? (Bundle) args[5] : null);
                    Object result = invokeOnDeviceAccountManager(method, args);
                    GmsOAuthAccountBridge.refreshHostAccountCache();
                    GmsOAuthAccountBridge.seedAllHostAccountsForPlayStore();
                    return result != null ? result : 0;
                }
            }
            BAccountManager.get().addAccountAsUser((IAccountManagerResponse) args[0],
                    (String) args[1],
                    (String) args[2],
                    (String[]) args[3],
                    (boolean) args[4],
                    (Bundle) args[5]);
            return 0;
        }
    }

    @ProxyMethod("updateCredentials")
    public static class updateCredentials extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().updateCredentials((IAccountManagerResponse) args[0],
                    (Account) args[1],
                    (String) args[2],
                    (boolean) args[3],
                    (Bundle) args[4]);
            return 0;
        }
    }

    @ProxyMethod("editProperties")
    public static class editProperties extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().editProperties((IAccountManagerResponse) args[0],
                    (String) args[1],
                    (boolean) args[2]);
            return 0;
        }
    }

    @ProxyMethod("confirmCredentialsAsUser")
    public static class confirmCredentialsAsUser extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Account account = (Account) args[1];
            BAccountManager.get().confirmCredentialsAsUser((IAccountManagerResponse) args[0],
                    (Account) args[1],
                    (Bundle) args[2],
                    (boolean) args[3]);
            return 0;
        }
    }

    @ProxyMethod("accountAuthenticated")
    public static class accountAuthenticated extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().accountAuthenticated((Account) args[0]);
            return 0;
        }
    }

    @ProxyMethod("getAuthTokenLabel")
    public static class getAuthTokenLabel extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().getAuthTokenLabel((IAccountManagerResponse) args[0],
                    (String) args[1],
                    (String) args[2]);
            return 0;
        }
    }

    @ProxyMethod("getPackagesAndVisibilityForAccount")
    public static class getPackagesAndVisibilityForAccount extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().getPackagesAndVisibilityForAccount((Account) args[0]);
        }
    }

    @ProxyMethod("addAccountExplicitlyWithVisibility")
    public static class addAccountExplicitlyWithVisibility extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().addAccountExplicitlyWithVisibility((Account) args[0],
                    (String) args[1],
                    (Bundle) args[2],
                    (Map) args[3]
            );
        }
    }

    @ProxyMethod("setAccountVisibility")
    public static class setAccountVisibility extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BAccountManager.get().setAccountVisibility((Account) args[0],
                    (String) args[1],
                    (int) args[2]
            );
        }
    }

    @ProxyMethod("getAccountVisibility")
    public static class getAccountVisibility extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String packageName = (String) args[1];
            if (GmsOAuthAccountBridge.shouldBridgeForPackage(packageName)
                    && GmsOAuthAccountBridge.maybeBridge(GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE) != null) {
                return AccountManager.VISIBILITY_VISIBLE;
            }
            return BAccountManager.get().getAccountVisibility((Account) args[0], packageName);
        }
    }

    @ProxyMethod("getAccountsAndVisibilityForPackage")
    public static class getAccountsAndVisibilityForPackage extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String packageName = (String) args[0];
            String accountType = (String) args[1];
            Map<String, Integer> bridged = GmsOAuthAccountBridge.visibilityForGuest(packageName, accountType);
            if (bridged != null) {
                return bridged;
            }
            return BAccountManager.get().getAccountsAndVisibilityForPackage(packageName, accountType);
        }
    }

    @ProxyMethod("registerAccountListener")
    public static class registerAccountListener extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().registerAccountListener((String[]) args[0],
                    (String) args[1]
            );
            return 0;
        }
    }

    @ProxyMethod("unregisterAccountListener")
    public static class unregisterAccountListener extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BAccountManager.get().unregisterAccountListener((String[]) args[0],
                    (String) args[1]
            );
            return 0;
        }
    }
}
