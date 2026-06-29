package com.anubis.loader.fake.delegate;

import android.app.Activity;
import android.app.Application;
import android.app.Instrumentation;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.os.Bundle;
import android.os.PersistableBundle;
import android.util.Log;

import java.lang.reflect.Field;
import black.android.app.BRActivity;
import black.android.app.BRActivityThread;
import com.anubis.loader.AnubisCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.fake.hook.HookManager;
import com.anubis.loader.fake.hook.IInjectHook;
import com.anubis.loader.fake.service.HCallbackProxy;
import com.anubis.loader.fake.service.IActivityClientProxy;
import com.anubis.loader.core.NativeCore;
import com.anubis.loader.utils.GuestPathContext;
import com.anubis.loader.utils.HackAppUtils;
import com.anubis.loader.utils.VirtualPathSpoof;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.ActivityCompat;
import com.anubis.loader.utils.compat.ActivityManagerCompat;
import com.anubis.loader.utils.compat.ContextCompat;

public final class AppInstrumentation extends BaseInstrumentationDelegate implements IInjectHook {

    private static final String TAG = AppInstrumentation.class.getSimpleName();

    private static AppInstrumentation sAppInstrumentation;

    public static AppInstrumentation get() {
        if (sAppInstrumentation == null) {
            synchronized (AppInstrumentation.class) {
                if (sAppInstrumentation == null) {
                    sAppInstrumentation = new AppInstrumentation();
                }
            }
        }
        return sAppInstrumentation;
    }

    public AppInstrumentation() {
    }

    @Override
    public void injectHook() {
        try {
            Instrumentation mInstrumentation = getCurrInstrumentation();
            if (mInstrumentation == this || checkInstrumentation(mInstrumentation))
                return;
            mBaseInstrumentation = (Instrumentation) mInstrumentation;
            BRActivityThread.get(AnubisCore.mainThread())._set_mInstrumentation(this);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private Instrumentation getCurrInstrumentation() {
        Object currentActivityThread = AnubisCore.mainThread();
        return BRActivityThread.get(currentActivityThread).mInstrumentation();
    }

    @Override
    public boolean isBadEnv() {
        return !checkInstrumentation(getCurrInstrumentation());
    }

    private boolean checkInstrumentation(Instrumentation instrumentation) {
        if (instrumentation instanceof AppInstrumentation) {
            return true;
        }
        Class<?> clazz = instrumentation.getClass();
        if (Instrumentation.class.equals(clazz)) {
            return false;
        }
        do {
            assert clazz != null;
            Field[] fields = clazz.getDeclaredFields();
            for (Field field : fields) {
                if (Instrumentation.class.isAssignableFrom(field.getType())) {
                    field.setAccessible(true);
                    try {
                        Object obj = field.get(instrumentation);
                        if ((obj instanceof AppInstrumentation)) {
                            return true;
                        }
                    } catch (Exception e) {
                        return false;
                    }
                }
            }
            clazz = clazz.getSuperclass();
        } while (!Instrumentation.class.equals(clazz));
        return false;
    }

    private void checkHCallback() {
        HookManager.get().checkEnv(HCallbackProxy.class);
    }

    private void checkActivity(Activity activity) {
        if (!com.anubis.loader.utils.StealthMode.shouldSuppressLogcat()) {
            Log.d(TAG, "callActivityOnCreate: " + activity.getClass().getName());
        }
        HackAppUtils.enableQQLogOutput(activity.getPackageName(), activity.getClassLoader());
        checkHCallback();
        HookManager.get().checkEnv(IActivityClientProxy.class);
        ActivityInfo info = BRActivity.get(activity).mActivityInfo();
        String guestPkg = BActivityThread.getAppPackageName();
        if (info != null && info.applicationInfo != null) {
            int userId = BActivityThread.getUserId();
            if (guestPkg != null && VirtualPathSpoof.isStealthAcPackage(guestPkg)) {
                VirtualPathSpoof.ensureLoadedApkInternalInfo(info.applicationInfo, userId);
            } else {
                info.applicationInfo = VirtualPathSpoof.spoofApplicationInfoRuntimeVisible(
                        info.applicationInfo, userId);
                VirtualPathSpoof.ensureRealApkPaths(info.applicationInfo, userId);
            }
        }
        if (info != null && info.theme != 0) {
            // Replace proxy NoTitleBar theme before onCreate — applyStyle merges ActionBar
            // attrs onto a decor without action_bar_container (NPE on Android 16+).
            activity.setTheme(info.theme);
        }
        if (guestPkg != null && VirtualPathSpoof.isStealthAcPackage(guestPkg)) {
            ContextCompat.fixGuestIdentity(activity);
            GuestPathContext.wrapIfNeeded(activity, guestPkg);
        } else {
            ContextCompat.fix(activity);
        }
        ActivityCompat.fix(activity);
        ActivityManagerCompat.setActivityOrientation(activity, info.screenOrientation);
        HookManager.get().checkEnv(IActivityClientProxy.class);
    }

    @Override
    public Application newApplication(ClassLoader cl, String className, Context context) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        ContextCompat.fix(context);
  //      BActivityThread.currentActivityThread().loadXposed(context);
        return super.newApplication(cl, className, context);
    }

    @Override
    public void callActivityOnCreate(Activity activity, Bundle icicle, PersistableBundle persistentState) {
        checkActivity(activity);
        String guestPkg = BActivityThread.getAppPackageName();
        if (guestPkg != null) {
            GuestPathContext.wrapIfNeeded(activity, guestPkg);
            if (VirtualPathSpoof.isStealthAcPackage(guestPkg)) {
                NativeCore.refreshStealthProcLightAsync();
            }
        }
        super.callActivityOnCreate(activity, icicle, persistentState);
    }

    @Override
    public void callActivityOnCreate(Activity activity, Bundle icicle) {
        checkActivity(activity);
        String guestPkg = BActivityThread.getAppPackageName();
        if (guestPkg != null) {
            GuestPathContext.wrapIfNeeded(activity, guestPkg);
            if (VirtualPathSpoof.isStealthAcPackage(guestPkg)) {
                NativeCore.refreshStealthProcLightAsync();
            }
        }
        super.callActivityOnCreate(activity, icicle);
    }

    @Override
    public void callApplicationOnCreate(Application app) {
        checkHCallback();
        super.callApplicationOnCreate(app);
    }

    public Activity newActivity(ClassLoader cl, String className, Intent intent) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return super.newActivity(cl, className, intent);
    }

    @Override
    public void callActivityOnResume(Activity activity) {
        super.callActivityOnResume(activity);
        String guestPkg = BActivityThread.getAppPackageName();
        if (guestPkg != null && VirtualPathSpoof.isStealthAcPackage(guestPkg)) {
            NativeCore.refreshStealthProcLightAsync();
        }
    }
}
