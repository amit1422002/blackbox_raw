package com.anubis.loader.closecode;

import com.anubis.loader.core.env.GamePackages;

/**
 * Game-specific memory patch profiles — exact bytes/RVAs from {@code res/raw/temp} + {@code ayan}.
 *
 * <p>temp/ayan flow (we run in-process via {@code /proc/self/mem} inside the guest):
 * <ol>
 *   <li>Parse {@code /proc/self/maps} for lib base</li>
 *   <li>Feature 992 / 2: {@code libanogs.so + 0x575550} ← {@code 00 10 00 00}</li>
 *   <li>Feature 5 (temp): {@code libgcloud.so + 0x421164} ← {@code 00 00 00 00}</li>
 * </ol>
 */
public final class GameMemPatchProfiles {

    /** DFM — same temp F992 patch table, DFM package names. */
    public static final AyanStylePatchProfile DELTA_FORCE = new AyanStylePatchProfile(
            "TEMP992_DFM",
            GamePackages.DELTA_FORCE,
            GamePackages.DELTA_FORCE_GARENA,
            TempStylePatchConstants.MIN_MAPPED_BYTES,
            TempStylePatchConstants.TEMP_F992_LIBRARIES
    );

    /** Farlight — same temp F992 patch table (temp has no Farlight packages; libs patched if mapped). */
    public static final AyanStylePatchProfile FARLIGHT = new AyanStylePatchProfile(
            "TEMP992_FARLIGHT",
            new String[] {
                    GamePackages.FARLIGHT,
                    GamePackages.FARLIGHT_LEGACY,
                    "com.farlightgames.farlight84.gray",
            },
            TempStylePatchConstants.MIN_MAPPED_BYTES,
            TempStylePatchConstants.TEMP_F992_LIBRARIES
    );

    /** PUBG — temp/ayan hardcoded package list + feature 2 libanogs patch. */
    public static final AyanStylePatchProfile PUBG_ANOGS_F2 = new AyanStylePatchProfile(
            "TEMP992_PUBG",
            new String[] {
                    GamePackages.BGMI,
                    "com.tencent.ig",
                    "com.pubg.krmobile",
                    "com.rekoo.pubgm",
                    "com.vng.pubgmobile"
            },
            TempStylePatchConstants.MIN_MAPPED_BYTES,
            TempStylePatchConstants.TEMP_F992_LIBRARIES
    );

    private GameMemPatchProfiles() {
    }
}
