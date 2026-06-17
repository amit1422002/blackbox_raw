package com.anubis.loader.utils;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.os.Bundle;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.fake.frameworks.BAccountManager;

import java.util.HashMap;
import java.util.Map;

/**
 * Virtual GMS clone has no device Google accounts — bridge host accounts during OAuth only.
 */
public final class GmsOAuthAccountBridge {
    public static final String GOOGLE_ACCOUNT_TYPE = "com.google";

    private static volatile Account[] sCachedHostAccounts;

    private static final ThreadLocal<Boolean> sBridging = new ThreadLocal<Boolean>() {
        @Override
        protected Boolean initialValue() {
            return false;
        }
    };

    private GmsOAuthAccountBridge() {
    }

    public static boolean isBridging() {
        return Boolean.TRUE.equals(sBridging.get());
    }

    /** Snapshot host Google accounts — persisted so virtual GMS process can read them. */
    public static void refreshHostAccountCache() {
        Account[] accounts = OAuthHostAccountStore.queryDeviceGoogleAccounts();
        if (accounts != null && accounts.length > 0) {
            sCachedHostAccounts = accounts;
            OAuthHostAccountStore.persistFromHost();
        } else {
            sCachedHostAccounts = OAuthHostAccountStore.load();
            if (sCachedHostAccounts == null || sCachedHostAccounts.length == 0) {
                OAuthHostAccountStore.persistFromHost();
                sCachedHostAccounts = OAuthHostAccountStore.load();
            }
        }
        if (sCachedHostAccounts != null) {
            Slog.d("GmsOAuthBridge", "cached " + sCachedHostAccounts.length + " host Google accounts");
        }
    }

    public static Account[] getCachedHostAccounts() {
        return sCachedHostAccounts;
    }

    public static boolean isGoogleAccountType(String accountType) {
        return GOOGLE_ACCOUNT_TYPE.equals(accountType) || "www.google.com".equals(accountType);
    }

    public static boolean shouldBridgeForPackage(String packageName) {
        if (packageName == null) {
            return false;
        }
        return GmsOAuthSignatureSpoof.BGMI_PKG.equals(packageName)
                || "com.android.vending".equals(packageName)
                || GmsCore.isGoogleAppOrService(packageName)
                || packageName.equals(BlackBoxCore.getHostPkg());
    }

    public static Account[] maybeBridge(String accountType) {
        if (sBridging.get()) {
            Account[] cached = sCachedHostAccounts;
            if (cached != null && cached.length > 0) {
                return cached;
            }
            return null;
        }

        String appPkg = BActivityThread.getAppPackageName();
        boolean inGoogle = appPkg != null && GmsCore.isGoogleAppOrService(appPkg);
        boolean inVending = "com.android.vending".equals(appPkg);
        boolean inBgmi = GmsOAuthSignatureSpoof.BGMI_PKG.equals(appPkg);
        if (!inGoogle && !inBgmi && !inVending) {
            return null;
        }
        if (!isGoogleAccountType(accountType)) {
            return null;
        }
        // Play Store / GMS stack: expose host Google accounts for sign-in (not only during game OAuth).
        if (inVending || (inGoogle && !inBgmi)) {
            return filterSelectedAccount(bridgeHostAccounts(appPkg));
        }
        if (!isOAuthBridgingActive()) {
            return null;
        }
        return filterSelectedAccount(bridgeHostAccounts(appPkg));
    }

    public static Account[] filterSelectedAccount(Account[] accounts) {
        return filterForSelectedAccount(accounts);
    }

    private static boolean isOAuthBridgingActive() {
        if (GmsCore.isOAuthSessionActive()) {
            return true;
        }
        if (GmsCore.isOAuthSignatureSpoofActive() || GmsCore.hasExternalOAuthPending()) {
            return true;
        }
        return GmsOAuthLaunchContext.isActiveForGmsHooks();
    }

    private static Account[] filterForSelectedAccount(Account[] accounts) {
        if (accounts == null || accounts.length == 0) {
            return accounts;
        }
        String selected = GmsCore.getOAuthSelectedAccount();
        if (selected == null || selected.isEmpty()) {
            selected = OAuthHostAccountStore.getSelectedAccount();
        }
        if (selected == null || selected.isEmpty()) {
            return accounts;
        }
        for (Account account : accounts) {
            if (account != null && selected.equals(account.name)) {
                Slog.d("GmsOAuthBridge", "bridge filter -> " + selected);
                return new Account[]{account};
            }
        }
        Account[] merged = new Account[accounts.length + 1];
        merged[0] = new Account(selected, GOOGLE_ACCOUNT_TYPE);
        System.arraycopy(accounts, 0, merged, 1, accounts.length);
        return merged;
    }

    /** Copy all host Google accounts into virtual AM for Play Store / GMS sign-in. */
    public static void seedAllHostAccountsForPlayStore() {
        refreshHostAccountCache();
        Account[] accounts = getCachedHostAccounts();
        if (accounts == null || accounts.length == 0) {
            accounts = OAuthHostAccountStore.load();
        }
        if (accounts == null || accounts.length == 0) {
            Slog.w("GmsOAuthBridge", "seedAllHostAccountsForPlayStore: no host accounts");
            return;
        }
        int seeded = 0;
        for (Account account : accounts) {
            if (account == null || account.name == null || account.name.isEmpty()) {
                continue;
            }
            seedOAuthAccount(account.name, GmsCore.VENDING_PKG);
            seeded++;
        }
        Slog.d("GmsOAuthBridge", "seeded " + seeded + " accounts for Play Store");
    }

    /** Register picker account in virtual AM so virtual GMS SignIn can authorize it. */
    public static void seedOAuthAccount(String email, String guestPkg) {
        if (email == null || email.isEmpty() || guestPkg == null) {
            return;
        }
        Account account = new Account(email, GOOGLE_ACCOUNT_TYPE);
        Map<String, Integer> visibility = new HashMap<>();
        visibility.put(guestPkg, AccountManager.VISIBILITY_VISIBLE);
        visibility.put(GmsCore.GMS_PKG, AccountManager.VISIBILITY_VISIBLE);
        visibility.put(GmsCore.VENDING_PKG, AccountManager.VISIBILITY_VISIBLE);
        try {
            BAccountManager.get().addAccountExplicitlyWithVisibility(account, null, new Bundle(), visibility);
            Slog.d("GmsOAuthBridge", "seeded virtual account " + email + " for " + guestPkg);
        } catch (Throwable t) {
            Slog.w("GmsOAuthBridge", "seedOAuthAccount failed", t);
        }
        OAuthHostAccountStore.ensureAccountListed(email);
        sCachedHostAccounts = filterForSelectedAccount(OAuthHostAccountStore.load());
    }

    private static Account[] bridgeHostAccounts(String appPkg) {
        Account[] cached = sCachedHostAccounts;
        if (cached == null || cached.length == 0) {
            cached = OAuthHostAccountStore.load();
            if (cached != null) {
                sCachedHostAccounts = cached;
            }
        }
        if (cached != null && cached.length > 0) {
            Slog.d("GmsOAuthBridge", "bridged " + cached.length
                    + " host accounts proc=" + appPkg);
            return cached;
        }
        Account[] accounts = OAuthHostAccountStore.queryDeviceGoogleAccounts();
        if (accounts != null && accounts.length > 0) {
            sCachedHostAccounts = accounts;
            OAuthHostAccountStore.persistFromHost();
            Slog.d("GmsOAuthBridge", "bridged " + accounts.length
                    + " host Google accounts proc=" + appPkg);
            return accounts;
        }
        return null;
    }

    public static Map<String, Integer> visibilityForGuest(String packageName, String accountType) {
        if (!shouldBridgeForPackage(packageName)) {
            return null;
        }
        Account[] bridged = maybeBridge(accountType);
        if (bridged == null) {
            return null;
        }
        Map<String, Integer> map = new HashMap<>();
        for (Account account : bridged) {
            map.put(account.name, AccountManager.VISIBILITY_VISIBLE);
        }
        return map;
    }

    public static Bundle accountsBundle(Account[] accounts) {
        Bundle bundle = new Bundle();
        bundle.putParcelableArray(AccountManager.KEY_ACCOUNTS, accounts);
        return bundle;
    }
}

