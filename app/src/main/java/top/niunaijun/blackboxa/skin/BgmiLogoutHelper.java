package top.niunaijun.blackboxa.skin;

import android.util.Log;

import java.io.File;
import java.io.IOException;

import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.core.env.BEnvironment;

/**
 * Logout BGMI account inside the virtual clone only (not host /data/data).
 */
public final class BgmiLogoutHelper {

    private static final String TAG = "BgmiLogout";

    private BgmiLogoutHelper() {
    }

    public static boolean logoutAccount(int userId) {
        return logoutAccount(BgmiSkin.BGMI_PKG, userId);
    }

    public static boolean logoutAccount(String packageName, int userId) {
        if (!BgmiSkin.isBgmi(packageName)) {
            return false;
        }
        try {
            try {
                BlackBoxCore.get().stopPackage(packageName, userId);
            } catch (Throwable ignored) {
            }

            BEnvironment.load();
            File dataDir = BEnvironment.getDataDir(packageName, userId);
            if (dataDir == null) {
                return false;
            }

            cleanDataRoot(dataDir);
            cleanFilesTree(BEnvironment.getDataFilesDir(packageName, userId));
            cleanFilesTree(BEnvironment.getExternalDataFilesDir(packageName, userId));

            Log.i(TAG, "logout OK virtual base=" + dataDir.getAbsolutePath());
            return true;
        } catch (Throwable t) {
            Log.e(TAG, "logout failed", t);
            return false;
        }
    }

    private static void cleanDataRoot(File base) {
        File sharedPrefs = new File(base, "shared_prefs");
        deleteRecursive(sharedPrefs);
        if (!sharedPrefs.mkdirs()) {
            Log.w(TAG, "shared_prefs mkdir failed");
        }
        sharedPrefs.setReadable(true, false);
        sharedPrefs.setWritable(true, false);
        sharedPrefs.setExecutable(true, false);

        deleteRecursive(new File(base, "databases"));
    }

    private static void cleanFilesTree(File filesDir) {
        if (filesDir == null) {
            return;
        }
        deleteRecursive(new File(filesDir, "login-identifier.txt"));
        deleteRecursive(new File(filesDir,
                "UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Intermediate"));
        deleteRecursive(new File(filesDir, "TGPA"));
        deleteRecursive(new File(filesDir, "ProgramBinaryCache"));
        lockAnoAntiCheatFile(new File(filesDir, "ano_tmp/ano.ano3.dat"));
    }

  /** chmod 000 equivalent — block read/write on ano anti-cheat dat file. */
    private static void lockAnoAntiCheatFile(File anoFile) {
        try {
            File parent = anoFile.getParentFile();
            if (parent != null && !parent.exists()) {
                parent.mkdirs();
            }
            if (!anoFile.exists() && !anoFile.createNewFile()) {
                Log.w(TAG, "could not create ano file: " + anoFile);
            }
            anoFile.setReadable(false, false);
            anoFile.setWritable(false, false);
            anoFile.setExecutable(false, false);
        } catch (IOException e) {
            Log.w(TAG, "lock ano file failed: " + anoFile, e);
        }
    }

    private static boolean deleteRecursive(File file) {
        if (file == null || !file.exists()) {
            return true;
        }
        if (file.isDirectory()) {
            File[] children = file.listFiles();
            if (children != null) {
                for (File child : children) {
                    deleteRecursive(child);
                }
            }
        }
        if (!file.canWrite()) {
            file.setWritable(true, false);
        }
        return file.delete() || !file.exists();
    }
}
