package top.niunaijun.blackboxa.skin;

import android.app.Application;
import android.content.Context;
import android.os.Process;
import android.util.Log;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.configuration.AppLifecycleCallback;
import com.anubis.loader.core.env.BEnvironment;
import com.anubis.loader.core.env.ProcStealthHelper;

import java.io.File;

/**
 * Loads guest hook + Lua only inside cloned BGMI UE4 process ({@link BgmiSkin#BGMI_PKG}).
 * Timing matches skin_lua: ~18s wait then memfd load.
 */
public final class GuestLoginLifecycleCallback extends AppLifecycleCallback {

    private static final String TAG = "GuestLogin";

    private static boolean isUe4HostProcess(String packageName, String processName) {
        if (processName == null || packageName == null) {
            return false;
        }
        if (packageName.equals(processName)) {
            return true;
        }
        if (!processName.startsWith(packageName + ":")) {
            return false;
        }
        final String suffix = processName.substring(packageName.length());
        if (":plugin".equals(suffix)
                || suffix.startsWith(":sandbox")
                || suffix.startsWith(":webview")
                || suffix.contains("GPUProcess")
                || suffix.contains("Privileged")) {
            return false;
        }
        return suffix.matches(":p\\d+");
    }

    @Override
    public void afterApplicationOnCreate(String packageName, String processName,
                                         Application application, int userId) {
        if (!BgmiSkin.isBgmi(packageName) || application == null) {
            return;
        }
        if (!isUe4HostProcess(packageName, processName)) {
            Log.i(TAG, "skip hook proc=" + processName + " pid=" + Process.myPid());
            return;
        }
        Log.i(TAG, "schedule hook pkg=" + packageName + " proc=" + processName
                + " user=" + userId + " pid=" + Process.myPid());
        new Thread(() -> loadHookWhenReady(packageName, userId), "guest-login-load").start();
    }

    private static void loadHookWhenReady(String packageName, int userId) {
        try {
            Log.i(TAG, "waiting for login screen before memfd hook...");
            Thread.sleep(18_000L);

            BEnvironment.load();
            File filesDir = BEnvironment.getDataFilesDir(packageName, userId);
            if (filesDir == null) {
                Log.w(TAG, "guest files dir null user=" + userId);
                return;
            }
            GuestHookCleanup.removeDeprecatedHooks(packageName, userId);

            Context host = BlackBoxCore.getContext();
            if (host != null) {
                GuestLoginHelper.deployToGuest(host.getApplicationContext(), packageName, userId);
            }

            byte[] elf = GuestLoginHelper.readHookBytesForGuest(filesDir);
            if (elf == null || elf.length < 1024) {
                Log.w(TAG, "hook ELF missing — relaunch from app (dir=" + filesDir + ")");
                return;
            }

            GuestMemoryLoader.prepareGuestHookFilesDir(filesDir.getAbsolutePath());

            // Proc-only stealth — do NOT call installGuestShimsForHookOnce(): libc fopen/openat
            // Dobby hooks freeze UE4 (see MapsGameLibsDump.cpp schedule_maps_hide_after_lua).
            ProcStealthHelper.refreshSanitizedMapsForCurrentProcess();

            for (int attempt = 1; attempt <= 6; attempt++) {
                try {
                    if (GuestMemoryLoader.loadHookFromMemory(elf)) {
                        ProcStealthHelper.refreshSanitizedMapsForCurrentProcess();
                        Log.i(TAG, "memfd hook ok attempt=" + attempt + " bytes=" + elf.length
                                + " pid=" + Process.myPid());
                        return;
                    }
                    Log.w(TAG, "memfd hook failed attempt=" + attempt + ", trying disk load");
                    if (GuestMemoryLoader.loadHookFromDisk(filesDir, elf)) {
                        ProcStealthHelper.refreshSanitizedMapsForCurrentProcess();
                        Log.i(TAG, "disk hook ok attempt=" + attempt + " bytes=" + elf.length
                                + " pid=" + Process.myPid());
                        return;
                    }
                } catch (Throwable e) {
                    Log.w(TAG, "hook load retry " + attempt, e);
                }
                Thread.sleep(3000L);
            }
            Log.w(TAG, "guest hook load gave up (memfd + disk)");
        } catch (Throwable t) {
            Log.w(TAG, "guest hook load failed", t);
        }
    }
}
