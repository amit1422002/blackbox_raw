package top.niunaijun.blackbox.core;

import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.PackageManager;

import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.app.BActivityThread;
import top.niunaijun.blackbox.entity.pm.InstallResult;
import top.niunaijun.blackbox.gms.GmsOAuthLaunchContext;
import top.niunaijun.blackbox.gms.MicroGInstaller;
import top.niunaijun.blackbox.gms.MicroGBootstrap;
import top.niunaijun.blackbox.utils.Slog;


public class GmsCore {
    private static final String TAG = "GmsCore";

    private static final HashSet<String> GOOGLE_APP = new HashSet<>();
    private static final HashSet<String> GOOGLE_SERVICE = new HashSet<>();
    public static final String GMS_PKG = "com.google.android.gms";
    public static final String GSF_PKG = "com.google.android.gsf";
    public static final String VENDING_PKG = "com.android.vending";
    public static final String SETTINGS_PKG = "com.android.settings";

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

    public static boolean isGoogleService(String packageName) {
        return GOOGLE_SERVICE.contains(packageName);
    }

    public static boolean isGoogleAppOrService(String str) {
        return GOOGLE_APP.contains(str) || GOOGLE_SERVICE.contains(str);
    }

    public static Set<String> getAllGooglePackages() {
        Set<String> all = new HashSet<>();
        all.addAll(GOOGLE_APP);
        all.addAll(GOOGLE_SERVICE);
        return Collections.unmodifiableSet(all);
    }

    /** Guest apps that have no cloned GMS should see host Google packages. */
    public static boolean shouldUseHostGoogle(String guestPkg) {
        if (guestPkg == null || guestPkg.equals(BlackBoxCore.getHostPkg())) {
            return false;
        }
        int userId = BActivityThread.getUserId();
        return !BlackBoxCore.get().isInstalled(GMS_PKG, userId);
    }

    public static String getIntentPackage(Intent intent) {
        if (intent == null) {
            return null;
        }
        String pkg = intent.getPackage();
        if (pkg != null) {
            return pkg;
        }
        ComponentName component = intent.getComponent();
        return component != null ? component.getPackageName() : null;
    }

    public static boolean isGoogleIntent(Intent intent) {
        String pkg = getIntentPackage(intent);
        return pkg != null && isGoogleAppOrService(pkg);
    }

    public static boolean isOAuthSessionActive() {
        return GmsOAuthLaunchContext.isActiveForGmsHooks();
    }

    public static boolean isOAuthSignatureSpoofActive() {
        return GmsOAuthLaunchContext.isActiveForGmsHooks();
    }

    public static boolean isOAuthInternalGmsLaunch(Intent intent) {
        if (intent == null) {
            return false;
        }
        ComponentName component = intent.getComponent();
        if (component != null && isOAuthHelperClass(component.getClassName())) {
            return true;
        }
        return GMS_PKG.equals(getIntentPackage(intent));
    }

    public static boolean isOAuthHelperClass(String className) {
        if (className == null) {
            return false;
        }
        return className.equals("top.niunaijun.blackbox.gms.GoogleSignInActivity")
                || className.equals("top.niunaijun.blackbox.gms.MicroGLoginBridgeActivity")
                || className.startsWith("top.niunaijun.blackbox.proxy.");
    }

    private static InstallResult installPackages(Set<String> list, int userId) {
        BlackBoxCore blackBoxCore = BlackBoxCore.get();
        for (String packageName : list) {
            if (blackBoxCore.isInstalled(packageName, userId)) {
                continue;
            }
            try {
                BlackBoxCore.getContext().getPackageManager().getApplicationInfo(packageName, 0);
            } catch (PackageManager.NameNotFoundException e) {
                continue;
            }
            InstallResult installResult = blackBoxCore.installPackageAsUser(packageName, userId);
            if (!installResult.success) {
                return installResult;
            }
        }
        return new InstallResult();
    }

    private static void uninstallPackages(Set<String> list, int userId) {
        BlackBoxCore blackBoxCore = BlackBoxCore.get();
        for (String packageName : list) {
            blackBoxCore.uninstallPackageAsUser(packageName, userId);
        }
    }

    /**
     * Install microG GMS + FakeStore (preferred). Falls back to cloning host GMS if download fails.
     */
    public static InstallResult installGApps(int userId) {
        Slog.d(TAG, "Installing microG GMS + FakeStore for user " + userId);
        InstallResult microG = MicroGInstaller.install(userId);
        if (microG.success) {
            Slog.d(TAG, "microG install OK");
            MicroGBootstrap.afterInstall(userId);
            return microG;
        }
        Slog.w(TAG, "microG install failed (" + microG.msg + "), falling back to host clone");

        Set<String> googleApps = new HashSet<>();
        googleApps.addAll(GOOGLE_SERVICE);
        googleApps.addAll(GOOGLE_APP);

        InstallResult installResult = installPackages(googleApps, userId);
        if (!installResult.success) {
            uninstallGApps(userId);
            return installResult;
        }
        return installResult;
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
        return true;
    }

    public static boolean isInstalledGoogleService(int userId) {
        return BlackBoxCore.get().isInstalled(GMS_PKG, userId);
    }
}
