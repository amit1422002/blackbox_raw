package com.anubis.loader.closecode;

import com.anubis.loader.app.BActivityThread;

import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.ContextCompat;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

/**
 * Guest-side libnertc-c-sdk.so patch. Re-applies after lobby reload wipes an early patch.
 */
public final class FarlightNertcInProcessPatcher {

    private static final String TAG = "NERTC_PATCH";

    private static final String LIB_NERTC = "libnertc-c-sdk.so";
    private static final String SYSTEM_INFO_CLASS = "com.netease.yunxin.lite.util.SystemInformation";
    private static final long PATCH_OFFSET = 0x6D9794L;
    private static final long PATCH_OFFSET_EMULATOR_FLAG = 0x6D8C9CL;
    private static final long MIN_MAPPED_BYTES = 2 * 1024 * 1024L;
    /** Poll maps — avoid 1ms GC pressure that blocked patching at lobby load. */
    private static final int POLL_MS = 25;
    private static final long MAX_MS = 10 * 60 * 1000L;
    private static final long WATCH_EXTEND_MS = 2 * 60 * 1000L;

    private static final byte[] PATCH_RET = {
            0x00, 0x00, (byte) 0x80, (byte) 0xD2, (byte) 0xC0, 0x03, 0x5F, (byte) 0xD6
    };
    private static final byte[] ORIG_PROLOGUE = {
            (byte) 0xFD, (byte) 0x7B, (byte) 0xBE, (byte) 0xA9
    };
    private static final byte[] PATCH_MOV_W8_ZERO = {
            0x08, 0x00, (byte) 0x80, 0x52
    };
    private static final byte[] ORIG_EMULATOR_AND = {
            0x08, 0x1C, 0x00, 0x12
    };

    private static final Patch[] PATCHES = {
            new Patch(PATCH_OFFSET, PATCH_RET, ORIG_PROLOGUE),
            new Patch(PATCH_OFFSET_EMULATOR_FLAG, PATCH_MOV_W8_ZERO, ORIG_EMULATOR_AND),
    };

    private static volatile boolean workerRunning;
    private static volatile long watchUntilMs;
    private static final Set<String> seenInodes = new HashSet<>();

    private FarlightNertcInProcessPatcher() {
    }

    public static boolean isFarlight(String packageName) {
        return "com.miraclegames.farlight84".equals(packageName)
                || "com.farlightgames.farlight84.gray".equals(packageName);
    }

    public static void start() {
        synchronized (FarlightNertcInProcessPatcher.class) {
            if (workerRunning) {
                return;
            }
            workerRunning = true;
        }
        extendWatchWindow();
        try {
            android.app.Application app = BActivityThread.getApplication();
            if (app != null) {
                ContextCompat.fix(app);
                Slog.i(TAG, "ContextCompat.fix reapplied for " + BActivityThread.getAppPackageName());
            }
        } catch (Throwable t) {
            Slog.w(TAG, "context re-fix failed: " + t.getMessage());
        }
        Slog.i(TAG, "in-process patcher armed — poll every " + POLL_MS + "ms");
        Thread t = new Thread(FarlightNertcInProcessPatcher::runLoop, "nertc-inproc-patcher");
        t.setDaemon(true);
        t.start();
        Thread classWatcher = new Thread(FarlightNertcInProcessPatcher::watchSystemInformationClass,
                "nertc-class-watcher");
        classWatcher.setDaemon(true);
        classWatcher.start();
    }

    private static void extendWatchWindow() {
        long next = System.currentTimeMillis() + WATCH_EXTEND_MS;
        if (next > watchUntilMs) {
            watchUntilMs = next;
        }
    }

    private static void runLoop() {
        final long started = System.currentTimeMillis();
        final long deadline = started + MAX_MS;
        int polls = 0;
        int patchCount = 0;
        Slog.i(TAG, "in-process patcher started");
        while (System.currentTimeMillis() < deadline && !Thread.currentThread().isInterrupted()) {
            polls++;
            final boolean watching = System.currentTimeMillis() < watchUntilMs;
            if (polls == 1 || polls % 400 == 0) {
                Slog.d(TAG, "in-process poll#" + polls + " watching=" + watching
                        + " patches=" + patchCount + " inodes=" + seenInodes.size());
            }
            try {
                if (polls % 200 == 0) {
                    android.app.Application app = BActivityThread.getApplication();
                    if (app != null) {
                        ContextCompat.fix(app);
                    }
                }
            } catch (Throwable ignored) {
            }
            int writes = patchAllMappings(LIB_NERTC, PATCHES, MIN_MAPPED_BYTES, seenInodes, polls);
            if (writes > 0) {
                patchCount += writes;
                extendWatchWindow();
            }
            try {
                Thread.sleep(POLL_MS);
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                break;
            }
        }
        workerRunning = false;
        Slog.i(TAG, "in-process patcher stopped polls=" + polls + " patchWrites=" + patchCount);
    }

    private static void watchSystemInformationClass() {
        final long deadline = System.currentTimeMillis() + MAX_MS;
        while (System.currentTimeMillis() < deadline && !Thread.currentThread().isInterrupted()) {
            try {
                ClassLoader cl = null;
                android.app.Application app = BActivityThread.getApplication();
                if (app != null) {
                    cl = app.getClassLoader();
                    ContextCompat.fix(app);
                }
                if (cl == null) {
                    cl = ClassLoader.getSystemClassLoader();
                }
                Class.forName(SYSTEM_INFO_CLASS, false, cl);
                Slog.i(TAG, "SystemInformation class visible");
                return;
            } catch (Throwable ignored) {
            }
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                return;
            }
        }
    }

    private static int patchAllMappings(String libName, Patch[] patches, long minMappedBytes,
                                      Set<String> inodeSet, int polls) {
        List<Mapping> targets = findAllMappings(libName, minMappedBytes);
        int writes = 0;
        for (Mapping m : targets) {
            if (!inodeSet.contains(m.inode)) {
                inodeSet.add(m.inode);
                Slog.i(TAG, "new " + libName + " mapping inode=" + m.inode
                        + " base=0x" + Long.toHexString(m.minStart)
                        + " bytes=" + m.totalBytes);
            }
            for (Patch p : patches) {
                long patchAddr = m.minStart + p.offset;
                if (p.expected != null && !looksLikePatchTarget(patchAddr, p, libName)) {
                    continue;
                }
                if (!needsPatch(patchAddr, p.bytes)) {
                    continue;
                }
                byte[] before = readSelf(patchAddr, p.bytes.length);
                if (writeSelf(patchAddr, p.bytes) && verifySelf(patchAddr, p.bytes)) {
                    writes++;
                    Slog.w(TAG, "PATCH_APPLIED [" + libName + "] inode=" + m.inode
                            + " offset=0x" + Long.toHexString(p.offset)
                            + " base=0x" + Long.toHexString(m.minStart)
                            + " addr=0x" + Long.toHexString(patchAddr)
                            + " before=" + toHex(before)
                            + " after=" + toHex(p.bytes)
                            + " poll#" + polls
                            + " atMs=" + System.currentTimeMillis());
                } else {
                    Slog.e(TAG, "PATCH_FAIL [" + libName + "] offset=0x"
                            + Long.toHexString(p.offset)
                            + " addr=0x" + Long.toHexString(patchAddr));
                }
            }
        }
        return writes;
    }

    private static final class Mapping {
        final String inode;
        long minStart = Long.MAX_VALUE;
        long totalBytes;
        boolean hasExec;

        Mapping(String inode) {
            this.inode = inode;
        }
    }

    private static List<Mapping> findAllMappings(String libName, long minMappedBytes) {
        Map<String, Mapping> groups = new HashMap<>();
        try (BufferedReader br = new BufferedReader(new FileReader("/proc/self/maps"))) {
            String line;
            while ((line = br.readLine()) != null) {
                if (!lineMatchesLib(line, libName)) {
                    continue;
                }
                String[] parts = line.split("\\s+");
                if (parts.length < 2) {
                    continue;
                }
                String inode = parts.length >= 5 ? parts[3] : "unknown";
                String[] range = parts[0].split("-");
                if (range.length != 2) {
                    continue;
                }
                long start = Long.parseLong(range[0], 16);
                long end = Long.parseLong(range[1], 16);
                Mapping m = groups.get(inode);
                if (m == null) {
                    m = new Mapping(inode);
                    groups.put(inode, m);
                }
                if (start < m.minStart) {
                    m.minStart = start;
                }
                m.totalBytes += Math.max(0, end - start);
                if (parts[1].contains("x")) {
                    m.hasExec = true;
                }
            }
        } catch (IOException | NumberFormatException e) {
            return new ArrayList<>();
        }
        List<Mapping> out = new ArrayList<>();
        for (Mapping m : groups.values()) {
            if (m.hasExec && m.totalBytes >= minMappedBytes) {
                out.add(m);
            }
        }
        out.sort((a, b) -> Long.compare(b.totalBytes, a.totalBytes));
        return out;
    }

    private static boolean looksLikePatchTarget(long addr, Patch p, String libName) {
        byte[] cur = readSelf(addr, p.expected.length);
        if (cur == null) {
            return false;
        }
        if (bytesEqual(cur, p.expected) || bytesEqual(cur, p.bytes)) {
            return true;
        }
        Slog.w(TAG, "PATCH_SKIP [" + libName + "] offset=0x" + Long.toHexString(p.offset)
                + " addr=0x" + Long.toHexString(addr)
                + " got=" + toHex(cur)
                + " want=" + toHex(p.expected));
        return false;
    }

    private static String toHex(byte[] bytes) {
        if (bytes == null) {
            return "?";
        }
        StringBuilder sb = new StringBuilder(bytes.length * 3);
        for (int i = 0; i < bytes.length; i++) {
            if (i > 0) {
                sb.append(' ');
            }
            sb.append(String.format("%02X", bytes[i] & 0xFF));
        }
        return sb.toString();
    }

    private static boolean bytesEqual(byte[] a, byte[] b) {
        if (a.length != b.length) {
            return false;
        }
        for (int i = 0; i < a.length; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

    private static boolean needsPatch(long addr, byte[] expected) {
        byte[] cur = readSelf(addr, expected.length);
        if (cur == null) {
            return true;
        }
        for (int i = 0; i < expected.length; i++) {
            if (cur[i] != expected[i]) {
                return true;
            }
        }
        return false;
    }

    private static boolean lineMatchesLib(String line, String libName) {
        if (line == null) {
            return false;
        }
        int slash = line.lastIndexOf('/');
        if (slash < 0) {
            return false;
        }
        return libName.equals(line.substring(slash + 1));
    }

    private static boolean writeSelf(long address, byte[] bytes) {
        try (RandomAccessFile mem = new RandomAccessFile("/proc/self/mem", "rw")) {
            mem.seek(address);
            mem.write(bytes);
            return true;
        } catch (IOException e) {
            return false;
        }
    }

    private static byte[] readSelf(long address, int length) {
        byte[] out = new byte[length];
        try (RandomAccessFile mem = new RandomAccessFile("/proc/self/mem", "r")) {
            mem.seek(address);
            return mem.read(out) == length ? out : null;
        } catch (IOException e) {
            return null;
        }
    }

    private static boolean verifySelf(long address, byte[] expected) {
        byte[] actual = readSelf(address, expected.length);
        if (actual == null) {
            return false;
        }
        for (int i = 0; i < expected.length; i++) {
            if (actual[i] != expected[i]) {
                return false;
            }
        }
        return true;
    }

    private static final class Patch {
        final long offset;
        final byte[] bytes;
        final byte[] expected;

        Patch(long offset, byte[] bytes) {
            this(offset, bytes, null);
        }

        Patch(long offset, byte[] bytes, byte[] expected) {
            this.offset = offset;
            this.bytes = bytes;
            this.expected = expected;
        }
    }
}
