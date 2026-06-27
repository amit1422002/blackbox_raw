package com.anubis.loader.utils;

import android.content.Context;
import android.content.ContextWrapper;
import android.content.pm.ApplicationInfo;

import java.io.File;

import black.android.app.BRLoadedApk;
import com.anubis.loader.AnubisCore;
import com.anubis.loader.core.env.BEnvironment;

/**
 * Stealth AC: guest package name / APK / data paths look like a normal install.
 * File I/O uses the real anubis virtual tree ({@link BEnvironment}) — {@link com.anubis.loader.core.IOCore}
 * maps guest-visible fake paths to real files (same process — safe on Android 16 scoped storage).
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

    /** Old path-scrub bug could mkdir {@code libc.so} as a directory and break Crashlytics. */
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

    private File guestFile(String fakeAbsolutePath) {
        return new File(fakeAbsolutePath);
    }

    private String fakeDataPath() {
        return VirtualPathSpoof.fakeDataDir(mPackageName, guestUserId());
    }

    private String fakeExtDataPath() {
        return VirtualPathSpoof.fakeExternalDataDir(mPackageName, guestUserId());
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
        if (!mStealth) {
            return super.getDataDir();
        }
        return guestFile(fakeDataPath());
    }

    @Override
    public File getFilesDir() {
        if (!mStealth) {
            return super.getFilesDir();
        }
        return guestFile(fakeDataPath() + "/files");
    }

    @Override
    public File getCacheDir() {
        if (!mStealth) {
            return super.getCacheDir();
        }
        return guestFile(fakeDataPath() + "/cache");
    }

    @Override
    public File getCodeCacheDir() {
        if (!mStealth) {
            return super.getCodeCacheDir();
        }
        return guestFile(fakeDataPath() + "/code_cache");
    }

    @Override
    public File getNoBackupFilesDir() {
        if (!mStealth) {
            return super.getNoBackupFilesDir();
        }
        return guestFile(fakeDataPath() + "/no_backup");
    }

    @Override
    public File getDir(String name, int mode) {
        if (!mStealth) {
            return super.getDir(name, mode);
        }
        return guestFile(fakeDataPath() + "/app_" + name);
    }

    @Override
    public File getDatabasePath(String name) {
        if (!mStealth) {
            return super.getDatabasePath(name);
        }
        return guestFile(fakeDataPath() + "/databases/" + name);
    }

    @Override
    public File getObbDir() {
        if (!mStealth) {
            return super.getObbDir();
        }
        return guestFile(VirtualPathSpoof.fakeObbDir(mPackageName, guestUserId()));
    }

    @Override
    public File[] getExternalFilesDirs(String type) {
        if (!mStealth) {
            return super.getExternalFilesDirs(type);
        }
        return new File[]{getExternalFilesDir(type)};
    }

    @Override
    public File getExternalFilesDir(String type) {
        if (!mStealth) {
            return super.getExternalFilesDir(type);
        }
        File base = guestFile(fakeExtDataPath() + "/files");
        if (type != null) {
            return new File(base, type);
        }
        return base;
    }

    @Override
    public File getExternalCacheDir() {
        if (!mStealth) {
            return super.getExternalCacheDir();
        }
        return guestFile(fakeExtDataPath() + "/cache");
    }

    @Override
    public File[] getExternalCacheDirs() {
        if (!mStealth) {
            return super.getExternalCacheDirs();
        }
        return new File[]{getExternalCacheDir()};
    }

    @Override
    public File[] getExternalMediaDirs() {
        if (!mStealth) {
            return super.getExternalMediaDirs();
        }
        return new File[]{guestFile(fakeExtDataPath() + "/media")};
    }
}
