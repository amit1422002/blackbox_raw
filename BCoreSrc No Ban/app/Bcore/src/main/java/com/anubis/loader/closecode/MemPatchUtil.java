package com.anubis.loader.closecode;

import com.anubis.loader.core.NativeCore;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.io.StringReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * Shared /proc/self/mem helpers used by in-process patchers.
 * Ported from the ayan external binary flow (maps scan + pwrite64).
 */
final class MemPatchUtil {

    static final byte[] PATCH_RET = {
            0x00, 0x00, (byte) 0x80, (byte) 0xD2, (byte) 0xC0, 0x03, 0x5F, (byte) 0xD6
    };
    /** {@code mov x0, x1; ret} — for char* serializers: return output cursor unchanged. */
    static final byte[] PATCH_RET_X1 = {
            (byte) 0xE0, 0x03, 0x01, (byte) 0xAA, (byte) 0xC0, 0x03, 0x5F, (byte) 0xD6
    };
    static final byte[] PATCH_NOP = {
            0x1F, 0x20, 0x03, (byte) 0xD5
    };

    private MemPatchUtil() {
    }

    static final class Mapping {
        final String inode;
        long minStart = Long.MAX_VALUE;
        long totalBytes;
        boolean hasExec;

        Mapping(String inode) {
            this.inode = inode;
        }
    }

    static final class Patch {
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

    static List<Mapping> findAllMappings(String libName, long minMappedBytes) {
        Map<String, Mapping> groups = new HashMap<>();
        try (BufferedReader br = new BufferedReader(new StringReader(readMapsText()))) {
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
                if (parts[1].contains("x")) {
                    m.hasExec = true;
                }
            }
        } catch (IOException | NumberFormatException ignored) {
            return new ArrayList<>();
        }
        List<Mapping> out = new ArrayList<>();
        for (Mapping m : groups.values()) {
            if (m.hasExec && m.totalBytes >= minMappedBytes && m.minStart != Long.MAX_VALUE) {
                out.add(m);
            }
        }
        out.sort((a, b) -> Long.compare(b.totalBytes, a.totalBytes));
        return out;
    }

    static int patchAllMappings(String libName, Patch[] patches, long minMappedBytes,
                                java.util.Set<String> inodeSet, int polls, String logTag) {
        List<Mapping> targets = findAllMappings(libName, minMappedBytes);
        int writes = 0;
        for (Mapping m : targets) {
            if (!inodeSet.contains(m.inode)) {
                inodeSet.add(m.inode);
                com.anubis.loader.utils.Slog.i(logTag, "mapped " + libName + " inode=" + m.inode
                        + " base=0x" + Long.toHexString(m.minStart)
                        + " bytes=" + m.totalBytes);
            }
            for (Patch p : patches) {
                long patchAddr = m.minStart + p.offset;
                if (!needsPatch(patchAddr, p.bytes)) {
                    continue;
                }
                if (tryNativePatchAt(patchAddr, p, libName, logTag, polls)) {
                    writes++;
                    continue;
                }
                if (p.expected != null && !looksLikePatchTarget(patchAddr, p, libName, logTag)) {
                    continue;
                }
                byte[] before = readSelf(patchAddr, p.bytes.length);
                if (writeSelf(patchAddr, p.bytes) && verifySelf(patchAddr, p.bytes)) {
                    writes++;
                    com.anubis.loader.utils.Slog.w(logTag, "PATCH_OK [" + libName + "] offset=0x"
                            + Long.toHexString(p.offset)
                            + " addr=0x" + Long.toHexString(patchAddr)
                            + " before=" + toHex(before)
                            + " after=" + toHex(p.bytes)
                            + " poll#" + polls);
                } else {
                    com.anubis.loader.utils.Slog.e(logTag, "PATCH_FAIL [" + libName + "] offset=0x"
                            + Long.toHexString(p.offset)
                            + " addr=0x" + Long.toHexString(patchAddr));
                }
            }
        }
        return writes;
    }

    private static boolean looksLikePatchTarget(long addr, Patch p, String libName, String logTag) {
        byte[] cur = readSelf(addr, p.expected.length);
        if (cur == null) {
            com.anubis.loader.utils.Slog.w(logTag, "PATCH_UNREADABLE [" + libName + "] offset=0x"
                    + Long.toHexString(p.offset) + " addr=0x" + Long.toHexString(addr));
            return false;
        }
        if (bytesEqual(cur, p.expected) || bytesEqual(cur, p.bytes)) {
            return true;
        }
        com.anubis.loader.utils.Slog.w(logTag, "PATCH_SKIP [" + libName + "] offset=0x"
                + Long.toHexString(p.offset)
                + " addr=0x" + Long.toHexString(addr)
                + " got=" + toHex(cur)
                + " want=" + toHex(p.expected));
        return false;
    }

    static String toHex(byte[] bytes) {
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

    private static boolean tryNativePatchAt(long patchAddr, Patch p, String libName,
                                            String logTag, int polls) {
        try {
            if (!NativeCore.patchAbsoluteAddress(patchAddr, p.bytes, p.expected)) {
                if (polls <= 3 || polls % 200 == 0) {
                    com.anubis.loader.utils.Slog.i(logTag, "PATCH_NATIVE_MISS [" + libName + "] offset=0x"
                            + Long.toHexString(p.offset) + " addr=0x"
                            + Long.toHexString(patchAddr) + " poll#" + polls);
                }
                return false;
            }
            if (needsPatch(patchAddr, p.bytes)) {
                return false;
            }
            com.anubis.loader.utils.Slog.w(logTag, "PATCH_OK [" + libName + "] offset=0x"
                    + Long.toHexString(p.offset) + " addr=0x"
                    + Long.toHexString(patchAddr) + " via=mprotect poll#" + polls);
            return true;
        } catch (Throwable t) {
            com.anubis.loader.utils.Slog.e(logTag, "PATCH_FAIL [" + libName + "] offset=0x"
                    + Long.toHexString(p.offset) + " via=mprotect err=" + t.getMessage());
            return false;
        }
    }

    static boolean bytesEqual(byte[] a, byte[] b) {
        if (a == null || b == null || a.length != b.length) {
            return false;
        }
        for (int i = 0; i < a.length; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

    static boolean needsPatch(long addr, byte[] expected) {
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

    /** Patcher must read real kernel maps — guest-visible /proc/self/maps is scrubbed. */
    private static String readMapsText() throws IOException {
        try {
            String raw = NativeCore.readRealProcSelfMaps();
            if (raw != null && !raw.isEmpty()) {
                return raw;
            }
        } catch (Throwable ignored) {
        }
        StringBuilder sb = new StringBuilder(64 * 1024);
        try (BufferedReader reader = new BufferedReader(new FileReader("/proc/self/maps"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                sb.append(line).append('\n');
            }
        }
        return sb.toString();
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

    static boolean writeSelf(long address, byte[] bytes) {
        try (RandomAccessFile mem = new RandomAccessFile("/proc/self/mem", "rw")) {
            mem.seek(address);
            mem.write(bytes);
            return true;
        } catch (IOException e) {
            return false;
        }
    }

    static byte[] readSelf(long address, int length) {
        byte[] out = new byte[length];
        try (RandomAccessFile mem = new RandomAccessFile("/proc/self/mem", "r")) {
            mem.seek(address);
            return mem.read(out) == length ? out : null;
        } catch (IOException e) {
            return null;
        }
    }

    static boolean verifySelf(long address, byte[] expected) {
        byte[] actual = readSelf(address, expected.length);
        return actual != null && bytesEqual(actual, expected);
    }
}
