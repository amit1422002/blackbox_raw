package com.anubis.loader.closecode;

public final class DeltaForceAnogsConfig {
    public static final boolean TRACE_DETECTION = false;
    public static final boolean BAN_DETECT_LOG = false;
    public static final boolean APPLY_BYPASS_PATCHES = true;
    /** mlock/hold-read on libanogs can trigger integrity / env bans — path stealth only until IDA RVAs exist. */
    public static final boolean ENABLE_LIBANOGS_NUKE = false;

    private DeltaForceAnogsConfig() {
    }
}
