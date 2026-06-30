package com.anubis.loader.closecode;

import com.anubis.loader.core.env.GamePackages;

/**
 * DFM — {@code libanogs.so} bypass, same 3-role layout as {@link FarlightHtProtectConfig}.
 *
 * <p>MD5 {@code b96cc1f6bffe9bf1c00cfebdfeab9d53}.
 * <ul>
 *   <li>{@code 0x1E2B04} — ACE report upload ({@code sub_1E2B04}) → Farlight {@code 0x1E7328} role</li>
 *   <li>{@code 0x258880} — sigaction → Farlight {@code 0x307BCC}</li>
 *   <li>{@code 0x285744} — tamper watchdog → Farlight {@code 0x307D84}</li>
 * </ul>
 *
 * <p>Do <b>not</b> stub {@code sub_27CA70} (init engine, Farlight {@code sub_A6F30}) or {@code sub_27E6B4}
 * (multi-caller hub — logo Bus error).
 */
public final class DeltaForceLibAnogsPatcher {

    private static final String LIB_ANOGS = "libanogs.so";

    /** In-process patching disabled — use host {@code com.anubis.skin.LibAnogsPatcher}. */
    static final boolean APPLY_PATCHES = false;

    static final long MIN_MAPPED_BYTES = 1024 * 1024L;

    /** {@code sub_1E2B04} — gamesafe / virtual-env ACE upload (Farlight {@code 0x1E7328} report-skip role). */
    static final long RVA_VIRTUAL_ENV_REPORT = 0x1E2B04L;
    static final byte[] EXPECT_VIRTUAL_ENV_REPORT = {
            (byte) 0xE1, 0x0B, 0x00, (byte) 0xB4, (byte) 0xFD, 0x7B, (byte) 0xBB, (byte) 0xA9
    };

    /** {@code sub_258880} — sigaction loop (Farlight {@code 0x307BCC}). */
    static final long RVA_SIGACTION_SETUP = 0x258880L;
    static final byte[] EXPECT_SIGACTION_SETUP = {
            (byte) 0xFF, 0x03, 0x01, (byte) 0xD1, (byte) 0xFD, 0x7B, 0x02, (byte) 0xA9
    };

    /** {@code sub_285744} — tamper-detect watchdog (Farlight {@code 0x307D84}). */
    static final long RVA_TAMPER_CALLBACK = 0x285744L;
    static final byte[] EXPECT_TAMPER_CALLBACK = {
            (byte) 0xFD, 0x7B, (byte) 0xBE, (byte) 0xA9, (byte) 0xF3, 0x0B, 0x00, (byte) 0xF9
    };

    static final AyanStylePatchProfile.LibPatches[] LIBRARIES = {
            new AyanStylePatchProfile.LibPatches(LIB_ANOGS, new MemPatchUtil.Patch[] {
                    new MemPatchUtil.Patch(
                            RVA_VIRTUAL_ENV_REPORT,
                            MemPatchUtil.PATCH_RET,
                            EXPECT_VIRTUAL_ENV_REPORT,
                            "ACE_VIRTUAL_ENV_REPORT"),
                    new MemPatchUtil.Patch(
                            RVA_SIGACTION_SETUP,
                            MemPatchUtil.PATCH_RET,
                            EXPECT_SIGACTION_SETUP,
                            "ACE_SIGACTION"),
                    new MemPatchUtil.Patch(
                            RVA_TAMPER_CALLBACK,
                            MemPatchUtil.PATCH_RET,
                            EXPECT_TAMPER_CALLBACK,
                            "ACE_TAMPER"),
            }),
    };

    private static final AyanStylePatchProfile PROFILE = new AyanStylePatchProfile(
            "ANOGS_BYPASS_DFM",
            new String[] {
                    GamePackages.DELTA_FORCE,
                    GamePackages.DELTA_FORCE_GARENA,
            },
            MIN_MAPPED_BYTES,
            true,
            LIBRARIES
    );

    private DeltaForceLibAnogsPatcher() {
    }

    public static boolean isDeltaForce(String packageName) {
        return PROFILE.matches(packageName);
    }

    public static void start() {
        if (!APPLY_PATCHES) {
            return;
        }
        AyanStyleInProcessPatcher.start(PROFILE);
    }
}
