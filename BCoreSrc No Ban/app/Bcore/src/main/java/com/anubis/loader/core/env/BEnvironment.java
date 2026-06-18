package com.anubis.loader.core.env;

import android.content.Context;
import android.os.Build;
import android.os.Environment;

import org.lsposed.lsparanoid.Obfuscate;

import java.io.File;
import java.util.Locale;

import com.anubis.loader.AnubisCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.utils.FileUtils;

import java.io.IOException;

@Obfuscate

/**
 * Virtual paths for Anubis loader.
 * OBB for sandboxed apps must live under getExternalUserDir(0)/Android/obb/&lt;package&gt; so
 * {@link com.anubis.loader.core.IOCore} redirects /sdcard/Android/obb to the same tree.
 * not the real /sdcard/Android/obb (guest does not read that path).
 */
public class BEnvironment {

    /** Guest was fingerprinting literal {@code localhost} under host app data. */
    public static final String VIRTUAL_ROOT_DIR = ".vfs";
    /** Legacy virtual root name — migrated on {@link #load()}. */
    private static final String LEGACY_VIRTUAL_ROOT_DIR = "localhost";

    private static volatile File sVirtualRoot;
    private static volatile File sExternalVirtualRoot;

    /** Assign after {@link #load()} if something reads these very early; safe to use getters too. */
    public static File JUNIT_JAR;
    public static File EMPTY_JAR;

    private static File requireVirtualRoot() {
        if (sVirtualRoot == null) {
            synchronized (BEnvironment.class) {
                if (sVirtualRoot == null) {
                    Context ctx = AnubisCore.getContext();
                    if (ctx == null) {
                        throw new IllegalStateException(
                                "BEnvironment: AnubisCore.getContext() is null; init Anubis before BEnvironment paths.");
                    }
                    sVirtualRoot = new File(ctx.getFilesDir(), VIRTUAL_ROOT_DIR);
                }
            }
        }
        return sVirtualRoot;
    }

    private static File requireExternalVirtualRoot() {
        if (sExternalVirtualRoot == null) {
            synchronized (BEnvironment.class) {
                if (sExternalVirtualRoot == null) {
                    // Keep virtual SD under app-private storage — real /sdcard OBB gets media_rw
                    // ownership and the cloned guest (host UID) cannot read it (BGMI resource error).
                    sExternalVirtualRoot = new File(requireVirtualRoot(), "storage/emulated");
                }
            }
        }
        return sExternalVirtualRoot;
    }

    public static void load() {
        migrateLegacyVirtualRootIfNeeded();
        FileUtils.mkdirs(requireVirtualRoot());
        FileUtils.mkdirs(requireExternalVirtualRoot());
        FileUtils.mkdirs(new File(getExternalUserDir(0), "Android/obb"));
        // Legacy layout (pre user/0 alignment); kept so old copies can be migrated.
        FileUtils.mkdirs(new File(requireExternalVirtualRoot(), "Android/obb"));
        FileUtils.mkdirs(getSystemDir());
        FileUtils.mkdirs(getCacheDir());
        FileUtils.mkdirs(getProcDir());

        JUNIT_JAR = new File(getCacheDir(), "junit.apk");
        EMPTY_JAR = new File(getCacheDir(), "empty.apk");
    }

    /**
     * OBB dir the loader should copy into AND the guest reads via IO redirect
     * ({@code /sdcard/Android/obb} → virtual external user tree).
     */
    public static File getObbDir(String packageName) {
        return new File(new File(getExternalUserDir(0), "Android/obb"), packageName);
    }

    /** Alias for host OBB copy helpers. */
    public static File getCanonicalObbDir(String packageName) {
        return getObbDir(packageName);
    }

    /** Older builds wrote here; guest IO never redirected to this path. */
    public static File getLegacyObbDir(String packageName) {
        return new File(new File(requireExternalVirtualRoot(), "Android/obb"), packageName);
    }

    public static File getVirtualRoot() {
        return requireVirtualRoot();
    }

    public static File getExternalVirtualRoot() {
        return requireExternalVirtualRoot();
    }

    public static File getSystemDir() {
        return new File(requireVirtualRoot(), "system");
    }

    public static File getProcDir() {
        return new File(requireVirtualRoot(), "proc");
    }

    public static File getCacheDir() {
        return new File(requireVirtualRoot(), "cache");
    }

    public static File getUserInfoConf() {
        return new File(getSystemDir(), "user.conf");
    }

    public static File getAccountsConf() {
        return new File(getSystemDir(), "accounts.conf");
    }

    public static File getUidConf() {
        return new File(getSystemDir(), "uid.conf");
    }

    public static File getSharedUserConf() {
        return new File(getSystemDir(), "shared-user.conf");
    }

    public static File getXPModuleConf() {
        return new File(getSystemDir(), "xposed-module.conf");
    }

    public static File getFakeLocationConf() {
        return new File(getSystemDir(), "fake-location.conf");
    }

    public static File getDeviceSpoofConf() {
        return new File(getSystemDir(), "device_spoof.json");
    }

    public static File getPackageConf(String packageName) {
        return new File(getAppDir(packageName), "package.conf");
    }

    public static File getExternalUserDir(int userId) {
        return new File(requireExternalVirtualRoot(), String.format(Locale.US, "%d", userId));
    }

    public static File getUserDir(int userId) {
        return new File(requireVirtualRoot(), String.format(Locale.US, "data/user/%d", userId));
    }

    public static File getDeDataDir(String packageName, int userId) {
        return new File(requireVirtualRoot(), String.format(Locale.US, "data/user_de/%d/%s", userId, packageName));
    }

    public static File getExternalDataDir(String packageName, int userId) {
        return new File(getExternalUserDir(userId), String.format(Locale.US, "Android/data/%s", packageName));
    }

    public static File getDataDir(String packageName, int userId) {
        return new File(requireVirtualRoot(), String.format(Locale.US, "data/user/%d/%s", userId, packageName));
    }

    public static File getProcDir(int pid) {
        File file = new File(getProcDir(), String.format(Locale.US, "%d", pid));
        FileUtils.mkdirs(file);
        return file;
    }

    public static File getExternalDataFilesDir(String packageName, int userId) {
        return new File(getExternalDataDir(packageName, userId), "files");
    }

    public static File getDataFilesDir(String packageName, int userId) {
        return new File(getDataDir(packageName, userId), "files");
    }

    public static File getExternalDataCacheDir(String packageName, int userId) {
        return new File(getExternalDataDir(packageName, userId), "cache");
    }

    public static File getDataCacheDir(String packageName, int userId) {
        return new File(getDataDir(packageName, userId), "cache");
    }

    public static File getDataLibDir(String packageName, int userId) {
        return new File(getDataDir(packageName, userId), "lib");
    }

    public static File getDataDatabasesDir(String packageName, int userId) {
        return new File(getDataDir(packageName, userId), "databases");
    }

    public static File getAppRootDir() {
        return getAppDir("");
    }

    public static File getAppDir(String packageName) {
        return new File(requireVirtualRoot(), "data/app/" + packageName);
    }

    public static File getBaseApkDir(String packageName) {
        return new File(requireVirtualRoot(), "data/app/" + packageName + "/base.apk");
    }

    public static File getAppLibDir(String packageName) {
        return new File(getAppDir(packageName), "lib");
    }

    public static File getXSharedPreferences(String packageName, String prefFileName) {
        return new File(
                BEnvironment.getDataDir(packageName, BActivityThread.getUserId()),
                "shared_prefs/" + prefFileName + ".xml");
    }

    /** Create guest data tree before bindApplication / SQLite (avoids EACCES on /data/user/0/<pkg>). */
    public static void ensureGuestDataLayout(String packageName, int userId, String processName) {
        if (packageName == null || packageName.isEmpty()) {
            return;
        }
        File[] roots = new File[] {
                getDataDir(packageName, userId),
                getDeDataDir(packageName, userId),
                getExternalDataDir(packageName, userId),
        };
        String[] subs = new String[] {
                "cache", "files", "databases", "no_backup", "shared_prefs", "code_cache", "lib",
        };
        for (File root : roots) {
            FileUtils.mkdirs(root);
            for (String sub : subs) {
                FileUtils.mkdirs(new File(root, sub));
            }
        }
        File data = getDataDir(packageName, userId);
        File extData = getExternalDataDir(packageName, userId);
        FileUtils.mkdirs(new File(data, "app_webview"));
        FileUtils.mkdirs(new File(data, "app_hws_webview"));
        FileUtils.mkdirs(new File(data, "app_textures"));
        if (processName != null && !processName.isEmpty()) {
            String suffix = userId + ":" + packageName + ":" + processName;
            FileUtils.mkdirs(new File(data, "app_webview_" + suffix));
        }
        ensurePubgResourceDirs(data, extData);
        FileUtils.mkdirs(getObbDir(packageName));
    }

    /** Guest/host was using {@code localhost} as virtual root — rename once to {@link #VIRTUAL_ROOT_DIR}. */
    private static void migrateLegacyVirtualRootIfNeeded() {
        Context ctx = AnubisCore.getContext();
        if (ctx == null) {
            return;
        }
        File parent = ctx.getCacheDir() != null ? ctx.getCacheDir().getParentFile() : null;
        if (parent == null) {
            return;
        }
        File legacy = new File(parent, LEGACY_VIRTUAL_ROOT_DIR);
        File target = new File(ctx.getFilesDir(), VIRTUAL_ROOT_DIR);
        if (legacy.isDirectory() && !target.exists()) {
            legacy.renameTo(target);
        }
    }

    /** Move OBB from legacy external roots into the IO-redirected canonical tree. */
    public static void migrateLegacyObbIfNeeded(String packageName) {
        if (packageName == null || packageName.isEmpty()) {
            return;
        }
        File canonical = getCanonicalObbDir(packageName);
        File[] legacyRoots = new File[] {
                getLegacyObbDir(packageName),
                new File(Environment.getExternalStorageDirectory(), LEGACY_VIRTUAL_ROOT_DIR + "/0/Android/obb/" + packageName),
                new File(Environment.getExternalStorageDirectory(), LEGACY_VIRTUAL_ROOT_DIR + "/Android/obb/" + packageName),
        };
        for (File legacy : legacyRoots) {
            migrateObbDirIfNeeded(legacy, canonical);
        }
    }

    private static void migrateObbDirIfNeeded(File legacy, File canonical) {
        if (legacy == null || canonical == null || legacy.equals(canonical) || !legacy.isDirectory()) {
            return;
        }
        File[] legacyFiles = legacy.listFiles((d, name) -> name != null && name.endsWith(".obb"));
        if (legacyFiles == null || legacyFiles.length == 0) {
            return;
        }
        File[] canonicalFiles = canonical.listFiles((d, name) -> name != null && name.endsWith(".obb"));
        if (canonicalFiles != null && canonicalFiles.length > 0) {
            return;
        }
        FileUtils.mkdirs(canonical);
        for (File src : legacyFiles) {
            File dst = new File(canonical, src.getName());
            if (!dst.isFile() || dst.length() != src.length()) {
                try {
                    FileUtils.copyFile(src, dst);
                } catch (IOException ignored) {
                }
            }
        }
    }

    /** Ensure guest OBB + UE4 dirs exist before launch. */
    public static void ensureWritableGuestStorage(String packageName, int userId) {
        ensureGuestDataLayout(packageName, userId, packageName);
    }

    /** BGMI / PUBG resource download + patch cache paths (pre-login updater). */
    private static void ensurePubgResourceDirs(File data, File extData) {
        String[] rel = new String[] {
                "files/UE4Game/ShadowTrackerExtra/Saved",
                "files/UE4Game/ShadowTrackerExtra/Saved/Paks",
                "files/UE4Game/ShadowTrackerExtra/Saved/Paks/pakcache",
                "files/UE4Game/ShadowTrackerExtra/Saved/Config",
                "files/UE4Game/ShadowTrackerExtra/Saved/SaveGames",
                "files/UE4Game/ShadowTrackerExtra/Saved/Logs",
                "files/ProgramBinaryCache",
                "cache/UnityShaderCache",
                "cache/oat",
        };
        for (String path : rel) {
            FileUtils.mkdirs(new File(data, path));
            if (extData != null) {
                FileUtils.mkdirs(new File(extData, path));
            }
        }
    }
}