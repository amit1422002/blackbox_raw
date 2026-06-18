package com.anubis.skin;

import android.os.Build;
import android.os.Environment;
import android.util.Log;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import java.util.concurrent.atomic.AtomicBoolean;

import com.anubis.loader.AnubisCore;
import com.anubis.loader.core.env.BEnvironment;
import com.anubis.loader.utils.FileUtils;
import com.anubis.loader.utils.ObbCopyProgressListener;
import com.anubis.loader.utils.ShellUtils;
import com.anubis.loader.utils.StoragePermissionHelper;

/**
 * Full-folder import from /storage/emulated/0/anubisloader/...
 */
public final class AnubisLoaderImportHelper {

    private static final String TAG = "AnubisLoaderImport";
    public static final String ROOT_FOLDER = "anubisloader";
    public static final String BGMI_OBB_REL = "bgmi/obb";
    private static final int COPY_BUFFER_SIZE = 1024 * 1024;
    /** Require at least this many bytes copied for success (100 MB). */
    private static final long MIN_COPIED_BYTES = 100L * 1024 * 1024;

    private static final Set<String> INTERNAL_TOP_DIRS = new HashSet<String>() {{
        add("shared_prefs");
        add("databases");
        add("lib");
        add("app_webview");
        add("app_hws_webview");
        add("no_backup");
        add("code_cache");
    }};

    private AnubisLoaderImportHelper() {
    }

    public static final class CopyResult {
        public final boolean success;
        public final String message;

        CopyResult(boolean success, String message) {
            this.success = success;
            this.message = message;
        }
    }

    public static File getRoot() {
        return new File(Environment.getExternalStorageDirectory(), ROOT_FOLDER);
    }

    public static File getObbSourceDir() {
        return new File(getRoot(), BGMI_OBB_REL);
    }

    public static File getDataSourceDir(String packageName) {
        return new File(getRoot(), packageName);
    }

    public static boolean copyObb(String packageName, int userId, ObbCopyProgressListener listener) {
        return copyObbWithResult(packageName, userId, listener).success;
    }

    public static CopyResult copyObbWithResult(String packageName, int userId,
                                               ObbCopyProgressListener listener) {
        List<File> sources = collectObbFiles(getObbSourceDir());
        if (sources.isEmpty()) {
            return fail("No .obb in " + getObbSourceDir().getAbsolutePath());
        }
        try {
            prepareDest(packageName, userId);
            File destDir = BEnvironment.getObbDir(packageName);
            ensureDir(destDir);

            long totalBytes = 0;
            for (File source : sources) {
                totalBytes += Math.max(0, source.length());
            }

            long copiedBase = 0;
            boolean copiedAny = false;
            for (File source : sources) {
                File dest = new File(destDir, source.getName());
                if (copyFileWithProgress(source, dest, copiedBase, totalBytes, listener)) {
                    copiedAny = true;
                    copiedBase += Math.max(0, source.length());
                }
            }
            if (copiedAny) {
                return new CopyResult(true, "OBB copied");
            }
            return fail("Could not write OBB to clone");
        } catch (Throwable t) {
            Log.e(TAG, "copyObb failed", t);
            return fail(t.getMessage() != null ? t.getMessage() : "copyObb failed");
        }
    }

    public static CopyResult copyGameDataWithResult(String packageName, int userId) {
        return copyGameDataWithResult(packageName, userId, null);
    }

    public static CopyResult copyGameDataWithResult(String packageName, int userId,
                                                    ObbCopyProgressListener listener) {
        File sourceRoot = resolveDataSourceRoot(packageName);
        if (sourceRoot == null) {
            String hint = Build.VERSION.SDK_INT >= Build.VERSION_CODES.R
                    && !StoragePermissionHelper.hasAllFilesAccess()
                    ? " Enable All files access for Anubis."
                    : "";
            return fail("Cannot read " + describeDataCandidates(packageName) + hint);
        }

        long sourceBytes = calculateTreeSize(sourceRoot);
        int sourceFiles = countFiles(sourceRoot);
        Log.i(TAG, "Source " + sourceRoot.getAbsolutePath()
                + " files=" + sourceFiles + " size=" + formatSize(sourceBytes));

        if (sourceFiles == 0) {
            return fail("Source folder empty: " + sourceRoot.getAbsolutePath());
        }
        if (listener != null) {
            listener.onProgress(0, 0, sourceBytes, "Preparing...");
        }

        try {
            try {
                AnubisCore.get().stopPackage(packageName, userId);
            } catch (Throwable ignored) {
            }

            prepareDest(packageName, userId);
            File extData = BEnvironment.getExternalDataDir(packageName, userId);
            File intData = BEnvironment.getDataDir(packageName, userId);
            ensureDir(extData);
            ensureDir(intData);

            Log.i(TAG, "Dest ext=" + extData.getAbsolutePath() + " int=" + intData.getAbsolutePath());

            // 1) Bulk copy entire source tree into external Android/data (main game resources).
            boolean shellOk = shellCopyEntireTree(sourceRoot, extData, sourceBytes, listener);
            if (!shellOk) {
                Log.w(TAG, "Shell bulk copy failed, falling back to Java recursive copy");
                if (listener != null) {
                    listener.onProgress(0, 0, sourceBytes, "Java copy...");
                }
                javaRecursiveCopy(sourceRoot, extData, sourceBytes, 0L, listener);
            }

            // 2) Move internal-only dirs from ext → int (shared_prefs, databases, etc.)
            relocateInternalDirs(extData, intData);

            long copiedBytes = calculateTreeSize(extData) + calculateTreeSize(intData);
            Log.i(TAG, "After copy: " + formatSize(copiedBytes) + " (source was " + formatSize(sourceBytes) + ")");

            if (listener != null) {
                listener.onProgress(100, copiedBytes, sourceBytes, "Done");
            }

            if (copiedBytes < MIN_COPIED_BYTES && sourceBytes >= MIN_COPIED_BYTES) {
                return fail("Copy incomplete: only " + formatSize(copiedBytes)
                        + " of " + formatSize(sourceBytes) + " copied");
            }
            if (copiedBytes == 0) {
                return fail("Nothing was copied — check All files access permission");
            }

            return new CopyResult(true,
                    "Copied " + formatSize(copiedBytes) + " (" + sourceFiles + " files)");
        } catch (Throwable t) {
            Log.e(TAG, "copyGameData failed", t);
            return fail(t.getMessage() != null ? t.getMessage() : "copyGameData failed");
        }
    }

    /**
     * cp -rf entire source folder into clone external data dir.
     */
    private static boolean shellCopyEntireTree(File sourceRoot, File extData, long totalBytes,
                                               ObbCopyProgressListener listener) {
        try {
            ensureDir(extData);
            String cmd = String.format(Locale.US, "cp -rf \"%s/.\" \"%s/\"",
                    sourceRoot.getAbsolutePath(), extData.getAbsolutePath());
            Log.i(TAG, "shell: " + cmd);

            AtomicBoolean running = new AtomicBoolean(true);
            Thread progress = new Thread(() -> {
                while (running.get() && !Thread.currentThread().isInterrupted()) {
                    long copied = calculateTreeSize(extData);
                    int pct = totalBytes > 0
                            ? (int) Math.min(99, (copied * 100L) / totalBytes) : -1;
                    if (listener != null) {
                        listener.onProgress(pct, copied, totalBytes, "Copying...");
                    }
                    try {
                        Thread.sleep(1500L);
                    } catch (InterruptedException e) {
                        Thread.currentThread().interrupt();
                        break;
                    }
                }
            }, "anubis-copy-progress");
            progress.setDaemon(true);
            progress.start();

            int code = ShellUtils.execCommand(cmd, false, true).result;
            running.set(false);
            progress.interrupt();
            try {
                progress.join(500L);
            } catch (InterruptedException ignored) {
            }

            Log.i(TAG, "shell cp exit=" + code);
            return code == 0;
        } catch (IOException e) {
            Log.e(TAG, "shellCopyEntireTree", e);
            return false;
        }
    }

    private static void relocateInternalDirs(File extData, File intData) {
        for (String name : INTERNAL_TOP_DIRS) {
            File inExt = new File(extData, name);
            if (!inExt.exists()) {
                continue;
            }
            File inInt = new File(intData, name);
            try {
                ensureDir(inInt.getParentFile());
                String cp = String.format(Locale.US, "cp -rf \"%s\" \"%s\"",
                        inExt.getAbsolutePath(), inInt.getAbsolutePath());
                ShellUtils.execCommand(cp, false, false);
                ShellUtils.execCommand("rm -rf \"" + inExt.getAbsolutePath() + "\"", false, false);
                Log.d(TAG, "relocated " + name + " to internal data");
            } catch (IOException e) {
                Log.w(TAG, "relocate " + name + " failed", e);
            }
        }
    }

    private static long javaRecursiveCopy(File source, File dest, long totalBytes, long copiedBase,
                                          ObbCopyProgressListener listener) throws IOException {
        if (source.isDirectory()) {
            ensureDir(dest);
            long copied = copiedBase;
            for (File child : listChildren(source)) {
                copied = javaRecursiveCopy(child, new File(dest, child.getName()),
                        totalBytes, copied, listener);
            }
            return copied;
        }
        ensureDir(dest.getParentFile());
        long fileLen = source.length();
        try (FileInputStream in = new FileInputStream(source);
             FileOutputStream out = new FileOutputStream(dest)) {
            byte[] buf = new byte[COPY_BUFFER_SIZE];
            int read;
            long fileCopied = 0;
            while ((read = in.read(buf)) != -1) {
                out.write(buf, 0, read);
                fileCopied += read;
                long totalCopied = copiedBase + fileCopied;
                if (listener != null && totalBytes > 0) {
                    int pct = (int) Math.min(99, (totalCopied * 100L) / totalBytes);
                    listener.onProgress(pct, totalCopied, totalBytes, source.getName());
                }
            }
            out.getFD().sync();
        }
        return copiedBase + fileLen;
    }

    private static long calculateTreeSize(File root) {
        if (root == null || !root.exists()) {
            return 0;
        }
        if (root.isFile()) {
            return root.length();
        }
        long total = 0;
        for (File child : listChildren(root)) {
            total += calculateTreeSize(child);
        }
        return total;
    }

    private static int countFiles(File root) {
        if (root == null || !root.exists()) {
            return 0;
        }
        if (root.isFile()) {
            return 1;
        }
        int count = 0;
        for (File child : listChildren(root)) {
            count += countFiles(child);
        }
        return count;
    }

    private static void prepareDest(String packageName, int userId) {
        BEnvironment.load();
        BEnvironment.ensureGuestDataLayout(packageName, userId, packageName);
    }

    private static File resolveDataSourceRoot(String packageName) {
        File[] candidates = new File[] {
                new File("/storage/emulated/0/" + ROOT_FOLDER + "/" + packageName),
                new File("/sdcard/" + ROOT_FOLDER + "/" + packageName),
                getDataSourceDir(packageName),
        };
        for (File candidate : candidates) {
            if (candidate.isDirectory() && listChildren(candidate).length > 0) {
                return candidate;
            }
        }
        return null;
    }

    private static String describeDataCandidates(String packageName) {
        return "/storage/emulated/0/" + ROOT_FOLDER + "/" + packageName;
    }

    private static File[] listChildren(File dir) {
        if (dir == null || !dir.isDirectory()) {
            return new File[0];
        }
        File[] children = dir.listFiles();
        if (children != null && children.length > 0) {
            return children;
        }
        String[] names = dir.list();
        if (names == null || names.length == 0) {
            return new File[0];
        }
        List<File> files = new ArrayList<>(names.length);
        for (String name : names) {
            if (name != null && !name.isEmpty()) {
                files.add(new File(dir, name));
            }
        }
        return files.toArray(new File[0]);
    }

    private static void ensureDir(File dir) throws IOException {
        if (dir == null || dir.exists()) {
            return;
        }
        if (!dir.mkdirs() && !dir.exists()) {
            throw new IOException("mkdir failed: " + dir.getAbsolutePath());
        }
    }

    private static List<File> collectObbFiles(File dir) {
        List<File> result = new ArrayList<>();
        if (dir == null || !dir.isDirectory()) {
            return result;
        }
        for (File file : listChildren(dir)) {
            if (file.isFile() && file.getName().endsWith(".obb")) {
                result.add(file);
            }
        }
        return result;
    }

    private static boolean copyFileWithProgress(File source, File dest, long copiedBase,
                                                long totalBytes, ObbCopyProgressListener listener)
            throws IOException {
        if (source == null || !source.isFile()) {
            return false;
        }
        ensureDir(dest.getParentFile());
        long fileLen = source.length();
        try (FileInputStream in = new FileInputStream(source);
             FileOutputStream out = new FileOutputStream(dest)) {
            byte[] buffer = new byte[COPY_BUFFER_SIZE];
            long fileCopied = 0;
            int read;
            while ((read = in.read(buffer)) != -1) {
                out.write(buffer, 0, read);
                fileCopied += read;
                if (listener != null && totalBytes > 0) {
                    int percent = (int) Math.min(100,
                            ((copiedBase + fileCopied) * 100L) / totalBytes);
                    listener.onProgress(percent, copiedBase + fileCopied, totalBytes, source.getName());
                }
            }
            out.getFD().sync();
        }
        return dest.isFile() && dest.length() == fileLen;
    }

    static String formatSize(long bytes) {
        if (bytes < 1024) {
            return bytes + " B";
        }
        if (bytes < 1024 * 1024) {
            return String.format(Locale.US, "%.1f KB", bytes / 1024.0);
        }
        if (bytes < 1024L * 1024 * 1024) {
            return String.format(Locale.US, "%.1f MB", bytes / (1024.0 * 1024));
        }
        return String.format(Locale.US, "%.2f GB", bytes / (1024.0 * 1024 * 1024));
    }

    private static CopyResult fail(String message) {
        Log.w(TAG, message);
        return new CopyResult(false, message);
    }
}
