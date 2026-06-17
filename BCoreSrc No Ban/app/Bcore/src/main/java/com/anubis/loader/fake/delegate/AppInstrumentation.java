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
import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.utils.GmsOAuthLaunchContext;
import com.anubis.loader.fake.hook.HookManager;
import com.anubis.loader.fake.hook.IInjectHook;
import com.anubis.loader.fake.service.HCallbackProxy;
import com.anubis.loader.fake.service.IActivityClientProxy;
import com.anubis.loader.utils.HackAppUtils;
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
            BRActivityThread.get(BlackBoxCore.mainThread())._set_mInstrumentation(this);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private Instrumentation getCurrInstrumentation() {
        Object currentActivityThread = BlackBoxCore.mainThread();
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
        Log.d(TAG, "callActivityOnCreate: " + activity.getClass().getName());
        HackAppUtils.enableQQLogOutput(activity.getPackageName(), activity.getClassLoader());
        checkHCallback();
        HookManager.get().checkEnv(IActivityClientProxy.class);
        ActivityInfo info = BRActivity.get(activity).mActivityInfo();
        ContextCompat.fix(activity);
        ActivityCompat.fix(activity);
        if (info.theme != 0) {
            activity.getTheme().applyStyle(info.theme, true);
        }
        ActivityManagerCompat.setActivityOrientation(activity, info.screenOrientation);
        patchOAuthActivityIdentity(activity);
        HookManager.get().checkEnv(IActivityClientProxy.class);
    }

    private void patchOAuthActivityIdentity(Activity activity) {
        String guest = GmsOAuthLaunchContext.guestForGmsHooks();
        if (guest == null) {
            guest = GmsCore.getActiveOAuthGuestPackage();
        }
        if (guest == null) {
            return;
        }
        String pkg = activity.getPackageName();
        if (pkg == null || !GmsCore.isGoogleAppOrService(pkg)) {
            return;
        }
        String cls = activity.getClass().getName().toLowerCase();
        if (!cls.contains("signin") && !cls.contains("addaccount")
                && !cls.contains("minutemaid") && !cls.contains("accountintro")) {
            return;
        }
        String identity = GmsCore.getOAuthSignInCallingPackage();
        if (identity == null) {
            identity = guest;
        }
        setActivityStringField(activity, "mReferrer", identity);
        setActivityStringField(activity, "mCallingPackage", identity);
        setActivityStringField(activity, "mLaunchedFromPackage", identity);
        String selected = GmsCore.getOAuthSelectedAccount();
        if (selected != null && !selected.isEmpty()) {
            Intent launchIntent = activity.getIntent();
            GmsCore.patchSignInConfigurationInteractive(launchIntent, selected);
            GmsCore.patchPendingSignInConfigurationInteractive(selected);
        }
        Slog.d(TAG, "OAuth GMS identity -> " + identity + " (" + activity.getClass().getName() + ")");
    }

    private static boolean isOAuthSignInActivity(Activity activity) {
        String cls = activity.getClass().getName().toLowerCase();
        return cls.contains("signin") || cls.contains("addaccount")
                || cls.contains("minutemaid") || cls.contains("accountintro");
    }

    private static void setActivityStringField(Activity activity, String fieldName, String value) {
        try {
            Field field = Activity.class.getDeclaredField(fieldName);
            field.setAccessible(true);
            field.set(activity, value);
        } catch (Throwable ignored) {
        }
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
        super.callActivityOnCreate(activity, icicle, persistentState);
    }

    @Override
    public void callActivityOnCreate(Activity activity, Bundle icicle) {
        checkActivity(activity);
        super.callActivityOnCreate(activity, icicle);
    }

    @Override
    public void callApplicationOnCreate(Application app) {
        checkHCallback();
        super.callApplicationOnCreate(app);
    }

    public Activity newActivity(ClassLoader cl, String className, Intent intent) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        try {
            return super.newActivity(cl, className, intent);
        } catch (ClassNotFoundException e) {
            if (GmsCore.isOAuthHelperClass(className)) {
                ClassLoader hostCl = BlackBoxCore.getContext().getClassLoader();
                return mBaseInstrumentation.newActivity(hostCl, className, intent);
            }
            throw e;
        }
    }
}
