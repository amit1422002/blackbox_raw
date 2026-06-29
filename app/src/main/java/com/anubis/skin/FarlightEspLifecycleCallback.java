package com.anubis.skin;

import android.app.Activity;
import android.app.Application;
import android.os.Process;
import android.util.Log;

import com.anubis.loader.AnubisCore;
import com.anubis.loader.app.configuration.AppLifecycleCallback;
import com.anubis.loader.core.env.BEnvironment;
import com.anubis.loader.core.env.ProcStealthHelper;

import java.io.File;

/**
 * Memfd-loads Farlight memory reader in guest UE4 process; Java overlay draws ESP on game activity.
 */
public final class FarlightEspLifecycleCallback extends AppLifecycleCallback {

    private static final String TAG = "FarlightEsp";

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
        if (!FarlightEspHelper.isFarlightPackage(packageName) || application == null) {
            return;
        }
        if (!isUe4HostProcess(packageName, processName)) {
            Log.i(TAG, "skip ESP proc=" + processName + " pid=" + Process.myPid());
            return;
        }
        Log.i(TAG, "schedule reader pkg=" + packageName + " proc=" + processName
                + " user=" + userId + " pid=" + Process.myPid());
        new Thread(() -> loadReaderWhenReady(packageName, userId), "farlight-esp-load").start();
    }

    @Override
    public void onActivityResumed(Activity activity) {
        if (activity == null) {
            return;
        }
        if (!FarlightEspHelper.isFarlightPackage(activity.getPackageName())) {
            return;
        }
        FarlightEspOverlayManager.attach(activity);
    }

    @Override
    public void onActivityDestroyed(Activity activity) {
        if (activity == null) {
            return;
        }
        if (!FarlightEspHelper.isFarlightPackage(activity.getPackageName())) {
            return;
        }
        FarlightEspOverlayManager.detach(activity);
    }

    private static void loadReaderWhenReady(String packageName, int userId) {
        try {
            Log.i(TAG, "waiting for UE4 before memfd reader load...");
            Thread.sleep(12_000L);

            BEnvironment.load();
            File filesDir = BEnvironment.getDataFilesDir(packageName, userId);
            if (filesDir == null) {
                Log.w(TAG, "guest files dir null user=" + userId);
                return;
            }

            android.content.Context host = AnubisCore.getContext();
            if (host != null) {
                FarlightEspHelper.deployToGuest(host.getApplicationContext(), packageName, userId);
            }

            byte[] elf = FarlightEspHelper.readHookBytesForGuest(filesDir);
            if (!FarlightEspHelper.isValidReaderElf(elf)) {
                Log.w(TAG, "ESP reader ELF missing/invalid — relaunch from loader app after update");
                return;
            }

            GuestMemoryLoader.prepareGuestHookFilesDir(filesDir.getAbsolutePath());
            ProcStealthHelper.refreshSanitizedMapsForCurrentProcess();

            for (int attempt = 1; attempt <= 8; attempt++) {
                try {
                    if (GuestMemoryLoader.loadHookFromMemory(elf)) {
                        ProcStealthHelper.refreshSanitizedMapsForCurrentProcess();
                        FarlightEspNative.onMemfdLoaded();
                        Log.i(TAG, "reader memfd ok attempt=" + attempt + " bytes=" + elf.length
                                + " pid=" + Process.myPid());
                        return;
                    }
                    Log.w(TAG, "reader memfd failed attempt=" + attempt);
                } catch (Throwable e) {
                    Log.w(TAG, "reader load retry " + attempt, e);
                }
                Thread.sleep(4000L);
            }
            Log.w(TAG, "Farlight reader load gave up");
        } catch (Throwable t) {
            Log.w(TAG, "Farlight reader load failed", t);
        }
    }
}
