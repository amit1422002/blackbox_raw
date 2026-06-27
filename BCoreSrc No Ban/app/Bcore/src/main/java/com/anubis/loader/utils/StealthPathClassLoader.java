package com.anubis.loader.utils;

import android.system.Os;
import android.system.OsConstants;

import java.io.File;

import dalvik.system.PathClassLoader;
import com.anubis.loader.core.env.BEnvironment;

/**
 * UE4 / split-APK games: {@link dalvik.system.DexPathList#findLibrary} may fail even when
 * extracted {@code .so} files exist (namespace + IO redirect). Fallback to virt lib dir.
 */
public final class StealthPathClassLoader extends PathClassLoader {

    private final String mPackageName;

    public StealthPathClassLoader(String dexPath, String librarySearchPath,
                                  ClassLoader parent, String packageName) {
        super(dexPath, librarySearchPath, parent);
        mPackageName = packageName;
    }

    @Override
    public String findLibrary(String name) {
        String found = super.findLibrary(name);
        if (found != null) {
            return found;
        }
        return resolveExtractedSo(name);
    }

    static String resolveExtractedSo(String packageName, String libraryName) {
        if (packageName == null || libraryName == null) {
            return null;
        }
        String fileName = System.mapLibraryName(libraryName);
        File so = new File(BEnvironment.resolveNativeLibDir(packageName), fileName);
        if (so.isFile() && so.length() > 0L) {
            return so.getAbsolutePath();
        }
        try {
            if (Os.access(so.getAbsolutePath(), OsConstants.R_OK)) {
                return so.getAbsolutePath();
            }
        } catch (Throwable ignored) {
        }
        return null;
    }

    private String resolveExtractedSo(String libraryName) {
        return resolveExtractedSo(mPackageName, libraryName);
    }
}
