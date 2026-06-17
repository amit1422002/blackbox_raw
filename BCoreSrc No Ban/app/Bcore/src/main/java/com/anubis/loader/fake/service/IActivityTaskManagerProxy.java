package com.anubis.loader.fake.service;

import android.app.ActivityManager;
import android.os.IBinder;

import java.lang.reflect.Method;

import black.android.app.BRActivityTaskManager;
import black.android.app.BRIActivityTaskManagerStub;
import black.android.os.BRServiceManager;
import black.android.util.BRSingleton;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.core.system.pm.BPackageManagerService;
import com.anubis.loader.utils.GmsOAuthLaunchContext;
import com.anubis.loader.core.system.user.BUserHandle;
import com.anubis.loader.fake.hook.BinderInvocationStub;
import com.anubis.loader.fake.hook.MethodHook;
import com.anubis.loader.fake.hook.ProxyMethod;
import com.anubis.loader.fake.hook.ScanClass;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.TaskDescriptionCompat;

/**
 * Created by Milk on 3/31/21.
 * * ∧＿∧
 * (`･ω･∥
 * 丶　つ０
 * しーＪ
 * 此处无Bug
 */
@ScanClass(ActivityManagerCommonProxy.class)
public class IActivityTaskManagerProxy extends BinderInvocationStub {
    public static final String TAG = "BActivityTaskManager";

    public IActivityTaskManagerProxy() {
        super(BRServiceManager.get().getService("activity_task"));
    }

    @Override
    protected Object getWho() {
        return BRIActivityTaskManagerStub.get().asInterface(BRServiceManager.get().getService("activity_task"));
    }

    @Override
    protected void inject(Object baseInvocation, Object proxyInvocation) {
        replaceSystemService("activity_task");
        BRActivityTaskManager.get().getService();
        Object o = BRActivityTaskManager.get().IActivityTaskManagerSingleton();
        BRSingleton.get(o)._set_mInstance(BRIActivityTaskManagerStub.get().asInterface(this));
    }

    @Override
    public boolean isBadEnv() {
        return false;
    }

    @ProxyMethod("getLaunchedFromPackage")
    public static class GetLaunchedFromPackage extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String guest = GmsOAuthLaunchContext.guestForGmsHooks();
            if (guest != null) {
                Slog.d(TAG, "OAuth getLaunchedFromPackage -> " + guest);
                return guest;
            }
            String fromStack = BlackBoxCore.getBActivityManager().getLaunchedFromPackage(
                    (IBinder) args[0], BActivityThread.getUserId());
            if (fromStack != null && !fromStack.equals(BlackBoxCore.getHostPkg())) {
                return fromStack;
            }
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getLaunchedFromUid")
    public static class GetLaunchedFromUid extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String guest = GmsOAuthLaunchContext.guestForGmsHooks();
            if (guest != null) {
                int appId = BPackageManagerService.get().getAppId(guest);
                if (appId > 0) {
                    int uid = BUserHandle.getUid(BActivityThread.getUserId(), appId);
                    Slog.d(TAG, "OAuth getLaunchedFromUid -> " + uid);
                    return uid;
                }
            }
            return method.invoke(who, args);
        }
    }

    // for >= Android 10 && < Android 12
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
