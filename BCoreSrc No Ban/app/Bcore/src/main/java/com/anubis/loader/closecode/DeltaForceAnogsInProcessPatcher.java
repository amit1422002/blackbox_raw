package com.anubis.loader.closecode;

import com.anubis.loader.core.NativeCore;
import com.anubis.loader.utils.Slog;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * Guest-side libanogs.so patch via /proc/self/mem — no root (same process as the game).
 */
public final class DeltaForceAnogsInProcessPatcher {

    private static final String TAG = "ANOGS_PATCH";

    private static final String LIB_ANOGS = "libanogs.so";
    private static final long MIN_MAPPED_BYTES = 2 * 1024 * 1024L;
    private static final int POLL_MS = 25;
    private static final long MAX_MS = 10 * 60 * 1000L;

    private static final byte[] PATCH_RET = {
            0x00, 0x00, (byte) 0x80, (byte) 0xD2, (byte) 0xC0, 0x03, 0x5F, (byte) 0xD6
    };

    private static final byte[] PATCH_NOP = {
            0x1F, 0x20, 0x03, (byte) 0xD5
    };

    private static final Patch[] PATCHES = {
            //new Patch(0x500AC0L, PATCH_RET),
           
    };

    private static volatile boolean workerRunning;
    private static volatile boolean baseLogged;

    private DeltaForceAnogsInProcessPatcher() {
    }

    public static boolean isDeltaForce(String packageName) {
        return "com.proxima.dfm".equals(packageName)
                || "com.garena.game.df".equals(packageName);
    }

    public static void start() {
        if (!DeltaForceAnogsConfig.APPLY_BYPASS_PATCHES) {
            Slog.i(TAG, "in-process bypass disabled — TRACE_DETECTION mode");
            return;
        }
        synchronized (DeltaForceAnogsInProcessPatcher.class) {
            if (workerRunning) {
                return;
            }
            workerRunning = true;
        }
        Thread t = new Thread(DeltaForceAnogsInProcessPatcher::runLoop, "anogs-inproc-patcher");
        t.setDaemon(true);
        t.start();
        Slog.i(TAG, "in-process anogs patcher started (no root) — " + PATCHES.length + " offsets");
    }

    private static void runLoop() {
        final long deadline = System.currentTimeMillis() + MAX_MS;
        int polls = 0;
        int patchCount = 0;
        while (System.currentTimeMillis() < deadline && !Thread.currentThread().isInterrupted()) {
            polls++;
            int writes = patchAllMappings(polls);
            if (writes > 0) {
                patchCount += writes;
                Slog.i(TAG, "in-process patched " + writes + " site(s), total=" + patchCount);
            }
            if (polls == 1 || polls % 400 == 0) {
                Slog.d(TAG, "poll#" + polls + " patchWrites=" + patchCount);
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

    private static int patchAllMappings(int polls) {
        long base = NativeCore.getMappedLibraryBase(LIB_ANOGS);
        if (base == 0) {
            return 0;
        }
        if (!baseLogged) {
            baseLogged = true;
            Slog.i(TAG, "libanogs base=0x" + Long.toHexString(base) + " (native maps)");
        }
        int writes = 0;
        for (Patch p : PATCHES) {
            long patchAddr = base + p.offset;
            if (!needsPatch(patchAddr, p.bytes)) {
                continue;
            }
            if (writeSelf(patchAddr, p.bytes) && verifySelf(patchAddr, p.bytes)) {
                writes++;
                Slog.i(TAG, "PATCH_OK offset=0x" + Long.toHexString(p.offset)
                        + " addr=0x" + Long.toHexString(patchAddr) + " poll#" + polls);
            } else {
                Slog.e(TAG, "PATCH_FAIL offset=0x" + Long.toHexString(p.offset)
                        + " addr=0x" + Long.toHexString(patchAddr));
            }
        }
        return writes;
    }

    private static final class Mapping {
        final String inode;
        long minStart = Long.MAX_VALUE;
        long totalBytes;

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
                Mapping m = groups.computeIfAbsent(inode, Mapping::new);
                if (start < m.minStart) {
                    m.minStart = start;
                }
                m.totalBytes += Math.max(0, end - start);
            }
        } catch (IOException | NumberFormatException e) {
            return new ArrayList<>();
        }
        List<Mapping> out = new ArrayList<>();
        for (Mapping m : groups.values()) {
            if (m.totalBytes >= minMappedBytes && m.minStart != Long.MAX_VALUE) {
                out.add(m);
            }
        }
        return out;
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

        Patch(long offset, byte[] bytes) {
            this.offset = offset;
            this.bytes = bytes;
        }
    }
}
