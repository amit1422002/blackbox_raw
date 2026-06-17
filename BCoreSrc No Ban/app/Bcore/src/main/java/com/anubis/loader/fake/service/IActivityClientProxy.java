package com.anubis.loader.fake.service;

import android.app.ActivityManager;
import android.os.IBinder;

import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

import black.android.app.BRActivityClient;
import black.android.util.BRSingleton;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.fake.frameworks.BActivityManager;
import com.anubis.loader.fake.hook.ClassInvocationStub;
import com.anubis.loader.fake.hook.MethodHook;
import com.anubis.loader.fake.hook.ProxyMethod;
import com.anubis.loader.fake.hook.ScanClass;
import com.anubis.loader.utils.GmsOAuthLaunchContext;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.TaskDescriptionCompat;

/**
 * Created by BlackBox on 2022/2/22.
 */
@ScanClass(ActivityManagerCommonProxy.class)
public class IActivityClientProxy extends ClassInvocationStub {
    public static final String TAG = "IActivityClientProxy";
    private final Object who;

    public IActivityClientProxy(Object who) {
        this.who = who;
    }

    @Override
    protected Object getWho() {
        if (who != null) {
            return who;
        }
        Object instance = BRActivityClient.get().getInstance();
        Object singleton = BRActivityClient.get(instance).INTERFACE_SINGLETON();
        return BRSingleton.get(singleton).get();
    }

    @Override
    protected void inject(Object baseInvocation, Object proxyInvocation) {
        Object instance = BRActivityClient.get().getInstance();
        Object singleton = BRActivityClient.get(instance).INTERFACE_SINGLETON();
        BRSingleton.get(singleton)._set_mInstance(proxyInvocation);
    }

    @Override
    public boolean isBadEnv() {
        try {
            Object instance = BRActivityClient.get().getInstance();
            Object singleton = BRActivityClient.get(instance).INTERFACE_SINGLETON();
            Object current = BRSingleton.get(singleton).get();
            return !(current instanceof Proxy);
        } catch (Throwable ignored) {
            return true;
        }
    }

    @Override
    public Object getProxyInvocation() {
        return super.getProxyInvocation();
    }

    @Override
    public void onlyProxy(boolean o) {
        super.onlyProxy(o);
    }

    @ProxyMethod("getCallingPackage")
    public static class GetCallingPackage extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String guest = GmsOAuthLaunchContext.guestForGmsHooks();
            if (guest != null) {
                Slog.d(TAG, "OAuth ActivityClient getCallingPackage -> " + guest);
                return guest;
            }
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getLaunchedFromPackage")
    public static class GetLaunchedFromPackage extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String guest = GmsOAuthLaunchContext.guestForGmsHooks();
            if (guest != null) {
                Slog.d(TAG, "OAuth ActivityClient getLaunchedFromPackage -> " + guest);
                return guest;
            }
            IBinder token = (IBinder) args[0];
            String fromStack = BActivityManager.get().getLaunchedFromPackage(token, BActivityThread.getUserId());
            if (fromStack != null) {
                return fromStack;
            }
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("finishActivity")
    public static class FinishActivity extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            IBinder token = (IBinder) args[0];
            BActivityManager.get().onFinishActivity(token);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("activityResumed")
    public static class ActivityResumed extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            IBinder token = (IBinder) args[0];
            BActivityManager.get().onActivityResumed(token);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("activityDestroyed")
    public static class ActivityDestroyed extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            IBinder token = (IBinder) args[0];
            BActivityManager.get().onActivityDestroyed(token);
            return method.invoke(who, args);
        }
    }

    // for >= Android 12
    @ProxyMethod("setTaskDescription")
    public static class SetTaskDescription extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            ActivityManager.TaskDescription td = (ActivityManager.TaskDescription) args[1];
            args[1] = TaskDescriptionCompat.fix(td);
            return method.invoke(who, args);
        }
    }
}
