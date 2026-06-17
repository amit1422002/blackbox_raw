package com.anubis.loader.fake.service.context.providers;

import android.net.Uri;
import android.os.Bundle;
import android.os.IInterface;
import android.text.TextUtils;

import java.lang.reflect.Method;

import black.android.content.BRAttributionSource;
import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.device.DeviceSpoofManager;
import com.anubis.loader.fake.hook.ClassInvocationStub;
import com.anubis.loader.utils.compat.ContextCompat;

/**
 * Created by Milk on 4/8/21.
 * * ∧＿∧
 * (`･ω･∥
 * 丶　つ０
 * しーＪ
 * 此处无Bug
 */
public class SystemProviderStub extends ClassInvocationStub implements BContentProvider {
    private IInterface mBase;

    @Override
    public IInterface wrapper(IInterface contentProviderProxy, String appPkg) {
        mBase = contentProviderProxy;
        injectHook();
        return (IInterface) getProxyInvocation();
    }

    @Override
    protected Object getWho() {
        return mBase;
    }

    @Override
    protected void inject(Object baseInvocation, Object proxyInvocation) {

    }

    @Override
    protected void onBindMethod() {

    }

    @Override
    public boolean isBadEnv() {
        return false;
    }

    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        if ("asBinder".equals(method.getName())) {
            return method.invoke(mBase, args);
        }
        if (args != null && args.length > 0) {
            Object arg = args[0];
            if (arg instanceof String) {
                args[0] = BlackBoxCore.getHostPkg();
            } else if (arg.getClass().getName().equals(BRAttributionSource.getRealClass().getName())) {
                ContextCompat.fixAttributionSourceState(arg, BlackBoxCore.getHostUid());
            }
        }
        Object result = method.invoke(mBase, args);
        return maybeSpoofAndroidId(method, args, result);
    }

    private static Object maybeSpoofAndroidId(Method method, Object[] args, Object result) {
        if (!isAndroidIdRequest(method, args)) {
            return result;
        }
        if (!DeviceSpoofManager.shouldSpoofCurrentProcess()) {
            return result;
        }
        int userId = BActivityThread.getUserId();
        String pkg = BActivityThread.getAppPackageName();
        String androidId = DeviceSpoofManager.get().resolveAndroidId(userId, pkg);
        if (TextUtils.isEmpty(androidId)) {
            return result;
        }
        if ("call".equals(method.getName())) {
            Bundle out = result instanceof Bundle ? new Bundle((Bundle) result) : new Bundle();
            out.putString("value", androidId);
            return out;
        }
        return result;
    }

    private static boolean isAndroidIdRequest(Method method, Object[] args) {
        if (args == null) return false;
        if ("call".equals(method.getName()) && args.length >= 2 && args[1] instanceof String) {
            return "android_id".equals(args[1]);
        }
        if ("query".equals(method.getName()) && args.length >= 1 && args[0] instanceof Uri) {
            Uri uri = (Uri) args[0];
            return uri != null && "android_id".equals(uri.getLastPathSegment());
        }
        return false;
    }
}
