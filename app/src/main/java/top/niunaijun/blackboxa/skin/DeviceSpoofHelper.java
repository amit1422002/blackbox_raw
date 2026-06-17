package top.niunaijun.blackboxa.skin;

import android.content.Context;
import android.util.Log;

import top.niunaijun.blackbox.core.env.BEnvironment;
import top.niunaijun.blackbox.utils.VirtualDeviceIds;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.Properties;

/**
 * Host-side control for BGMI clone (user 0) IMEI spoof file.
 */
public final class DeviceSpoofHelper {

    private static final String TAG = "DeviceSpoof";
    private static final String SPOOF_FILE = "device_spoof.ini";

    private DeviceSpoofHelper() {
    }

    public static File spoofIniFile(String packageName, int userId) {
        BEnvironment.load();
        File files = BEnvironment.getDataFilesDir(packageName, userId);
        if (files == null) {
            return null;
        }
        if (!files.exists()) {
            files.mkdirs();
        }
        return new File(files, SPOOF_FILE);
    }

    /** New random IMEI next BGMI launch (writes nonce, clears custom imei line). */
    public static boolean rotateImei(String packageName, int userId) {
        if (userId != VirtualDeviceIds.SPOOF_USER_ID) {
            return false;
        }
        try {
            Properties p = loadProps(packageName, userId);
            p.remove("imei");
            p.setProperty("nonce", String.valueOf(System.currentTimeMillis()));
            writeProps(packageName, userId, p);
            VirtualDeviceIds.clearCache();
            Log.i(TAG, "IMEI rotated (new random on next read) pkg=" + packageName);
            return true;
        } catch (IOException e) {
            Log.w(TAG, "rotateImei failed", e);
            return false;
        }
    }

    /** Fixed custom 15-digit IMEI. */
    public static boolean setCustomImei(String packageName, int userId, String imei) {
        if (userId != VirtualDeviceIds.SPOOF_USER_ID) {
            return false;
        }
        String digits = imei != null ? imei.replaceAll("\\D", "") : "";
        if (digits.length() != 15) {
            return false;
        }
        try {
            Properties p = loadProps(packageName, userId);
            p.setProperty("imei", digits);
            p.remove("nonce");
            writeProps(packageName, userId, p);
            VirtualDeviceIds.clearCache();
            Log.i(TAG, "custom IMEI set pkg=" + packageName);
            return true;
        } catch (IOException e) {
            Log.w(TAG, "setCustomImei failed", e);
            return false;
        }
    }

    public static String readConfiguredImei(String packageName, int userId) {
        Properties p = loadPropsQuiet(packageName, userId);
        String custom = p.getProperty("imei", "").trim();
        if (custom.length() == 15) {
            return custom;
        }
        return VirtualDeviceIds.getImei(userId, packageName);
    }

    public static String iniPathForDisplay(Context context, String packageName, int userId) {
        File f = spoofIniFile(packageName, userId);
        return f != null ? f.getAbsolutePath() : "";
    }

    private static Properties loadPropsQuiet(String packageName, int userId) {
        try {
            return loadProps(packageName, userId);
        } catch (IOException e) {
            return new Properties();
        }
    }

    private static Properties loadProps(String packageName, int userId) throws IOException {
        Properties p = new Properties();
        File f = spoofIniFile(packageName, userId);
        if (f != null && f.isFile()) {
            try (java.io.FileInputStream in = new java.io.FileInputStream(f)) {
                p.load(in);
            }
        }
        return p;
    }

    private static void writeProps(String packageName, int userId, Properties p) throws IOException {
        File f = spoofIniFile(packageName, userId);
        if (f == null) {
            throw new IOException("no files dir");
        }
        StringBuilder sb = new StringBuilder();
        sb.append("# BGMI clone device spoof (user ").append(userId).append(")\n");
        for (String key : p.stringPropertyNames()) {
            sb.append(key).append('=').append(p.getProperty(key)).append('\n');
        }
        try (FileOutputStream out = new FileOutputStream(f, false)) {
            out.write(sb.toString().getBytes(StandardCharsets.UTF_8));
        }
    }
}
