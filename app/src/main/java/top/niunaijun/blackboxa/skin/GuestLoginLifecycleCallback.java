package top.niunaijun.blackboxa.skin;

import android.app.Application;
import android.os.Process;
import android.util.Log;

import top.niunaijun.blackbox.app.configuration.AppLifecycleCallback;
import top.niunaijun.blackbox.core.env.BEnvironment;

import java.io.File;

/**
 * Loads guest hook + Lua only inside cloned BGMI UE4 process ({@link BgmiSkin#BGMI_PKG}).
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
            Log.i(TAG, "skip hook in non-UE4 proc=" + processName + " pid=" + Process.myPid());
            return;
        }
        Log.i(TAG, "BGMI guest onCreate pid=" + Process.myPid() + " proc=" + processName);
        new Thread(() -> loadHookWhenReady(packageName), "bgmi-guest-login-load").start();
    }

    private static void loadHookWhenReady(String packageName) {
        try {
            Log.i(TAG, "waiting for login screen before memfd hook...");
            Thread.sleep(18000L);

            BEnvironment.load();
            File filesDir = BEnvironment.getDataFilesDir(packageName, 0);
            if (filesDir == null) {
                Log.w(TAG, "guest files dir missing");
                return;
            }
            GuestHookCleanup.removeDeprecatedHooks(packageName);

            byte[] elf = GuestLoginHelper.readHookBytesForGuest(filesDir);
            if (elf == null || elf.length < 1024) {
                Log.w(TAG, "hook ELF bytes missing (relaunch from BlackBox to stage)");
                return;
            }

            GuestMemoryLoader.prepareGuestHookFilesDir(filesDir.getAbsolutePath());

            for (int attempt = 1; attempt <= 6; attempt++) {
                try {
                    if (GuestMemoryLoader.loadHookFromMemory(elf)) {
                        Log.i(TAG, "BGMI guest hook memfd ok pid=" + Process.myPid()
                                + " attempt=" + attempt + " bytes=" + elf.length);
                        return;
                    }
                    Log.w(TAG, "memfd hook failed attempt=" + attempt);
                } catch (Throwable e) {
                    Log.w(TAG, "memfd hook retry " + attempt, e);
                }
                Thread.sleep(3000L);
            }
            Log.w(TAG, "BGMI guest memfd hook gave up");
        } catch (Throwable t) {
            Log.w(TAG, "BGMI guest memfd hook failed", t);
        }
    }
}
