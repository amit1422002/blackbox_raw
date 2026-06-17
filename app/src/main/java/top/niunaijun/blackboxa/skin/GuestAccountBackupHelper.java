package top.niunaijun.blackboxa.skin;

import android.content.Context;
import android.os.Environment;
import android.util.Log;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.charset.StandardCharsets;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.List;
import java.util.Locale;

import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.core.env.BEnvironment;

/**
 * Saves BGMI guest reset dumps under {@code Android/.bgmi_sync/accounts/}.
 */
public final class GuestAccountBackupHelper {

    private static final String TAG = "GuestBackup";
    public static final String ROOT_FOLDER = ".bgmi_sync";
    public static final String GUEST_ACCOUNTS_FOLDER = "accounts";

    private GuestAccountBackupHelper() {
    }

    public static final class GuestSnapshot {
        public String oldDeviceIdXml;
        public String oldUuid;
        public String loginIdInternal;
        public String loginIdExternal;
        public int databaseFileCount;
        public boolean hadDocuments;
        public boolean hadIntermediate;
        public boolean hadTgpa;
        public boolean hadProgramBinaryCache;
        public String cloneBasePath;
    }

    public static final class GuestBackup {
        public final String id;
        public final File folder;
        public final String uuid;
        public final long timestampMs;
        public final String dumpPath;

        GuestBackup(String id, File folder, String uuid, long timestampMs, String dumpPath) {
            this.id = id;
            this.folder = folder;
            this.uuid = uuid;
            this.timestampMs = timestampMs;
            this.dumpPath = dumpPath;
        }

        public String getDisplayLabel(Context context) {
            String time = new SimpleDateFormat("dd MMM yyyy, HH:mm", Locale.getDefault())
                    .format(new Date(timestampMs));
            String shortUuid = uuid == null || uuid.isEmpty() ? "?" : uuid;
            if (shortUuid.length() > 28) {
                shortUuid = shortUuid.substring(0, 25) + "...";
            }
            return time + "\n" + shortUuid;
        }
    }

    public static File getAnubisLoaderRoot() {
        File root = new File(Environment.getExternalStorageDirectory(), ROOT_FOLDER);
        if (!root.exists()) {
            root.mkdirs();
        }
        return root;
    }

    public static File getGuestAccountsDir() {
        File dir = new File(getAnubisLoaderRoot(), GUEST_ACCOUNTS_FOLDER);
        if (!dir.exists()) {
            dir.mkdirs();
        }
        return dir;
    }

    public static GuestSnapshot captureBeforeReset(Context context, String packageName, int userId) {
        GuestSnapshot snap = new GuestSnapshot();
        try {
            BEnvironment.load();
            File base = BEnvironment.getDataDir(packageName, userId);
            snap.cloneBasePath = base != null ? base.getAbsolutePath() : "";

            File deviceId = new File(base, "shared_prefs/device_id.xml");
            if (deviceId.isFile()) {
                snap.oldDeviceIdXml = readUtf8File(deviceId);
                snap.oldUuid = extractUuid(snap.oldDeviceIdXml);
            }

            File intFiles = BEnvironment.getDataFilesDir(packageName, userId);
            File extFiles = BEnvironment.getExternalDataFilesDir(packageName, userId);
            snap.loginIdInternal = readUtf8FileOrNull(new File(intFiles, "login-identifier.txt"));
            snap.loginIdExternal = readUtf8FileOrNull(new File(extFiles, "login-identifier.txt"));

            File dbDir = new File(base, "databases");
            snap.databaseFileCount = countFiles(dbDir);

            snap.hadDocuments = new File(BEnvironment.getExternalUserDir(userId), "Documents").exists();
            snap.hadIntermediate = pathExists(intFiles, extFiles,
                    "UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Intermediate");
            snap.hadTgpa = pathExists(intFiles, extFiles, "TGPA");
            snap.hadProgramBinaryCache = pathExists(intFiles, extFiles, "ProgramBinaryCache");
        } catch (Throwable t) {
            Log.w(TAG, "captureBeforeReset", t);
        }
        return snap;
    }

    public static String saveBackupAndDump(Context context, GuestSnapshot snap, String newUuid) {
        try {
            String backupId = new SimpleDateFormat("yyyyMMdd_HHmmss", Locale.US).format(new Date());
            if (snap.oldUuid != null && !snap.oldUuid.isEmpty()) {
                String safe = snap.oldUuid.replaceAll("[^a-zA-Z0-9]", "");
                if (safe.length() > 8) {
                    safe = safe.substring(0, 8);
                }
                if (!safe.isEmpty()) {
                    backupId = backupId + "_" + safe;
                }
            }

            File backupDir = new File(getGuestAccountsDir(), backupId);
            if (!backupDir.exists() && !backupDir.mkdirs()) {
                Log.w(TAG, "mkdir failed: " + backupDir);
            }

            if (snap.oldDeviceIdXml != null && !snap.oldDeviceIdXml.isEmpty()) {
                writeUtf8File(new File(backupDir, "device_id.xml"), snap.oldDeviceIdXml);
            }

            if (snap.loginIdInternal != null) {
                writeUtf8File(new File(backupDir, "login-identifier-internal.txt"), snap.loginIdInternal);
            }
            if (snap.loginIdExternal != null) {
                writeUtf8File(new File(backupDir, "login-identifier-external.txt"), snap.loginIdExternal);
            }

            String dump = buildDumpText(snap, newUuid, backupDir.getAbsolutePath());
            writeUtf8File(new File(backupDir, "reset_dump.txt"), dump);

            Log.i(TAG, "backup saved: " + backupDir.getAbsolutePath());
            return backupDir.getAbsolutePath();
        } catch (Throwable t) {
            Log.e(TAG, "saveBackupAndDump failed", t);
            return null;
        }
    }

    public static List<GuestBackup> listBackups() {
        File dir = getGuestAccountsDir();
        File[] children = dir.listFiles(File::isDirectory);
        if (children == null || children.length == 0) {
            return Collections.emptyList();
        }
        List<GuestBackup> list = new ArrayList<>();
        for (File folder : children) {
            GuestBackup b = readBackupMeta(folder);
            if (b != null) {
                list.add(b);
            }
        }
        Collections.sort(list, Comparator.comparingLong((GuestBackup b) -> b.timestampMs).reversed());
        return list;
    }

    public static boolean restoreGuestAccount(Context context, String packageName, int userId,
                                              GuestBackup backup) {
        if (context == null || backup == null || backup.folder == null) {
            return false;
        }
        try {
            try {
                BlackBoxCore.get().stopPackage(packageName, userId);
            } catch (Throwable ignored) {
            }

            BEnvironment.load();
            File base = BEnvironment.getDataDir(packageName, userId);
            if (base == null) {
                return false;
            }

            File sharedPrefs = new File(base, "shared_prefs");
            if (!sharedPrefs.exists()) {
                sharedPrefs.mkdirs();
            }

            File savedDeviceId = new File(backup.folder, "device_id.xml");
            if (!savedDeviceId.isFile()) {
                Log.w(TAG, "no device_id.xml in backup");
                return false;
            }
            copyFile(savedDeviceId, new File(sharedPrefs, "device_id.xml"));

            File intLogin = new File(backup.folder, "login-identifier-internal.txt");
            if (intLogin.isFile()) {
                File intFiles = BEnvironment.getDataFilesDir(packageName, userId);
                if (intFiles != null && (intFiles.exists() || intFiles.mkdirs())) {
                    copyFile(intLogin, new File(intFiles, "login-identifier.txt"));
                }
            }
            File extLogin = new File(backup.folder, "login-identifier-external.txt");
            if (extLogin.isFile()) {
                File extFiles = BEnvironment.getExternalDataFilesDir(packageName, userId);
                if (extFiles != null && (extFiles.exists() || extFiles.mkdirs())) {
                    copyFile(extLogin, new File(extFiles, "login-identifier.txt"));
                }
            }

            GuestLoginHelper.deployToGuest(context.getApplicationContext(), packageName);
            Log.i(TAG, "restore OK uuid=" + backup.uuid + " from " + backup.folder);
            return true;
        } catch (Throwable t) {
            Log.e(TAG, "restoreGuestAccount failed", t);
            return false;
        }
    }

    private static GuestBackup readBackupMeta(File folder) {
        File deviceId = new File(folder, "device_id.xml");
        String uuid = deviceId.isFile() ? extractUuid(readUtf8File(deviceId)) : "";
        File dump = new File(folder, "reset_dump.txt");
        long ts = folder.lastModified();
        try {
            String id = folder.getName();
            if (id.length() >= 15) {
                SimpleDateFormat in = new SimpleDateFormat("yyyyMMdd_HHmmss", Locale.US);
                Date d = in.parse(id.substring(0, 15));
                if (d != null) {
                    ts = d.getTime();
                }
            }
        } catch (Throwable ignored) {
        }
        return new GuestBackup(folder.getName(), folder, uuid, ts,
                dump.isFile() ? dump.getAbsolutePath() : "");
    }

    private static String buildDumpText(GuestSnapshot snap, String newUuid, String backupPath) {
        String now = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault())
                .format(new Date());
        StringBuilder sb = new StringBuilder();
        sb.append("=== BGMI Guest Reset Dump ===\n");
        sb.append("Time: ").append(now).append('\n');
        sb.append("Package: ").append(BgmiSkin.BGMI_PKG).append(" (loader clone)\n");
        sb.append("Clone path: ").append(snap.cloneBasePath).append('\n');
        sb.append("Backup folder: ").append(backupPath).append("\n\n");

        sb.append("--- BEFORE RESET ---\n");
        sb.append("device_id.xml uuid: ")
                .append(snap.oldUuid == null || snap.oldUuid.isEmpty() ? "(none)" : snap.oldUuid)
                .append('\n');
        if (snap.oldDeviceIdXml != null && !snap.oldDeviceIdXml.isEmpty()) {
            sb.append("device_id.xml content:\n").append(snap.oldDeviceIdXml).append('\n');
        } else {
            sb.append("device_id.xml: (missing)\n");
        }
        sb.append("login-identifier (internal): ")
                .append(formatValue(snap.loginIdInternal)).append('\n');
        sb.append("login-identifier (external): ")
                .append(formatValue(snap.loginIdExternal)).append('\n');
        sb.append("databases files: ").append(snap.databaseFileCount).append('\n');
        sb.append("Documents existed: ").append(snap.hadDocuments).append('\n');
        sb.append("Intermediate existed: ").append(snap.hadIntermediate).append('\n');
        sb.append("TGPA existed: ").append(snap.hadTgpa).append('\n');
        sb.append("ProgramBinaryCache existed: ").append(snap.hadProgramBinaryCache).append('\n');

        sb.append("\n--- CHANGES APPLIED ---\n");
        sb.append("shared_prefs: cleared and recreated\n");
        sb.append("device_id.xml uuid: ")
                .append(snap.oldUuid == null || snap.oldUuid.isEmpty() ? "(none)" : snap.oldUuid)
                .append("  ->  ").append(newUuid).append('\n');
        sb.append("databases: deleted\n");
        sb.append("Documents: deleted\n");
        sb.append("login-identifier.txt: deleted (internal + external)\n");
        sb.append("Intermediate / TGPA / ProgramBinaryCache: cleared and blocked (touch file)\n");

        sb.append("\n--- AFTER RESET ---\n");
        sb.append("new uuid: ").append(newUuid).append('\n');
        sb.append("Recover: use Recover Guest in loader and pick this backup.\n");
        return sb.toString();
    }

    private static String formatValue(String v) {
        if (v == null) {
            return "(missing)";
        }
        if (v.isEmpty()) {
            return "(empty)";
        }
        return v;
    }

    private static boolean pathExists(File intFiles, File extFiles, String rel) {
        return new File(intFiles, rel).exists() || new File(extFiles, rel).exists();
    }

    private static int countFiles(File dir) {
        if (dir == null || !dir.isDirectory()) {
            return 0;
        }
        File[] files = dir.listFiles();
        if (files == null) {
            return 0;
        }
        int n = 0;
        for (File f : files) {
            if (f.isFile()) {
                n++;
            }
        }
        return n;
    }

    static String extractUuid(String xml) {
        if (xml == null || xml.isEmpty()) {
            return "";
        }
        int i = xml.indexOf("name=\"uuid\"");
        if (i < 0) {
            i = xml.indexOf("name='uuid'");
        }
        if (i < 0) {
            return "";
        }
        int start = xml.indexOf('>', i);
        int end = xml.indexOf('<', start + 1);
        if (start < 0 || end <= start) {
            return "";
        }
        return xml.substring(start + 1, end).trim();
    }

    private static String readUtf8FileOrNull(File file) {
        if (file == null || !file.isFile()) {
            return null;
        }
        return readUtf8File(file);
    }

    private static String readUtf8File(File file) {
        StringBuilder sb = new StringBuilder();
        try (BufferedReader r = new BufferedReader(
                new InputStreamReader(new FileInputStream(file), StandardCharsets.UTF_8))) {
            String line;
            while ((line = r.readLine()) != null) {
                if (sb.length() > 0) {
                    sb.append('\n');
                }
                sb.append(line);
            }
        } catch (IOException e) {
            Log.w(TAG, "read failed: " + file, e);
        }
        return sb.toString();
    }

    private static void writeUtf8File(File file, String content) throws IOException {
        File parent = file.getParentFile();
        if (parent != null && !parent.exists()) {
            parent.mkdirs();
        }
        try (FileOutputStream out = new FileOutputStream(file, false)) {
            out.write(content.getBytes(StandardCharsets.UTF_8));
        }
    }

    private static void copyFile(File src, File dest) throws IOException {
        try (FileInputStream in = new FileInputStream(src);
             FileOutputStream out = new FileOutputStream(dest, false)) {
            byte[] buf = new byte[8192];
            int n;
            while ((n = in.read(buf)) > 0) {
                out.write(buf, 0, n);
            }
        }
    }
}
