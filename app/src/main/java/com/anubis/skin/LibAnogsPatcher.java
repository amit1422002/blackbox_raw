package com.anubis.skin;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.widget.Toast;

import com.anubis.loader.utils.ShellUtils;

import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

/**
 * Loader-side: DFM {@code libanogs.so} + {@code libUE4.so} byte patches (not BCore in-process).
 * Polls until both libs are mapped (≥1MB anogs) — never patches before load.
 */
public final class LibAnogsPatcher {

    private static final String TAG = "LibAnogsPatcher";

    private static final String LIB_ANOGS = "libanogs.so";
    private static final String LIB_UE4 = "libUE4.so";

    private static final String ANOGS_HOOK_SO = "libanogshook.so";
    private static final String ANOGS_HOOK_TMP = "/data/local/tmp/libanogshook.so";
    private static final String UE4_HOOK_SO = "libue4privhook.so";
    private static final String UE4_HOOK_TMP = "/data/local/tmp/libue4privhook.so";

    private static final boolean ENABLE_ANOGS_THUNDER_HOOK = false;
    private static final boolean ENABLE_UE4_PRIVATE_SRC_HOOK = false;

    private static final long ANOGS_THUNDER_OFFSET = 0x513480L;
    private static final long UE4_PRIVATE_SRC_OFFSET = 0xC4DFB90L;

    /** DFM libanogs.so — Farlight HTProtect equivalent roles (MD5 b96cc1f6…). */
    private static final Patch[] PATCHES_ANOGS = {
            patch(0x1E2B04L, "ACE report", "00 00 80 D2 C0 03 5F D6"),
            patch(0x258880L, "sigaction", "00 00 80 D2 C0 03 5F D6"),
            patch(0x285744L, "tamper", "00 00 80 D2 C0 03 5F D6"),
            patch(0x500AC0L, "extra", "00 00 80 D2 C0 03 5F D6"),
    };

    private static final Patch[] PATCHES_UE4 = {
            // patchUe4(0xOFFSET, "label", "AA BB CC ..."),
    };

    private static final int POLL_MS = 500;
    private static final int MAX_WAIT_MS = 5 * 60 * 1000;
    private static final int WAIT_LOG_EVERY_POLLS = 4;

    private static volatile boolean patchApplied;
    private static volatile boolean workerRunning;
    private static volatile boolean anogsHookInjected;
    private static volatile boolean ue4HookInjected;

    private LibAnogsPatcher() {
    }

    public static void resetSession() {
        patchApplied = false;
        anogsHookInjected = false;
        ue4HookInjected = false;
        GamePidHelper.setTargetPackage(null);
    }

    public static void startOnGameLaunch(Context context, String packageName) {
        if (context == null || packageName == null || !GameCompat.isDeltaForce(packageName)) {
            return;
        }
        final Context app = context.getApplicationContext();
        GamePidHelper.setTargetPackage(packageName);
        synchronized (LibAnogsPatcher.class) {
            if (workerRunning) {
                return;
            }
            patchApplied = false;
            anogsHookInjected = false;
            ue4HookInjected = false;
            workerRunning = true;
        }
        Log.i(TAG, "patcher started — will wait for " + LIB_ANOGS + " + " + LIB_UE4
                + " in maps before writing (poll " + POLL_MS + "ms)");
        new Thread(() -> {
            try {
                waitAndPatch(app);
            } finally {
                workerRunning = false;
            }
        }, "libanogs-patcher").start();
    }

    private static void waitAndPatch(Context ctx) {
        final long started = System.currentTimeMillis();
        final long deadline = started + MAX_WAIT_MS;
        int polls = 0;
        while (!patchApplied && System.currentTimeMillis() < deadline) {
            polls++;
            int pid = GamePidHelper.findPidWithReadyLibs(ctx);
            if (pid < 10) {
                if (polls == 1 || polls % WAIT_LOG_EVERY_POLLS == 0) {
                    Log.i(TAG, "waiting libs… poll#" + polls
                            + " (" + LIB_ANOGS + "+" + LIB_UE4 + " not ready yet — no patch)");
                }
            } else {
                long anogsBase = GamePidHelper.findLibBase(pid, LIB_ANOGS);
                long ue4Base = GamePidHelper.findLibBase(pid, LIB_UE4);
                long anogsBytes = GamePidHelper.mappedLibBytes(pid, LIB_ANOGS);
                Log.i(TAG, "libs loaded poll#" + polls + " pid=" + pid
                        + " " + LIB_ANOGS + "=0x" + Long.toHexString(anogsBase)
                        + " (" + (anogsBytes / 1024) + "KB)"
                        + " " + LIB_UE4 + "=0x" + Long.toHexString(ue4Base)
                        + " — applying patches now");
                PatchReport report = applyAllPatches(ctx, pid, anogsBase, ue4Base);
                if (report.success) {
                    patchApplied = true;
                    float waitSec = (System.currentTimeMillis() - started) / 1000f;
                    Log.i(TAG, "Bypass OK " + report.summary());
                    showResultToasts(ctx, buildSuccessMessage(waitSec, polls, pid, report));
                    return;
                }
                Log.w(TAG, "patch pass failed after libs ready — retry poll#" + polls);
            }
            try {
                Thread.sleep(POLL_MS);
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                return;
            }
        }
        if (!patchApplied) {
            Log.w(TAG, "Bypass timeout after " + polls + " polls — libs never ready");
            showToast(ctx, "Bypass Timeout\n" + LIB_ANOGS + "+" + LIB_UE4
                    + " load nahi hua (" + (MAX_WAIT_MS / 1000) + "s wait)");
        }
    }

    private static String buildSuccessMessage(float waitSec, int polls, int pid, PatchReport report) {
        StringBuilder sb = new StringBuilder();
        sb.append(String.format(Locale.US, "Bypass OK (wait %.1fs, poll #%d)\n", waitSec, polls));
        sb.append("pid=").append(pid).append('\n');
        appendLibLine(sb, LIB_ANOGS, report.anogsOk, report.anogsTotal, report.anogsOffsets);
        appendLibLine(sb, LIB_UE4, report.ue4Ok, report.ue4Total, report.ue4Offsets);
        return sb.toString().trim();
    }

    private static void appendLibLine(StringBuilder sb, String lib, int ok, int total, List<String> offsets) {
        sb.append(lib).append(": ").append(ok).append('/').append(total);
        if (!offsets.isEmpty()) {
            sb.append(" [");
            for (int i = 0; i < offsets.size(); i++) {
                if (i > 0) {
                    sb.append(", ");
                }
                sb.append(offsets.get(i));
            }
            sb.append(']');
        }
        sb.append('\n');
    }

    private static void showResultToasts(Context ctx, String message) {
        String[] lines = message.split("\n");
        if (lines.length <= 4) {
            showToast(ctx, message);
            return;
        }
        showToast(ctx, lines[0] + "\n" + lines[1]);
        new Handler(Looper.getMainLooper()).postDelayed(
                () -> showToast(ctx, lines[2] + "\n" + (lines.length > 3 ? lines[3] : "")),
                3500);
    }

    private static void showToast(Context ctx, String message) {
        new Handler(Looper.getMainLooper()).post(() ->
                Toast.makeText(ctx, message, Toast.LENGTH_LONG).show());
    }

    private static PatchReport applyAllPatches(Context ctx, int pid, long anogsBase, long ue4Base) {
        PatchReport report = new PatchReport();
        LibPatchResult anogs = applyPatchesForLib(pid, anogsBase, LIB_ANOGS, PATCHES_ANOGS);
        report.anogsOk = anogs.okCount;
        report.anogsTotal = anogs.total;
        report.anogsOffsets.addAll(anogs.okOffsets);
        if (!anogs.success) {
            return report;
        }
        if (!applyAnogsThunderHook(ctx, pid, anogsBase)) {
            return report;
        }
        LibPatchResult ue4 = applyPatchesForLib(pid, ue4Base, LIB_UE4, PATCHES_UE4);
        report.ue4Ok = ue4.okCount;
        report.ue4Total = ue4.total;
        report.ue4Offsets.addAll(ue4.okOffsets);
        if (!ue4.success) {
            return report;
        }
        if (!applyUe4PrivateSrcHook(ctx, pid, ue4Base)) {
            return report;
        }
        report.success = true;
        return report;
    }

    private static boolean applyAnogsThunderHook(Context ctx, int pid, long anogsBase) {
        if (!ENABLE_ANOGS_THUNDER_HOOK) {
            return true;
        }
        if (anogsBase == 0 || anogsHookInjected) {
            return anogsBase != 0;
        }
        if (!prepareHookLibrary(ctx, ANOGS_HOOK_SO, ANOGS_HOOK_TMP)) {
            return false;
        }
        if (!injectHookSo(pid, ANOGS_HOOK_TMP, anogsBase + ANOGS_THUNDER_OFFSET)) {
            return false;
        }
        anogsHookInjected = true;
        return true;
    }

    private static boolean applyUe4PrivateSrcHook(Context ctx, int pid, long ue4Base) {
        if (!ENABLE_UE4_PRIVATE_SRC_HOOK) {
            return true;
        }
        if (ue4Base == 0 || ue4HookInjected) {
            return ue4Base != 0;
        }
        if (!prepareHookLibrary(ctx, UE4_HOOK_SO, UE4_HOOK_TMP)) {
            return false;
        }
        if (!injectHookSo(pid, UE4_HOOK_TMP, ue4Base + UE4_PRIVATE_SRC_OFFSET)) {
            return false;
        }
        ue4HookInjected = true;
        return true;
    }

    private static boolean injectHookSo(int pid, String hookSoPath, long hookOffset) {
        Log.w(TAG, "hook inject not implemented pid=" + pid + " so=" + hookSoPath
                + " offset=0x" + Long.toHexString(hookOffset));
        return false;
    }

    private static boolean prepareHookLibrary(Context ctx, String soFileName, String tmpPath) {
        ApplicationInfo ai = ctx.getApplicationInfo();
        if (ai == null || ai.nativeLibraryDir == null) {
            return false;
        }
        String src = ai.nativeLibraryDir + "/" + soFileName;
        if (!ShellUtils.checkRootPermission()) {
            return false;
        }
        ShellUtils.CommandResult r = ShellUtils.execCommand(
                "cp \"" + src + "\" \"" + tmpPath + "\" && chmod 755 \"" + tmpPath + "\"",
                true,
                false);
        return r.result == 0;
    }

    private static LibPatchResult applyPatchesForLib(int pid, long base, String libName, Patch[] patches) {
        LibPatchResult result = new LibPatchResult();
        if (patches == null || patches.length == 0) {
            result.success = true;
            return result;
        }
        result.total = patches.length;
        for (Patch p : patches) {
            long addr = base + p.offset;
            if (!writePatch(pid, addr, p.bytes)) {
                Log.w(TAG, "patch FAIL " + libName + " +0x"
                        + Long.toHexString(p.offset) + " pid=" + pid);
                result.success = false;
                return result;
            }
            String off = "0x" + Long.toHexString(p.offset).toUpperCase(Locale.US);
            result.okOffsets.add(off);
            result.okCount++;
            Log.i(TAG, "patch OK " + libName + " " + off
                    + (p.label != null ? " (" + p.label + ")" : "")
                    + " addr=0x" + Long.toHexString(addr));
        }
        result.success = true;
        return result;
    }

    private static boolean writePatch(int pid, long address, byte[] bytes) {
        if (writeProcMem(pid, address, bytes)) {
            return true;
        }
        if (ShellUtils.checkRootPermission()) {
            return writeProcMemAsRoot(pid, address, bytes);
        }
        return false;
    }

    private static boolean writeProcMem(int pid, long address, byte[] bytes) {
        String path = "/proc/" + pid + "/mem";
        try (RandomAccessFile mem = new RandomAccessFile(path, "rw")) {
            mem.seek(address);
            mem.write(bytes);
            return true;
        } catch (IOException ignored) {
            return false;
        }
    }

    private static boolean writeProcMemAsRoot(int pid, long address, byte[] bytes) {
        StringBuilder printf = new StringBuilder("printf '");
        for (byte b : bytes) {
            printf.append(String.format("\\x%02x", b & 0xFF));
        }
        printf.append("' | dd of=/proc/").append(pid)
                .append("/mem bs=1 seek=").append(address)
                .append(" count=").append(bytes.length)
                .append(" conv=notrunc 2>/dev/null");
        ShellUtils.CommandResult r = ShellUtils.execCommand(printf.toString(), true, false);
        return r.result == 0;
    }

    private static Patch patch(long offset, String label, String hex) {
        return new Patch(offset, label, parseHex(hex));
    }

    private static Patch patchUe4(long offset, String label, String hex) {
        return new Patch(offset, label, parseHex(hex));
    }

    private static byte[] parseHex(String hex) {
        String[] parts = hex.trim().split("\\s+");
        byte[] out = new byte[parts.length];
        for (int i = 0; i < parts.length; i++) {
            out[i] = (byte) Integer.parseInt(parts[i], 16);
        }
        return out;
    }

    private static final class Patch {
        final long offset;
        final String label;
        final byte[] bytes;

        Patch(long offset, String label, byte[] bytes) {
            this.offset = offset;
            this.label = label;
            this.bytes = bytes;
        }
    }

    private static final class LibPatchResult {
        boolean success;
        int okCount;
        int total;
        final List<String> okOffsets = new ArrayList<>();
    }

    private static final class PatchReport {
        boolean success;
        int anogsOk;
        int anogsTotal;
        int ue4Ok;
        int ue4Total;
        final List<String> anogsOffsets = new ArrayList<>();
        final List<String> ue4Offsets = new ArrayList<>();

        String summary() {
            return LIB_ANOGS + " " + anogsOk + "/" + anogsTotal
                    + " " + LIB_UE4 + " " + ue4Ok + "/" + ue4Total;
        }
    }
}
