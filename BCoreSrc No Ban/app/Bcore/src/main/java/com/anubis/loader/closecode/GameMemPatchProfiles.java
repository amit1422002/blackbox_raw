package com.anubis.loader.closecode;

import com.anubis.loader.core.env.GamePackages;

/** Game-specific in-process memory patch profiles. */
public final class GameMemPatchProfiles {

    /** DFM — 4× libanogs ACE bypass (Farlight HTProtect parity); exits after all stick. */
    public static final AyanStylePatchProfile DELTA_FORCE = new AyanStylePatchProfile(
            "ANOGS_BYPASS_DFM",
            new String[] {
                    GamePackages.DELTA_FORCE,
                    GamePackages.DELTA_FORCE_GARENA,
            },
            DeltaForceAnogsBypassConfig.MIN_MAPPED_BYTES,
            true,
            DeltaForceAnogsBypassConfig.LIBRARIES
    );

    private GameMemPatchProfiles() {
    }
}
