package com.anubis.loader.closecode;

import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.utils.Slog;

/**
 * In-process port of the ayan bypass engine ({@code /proc/self/maps} + {@code pwrite64}).
 */
public final class AyanStyleInProcessPatcher {

    private static final int POLL_FAST_MS = 50;
    private static final int POLL_SLOW_MS = 500;
    private static final int POLL_IDLE_MS = 5000;
    /** After patches stick, verify integrity only every ~2 min at idle rate. */
    private static final int IDLE_VERIFY_ROUNDS = 24;
    private static final long MAX_MS = 10 * 60 * 1000L;

    private static volatile AyanStylePatchProfile activeProfile;
    private static volatile boolean workerRunning;

    private AyanStyleInProcessPatcher() {
    }

    public static void start(AyanStylePatchProfile profile) {
        if (profile == null || !profile.hasPatches()) {
            Slog.i(safeTag(profile), "no patches configured — skip");
            return;
        }
        if (!profile.matches(BActivityThread.getAppPackageName())) {
            return;
        }
        synchronized (AyanStyleInProcessPatcher.class) {
            if (workerRunning && profile.equals(activeProfile)) {
                return;
            }
            activeProfile = profile;
            workerRunning = true;
        }
        Thread t = new Thread(() -> runLoop(profile), profile.threadName);
        t.setDaemon(true);
        t.setPriority(Thread.MIN_PRIORITY);
        t.start();
        Slog.i(profile.logTag, "ayan-style in-process patcher started libs="
                + profile.libCount() + " patches=" + profile.patchCount());
    }

    private static void runLoop(AyanStylePatchProfile profile) {
        final long deadline = System.currentTimeMillis() + MAX_MS;
        int polls = 0;
        int patchCount = 0;
        java.util.Set<String> seenInodes = new java.util.HashSet<>();
        MemPatchUtil.PatchSession session = new MemPatchUtil.PatchSession(profile.patchCount());
        int idleRounds = 0;
        int sleepMs = POLL_FAST_MS;
        while (System.currentTimeMillis() < deadline && !Thread.currentThread().isInterrupted()) {
            polls++;
            if (profile.exitWhenQuiescent && session.isQuiescent()) {
                Slog.w(profile.logTag, "ALL_PATCHES_OK expected=" + profile.patchCount()
                        + " polls=" + polls + " writes=" + patchCount
                        + " — patcher exiting (no re-mprotect loop)");
                break;
            }
            if (session.isQuiescent()) {
                idleRounds++;
                if (idleRounds > 3) {
                    sleepMs = POLL_IDLE_MS;
                } else if (idleRounds > 1) {
                    sleepMs = POLL_SLOW_MS;
                }
                if (idleRounds > 3 && idleRounds % IDLE_VERIFY_ROUNDS != 0) {
                    try {
                        Thread.sleep(sleepMs);
                    } catch (InterruptedException e) {
                        Thread.currentThread().interrupt();
                        break;
                    }
                    continue;
                }
                if (idleRounds > 3) {
                    session.clearStable();
                }
            } else {
                idleRounds = 0;
                sleepMs = POLL_FAST_MS;
            }
            int roundWrites = 0;
            for (AyanStylePatchProfile.LibPatches lp : profile.libraries) {
                if (lp.patches.length == 0) {
                    continue;
                }
                int writes = MemPatchUtil.patchAllMappings(
                        lp.libName, lp.patches, profile.minMappedBytes,
                        seenInodes, polls, profile.logTag, session);
                roundWrites += writes;
                patchCount += writes;
            }
            if (roundWrites > 0) {
                idleRounds = 0;
                sleepMs = POLL_FAST_MS;
            }
            if (polls == 1 || polls % 400 == 0) {
                Slog.d(profile.logTag, "poll#" + polls + " totalWrites=" + patchCount
                        + " inodes=" + seenInodes.size() + " idle=" + idleRounds);
            }
            try {
                Thread.sleep(sleepMs);
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                break;
            }
        }
        workerRunning = false;
        Slog.i(profile.logTag, "patcher stopped polls=" + polls + " patchWrites=" + patchCount);
    }

    private static String safeTag(AyanStylePatchProfile profile) {
        return profile != null ? profile.logTag : "MEM_PATCH";
    }
}
