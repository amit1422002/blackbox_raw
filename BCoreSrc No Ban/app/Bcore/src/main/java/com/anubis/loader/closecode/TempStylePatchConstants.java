package com.anubis.loader.closecode;

/**
 * Exact patch table extracted from {@code res/raw/temp} + {@code res/raw/ayan} (ARM64 RE).
 *
 * <p>temp feature {@code 992} ({@code 0x3E0}) and ayan feature {@code 2} share the same core:
 * {@code libanogs.so + 0x575550} ← {@code 00 10 00 00}. temp feature {@code 5} adds
 * {@code libgcloud.so + 0x421164} ← {@code 00 00 00 00}. Libraries {@code libUE4.so} /
 * {@code libhdmpve.so} are scanned in temp but not patched in feature 2/992.
 */
final class TempStylePatchConstants {

    /** ayan rodata {@code "00 10 00 00"} → feature 2 / temp 992 libanogs write. */
    static final byte[] LIBANOGS_F992_BYTES = {
            0x00, 0x10, 0x00, 0x00
    };
    /** ayan disasm: {@code movk #0x57} + {@code mov #0x5550}. */
    static final long LIBANOGS_F992_RVA = 0x575550L;

    /** temp feature 5 disasm: {@code 0x421164}, {@code pwrite64} 4-byte zero. */
    static final byte[] LIBGCLOUD_F5_ZERO = {
            0x00, 0x00, 0x00, 0x00
    };
    static final long LIBGCLOUD_F5_RVA = 0x421164L;

    static final long MIN_MAPPED_BYTES = 2 * 1024 * 1024L;

    static final AyanStylePatchProfile.LibPatches[] TEMP_F992_LIBRARIES = {
            new AyanStylePatchProfile.LibPatches("libanogs.so", new MemPatchUtil.Patch[] {
                    new MemPatchUtil.Patch(LIBANOGS_F992_RVA, LIBANOGS_F992_BYTES),
            }),
            new AyanStylePatchProfile.LibPatches("libgcloud.so", new MemPatchUtil.Patch[] {
                    new MemPatchUtil.Patch(LIBGCLOUD_F5_RVA, LIBGCLOUD_F5_ZERO),
            }),
    };

    private TempStylePatchConstants() {
    }
}
