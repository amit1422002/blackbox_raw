package com.anubis.loader.utils;

import android.content.Context;
import android.content.ContextWrapper;
import android.content.pm.ApplicationInfo;

import java.io.File;

import black.android.app.BRLoadedApk;
import com.anubis.loader.core.env.BEnvironment;

/**
 * Guest-facing Context wrapper: package name / APK paths look like a normal install.
 * Data paths use the real virtual tree ({@link BEnvironment}) so SQLite and native I/O work.
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
            ApplicationInfo loadBase = realInfo != null ? realInfo : guestInfo;
            if (loadBase != null) {
                ApplicationInfo loadInfo = new ApplicationInfo(loadBase);
                loadInfo.flags |= ApplicationInfo.FLAG_EXTRACT_NATIVE_LIBS;
                BRLoadedApk.get(loadedApk)._set_mApplicationInfo(loadInfo);
            }
            File realData = BEnvironment.getDataDir(packageName, userId);
            File realDeData = BEnvironment.getDeDataDir(packageName, userId);
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
        if (!mStealth || info == null) {
            return info;
        }
        return VirtualPathSpoof.spoofApplicationInfoRuntimeVisible(info, guestUserId());
    }

    @Override
    public String getPackageCodePath() {
        return mStealth ? VirtualPathSpoof.fakeApkPath(mPackageName) : super.getPackageCodePath();
    }

    @Override
    public String getPackageResourcePath() {
        return getPackageCodePath();
    }

    @Override
    public String getPackageName() {
        return mStealth ? mPackageName : super.getPackageName();
    }

    @Override
    public String getOpPackageName() {
        return mStealth ? mPackageName : super.getOpPackageName();
    }

    @Override
    public File getDataDir() {
        return mStealth ? realDataDir() : super.getDataDir();
    }

    @Override
    public File getFilesDir() {
        return mStealth ? realFile("files") : super.getFilesDir();
    }

    @Override
    public File getCacheDir() {
        return mStealth ? realFile("cache") : super.getCacheDir();
    }

    @Override
    public File getCodeCacheDir() {
        return mStealth ? realFile("code_cache") : super.getCodeCacheDir();
    }

    @Override
    public File getNoBackupFilesDir() {
        return mStealth ? realFile("no_backup") : super.getNoBackupFilesDir();
    }

    @Override
    public File getDir(String name, int mode) {
        return mStealth ? realFile("app_" + name) : super.getDir(name, mode);
    }

    @Override
    public File getDatabasePath(String name) {
        return mStealth ? realFile("databases/" + name) : super.getDatabasePath(name);
    }

    @Override
    public File getObbDir() {
        if (!mStealth) {
            return super.getObbDir();
        }
        return new File(BEnvironment.getExternalUserDir(guestUserId()),
                "Android/obb/" + mPackageName);
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
        File base = new File(BEnvironment.getExternalUserDir(guestUserId()),
                "Android/data/" + mPackageName + "/files");
        return type != null ? new File(base, type) : base;
    }

    @Override
    public File getExternalCacheDir() {
        if (!mStealth) {
            return super.getExternalCacheDir();
        }
        return new File(BEnvironment.getExternalUserDir(guestUserId()),
                "Android/data/" + mPackageName + "/cache");
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
        return new File[]{new File(BEnvironment.getExternalUserDir(guestUserId()),
                "Android/data/" + mPackageName + "/media")};
    }
}
