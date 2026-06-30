package com.anubis.skin;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Process;
import android.util.Log;

import com.anubis.loader.utils.ShellUtils;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * Host-side: find cloned guest PID and native library bases via /proc (root fallback).
 */
public final class GamePidHelper {

    private static final String TAG = "GamePidHelper";
    private static final long MIN_LIB_BYTES = 1024 * 1024L;

    private static volatile String targetPackage;

    private GamePidHelper() {
    }

    public static void setTargetPackage(String packageName) {
        targetPackage = packageName;
    }

    /** First same-UID process with {@code libanogs.so} + {@code libUE4.so} mapped. */
    public static int findPidWithReadyLibs(Context ctx) {
        if (ctx == null) {
            return -1;
        }
        final String host = ctx.getPackageName();
        final String target = targetPackage;
        ActivityManager am = (ActivityManager) ctx.getSystemService(Context.ACTIVITY_SERVICE);
        if (am != null) {
            List<ActivityManager.RunningAppProcessInfo> processes = am.getRunningAppProcesses();
            if (processes != null) {
                for (ActivityManager.RunningAppProcessInfo info : processes) {
                    if (info == null || info.pid < 10 || info.uid != Process.myUid()) {
                        continue;
                    }
                    if (!isCandidateProcess(info.processName, host, target)) {
                        continue;
                    }
                    if (hasReadyLibs(info.pid)) {
                        return info.pid;
                    }
                }
            }
        }
        return scanProcDir(host, target);
    }

    public static long findLibBase(int pid, String libName) {
        if (pid < 10 || libName == null || libName.isEmpty()) {
            return 0;
        }
        long base = 0;
        for (String line : readMapsLines(pid)) {
            if (!line.contains(libName)) {
                continue;
            }
            if (!line.contains("r-xp") && !line.contains("r--p")) {
                continue;
            }
            long start = parseMapStart(line);
            if (start != 0 && (base == 0 || start < base)) {
                base = start;
            }
        }
        return base;
    }

    public static long mappedLibBytes(int pid, String libName) {
        if (pid < 10 || libName == null || libName.isEmpty()) {
            return 0;
        }
        long total = 0;
        for (String line : readMapsLines(pid)) {
            if (!line.contains(libName)) {
                continue;
            }
            long start = parseMapStart(line);
            long end = parseMapEnd(line);
            if (end > start) {
                total += (end - start);
            }
        }
        return total;
    }

    private static boolean hasReadyLibs(int pid) {
        long anogs = findLibBase(pid, "libanogs.so");
        long ue4 = findLibBase(pid, "libUE4.so");
        if (anogs == 0 || ue4 == 0) {
            return false;
        }
        return mappedLibBytes(pid, "libanogs.so") >= MIN_LIB_BYTES;
    }

    private static boolean isCandidateProcess(String processName, String host, String target) {
        if (processName == null) {
            return false;
        }
        if (processName.equals(host) || processName.startsWith(host + ":p")) {
            return true;
        }
        if (target != null && !target.isEmpty()) {
            return processName.equals(target) || processName.startsWith(target + ":");
        }
        return false;
    }

    private static int scanProcDir(String host, String target) {
        File proc = new File("/proc");
        File[] entries = proc.listFiles();
        if (entries == null) {
            return -1;
        }
        for (File entry : entries) {
            if (!entry.isDirectory()) {
                continue;
            }
            String name = entry.getName();
            if (!name.chars().allMatch(Character::isDigit)) {
                continue;
            }
            int pid;
            try {
                pid = Integer.parseInt(name);
            } catch (NumberFormatException ignored) {
                continue;
            }
            if (pid < 10) {
                continue;
            }
            String cmdline = readCmdline(pid);
            if (!isCandidateCmdline(cmdline, host, target)) {
                continue;
            }
            if (hasReadyLibs(pid)) {
                return pid;
            }
        }
        return -1;
    }

    private static boolean isCandidateCmdline(String cmdline, String host, String target) {
        if (cmdline == null || cmdline.isEmpty()) {
            return false;
        }
        if (cmdline.startsWith(host)) {
            return true;
        }
        return target != null && !target.isEmpty() && cmdline.startsWith(target);
    }

    private static String readCmdline(int pid) {
        File cmd = new File("/proc/" + pid + "/cmdline");
        try (BufferedReader reader = new BufferedReader(new FileReader(cmd))) {
            String line = reader.readLine();
            if (line == null) {
                return "";
            }
            int nul = line.indexOf('\0');
            return nul >= 0 ? line.substring(0, nul) : line;
        } catch (IOException e) {
            return readCmdlineAsRoot(pid);
        }
    }

    private static String readCmdlineAsRoot(int pid) {
        if (!ShellUtils.checkRootPermission()) {
            return "";
        }
        ShellUtils.CommandResult r = ShellUtils.execCommand(
                "cat /proc/" + pid + "/cmdline | tr '\\0' ' '", true, true);
        return r.result == 0 && r.successMsg != null ? r.successMsg.trim() : "";
    }

    private static List<String> readMapsLines(int pid) {
        List<String> lines = new ArrayList<>();
        File maps = new File("/proc/" + pid + "/maps");
        try (BufferedReader reader = new BufferedReader(new FileReader(maps))) {
            String line;
            while ((line = reader.readLine()) != null) {
                lines.add(line);
            }
            return lines;
        } catch (IOException e) {
            Log.d(TAG, "maps read failed pid=" + pid + " — trying root");
        }
        if (!ShellUtils.checkRootPermission()) {
            return lines;
        }
        ShellUtils.CommandResult r = ShellUtils.execCommand("cat /proc/" + pid + "/maps", true, true);
        if (r.result != 0 || r.successMsg == null) {
            return lines;
        }
        for (String line : r.successMsg.split("\n")) {
            if (!line.isEmpty()) {
                lines.add(line);
            }
        }
        return lines;
    }

    private static long parseMapStart(String line) {
        int dash = line.indexOf('-');
        if (dash <= 0) {
            return 0;
        }
        try {
            return Long.parseLong(line.substring(0, dash).trim(), 16);
        } catch (NumberFormatException e) {
            return 0;
        }
    }

    private static long parseMapEnd(String line) {
        int dash = line.indexOf('-');
        int space = line.indexOf(' ', dash + 1);
        if (dash < 0 || space < 0) {
            return 0;
        }
        try {
            return Long.parseLong(line.substring(dash + 1, space).trim(), 16);
        } catch (NumberFormatException e) {
            return 0;
        }
    }
}
