package com.anubis.loader.fake.service;

import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Bundle;
import android.os.IBinder;

import java.io.File;
import java.lang.reflect.Method;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.fake.hook.MethodHook;
import com.anubis.loader.fake.hook.ProxyMethod;
import com.anubis.loader.fake.provider.FileProviderHandler;
import com.anubis.loader.utils.ComponentUtils;
import com.anubis.loader.utils.GmsOAuthLaunchContext;
import com.anubis.loader.utils.MethodParameterUtils;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.BuildCompat;
import com.anubis.loader.utils.compat.StartActivityCompat;

import static android.content.pm.PackageManager.GET_META_DATA;

/**
 * Created by Milk on 4/21/21.
 * * ∧＿∧
 * (`･ω･∥
 * 丶　つ０
 * しーＪ
 * 此处无Bug
 */
public class ActivityManagerCommonProxy {
    public static final String TAG = "CommonStub";

    @ProxyMethod("startActivity")
    public static class StartActivity extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Intent intent = getIntent(args);
            Slog.d(TAG, "Hook in : " + intent);
            assert intent != null;
            if (intent.getParcelableExtra("_B_|_target_") != null) {
                MethodParameterUtils.replaceFirstAppPkg(args);
                return method.invoke(who, args);
            }
            String guestPkg = BActivityThread.getAppPackageName();
            if (GmsCore.rewriteGoogleAccountIntent(intent)) {
                Slog.d(TAG, "Google account intent rewritten for virtual GMS");
            }
            if (GmsCore.isPlayStoreAuthActive() && GmsCore.isPlayStoreGmsAuthIntent(intent)) {
                String playGuest = GmsCore.playStoreAuthGuestPackage();
                intent.putExtra(GmsCore.EXTRA_GUEST_EXTERNAL_GMS, true);
                GmsCore.prepareExternalGmsSignIn(intent, playGuest);
                MethodParameterUtils.replaceFirstAppPkg(args);
                MethodParameterUtils.replaceLastUserId(args);
                Slog.d(TAG, "Play Store auth -> host GMS for " + playGuest + ": " + intent);
                return method.invoke(who, args);
            }
            if (!GmsCore.isOAuthInternalGmsLaunch(intent)
                    && GmsCore.shouldLaunchExternalGmsSignIn(intent, guestPkg)) {
                String oauthGuest = GmsCore.isPlayStoreAuthActive()
                        ? GmsCore.playStoreAuthGuestPackage() : guestPkg;
                Intent wrapped = GmsCore.wrapGmsSignInIntent(intent, oauthGuest);
                args[StartActivityCompat.getIntentIndex()] = wrapped;
                intent = wrapped;
                Slog.d(TAG, "Wrap GMS SignIn -> OAuth proxy for " + oauthGuest);
            }
            if (intent.getBooleanExtra(GmsCore.EXTRA_EXTERNAL_GMS, false)) {
                if (!intent.getBooleanExtra(GmsCore.EXTRA_GUEST_EXTERNAL_GMS, false)) {
                    GmsCore.prepareExternalGmsSignIn(intent, guestPkg);
                }
                MethodParameterUtils.replaceFirstAppPkg(args);
                MethodParameterUtils.replaceLastUserId(args);
                Slog.d(TAG, "Direct external GMS SignIn (host caller) for " + guestPkg + ": " + intent);
                return method.invoke(who, args);
            }
            if (GmsCore.isOAuthInternalGmsLaunch(intent)) {
                Slog.d(TAG, "Virtual GMS SignIn — keep guest calling package " + guestPkg);
            } else if (!intent.getBooleanExtra(GmsCore.EXTRA_EXTERNAL_GMS, false)) {
                MethodParameterUtils.replaceFirstAppPkg(args);
            }
            if (ComponentUtils.isRequestInstall(intent)) {
                File file = FileProviderHandler.convertFile(BActivityThread.getApplication(), intent.getData());
                if (BlackBoxCore.get().requestInstallPackage(file, BActivityThread.getUserId())) {
                    return 0;
                }
                intent.setData(FileProviderHandler.convertFileUri(BActivityThread.getApplication(), intent.getData()));
                return method.invoke(who, args);
            }
            String dataString = intent.getDataString();
            if (dataString != null && dataString.equals("package:" + BActivityThread.getAppPackageName())) {
                intent.setData(Uri.parse("package:" + BlackBoxCore.getHostPkg()));
            }

            ResolveInfo resolveInfo = null;
            if (GmsCore.isGoogleOAuthProxy(intent)) {
                resolveInfo = GmsCore.resolveActivityOnHost(intent, GET_META_DATA);
            }
            if (resolveInfo == null) {
                resolveInfo = BlackBoxCore.getBPackageManager().resolveActivity(intent, GET_META_DATA, StartActivityCompat.getResolvedType(args), BActivityThread.getUserId());
            }
            if (resolveInfo == null) {
                String origPackage = intent.getPackage();
                if (intent.getPackage() == null && intent.getComponent() == null) {
                    intent.setPackage(BActivityThread.getAppPackageName());
                } else {
                    origPackage = intent.getPackage();
                }
                resolveInfo = BlackBoxCore.getBPackageManager().resolveActivity(intent,GET_META_DATA,StartActivityCompat.getResolvedType(args),BActivityThread.getUserId());
                if (resolveInfo == null) {
                    intent.setPackage(origPackage);
                    return method.invoke(who, args);
                }
            }


            intent.setExtrasClassLoader(who.getClass().getClassLoader());
            intent.setComponent(new ComponentName(resolveInfo.activityInfo.packageName, resolveInfo.activityInfo.name));
            BlackBoxCore.getBActivityManager().startActivityAms(BActivityThread.getUserId(),
            StartActivityCompat.getIntent(args),
            StartActivityCompat.getResolvedType(args),
            StartActivityCompat.getResultTo(args),
            StartActivityCompat.getResultWho(args),
            StartActivityCompat.getRequestCode(args),
            StartActivityCompat.getFlags(args),
            StartActivityCompat.getOptions(args));
            return 0;
        }

        private Intent getIntent(Object[] args) {
            int index;
            if (BuildCompat.isR()) {
                index = 3;
            } else {
                index = 2;
            }
            if (args[index] instanceof Intent) {
                return (Intent) args[index];
            }
            for (Object arg : args) {
                if (arg instanceof Intent) {
                    return (Intent) arg;
                }
            }
            return null;
        }
    }

    @ProxyMethod("startActivities")
    public static class StartActivities extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            int index = getIntents();
            Intent[] intents = (Intent[]) args[index++];
            String[] resolvedTypes = (String[]) args[index++];
            IBinder resultTo = (IBinder) args[index++];
            Bundle options = (Bundle) args[index];
            // todo ??
            if (!ComponentUtils.isSelf(intents)) {
                return method.invoke(who, args);
            }

            for (Intent intent : intents) {
                intent.setExtrasClassLoader(who.getClass().getClassLoader());
            }
            return BlackBoxCore.getBActivityManager().startActivities(BActivityThread.getUserId(),
                    intents, resolvedTypes, resultTo, options);
        }

        public int getIntents() {
            if (BuildCompat.isR()) {
                return 3;
            }
            return 2;
        }
    }

    @ProxyMethod("startIntentSenderForResult")
    public static class StartIntentSenderForResult extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            MethodParameterUtils.replaceFirstAppPkg(args);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("activityResumed")
    public static class ActivityResumed extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BlackBoxCore.getBActivityManager().onActivityResumed((IBinder) args[0]);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("activityDestroyed")
    public static class ActivityDestroyed extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BlackBoxCore.getBActivityManager().onActivityDestroyed((IBinder) args[0]);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("finishActivity")
    public static class FinishActivity extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            BlackBoxCore.getBActivityManager().onFinishActivity((IBinder) args[0]);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getAppTasks")
    public static class GetAppTasks extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            MethodParameterUtils.replaceFirstAppPkg(args);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getCallingPackage")
    public static class getCallingPackage extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BlackBoxCore.getBActivityManager().getCallingPackage((IBinder) args[0], BActivityThread.getUserId());
        }
    }

    @ProxyMethod("getCallingActivity")
    public static class getCallingActivity extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return BlackBoxCore.getBActivityManager().getCallingActivity((IBinder) args[0], BActivityThread.getUserId());
        }
    }

    @ProxyMethod("getLaunchedFromPackage")
    public static class getLaunchedFromPackage extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String calling = GmsCore.getOAuthSignInCallingPackage();
            if (calling != null) {
                Slog.d(TAG, "OAuth getLaunchedFromPackage -> " + calling);
                return calling;
            }
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
    public static class getLaunchedFromUid extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Integer guestUid = oauthGuestUidForGmsProcess();
            if (guestUid != null) {
                Slog.d(TAG, "OAuth getLaunchedFromUid -> " + guestUid);
                return guestUid;
            }
            return method.invoke(who, args);
        }
    }

    private static Integer oauthGuestUidForGmsProcess() {
        String calling = GmsCore.getOAuthSignInCallingPackage();
        if (calling != null && calling.equals(BlackBoxCore.getHostPkg())) {
            return BlackBoxCore.getHostUid();
        }
        String guest = GmsOAuthLaunchContext.guestForGmsHooks();
        if (guest == null) {
            return null;
        }
        try {
            int appId = com.anubis.loader.core.system.pm.BPackageManagerService.get().getAppId(guest);
            if (appId > 0) {
                return com.anubis.loader.core.system.user.BUserHandle.getUid(
                        BActivityThread.getUserId(), appId);
            }
        } catch (Throwable ignored) {
        }
        return null;
    }
}
