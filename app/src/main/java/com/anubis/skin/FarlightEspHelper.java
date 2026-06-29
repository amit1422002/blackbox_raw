package com.anubis.skin;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.Build;
import android.util.Log;

import com.anubis.loader.AnubisCore;
import com.anubis.loader.core.env.BEnvironment;
import com.anubis.loader.core.env.GamePackages;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/**
 * Stages Farlight ESP reader ELF into guest virtual FS for memfd load (Java draws overlay).
 */
public final class FarlightEspHelper {

    private static final String TAG = "FarlightEsp";
    private static final String HOOK_FILE = "libfarlightesp.so";
    /** v10 = coherent private POV + aspect W2S + head/feet box. */
    private static final String HOOK_ELF_CACHE = ".farlight_esp_blob_v10";
    private static final String LEGACY_ELF_CACHE = ".farlight_esp_blob";
    /** Reader-only ELF is ~3MB; old ImGui blob was ~7MB. */
    private static final long MAX_READER_ELF_BYTES = 5_000_000L;

    private FarlightEspHelper() {
    }

    public static boolean isFarlightPackage(String packageName) {
        return GamePackages.isFarlight(packageName)
                || "com.farlightgames.farlight84.gray".equals(packageName);
    }

    public static void deployToGuest(Context context, String packageName, int userId) {
        if (context == null || packageName == null || packageName.isEmpty()) {
            return;
        }
        if (!isFarlightPackage(packageName)) {
            return;
        }
        try {
            BEnvironment.load();
            File filesDir = BEnvironment.getDataFilesDir(packageName, userId);
            if (filesDir == null) {
                return;
            }
            if (!filesDir.exists() && !filesDir.mkdirs()) {
                Log.w(TAG, "mkdir failed: " + filesDir);
                return;
            }
            removeLegacyHookSo(filesDir);
            removeLegacyElfCache(filesDir);
            stageHookElfCache(context.getApplicationContext(), filesDir);
        } catch (Throwable t) {
            Log.w(TAG, "deploy failed", t);
        }
    }

    public static byte[] readHookBytesForGuest(File guestFilesDir) {
        byte[] staged = readStagedHookElf(guestFilesDir);
        if (staged != null) {
            return staged;
        }
        Context host = AnubisCore.getContext();
        if (host != null) {
            return readHookLibraryBytes(host);
        }
        return null;
    }

    public static byte[] readStagedHookElf(File guestFilesDir) {
        if (guestFilesDir == null) {
            return null;
        }
        removeLegacyElfCache(guestFilesDir);
        File cache = new File(guestFilesDir, HOOK_ELF_CACHE);
        if (!cache.isFile() || cache.length() < 1024L) {
            return null;
        }
        if (cache.length() > MAX_READER_ELF_BYTES) {
            Log.w(TAG, "reject stale ImGui blob bytes=" + cache.length());
            if (!cache.delete()) {
                Log.w(TAG, "could not delete stale blob");
            }
            return null;
        }
        try (FileInputStream in = new FileInputStream(cache);
             ByteArrayOutputStream out = new ByteArrayOutputStream((int) cache.length())) {
            copyStream(in, out);
            byte[] elf = out.size() > 1024 ? out.toByteArray() : null;
            return isValidReaderElf(elf) ? elf : null;
        } catch (Throwable t) {
            Log.w(TAG, "readStagedHookElf failed", t);
            return null;
        }
    }

    public static boolean isValidReaderElf(byte[] elf) {
        if (elf == null || elf.length < 4) {
            return false;
        }
        if (elf[0] != 0x7f || elf[1] != 'E' || elf[2] != 'L' || elf[3] != 'F') {
            return false;
        }
        return elf.length <= MAX_READER_ELF_BYTES;
    }

    private static void stageHookElfCache(Context hostContext, File guestFilesDir) {
        byte[] elf = readHookLibraryBytes(hostContext);
        if (!isValidReaderElf(elf)) {
            Log.e(TAG, "ESP reader ELF missing/invalid — rebuild app (assets/hook/" + HOOK_FILE + ")");
            return;
        }
        File cache = new File(guestFilesDir, HOOK_ELF_CACHE);
        try (FileOutputStream out = new FileOutputStream(cache, false)) {
            out.write(elf);
        } catch (IOException e) {
            Log.w(TAG, "stageHookElfCache failed", e);
            return;
        }
        Log.i(TAG, "ESP reader ELF staged bytes=" + elf.length);
    }

    public static byte[] readHookLibraryBytes(Context context) {
        if (context == null) {
            return null;
        }
        try {
            ByteArrayOutputStream out = new ByteArrayOutputStream(1024 * 1024);
            try (InputStream in = context.getAssets().open("hook/" + HOOK_FILE)) {
                copyStream(in, out);
                byte[] elf = out.toByteArray();
                if (isValidReaderElf(elf)) {
                    return elf;
                }
                Log.w(TAG, "assets hook ELF invalid bytes=" + (elf != null ? elf.length : 0));
            } catch (Throwable ignored) {
            }
            ApplicationInfo ai = context.getApplicationInfo();
            if (ai != null && ai.nativeLibraryDir != null) {
                File flat = new File(ai.nativeLibraryDir, HOOK_FILE);
                if (flat.isFile() && flat.length() > 1024L) {
                    out.reset();
                    try (InputStream in = new FileInputStream(flat)) {
                        copyStream(in, out);
                    }
                    return out.toByteArray();
                }
            }
            String apkPath = ai != null ? ai.sourceDir : null;
            if (apkPath == null) {
                return null;
            }
            try (ZipFile zip = new ZipFile(apkPath)) {
                if (Build.SUPPORTED_ABIS != null) {
                    for (String abi : Build.SUPPORTED_ABIS) {
                        if (copyZipEntryToBuffer(zip, "lib/" + abi + "/" + HOOK_FILE, out)) {
                            return out.toByteArray();
                        }
                    }
                }
                if (copyZipEntryToBuffer(zip, "lib/arm64-v8a/" + HOOK_FILE, out)
                        || copyZipEntryToBuffer(zip, "lib/arm64/" + HOOK_FILE, out)) {
                    return out.toByteArray();
                }
            }
        } catch (Throwable t) {
            Log.w(TAG, "readHookLibraryBytes failed", t);
        }
        return null;
    }

    private static void removeLegacyHookSo(File dir) {
        File dest = new File(dir, HOOK_FILE);
        if (dest.isFile() && !dest.delete()) {
            Log.w(TAG, "could not remove legacy hook so: " + dest.getAbsolutePath());
        }
    }

    private static void removeLegacyElfCache(File dir) {
        File legacy = new File(dir, LEGACY_ELF_CACHE);
        if (legacy.isFile()) {
            long n = legacy.length();
            if (legacy.delete()) {
                Log.i(TAG, "removed legacy ESP blob bytes=" + n);
            }
        }
    }

    private static boolean copyZipEntryToBuffer(ZipFile zip, String entryName, ByteArrayOutputStream out)
            throws IOException {
        ZipEntry entry = zip.getEntry(entryName);
        if (entry == null) {
            return false;
        }
        out.reset();
        try (InputStream in = zip.getInputStream(entry)) {
            copyStream(in, out);
        }
        return out.size() > 1024;
    }

    private static void copyStream(InputStream in, OutputStream out) throws IOException {
        byte[] buf = new byte[8192];
        int n;
        while ((n = in.read(buf)) > 0) {
            out.write(buf, 0, n);
        }
    }
}
