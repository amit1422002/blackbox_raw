package com.anubis.loader.utils;

import android.content.pm.ApplicationInfo;

import java.io.File;

import black.android.app.BRLoadedApk;
import com.anubis.loader.core.env.BEnvironment;

public final class StealthClassLoaderHelper {

    private StealthClassLoaderHelper() {
    }

    public static void replaceIfNeeded(Object loadedApk, String packageName, ApplicationInfo loadInfo) {
        if (!VirtualPathSpoof.isStealthAcPackage(packageName) || loadedApk == null || loadInfo == null) {
            return;
        }
        try {
            ClassLoader current = BRLoadedApk.get(loadedApk).getClassLoader();
            if (current instanceof StealthPathClassLoader) {
                return;
            }
            StringBuilder dexPath = new StringBuilder(loadInfo.sourceDir);
            if (loadInfo.splitSourceDirs != null) {
                for (String split : loadInfo.splitSourceDirs) {
                    if (split != null && !split.isEmpty()) {
                        dexPath.append(File.pathSeparatorChar).append(split);
                    }
                }
            }
            String libSearch = BEnvironment.resolveNativeLibDir(packageName).getAbsolutePath();
            ClassLoader parent = current != null ? current.getParent() : ClassLoader.getSystemClassLoader();
            StealthPathClassLoader replacement = new StealthPathClassLoader(
                    dexPath.toString(), libSearch, parent, packageName);
            BRLoadedApk.get(loadedApk)._set_mClassLoader(replacement);
            Slog.i("StealthClassLoader", "replaced classloader pkg=" + packageName + " lib=" + libSearch);
        } catch (Throwable t) {
            Slog.w("StealthClassLoader", "replace failed pkg=" + packageName + ": " + t.getMessage());
        }
    }
}
