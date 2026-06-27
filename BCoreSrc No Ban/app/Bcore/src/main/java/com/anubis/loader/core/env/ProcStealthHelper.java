package com.anubis.loader.core.env;

import android.os.Build;

import com.anubis.loader.AnubisCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.utils.VirtualPathSpoof;
import com.anubis.loader.core.env.ContainerPathStealth;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

import com.anubis.loader.utils.FileUtils;

import org.lsposed.lsparanoid.Obfuscate;

/**
 * Fake /proc entries so guest native/Java probes see a normal standalone process.
 */
@Obfuscate
public final class ProcStealthHelper {

    private ProcStealthHelper() {
    }

    /** Guest was detecting raw process name bytes without trailing null in /proc/self/cmdline. */
    public static void writeCmdline(File procDir, String processName) throws IOException {
        byte[] name = processName.getBytes(StandardCharsets.UTF_8);
        byte[] out = new byte[name.length + 1];
        System.arraycopy(name, 0, out, 0, name.length);
        out[name.length] = 0;
        FileUtils.writeToFile(out, new File(procDir, "cmdline"));
    }

    /** Guest was detecting stub comm name host:pN via /proc/self/comm. */
    public static void writeComm(File procDir, String processName) throws IOException {
        String shortName = processName;
        int colon = processName.indexOf(':');
        if (colon > 0) {
            shortName = processName.substring(0, Math.min(colon, 15));
        } else if (shortName.length() > 15) {
            shortName = shortName.substring(0, 15);
        }
        FileUtils.writeToFile((shortName + "\n").getBytes(StandardCharsets.UTF_8), new File(procDir, "comm"));
    }

    /**
     * Guest was detecting host .so paths (libHASAD, BLAZEBOX, anogshook, loader AAR) in /proc/self/maps.
     */
    public static void writeSanitizedMaps(File procDir) {
        File mapsOut = new File(procDir, "maps");
        File statusOut = new File(procDir, "status");
        try {
            List<String> filtered = filterMapsLines(readRealMaps());
            FileUtils.writeToFile(String.join("\n", filtered).getBytes(StandardCharsets.UTF_8), mapsOut);
            writeStatus(statusOut, filtered);
        } catch (Throwable ignored) {
        }
    }

    /** Fake mountinfo/cgroup/environ so guest probes do not see container paths. */
    public static void writeExtendedProcFiles(File procDir) {
        if (procDir == null || !procDir.isDirectory()) {
            return;
        }
        try {
            writeSanitizedMountinfo(new File(procDir, "mountinfo"));
            writeSanitizedCgroup(new File(procDir, "cgroup"));
            writeSanitizedEnviron(new File(procDir, "environ"));
        } catch (Throwable ignored) {
        }
    }

    /** Rebuild fake /proc/maps after late native loads (guest hook memfd, etc.). */
    public static void refreshSanitizedMapsForCurrentProcess() {
        try {
            int bpid = BActivityThread.getAppPid();
            if (bpid < 0) {
                return;
            }
            BEnvironment.load();
            File procDir = BEnvironment.getProcDir(bpid);
            if (procDir == null || !procDir.isDirectory()) {
                return;
            }
            writeSanitizedMaps(procDir);
        } catch (Throwable ignored) {
        }
    }

    private static List<String> readRealMaps() throws IOException {
        List<String> lines = new ArrayList<>();
        File maps = new File("/proc/self/maps");
        try (BufferedReader reader = new BufferedReader(new FileReader(maps))) {
            String line;
            while ((line = reader.readLine()) != null) {
                lines.add(line);
            }
        }
        return lines;
    }

    static List<String> filterMapsLines(List<String> lines) {
        List<String> out = new ArrayList<>(lines.size());
        for (String line : lines) {
            if (line == null || line.isEmpty()) {
                continue;
            }
            if (VirtualPathSpoof.shouldSpoofForGuest()) {
                String scrubbed = VirtualPathSpoof.scrubProcLine(line);
                if (scrubbed != null && !scrubbed.isEmpty()) {
                    out.add(scrubbed.endsWith("\n") ? scrubbed.substring(0, scrubbed.length() - 1) : scrubbed);
                }
            } else if (!shouldHideMapsLine(line)) {
                out.add(line);
            }
        }
        return out;
    }

    static boolean shouldHideMapsLine(String line) {
        if (line == null || line.isEmpty()) {
            return false;
        }
        String lower = line.toLowerCase(Locale.US);
        String hostPkg = safeLower(AnubisCore.getHostPkg());
        if (hostPkg != null && lower.contains(hostPkg)) {
            return true;
        }
        return lower.contains("blackbox")
                || lower.contains("libhasad")
                || lower.contains("libartpalette")
                || lower.contains("libblazebox")
                || lower.contains("guestloginhook")
                || lower.contains("anogshook")
                || lower.contains("anogsblocker")
                || lower.contains("hdmpveblocker")
                || lower.contains("ue4privhook")
                || lower.contains("anubis")
                || lower.contains("/loader/")
                || lower.contains("localhost")
                || lower.contains("/.vfs/")
                || lower.contains("app_webview")
                || lower.contains("no_backup/.webview")
                || lower.contains("lsparanoid")
                || lower.contains("bcore");
    }

    private static String safeLower(String s) {
        return s == null ? null : s.toLowerCase(Locale.US);
    }

    private static void writeStatus(File statusOut, List<String> mapsLines) throws IOException {
        String guestName = null;
        try {
            File cmd = new File("/proc/self/cmdline");
            byte[] buf = new byte[256];
            int n;
            try (FileInputStream in = new FileInputStream(cmd)) {
                n = in.read(buf);
            }
            if (n > 0) {
                int end = 0;
                while (end < n && buf[end] != 0) {
                    end++;
                }
                guestName = new String(buf, 0, end, StandardCharsets.UTF_8);
            }
        } catch (Throwable ignored) {
        }
        StringBuilder sb = new StringBuilder();
        try (BufferedReader reader = new BufferedReader(new FileReader("/proc/self/status"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                if (guestName != null && line.startsWith("Name:")) {
                    sb.append("Name:\t").append(guestName).append('\n');
                } else if (line.startsWith("VmPeak:")
                        || line.startsWith("VmSize:")
                        || line.startsWith("VmRSS:")
                        || line.startsWith("Threads:")
                        || line.startsWith("Uid:")
                        || line.startsWith("Gid:")) {
                    sb.append(line).append('\n');
                }
            }
        }
        if (sb.length() == 0 && guestName != null) {
            sb.append("Name:\t").append(guestName).append('\n');
            int spoofUid = VirtualPathSpoof.getProcSpoofUid();
            int uidLine = spoofUid > 0 ? spoofUid : android.os.Process.myUid();
            sb.append("Uid:\t").append(uidLine).append('\t').append(uidLine)
                    .append('\t').append(uidLine).append('\t').append(uidLine).append('\n');
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
            // keep status small; guest anti-tamper often only checks Name/Uid
        }
        FileUtils.writeToFile(sb.toString().getBytes(StandardCharsets.UTF_8), statusOut);
    }

    private static void writeSanitizedMountinfo(File out) throws IOException {
        List<String> lines = new ArrayList<>();
        File mountinfo = new File("/proc/self/mountinfo");
        try (BufferedReader reader = new BufferedReader(new FileReader(mountinfo))) {
            String line;
            while ((line = reader.readLine()) != null) {
                if (!shouldHideProcContentLine(line)) {
                    lines.add(sanitizeProcContentLine(line));
                }
            }
        }
        if (lines.isEmpty()) {
            lines.add("1 1 0:1 / / rw,relatime - tmpfs tmpfs rw");
        }
        FileUtils.writeToFile(String.join("\n", lines).getBytes(StandardCharsets.UTF_8), out);
    }

    private static void writeSanitizedCgroup(File out) throws IOException {
        List<String> lines = new ArrayList<>();
        File cgroup = new File("/proc/self/cgroup");
        try (BufferedReader reader = new BufferedReader(new FileReader(cgroup))) {
            String line;
            while ((line = reader.readLine()) != null) {
                lines.add(sanitizeProcContentLine(line));
            }
        }
        FileUtils.writeToFile(String.join("\n", lines).getBytes(StandardCharsets.UTF_8), out);
    }

    private static void writeSanitizedEnviron(File out) throws IOException {
        byte[] raw;
        try (FileInputStream in = new FileInputStream("/proc/self/environ")) {
            raw = new byte[(int) Math.min(in.available(), 32_768)];
            int n = in.read(raw);
            if (n > 0) {
                raw = java.util.Arrays.copyOf(raw, n);
            }
        }
        String env = new String(raw, StandardCharsets.UTF_8);
        String[] parts = env.split("\0");
        StringBuilder sb = new StringBuilder();
        for (String part : parts) {
            if (part.isEmpty() || shouldHideProcContentLine(part)) {
                continue;
            }
            sb.append(sanitizeProcContentLine(part)).append('\0');
        }
        FileUtils.writeToFile(sb.toString().getBytes(StandardCharsets.UTF_8), out);
    }

    static boolean shouldHideProcContentLine(String line) {
        if (line == null || line.isEmpty()) {
            return false;
        }
        return shouldHideMapsLine(line);
    }

    static String sanitizeProcContentLine(String line) {
        if (line == null) {
            return "";
        }
        String guestPkg = BActivityThread.getAppPackageName();
        int sysUser = AnubisCore.getHostUserId();
        if (guestPkg != null && sysUser >= 0) {
            String canonical = ContainerPathStealth.canonicalDataDir(guestPkg, sysUser);
            line = ContainerPathStealth.sanitizeGuestPath(line);
            String hostPkg = AnubisCore.getHostPkg();
            if (hostPkg != null) {
                line = line.replace(hostPkg, guestPkg);
            }
            if (!line.contains(canonical) && line.contains("/.vfs/")) {
                line = ContainerPathStealth.sanitizeGuestPath(line);
            }
        }
        return line;
    }
}
