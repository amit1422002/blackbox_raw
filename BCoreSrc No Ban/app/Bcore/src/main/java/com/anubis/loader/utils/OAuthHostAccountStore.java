package com.anubis.loader.utils;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.content.Context;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.fake.service.IAccountManagerProxy;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

/** Persists host Google account names for all BlackBox processes (shared app files dir). */
public final class OAuthHostAccountStore {
    private static final String FILE_NAME = "oauth_host_google_accounts.txt";
    private static final String SELECTED_FILE = "oauth_selected_account.txt";
    public static final String GOOGLE_ACCOUNT_TYPE = "com.google";

    private OAuthHostAccountStore() {
    }

    public static Account[] queryDeviceGoogleAccounts() {
        Account[] accounts = IAccountManagerProxy.getDeviceGoogleAccounts();
        if (accounts != null && accounts.length > 0) {
            return accounts;
        }
        try {
            AccountManager am = AccountManager.get(BlackBoxCore.getContext());
            accounts = am.getAccountsByType(GOOGLE_ACCOUNT_TYPE);
            if (accounts != null && accounts.length > 0) {
                return accounts;
            }
        } catch (Throwable t) {
            Slog.w("GmsOAuthBridge", "queryDeviceGoogleAccounts fallback failed", t);
        }
        return null;
    }

    public static void persistFromHost() {
        try {
            Account[] accounts = queryDeviceGoogleAccounts();
            if (accounts == null || accounts.length == 0) {
                Slog.w("GmsOAuthBridge", "persistFromHost: no device Google accounts (keeping cache)");
                return;
            }
            StringBuilder sb = new StringBuilder();
            for (Account account : accounts) {
                if (account == null || account.name == null) {
                    continue;
                }
                sb.append(account.name).append('\n');
            }
            if (sb.length() == 0) {
                return;
            }
            try (FileOutputStream fos = new FileOutputStream(getStoreFile(), false)) {
                fos.write(sb.toString().getBytes(StandardCharsets.UTF_8));
            }
            Slog.d("GmsOAuthBridge", "persisted " + accounts.length + " host accounts to store");
        } catch (Throwable t) {
            Slog.w("GmsOAuthBridge", "persistFromHost failed", t);
        }
    }

    public static Account[] load() {
        try {
            File file = getStoreFile();
            if (!file.exists()) {
                return null;
            }
            List<Account> list = new ArrayList<>();
            try (BufferedReader reader = new BufferedReader(new FileReader(file))) {
                String line;
                while ((line = reader.readLine()) != null) {
                    line = line.trim();
                    if (!line.isEmpty()) {
                        list.add(new Account(line, GOOGLE_ACCOUNT_TYPE));
                    }
                }
            }
            if (list.isEmpty()) {
                return null;
            }
            return list.toArray(new Account[0]);
        } catch (Throwable t) {
            Slog.w("GmsOAuthBridge", "load host accounts failed", t);
            return null;
        }
    }

    private static File getSelectedFile() {
        return new File(getHostFilesDir(), SELECTED_FILE);
    }

    private static File getHostFilesDir() {
        try {
            Context host = BlackBoxCore.getContext().createPackageContext(
                    BlackBoxCore.getHostPkg(), Context.CONTEXT_IGNORE_SECURITY);
            return host.getFilesDir();
        } catch (Throwable t) {
            return BlackBoxCore.getContext().getFilesDir();
        }
    }

    /** Host app files dir — shared across virtual GMS / guest / proxy processes. */
    private static File getStoreFile() {
        return new File(getHostFilesDir(), FILE_NAME);
    }

    public static void persistSelectedAccount(String email) {
        if (email == null || email.isEmpty()) {
            return;
        }
        try {
            try (FileOutputStream fos = new FileOutputStream(getSelectedFile(), false)) {
                fos.write(email.trim().getBytes(StandardCharsets.UTF_8));
            }
            Slog.d("GmsOAuthBridge", "persisted selected account " + email);
        } catch (Throwable t) {
            Slog.w("GmsOAuthBridge", "persistSelectedAccount failed", t);
        }
    }

    public static String getSelectedAccount() {
        try {
            File file = getSelectedFile();
            if (!file.exists()) {
                return null;
            }
            try (BufferedReader reader = new BufferedReader(new FileReader(file))) {
                String line = reader.readLine();
                if (line != null) {
                    line = line.trim();
                    return line.isEmpty() ? null : line;
                }
            }
        } catch (Throwable t) {
            Slog.w("GmsOAuthBridge", "getSelectedAccount failed", t);
        }
        return null;
    }

    public static void ensureAccountListed(String email) {
        if (email == null || email.isEmpty()) {
            return;
        }
        try {
            Set<String> names = new LinkedHashSet<>();
            names.add(email.trim());
            Account[] existing = load();
            if (existing != null) {
                for (Account account : existing) {
                    if (account != null && account.name != null) {
                        names.add(account.name);
                    }
                }
            }
            Account[] device = queryDeviceGoogleAccounts();
            if (device != null) {
                for (Account account : device) {
                    if (account != null && account.name != null) {
                        names.add(account.name);
                    }
                }
            }
            StringBuilder sb = new StringBuilder();
            for (String name : names) {
                sb.append(name).append('\n');
            }
            try (FileOutputStream fos = new FileOutputStream(getStoreFile(), false)) {
                fos.write(sb.toString().getBytes(StandardCharsets.UTF_8));
            }
            Slog.d("GmsOAuthBridge", "ensured selected account in host store: " + email);
        } catch (Throwable t) {
            Slog.w("GmsOAuthBridge", "ensureAccountListed failed", t);
        }
    }
}
