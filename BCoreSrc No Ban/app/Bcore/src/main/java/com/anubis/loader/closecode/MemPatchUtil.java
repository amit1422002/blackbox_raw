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

    static final class MapSegment {
        long vmaStart;
        long vmaEnd;
        long fileOffset;
        boolean exec;

        long size() {
            return Math.max(0, vmaEnd - vmaStart);
        }
    }

    static final class Mapping {
        final String inode;
        long minStart = Long.MAX_VALUE;
        long execBytes;
        boolean hasExec;
        final List<MapSegment> segments = new ArrayList<>();

        Mapping(String inode) {
            this.inode = inode;
        }

        /** Resolve ELF file offset to VMA using maps segment file-offset fields. */
        Long resolvePatchAddress(long fileOffset, int needBytes) {
            if (needBytes <= 0) {
                return null;
            }
            for (MapSegment seg : segments) {
                if (!seg.exec) {
                    continue;
                }
                long segSize = seg.size();
                if (fileOffset < seg.fileOffset || fileOffset + needBytes > seg.fileOffset + segSize) {
                    continue;
                }
                return seg.vmaStart + (fileOffset - seg.fileOffset);
            }
            return null;
        }
    }

    static final class Patch {
        final long offset;
        final byte[] bytes;
        final byte[] expected;
        /** Optional audit label for logcat (e.g. {@code ACE_VIRTUAL_ENV}). */
        final String label;

        Patch(long offset, byte[] bytes) {
            this(offset, bytes, null, null);
        }

        Patch(long offset, byte[] bytes, byte[] expected) {
            this(offset, bytes, expected, null);
        }

        Patch(long offset, byte[] bytes, byte[] expected, String label) {
            this.offset = offset;
            this.bytes = bytes;
            this.expected = expected;
            this.label = label;
        }

        String auditTag() {
            if (label == null || label.isEmpty()) {
                return "offset=0x" + Long.toHexString(offset);
            }
            return label + " offset=0x" + Long.toHexString(offset);
        }
    }

    /** Tracks applied patches so idle polls skip /proc scans. */
    static final class PatchSession {
        private final int expectedPatches;
        private final java.util.Set<String> stable = new java.util.HashSet<>();
        private String cachedMaps;
        private long cachedMapsAt;

        PatchSession(int expectedPatches) {
            this.expectedPatches = expectedPatches;
        }

        boolean isQuiescent() {
            return expectedPatches > 0 && stable.size() >= expectedPatches;
        }

        void clearStable() {
            stable.clear();
            cachedMaps = null;
        }

        void onNewInode() {
            clearStable();
        }

        private static String key(String inode, long offset) {
            return inode + ":" + Long.toHexString(offset);
        }

        boolean isStable(String inode, long offset) {
            return stable.contains(key(inode, offset));
        }

        void markStable(String inode, long offset) {
            stable.add(key(inode, offset));
        }

        String cachedMaps(long maxAgeMs) {
            long now = System.currentTimeMillis();
            if (cachedMaps != null && now - cachedMapsAt <= maxAgeMs) {
                return cachedMaps;
            }
            return null;
        }

        void putCachedMaps(String maps) {
            cachedMaps = maps;
            cachedMapsAt = System.currentTimeMillis();
        }
    }

    static List<Mapping> findAllMappings(String libName, long minMappedBytes) {
        return findAllMappings(libName, minMappedBytes, null);
    }

    static List<Mapping> findAllMappings(String libName, long minMappedBytes, PatchSession session) {
        Map<String, Mapping> groups = new HashMap<>();
        try {
            String mapsText = null;
            if (session != null) {
                mapsText = session.cachedMaps(3000L);
            }
            if (mapsText == null) {
                mapsText = readMapsText();
                if (session != null) {
                    session.putCachedMaps(mapsText);
                }
            }
            BufferedReader br = new BufferedReader(new StringReader(mapsText));
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
                long fileOff = 0;
                if (parts.length >= 3) {
                    try {
                        fileOff = Long.parseLong(parts[2], 16);
                    } catch (NumberFormatException ignored) {
                    }
                }
                boolean exec = parts[1].contains("x");
                Mapping m = groups.computeIfAbsent(inode, Mapping::new);
                MapSegment seg = new MapSegment();
                seg.vmaStart = start;
                seg.vmaEnd = end;
                seg.fileOffset = fileOff;
                seg.exec = exec;
                m.segments.add(seg);
                if (start < m.minStart) {
                    m.minStart = start;
                }
                if (exec) {
                    m.hasExec = true;
                    m.execBytes += Math.max(0, end - start);
                }
            }
        } catch (IOException | NumberFormatException ignored) {
            return new ArrayList<>();
        }
        List<Mapping> out = new ArrayList<>();
        for (Mapping m : groups.values()) {
            if (m.hasExec && m.execBytes >= minMappedBytes && m.minStart != Long.MAX_VALUE) {
                out.add(m);
            }
        }
        out.sort((a, b) -> Long.compare(b.execBytes, a.execBytes));
        return out;
    }

    static int patchAllMappings(String libName, Patch[] patches, long minMappedBytes,
                                java.util.Set<String> inodeSet, int polls, String logTag) {
        return patchAllMappings(libName, patches, minMappedBytes, inodeSet, polls, logTag, null);
    }

    static int patchAllMappings(String libName, Patch[] patches, long minMappedBytes,
                                java.util.Set<String> inodeSet, int polls, String logTag,
                                PatchSession session) {
        List<Mapping> targets = findAllMappings(libName, minMappedBytes, session);
        int writes = 0;
        for (Mapping m : targets) {
            if (!inodeSet.contains(m.inode)) {
                inodeSet.add(m.inode);
                if (session != null) {
                    session.onNewInode();
                }
                com.anubis.loader.utils.Slog.i(logTag, "mapped " + libName + " inode=" + m.inode
                        + " base=0x" + Long.toHexString(m.minStart)
                        + " exec_bytes=" + m.execBytes
                        + " segs=" + m.segments.size());
            }
            for (Patch p : patches) {
                if (session != null && session.isStable(m.inode, p.offset)) {
                    continue;
                }
                int needBytes = p.bytes != null ? p.bytes.length : 0;
                if (p.expected != null && p.expected.length > needBytes) {
                    needBytes = p.expected.length;
                }
                Long patchAddrBox = m.resolvePatchAddress(p.offset, needBytes);
                if (patchAddrBox == null) {
                    if (polls <= 3 || polls % 200 == 0) {
                        com.anubis.loader.utils.Slog.w(logTag, "PATCH_OOB [" + libName + "] offset=0x"
                                + Long.toHexString(p.offset) + " need=" + needBytes
                                + " exec_bytes=" + m.execBytes);
                    }
                    continue;
                }
                long patchAddr = patchAddrBox;
                if (tryNativePatchAt(patchAddr, p, libName, logTag, polls)) {
                    writes++;
                    if (session != null) {
                        session.markStable(m.inode, p.offset);
                    }
                    continue;
                }
                if (!needsPatch(patchAddr, p.bytes)) {
                    if (session != null) {
                        session.markStable(m.inode, p.offset);
                    }
                    continue;
                }
                if (p.expected != null && !looksLikePatchTarget(patchAddr, p, libName, logTag)) {
                    continue;
                }
                byte[] before = readSelf(patchAddr, p.bytes.length);
                if (writeSelf(patchAddr, p.bytes) && verifySelf(patchAddr, p.bytes)) {
                    writes++;
                    if (session != null) {
                        session.markStable(m.inode, p.offset);
                        session.cachedMaps = null;
                    }
                    com.anubis.loader.utils.Slog.w(logTag, "PATCH_OK [" + libName + "] "
                            + p.auditTag()
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
            com.anubis.loader.utils.Slog.w(logTag, "PATCH_OK [" + libName + "] "
                    + p.auditTag() + " addr=0x"
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
