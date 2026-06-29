package com.anubis.loader.closecode;

import java.util.Arrays;

/** Per-game lib + offset patch table for {@link AyanStyleInProcessPatcher}. */
public final class AyanStylePatchProfile {

    final String logTag;
    final String threadName;
    final String[] packageNames;
    final long minMappedBytes;
    final LibPatches[] libraries;

    public AyanStylePatchProfile(String logTag, String... packageNames) {
        this(logTag, packageNames, 2 * 1024 * 1024L);
    }

    public AyanStylePatchProfile(String logTag, String primaryPkg, String secondaryPkg,
                                 long minMappedBytes, LibPatches... libraries) {
        this(logTag, new String[] {primaryPkg, secondaryPkg}, minMappedBytes, libraries);
    }

    public AyanStylePatchProfile(String logTag, String[] packageNames, long minMappedBytes,
                                 LibPatches... libraries) {
        this.logTag = logTag;
        this.threadName = logTag.toLowerCase() + "-patcher";
        this.packageNames = packageNames;
        this.minMappedBytes = minMappedBytes;
        this.libraries = libraries != null ? libraries : new LibPatches[0];
    }

    boolean matches(String packageName) {
        if (packageName == null) {
            return false;
        }
        for (String pkg : packageNames) {
            if (packageName.equals(pkg)) {
                return true;
            }
        }
        return false;
    }

    boolean hasPatches() {
        for (LibPatches lp : libraries) {
            if (lp.patches != null && lp.patches.length > 0) {
                return true;
            }
        }
        return false;
    }

    int libCount() {
        return libraries.length;
    }

    int patchCount() {
        int n = 0;
        for (LibPatches lp : libraries) {
            if (lp.patches != null) {
                n += lp.patches.length;
            }
        }
        return n;
    }

    @Override
    public boolean equals(Object o) {
        if (!(o instanceof AyanStylePatchProfile)) {
            return false;
        }
        AyanStylePatchProfile other = (AyanStylePatchProfile) o;
        return logTag.equals(other.logTag) && Arrays.equals(packageNames, other.packageNames);
    }

    @Override
    public int hashCode() {
        return logTag.hashCode();
    }

    public static final class LibPatches {
        final String libName;
        final MemPatchUtil.Patch[] patches;

        public LibPatches(String libName, MemPatchUtil.Patch[] patches) {
            this.libName = libName;
            this.patches = patches != null ? patches : new MemPatchUtil.Patch[0];
        }
    }
}
