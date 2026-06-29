package com.anubis.loader.closecode;

/**
 * <p>MD5 {@code 10cabd4d530297875afcb31e99fd6dbf}. NetEase HTProtect virtual-env / suspicious-app reporter.
 *
 * <p>Do <b>not</b> stub {@code sub_A6F30} — main init engine; crashes splash.
 * {@code sub_1E7328} uses {@code mov x0, x1; ret} (return protobuf cursor, skip installedApk write).
 * Post-login crash: tamper handler {@code sub_307BCC}/{@code sub_307D84} vs Android 16 sigchain — stub those.
 */
final class FarlightHtProtectConfig {

    static final boolean APPLY_BYPASS_PATCHES = true;

    static final long MIN_MAPPED_BYTES = 1024 * 1024L;

    /** {@code sub_1E7328} — skip installedApk / apkLibName protobuf body. */
    static final long RVA_SUSPICIOUS_REPORT = 0x1E7328L;
    static final byte[] EXPECT_SUSPICIOUS_REPORT = {
            (byte) 0xFF, 0x43, 0x02, (byte) 0xD1, (byte) 0xFC, 0x6F, 0x03, (byte) 0xA9
    };

    /**
     * {@code sub_307BCC} — reinstalls signal handlers via {@code sigaction}; crashes in sigchain on A16.
     * Force success ({@code w0=0}).
     */
    static final long RVA_SIGACTION_SETUP = 0x307BCCL;
    static final byte[] EXPECT_SIGACTION_SETUP = {
            (byte) 0xFF, (byte) 0xC3, 0x01, (byte) 0xD1, (byte) 0xF7, 0x1B, 0x00, (byte) 0xF9
    };

    /** {@code sub_307D84} — tamper-detect callback; stub whole entry ({@code w0=0; ret}). */
    static final long RVA_TAMPER_CALLBACK = 0x307D84L;
    static final byte[] EXPECT_TAMPER_CALLBACK = {
            (byte) 0xF3, 0x0F, 0x1E, (byte) 0xF8, (byte) 0xFD, 0x7B, 0x01, (byte) 0xA9
    };

    static final AyanStylePatchProfile.LibPatches[] LIBRARIES = {
            new AyanStylePatchProfile.LibPatches("libNetHTProtect.so", new MemPatchUtil.Patch[] {
                    new MemPatchUtil.Patch(
                            RVA_SUSPICIOUS_REPORT,
                            MemPatchUtil.PATCH_RET_X1,
                            EXPECT_SUSPICIOUS_REPORT),
                    new MemPatchUtil.Patch(
                            RVA_SIGACTION_SETUP,
                            MemPatchUtil.PATCH_RET,
                            EXPECT_SIGACTION_SETUP),
                    new MemPatchUtil.Patch(
                            RVA_TAMPER_CALLBACK,
                            MemPatchUtil.PATCH_RET,
                            EXPECT_TAMPER_CALLBACK),
            }),
    };

    private FarlightHtProtectConfig() {
    }
}
