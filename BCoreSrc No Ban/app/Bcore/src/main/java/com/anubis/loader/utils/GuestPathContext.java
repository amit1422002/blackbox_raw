package com.anubis.loader.utils;

import android.content.Context;
import android.content.ContextWrapper;
import android.content.pm.ApplicationInfo;

import java.io.File;

import black.android.app.BRLoadedApk;
import com.anubis.loader.AnubisCore;
import com.anubis.loader.core.env.BEnvironment;
import com.anubis.loader.utils.FileUtils;

/**
 * Guest-facing Context wrapper: package name / APK paths look like a normal install.
 * Data paths use the real virtual tree ({@link BEnvironment}) so SQLite and native I/O work.
 * PM hooks still spoof paths for external package-manager queries.
 */
public final class GuestPathContext extends ContextWrapper {

    private final String mPackageName;
    private final boolean mStealth;

    public GuestPathContext(Context base, String packageName) {
        super(base);
        mPackageName = packageName;
        mStealth = VirtualPathSpoof.isStealthAcPackage(packageName);
    }

    public static void wrapIfNeeded(Context context, String packageName) {
        if (context == null || packageName == null || context instanceof GuestPathContext) {
            return;
        }
        if (!VirtualPathSpoof.isStealthAcPackage(packageName)) {
            return;
        }
        try {
            java.lang.reflect.Field mBase = ContextWrapper.class.getDeclaredField("mBase");
            mBase.setAccessible(true);
            Context base = (Context) mBase.get(context);
            if (base == null || base instanceof GuestPathContext) {
                return;
            }
            mBase.set(context, new GuestPathContext(base, packageName));
        } catch (Throwable t) {
            Slog.w("GuestPathContext", "wrapIfNeeded failed pkg=" + packageName + ": " + t.getMessage());
        }
    }

    public static void patchLoadedApk(Object loadedApk, String packageName, int userId,
                                      ApplicationInfo guestInfo, ApplicationInfo realInfo) {
        if (!VirtualPathSpoof.isStealthAcPackage(packageName) || loadedApk == null) {
            return;
        }
        try {
            File realData = BEnvironment.getDataDir(packageName, userId);
            File realDeData = BEnvironment.getDeDataDir(packageName, userId);
            ApplicationInfo loadBase = realInfo != null ? realInfo : guestInfo;
            if (loadBase != null) {
                ApplicationInfo loadInfo = new ApplicationInfo(loadBase);
                loadInfo.flags |= ApplicationInfo.FLAG_EXTRACT_NATIVE_LIBS;
                loadInfo.dataDir = realData.getAbsolutePath();
                loadInfo.deviceProtectedDataDir = realDeData.getAbsolutePath();
                BRLoadedApk.get(loadedApk)._set_mApplicationInfo(loadInfo);
            }
            BRLoadedApk.get(loadedApk)._set_mDataDir(realData.getAbsolutePath());
            BRLoadedApk.get(loadedApk)._set_mDataDirFile(realData);
            BRLoadedApk.get(loadedApk)._set_mCredentialProtectedDataDirFile(realData);
            BRLoadedApk.get(loadedApk)._set_mDeviceProtectedDataDirFile(realDeData);
            String realLib = BEnvironment.resolveNativeLibDir(packageName).getAbsolutePath();
            BRLoadedApk.get(loadedApk)._set_mLibDir(realLib);
            repairCorruptGuestLibEntries(packageName);
        } catch (Throwable t) {
            Slog.w("GuestPathContext", "patchLoadedApk pkg=" + packageName + ": " + t.getMessage());
        }
    }

    private static void repairCorruptGuestLibEntries(String packageName) {
        try {
            File libDir = BEnvironment.resolveNativeLibDir(packageName);
            if (!libDir.isDirectory()) {
                return;
            }
            for (String name : new String[]{"libc.so", "libm.so", "libdl.so"}) {
                File entry = new File(libDir, name);
                if (entry.isDirectory()) {
                    deleteRecursive(entry);
                    Slog.w("GuestPathContext", "removed corrupt lib dir: " + entry.getAbsolutePath());
                }
            }
        } catch (Throwable t) {
            Slog.w("GuestPathContext", "repairCorruptGuestLibEntries: " + t.getMessage());
        }
    }

    private static void deleteRecursive(File file) {
        if (file.isDirectory()) {
            File[] children = file.listFiles();
            if (children != null) {
                for (File child : children) {
                    deleteRecursive(child);
                }
            }
        }
        file.delete();
    }

    private int guestUserId() {
        return com.anubis.loader.app.BActivityThread.getUserId();
    }

    private File realDataDir() {
        return BEnvironment.getDataDir(mPackageName, guestUserId());
    }

    private File realFile(String relative) {
        return new File(realDataDir(), relative);
    }

    @Override
    public ApplicationInfo getApplicationInfo() {
        ApplicationInfo info = super.getApplicationInfo();
        if (!mStealth || info == null || !VirtualPathSpoof.shouldSpoofForGuest()) {
            return info;
        }
        // APK/split paths only — dataDir must match LoadedApk + Context file APIs (Farlight WM/UE4).
        ApplicationInfo ai = VirtualPathSpoof.spoofApplicationInfoPaths(info, guestUserId());
        File realData = BEnvironment.getDataDir(mPackageName, guestUserId());
        File realDe = BEnvironment.getDeDataDir(mPackageName, guestUserId());
        ai.dataDir = realData.getAbsolutePath();
        ai.deviceProtectedDataDir = realDe.getAbsolutePath();
        return ai;
    }

    @Override
    public String getPackageCodePath() {
        if (!mStealth || !VirtualPathSpoof.shouldSpoofForGuest()) {
            return super.getPackageCodePath();
        }
        return VirtualPathSpoof.fakeApkPath(mPackageName);
    }

    @Override
    public String getPackageResourcePath() {
        return getPackageCodePath();
    }

    @Override
    public String getPackageName() {
        if (!mStealth || !VirtualPathSpoof.shouldSpoofForGuest()) {
            return super.getPackageName();
        }
        return mPackageName;
    }

    @Override
    public String getOpPackageName() {
        if (!mStealth || !VirtualPathSpoof.shouldSpoofForGuest()) {
            return super.getOpPackageName();
        }
        // IME / AppOps require host op package — kernel UID is still host.
        return AnubisCore.getHostPkg();
    }

  // Real vfs paths — must match LoadedApk mDataDir so games find downloaded resources.
    private File realChild(String relative) {
        File dir = realFile(relative);
        FileUtils.mkdirs(dir);
        return dir;
    }

    @Override
    public File getDataDir() {
        return mStealth ? realDataDir() : super.getDataDir();
    }

    @Override
    public File getFilesDir() {
        return mStealth ? realChild("files") : super.getFilesDir();
    }

    @Override
    public File getCacheDir() {
        return mStealth ? realChild("cache") : super.getCacheDir();
    }

    @Override
    public File getCodeCacheDir() {
        return mStealth ? realChild("code_cache") : super.getCodeCacheDir();
    }

    @Override
    public File getNoBackupFilesDir() {
        return mStealth ? realChild("no_backup") : super.getNoBackupFilesDir();
    }

    @Override
    public File getDir(String name, int mode) {
        return mStealth ? realChild("app_" + name) : super.getDir(name, mode);
    }

    @Override
    public File getDatabasePath(String name) {
        if (!mStealth) {
            return super.getDatabasePath(name);
        }
        if (name != null) {
            if (name.startsWith("/")) {
                return new File(name);
            }
            int noBackup = name.indexOf("/no_backup/");
            if (noBackup >= 0) {
                return new File(realDataDir(), name.substring(noBackup + 1));
            }
            int databases = name.indexOf("/databases/");
            if (databases >= 0) {
                return new File(realDataDir(), name.substring(databases + 1));
            }
            if (name.indexOf('/') >= 0) {
                return new File(realDataDir(), name);
            }
        }
        return realFile("databases/" + name);
    }

    @Override
    public File getObbDir() {
        if (!mStealth) {
            return super.getObbDir();
        }
        File obb = BEnvironment.getObbDir(mPackageName);
        FileUtils.mkdirs(obb);
        return obb;
    }

    @Override
    public File[] getExternalFilesDirs(String type) {
        return mStealth ? new File[]{getExternalFilesDir(type)} : super.getExternalFilesDirs(type);
    }

    @Override
    public File getExternalFilesDir(String type) {
        if (!mStealth) {
            return super.getExternalFilesDir(type);
        }
        File base = BEnvironment.getExternalDataFilesDir(mPackageName, guestUserId());
        File dir = type != null ? new File(base, type) : base;
        FileUtils.mkdirs(dir);
        return dir;
    }

    @Override
    public File getExternalCacheDir() {
        if (!mStealth) {
            return super.getExternalCacheDir();
        }
        File cache = BEnvironment.getExternalDataCacheDir(mPackageName, guestUserId());
        FileUtils.mkdirs(cache);
        return cache;
    }

    @Override
    public File[] getExternalCacheDirs() {
        return mStealth ? new File[]{getExternalCacheDir()} : super.getExternalCacheDirs();
    }

    @Override
    public File[] getExternalMediaDirs() {
        if (!mStealth) {
            return super.getExternalMediaDirs();
        }
        File media = new File(BEnvironment.getExternalDataDir(mPackageName, guestUserId()), "media");
        FileUtils.mkdirs(media);
        return new File[]{media};
    }
}
