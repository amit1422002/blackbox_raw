package com.anubis.loader.closecode;

/** @deprecated Use {@link DeltaForceLibAnogsPatcher} — kept for {@link GameMemPatchProfiles}. */
final class DeltaForceAnogsBypassConfig {

    static final boolean APPLY_BYPASS_PATCHES = DeltaForceLibAnogsPatcher.APPLY_PATCHES;
    static final long MIN_MAPPED_BYTES = DeltaForceLibAnogsPatcher.MIN_MAPPED_BYTES;
    static final AyanStylePatchProfile.LibPatches[] LIBRARIES = DeltaForceLibAnogsPatcher.LIBRARIES;

    private DeltaForceAnogsBypassConfig() {
    }
}
