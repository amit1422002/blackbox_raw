package com.anubis.loader.closecode;

import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.utils.Slog;

import java.util.HashSet;
import java.util.Set;

/**
 * In-process port of the ayan bypass engine ({@code /proc/self/maps} + {@code pwrite64}).
 */
public final class AyanStyleInProcessPatcher {

    private static final int POLL_MS = 25;
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
        t.start();
        Slog.i(profile.logTag, "ayan-style in-process patcher started libs="
                + profile.libCount() + " patches=" + profile.patchCount());
    }

    private static void runLoop(AyanStylePatchProfile profile) {
        final long deadline = System.currentTimeMillis() + MAX_MS;
        int polls = 0;
        int patchCount = 0;
        Set<String> seenInodes = new HashSet<>();
        while (System.currentTimeMillis() < deadline && !Thread.currentThread().isInterrupted()) {
            polls++;
            for (AyanStylePatchProfile.LibPatches lp : profile.libraries) {
                if (lp.patches.length == 0) {
                    continue;
                }
                int writes = MemPatchUtil.patchAllMappings(
                        lp.libName, lp.patches, profile.minMappedBytes, seenInodes, polls, profile.logTag);
                if (writes > 0) {
                    patchCount += writes;
                }
            }
            if (polls == 1 || polls % 400 == 0) {
                Slog.d(profile.logTag, "poll#" + polls + " totalWrites=" + patchCount
                        + " inodes=" + seenInodes.size());
            }
            try {
                Thread.sleep(POLL_MS);
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
