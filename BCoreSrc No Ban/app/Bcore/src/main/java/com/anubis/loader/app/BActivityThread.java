package com.anubis.loader.app;

import android.app.Activity;
import android.app.Application;
import android.app.Instrumentation;
import android.app.Service;
import android.app.job.JobService;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.ContentProviderClient;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.pm.ServiceInfo;
import android.os.Binder;
import android.os.Build;
import android.os.ConditionVariable;
import android.os.Handler;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.RemoteException;
import android.os.StrictMode;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebView;

import java.io.File;
import java.lang.reflect.Method;
import java.security.Security;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Map;

import black.android.app.ActivityThreadAppBindDataContext;
import black.android.app.BRActivity;
import black.android.app.BRActivityManagerNative;
import black.android.app.BRActivityThread;
import black.android.app.BRActivityThreadActivityClientRecord;
import black.android.app.BRActivityThreadAppBindData;
import black.android.app.BRActivityThreadNMR1;
import black.android.app.BRActivityThreadQ;
import black.android.app.BRContextImpl;
import black.android.app.BRLoadedApk;
import black.android.app.BRService;
import black.android.app.LoadedApk;
import black.android.content.BRBroadcastReceiver;
import black.android.content.BRContentProviderClient;
import black.android.graphics.BRCompatibility;
import black.android.security.net.config.BRNetworkSecurityConfigProvider;
import black.com.android.internal.content.BRReferrerIntent;
import black.dalvik.system.BRVMRuntime;

import com.anubis.loader.AnubisCore;
import com.anubis.loader.app.configuration.AppLifecycleCallback;
import com.anubis.loader.app.dispatcher.AppServiceDispatcher;
import com.anubis.loader.closecode.GuestAcBypass;
import com.anubis.loader.utils.GuestPathAudit;
import com.anubis.loader.utils.GuestPathContext;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.GuestNativeLibs;
import com.anubis.loader.utils.GuestResourceLayout;
import com.anubis.loader.utils.StealthPathRules;
import com.anubis.loader.utils.StealthClassLoaderHelper;
import com.anubis.loader.utils.StealthNetworkHelper;
import com.anubis.loader.utils.VirtualPathSpoof;
import com.anubis.loader.core.CrashHandler;
import com.anubis.loader.core.IBActivityThread;
import com.anubis.loader.core.IOCore;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.core.NativeCore;
import com.anubis.loader.core.env.BEnvironment;
import com.anubis.loader.core.env.VirtualRuntime;
import com.anubis.loader.core.system.user.BUserHandle;
import com.anubis.loader.entity.AppConfig;
import com.anubis.loader.entity.am.ReceiverData;
import com.anubis.loader.entity.pm.InstalledModule;
import com.anubis.loader.fake.delegate.AppInstrumentation;
import com.anubis.loader.fake.delegate.ContentProviderDelegate;
import com.anubis.loader.fake.frameworks.BXposedManager;
import com.anubis.loader.fake.hook.HookManager;
import com.anubis.loader.fake.service.HCallbackProxy;
import com.anubis.loader.utils.Reflector;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.ActivityManagerCompat;
import com.anubis.loader.utils.compat.BuildCompat;
import com.anubis.loader.utils.compat.ContextCompat;
import com.anubis.loader.utils.compat.StrictModeCompat;

/**
 * Created by Milk on 3/31/21.
 * * ∧＿∧
 * (`･ω･∥
 * 丶　つ０
 * しーＪ
 * 此处无Bug
 */
public class BActivityThread extends IBActivityThread.Stub {
    public static final String TAG = "BActivityThread";

    private static BActivityThread sBActivityThread;
    private AppBindData mBoundApplication;
    private Application mInitialApplication;
    private AppConfig mAppConfig;
    private final List<ProviderInfo> mProviders = new ArrayList<>();
    private final Handler mH = AnubisCore.get().getHandler();
    private static final Object mConfigLock = new Object();

    public static boolean isThreadInit() {
        return sBActivityThread != null;
    }

    public static BActivityThread currentActivityThread() {
        if (sBActivityThread == null) {
            synchronized (BActivityThread.class) {
                if (sBActivityThread == null) {
                    sBActivityThread = new BActivityThread();
                }
            }
        }
        return sBActivityThread;
    }

    public static AppConfig getAppConfig() {
        synchronized (mConfigLock) {
            return currentActivityThread().mAppConfig;
        }
    }

    public static List<ProviderInfo> getProviders() {
        return currentActivityThread().mProviders;
    }

    public static String getAppProcessName() {
        if (getAppConfig() != null) {
            return getAppConfig().processName;
        } else if (currentActivityThread().mBoundApplication != null) {
            return currentActivityThread().mBoundApplication.processName;
        } else {
            return null;
        }
    }

    public static String getAppPackageName() {
        if (getAppConfig() != null) {
            return getAppConfig().packageName;
        } else if (currentActivityThread().mInitialApplication != null) {
            String bound = VirtualPathSpoof.getGuestPackageBound();
            if (!TextUtils.isEmpty(bound) && VirtualPathSpoof.isStealthAcPackage(bound)) {
                return bound;
            }
            return currentActivityThread().mInitialApplication.getPackageName();
        } else {
            String bound = VirtualPathSpoof.getGuestPackageBound();
            if (!TextUtils.isEmpty(bound)) {
                return bound;
            }
            return null;
        }
    }

    public static Application getApplication() {
        return currentActivityThread().mInitialApplication;
    }

    public static int getAppPid() {
        return getAppConfig() == null ? -1 : getAppConfig().bpid;
    }

    public static int getBUid() {
        return getAppConfig() == null ? BUserHandle.AID_APP_START : getAppConfig().buid;
    }

    /** Virtual UID (userId + appId) guest AC checks expect — not the host kernel UID. */
    public static int getGuestVirtualUid() {
        if (getAppConfig() == null) {
            return -1;
        }
        return BUserHandle.getUid(getUserId(), getBUid());
    }

    public static int getBAppId() {
        return BUserHandle.getAppId(AnubisCore.getHostUid());
    }
    public static int getCallingBUid() {
        return getAppConfig() == null ? AnubisCore.getHostUid() : getAppConfig().callingBUid;
    }

    public static int getUid() {
        return getAppConfig() == null ? -1 : getAppConfig().uid;
    }

    public static int getUserId() {
        return getAppConfig() == null ? 0 : getAppConfig().userId;
    }

    public void initProcess(AppConfig appConfig) {
        synchronized (mConfigLock) {
            if (this.mAppConfig != null && !this.mAppConfig.packageName.equals(appConfig.packageName)) {
                // 该进程已被attach
                throw new RuntimeException("reject init process: " + appConfig.processName + ", this process is : " + this.mAppConfig.processName);
            }
            this.mAppConfig = appConfig;
            IBinder iBinder = asBinder();
            try {
                iBinder.linkToDeath(new DeathRecipient() {
                    @Override
                    public void binderDied() {
                        synchronized (mConfigLock) {
                            try {
                                iBinder.linkToDeath(this, 0);
                            } catch (RemoteException ignored) {
                            }
                            mAppConfig = null;
                        }
                    }
                }, 0);
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        }
    }

    public boolean isInit() {
        return mBoundApplication != null;
    }

    public Service createService(ServiceInfo serviceInfo, IBinder token) {
        if (!BActivityThread.currentActivityThread().isInit()) {
            try {
                BActivityThread.currentActivityThread().bindApplication(
                        serviceInfo.packageName, serviceInfo.processName);
            } catch (RuntimeException e) {
                if (GmsCore.isGoogleAppOrService(serviceInfo.packageName)) {
                    Slog.w(TAG, "GMS bindApplication skipped for " + serviceInfo.name + ": " + e.getMessage());
                    return null;
                }
                throw e;
            }
            if (!BActivityThread.currentActivityThread().isInit()) {
                return null;
            }
        }
        ClassLoader classLoader = BRLoadedApk.get(mBoundApplication.info).getClassLoader();
        Service service;
        try {
            service = (Service) classLoader.loadClass(serviceInfo.name).newInstance();
        } catch (Exception e) {
            e.printStackTrace();
            Slog.e(TAG, "Unable to instantiate service " + serviceInfo.name + ": " + e.toString());
            return null;
        }

        try {
            Context context = AnubisCore.getContext().createPackageContext(serviceInfo.packageName,Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY);
            BRContextImpl.get(context).setOuterContext(service);
            BRService.get(service).attach(context,AnubisCore.mainThread(),serviceInfo.name,token,mInitialApplication,BRActivityManagerNative.get().getDefault());
            ContextCompat.fix(context);
            if (VirtualPathSpoof.isStealthAcPackage(serviceInfo.packageName)) {
                ContextCompat.fixGuestIdentity(context);
                GuestPathContext.wrapIfNeeded(context, serviceInfo.packageName);
            }
            service.onCreate();
            return service;
        } catch (Exception e) {
            throw new RuntimeException("Unable to create service " + serviceInfo.name + ": " + e.toString(), e);
        }
    }

    public JobService createJobService(ServiceInfo serviceInfo) {
        if (!BActivityThread.currentActivityThread().isInit()) {
            BActivityThread.currentActivityThread().bindApplication(serviceInfo.packageName, serviceInfo.processName);
        }
        ClassLoader classLoader = BRLoadedApk.get(mBoundApplication.info).getClassLoader();
        JobService service;
        try {
            service = (JobService) classLoader.loadClass(serviceInfo.name).newInstance();
        } catch (Exception e) {
            e.printStackTrace();
            Slog.e(TAG, "Unable to create JobService " + serviceInfo.name + ": " + e.toString());
            return null;
        }

        try {
            Context context = AnubisCore.getContext().createPackageContext(serviceInfo.packageName,Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY);
            BRContextImpl.get(context).setOuterContext(service);
            BRService.get(service).attach(context,AnubisCore.mainThread(),serviceInfo.name,BActivityThread.currentActivityThread().getActivityThread(),mInitialApplication,BRActivityManagerNative.get().getDefault());
            ContextCompat.fix(context);
            if (VirtualPathSpoof.isStealthAcPackage(serviceInfo.packageName)) {
                ContextCompat.fixGuestIdentity(context);
                GuestPathContext.wrapIfNeeded(context, serviceInfo.packageName);
            }
            service.onCreate();
            service.onBind(null);
            return service;
        } catch (Exception e) {
            throw new RuntimeException("Unable to create JobService " + serviceInfo.name + ": " + e.toString(), e);
        }
    }

    public void bindApplication(final String packageName, final String processName) {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            final ConditionVariable conditionVariable = new ConditionVariable();
            AnubisCore.get().getHandler().post(() -> {
                handleBindApplication(packageName, processName);
                conditionVariable.open();
            });
            conditionVariable.block();
        } else {
            handleBindApplication(packageName, processName);
        }
    }

    public synchronized void handleBindApplication(String packageName, String processName) {
        if (isInit())
            return;
        VirtualPathSpoof.beginInternalBind();
        try {
            handleBindApplicationInner(packageName, processName);
        } finally {
            VirtualPathSpoof.endInternalBind();
        }
    }

    private synchronized void handleBindApplicationInner(String packageName, String processName) {
        try {
            CrashHandler.create();
        } catch (Throwable ignored) {
        }

        processName = VirtualPathSpoof.guestVisibleProcessName(packageName, processName);
        AnubisCore.reconcileStorageHostPkg(packageName);
        BEnvironment.ensureGuestDataLayout(packageName, BActivityThread.getUserId(), processName);
        BEnvironment.migrateLegacyObbIfNeeded(packageName);
        if (VirtualPathSpoof.isStealthAcPackage(packageName)) {
            StealthPathRules.ensureHostInstallReady(packageName, BActivityThread.getUserId());
        }
        BEnvironment.load();

        PackageInfo packageInfo = AnubisCore.getBPackageManager().getPackageInfo(packageName, PackageManager.GET_PROVIDERS, BActivityThread.getUserId());
        GuestNativeLibs.ensureExtracted(packageName, packageInfo.applicationInfo);
        ApplicationInfo realAppInfo = packageInfo.applicationInfo;
        if (VirtualPathSpoof.isStealthAcPackage(packageName)) {
            realAppInfo = BEnvironment.resolveVirtualApplicationInfo(realAppInfo, packageName);
        }
        final int guestUserId = BActivityThread.getUserId();
        ApplicationInfo applicationInfo = realAppInfo;
        ApplicationInfo guestAppInfo = realAppInfo;
        final boolean stealthAc = VirtualPathSpoof.isStealthAcPackage(packageName);
        if (packageInfo.providers == null) {
            packageInfo.providers = new ProviderInfo[]{};
        }
        mProviders.addAll(Arrays.asList(packageInfo.providers));

        Object boundApplication = BRActivityThread.get(AnubisCore.mainThread()).mBoundApplication();

        NativeCore.init(Build.VERSION.SDK_INT);
        NativeCore.setGuestPackageForStealth(packageName);
        if (GmsCore.isGoogleAppOrService(packageName)) {
            com.anubis.loader.gms.GmsBootHelper.ensureBootable(guestUserId);
            VirtualPathSpoof.prepareGoogleBindApplicationInfo(realAppInfo, guestUserId);
        }
        if (stealthAc) {
            IOCore.get().enableRedirect(AnubisCore.getContext());
        }

        Context packageContext = createPackageContext(realAppInfo);
        Object loadedApk = BRContextImpl.get(packageContext).mPackageInfo();
        BRLoadedApk.get(loadedApk)._set_mSecurityViolation(false);

        VirtualRuntime.setupRuntime(processName, applicationInfo);

        BRVMRuntime.get(BRVMRuntime.get().getRuntime()).setTargetSdkVersion(applicationInfo.targetSdkVersion);
        if (BuildCompat.isS()) {
            BRCompatibility.get().setTargetSdkVersion(applicationInfo.targetSdkVersion);
        }

        if (!stealthAc) {
            IOCore.get().enableRedirect(packageContext);
        }
        if (stealthAc) {
            StealthNetworkHelper.ensureRealNetwork(packageContext);
        }

        StealthClassLoaderHelper.replaceIfNeeded(loadedApk, packageName, realAppInfo);
        GuestPathContext.patchLoadedApk(loadedApk, packageName, guestUserId, guestAppInfo, realAppInfo);
        int targetSdkVersion = applicationInfo.targetSdkVersion;
        if (targetSdkVersion < Build.VERSION_CODES.GINGERBREAD) {
            StrictMode.ThreadPolicy newPolicy = new StrictMode.ThreadPolicy.Builder(StrictMode.getThreadPolicy()).permitNetwork().build();
            StrictMode.setThreadPolicy(newPolicy);
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.N) {
            if (targetSdkVersion < Build.VERSION_CODES.N) {
                StrictModeCompat.disableDeathOnFileUriExposure();
            }
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            int bpid = getAppPid();
            WebView.setDataDirectorySuffix("wv_" + Math.abs(packageName.hashCode())
                    + "_p" + (bpid >= 0 ? bpid : 0) + "_" + android.os.Process.myPid());
        }

        if (stealthAc) {
            int hostUid = android.os.Process.myUid();
            VirtualPathSpoof.setProcSpoofUid(hostUid);
            NativeCore.setGuestProcSpoofUid(hostUid);
            NativeCore.setGuestProcessComm(packageName);
            NativeCore.hideSelfLoaderFromAc();
            GuestResourceLayout.prepare(packageName, guestUserId);
            if (GuestAcBypass.isSupportedGame(packageName)) {
                Slog.i("GUEST_AC_BYPASS", "BActivityThread stealth bootstrap pkg=" + packageName
                        + " pid=" + android.os.Process.myPid());
                GuestAcBypass.arm(packageName);
            }
        } else {
            VirtualPathSpoof.setProcSpoofUid(0);
            NativeCore.setGuestProcSpoofUid(0);
        }

        com.anubis.loader.core.device.DeviceSpoofManager.get().reload();
        com.anubis.loader.utils.BuildStealthHelper.applyForGuest();
        if (AnubisCore.get().isHideXposed()
                && com.anubis.loader.core.device.DeviceSpoofManager.shouldSpoofCurrentProcess()) {
            NativeCore.hideXposed();
        }

        AppBindData bindData = new AppBindData();
        bindData.appInfo = applicationInfo;
        bindData.processName = processName;
        bindData.info = loadedApk;
        bindData.providers = mProviders;

        ActivityThreadAppBindDataContext activityThreadAppBindData = BRActivityThreadAppBindData.get(boundApplication);
        activityThreadAppBindData._set_instrumentationName(new ComponentName(
                AnubisCore.getHostPkg(), AppInstrumentation.class.getName()));
        // bindData.appInfo must keep real vfs paths — fake dataDir breaks UE4 file I/O during Application.onCreate.
        activityThreadAppBindData._set_appInfo(bindData.appInfo);
        activityThreadAppBindData._set_info(bindData.info);
        activityThreadAppBindData._set_processName(bindData.processName);
        activityThreadAppBindData._set_providers(bindData.providers);

        mBoundApplication = bindData;

        //ssl适配
        if (BRNetworkSecurityConfigProvider.getRealClass() != null) {
            Security.removeProvider("AndroidNSSP");
            BRNetworkSecurityConfigProvider.get().install(packageContext);
        }
        Application application;
        try {
            onBeforeCreateApplication(packageName, processName, packageContext);
            ApplicationInfo loadInfo = BRLoadedApk.get(loadedApk).mApplicationInfo();
            if (loadInfo != null) {
                if (GmsCore.isGoogleAppOrService(packageName)) {
                    VirtualPathSpoof.prepareGoogleBindApplicationInfo(loadInfo, guestUserId);
                } else {
                    VirtualPathSpoof.sanitizeAppComponentFactory(loadInfo);
                }
                BRLoadedApk.get(loadedApk)._set_mApplicationInfo(loadInfo);
            }
            if (GmsCore.isGoogleAppOrService(packageName)) {
                VirtualPathSpoof.prepareGoogleBindApplicationInfo(applicationInfo, guestUserId);
            } else {
                VirtualPathSpoof.sanitizeAppComponentFactory(applicationInfo);
            }
            application = BRLoadedApk.get(loadedApk).makeApplication(false, null);
            if (application == null && GmsCore.isGoogleAppOrService(packageName)) {
                application = BRLoadedApk.get(loadedApk).makeApplication(false, null);
            }
            if (application == null) {
                Log.e(TAG, "makeApplication null pkg=" + packageName + " sourceDir="
                        + applicationInfo.sourceDir + " nativeLib=" + applicationInfo.nativeLibraryDir);
                if (GmsCore.isGoogleAppOrService(packageName)) {
                    mBoundApplication = null;
                    mInitialApplication = null;
                    Slog.w(TAG, "virtual GMS Application unavailable — abort bind for " + packageName);
                    return;
                }
                throw new NullPointerException("application空指针异常");
            }
            mInitialApplication = application;
            boolean isMainGuestProcess = packageName.equals(processName);
            if (isMainGuestProcess) {
                try {
                    new WebView(mInitialApplication).destroy();
                } catch (Throwable t) {
                    t.printStackTrace();
                }
            }

            BRActivityThread.get(AnubisCore.mainThread())._set_mInitialApplication(mInitialApplication);
            ContextCompat.fix((Context) BRActivityThread.get(AnubisCore.mainThread()).getSystemContext());
            if (stealthAc) {
                ContextCompat.fixGuestIdentity(mInitialApplication);
            } else {
                ContextCompat.fix(mInitialApplication);
            }
            installProviders(mInitialApplication, bindData.processName, bindData.providers);

            onBeforeApplicationOnCreate(packageName, processName, application);
            if (stealthAc) {
                GuestPathContext.wrapIfNeeded(mInitialApplication, packageName);
            }
            AppInstrumentation.get().callApplicationOnCreate(application);
            if (stealthAc) {
                ContextCompat.fixGuestIdentity(mInitialApplication);
                ContextCompat.fixGuestIdentity(
                        (Context) BRActivityThread.get(AnubisCore.mainThread()).getSystemContext());
                StealthNetworkHelper.ensureRealNetwork(mInitialApplication);
                GuestPathAudit.logIfFarlight(mInitialApplication, packageName, BActivityThread.getUserId());
                GuestPathAudit.logIfDeltaForce(mInitialApplication, packageName, BActivityThread.getUserId());
            }
            onAfterApplicationOnCreate(packageName, processName, application);
            if (!stealthAc) {
                NativeCore.init_seccomp();
            }
        } catch (Exception e) {
            e.printStackTrace();
            throw new RuntimeException("Unable to makeApplication", e);
        }
    }

    public static Context createPackageContext(ApplicationInfo info) {
        if (info == null || TextUtils.isEmpty(info.packageName)) {
            return null;
        }
        try {
            ApplicationInfo loadInfo = new ApplicationInfo(info);
            int userId = BActivityThread.getUserId();
            VirtualPathSpoof.ensureFrameworkApplicationInfo(loadInfo, userId);
            if (GmsCore.isGoogleAppOrService(loadInfo.packageName)) {
                VirtualPathSpoof.prepareGoogleBindApplicationInfo(loadInfo, userId);
            }

            Object mainThread = AnubisCore.mainThread();
            Object hostLoadedApk = BRContextImpl.get(AnubisCore.getContext()).mPackageInfo();
            Object compatInfo = black.android.app.BRLoadedApkICS.get(hostLoadedApk).mCompatibilityInfo();
            int flags = Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY;
            Object loadedApk = BRActivityThread.get(mainThread).getPackageInfo(loadInfo, compatInfo, flags);

            return (Context) Reflector.on("android.app.ContextImpl")
                    .method("createAppContext", mainThread.getClass(), loadedApk.getClass())
                    .call(null, mainThread, loadedApk);
        } catch (Throwable e) {
            e.printStackTrace();
            try {
                return AnubisCore.getContext().createPackageContext(info.packageName,
                        Context.CONTEXT_INCLUDE_CODE | Context.CONTEXT_IGNORE_SECURITY);
            } catch (Exception fallback) {
                fallback.printStackTrace();
            }
        }
        return null;
    }

    private void installProviders(Context context, String processName, List<ProviderInfo> provider) {
        long origId = Binder.clearCallingIdentity();
        try {
            for (ProviderInfo providerInfo : provider) {
                try {
                    if (processName.equals(providerInfo.processName) || providerInfo.processName.equals(context.getPackageName()) || providerInfo.multiprocess) {
                        installProvider(AnubisCore.mainThread(), context, providerInfo, null);
                    }
                } catch (Throwable ignored) {
                }
            }
        } finally {
            Binder.restoreCallingIdentity(origId);
            ContentProviderDelegate.init();
        }
    }

    public Object getPackageInfo() {
        return mBoundApplication.info;
    }

    public static void installProvider(Object mainThread, Context context, ProviderInfo providerInfo, Object holder) throws Throwable {
        Method installProvider = Reflector.findMethodByFirstName(mainThread.getClass(), "installProvider");
        if (installProvider != null) {
            installProvider.setAccessible(true);
            installProvider.invoke(mainThread, context, holder, providerInfo, false, true, true);
        }
    }

/*    public void loadXposed(Context context) {
        String vPackageName = getAppPackageName();
        String vProcessName = getAppProcessName();
        if (!TextUtils.isEmpty(vPackageName) && !TextUtils.isEmpty(vProcessName) && BXposedManager.get().isXPEnable()) {
            assert vPackageName != null;
            assert vProcessName != null;

            boolean isFirstApplication = vPackageName.equals(vProcessName);

            List<InstalledModule> installedModules = BXposedManager.get().getInstalledModules();
            for (InstalledModule installedModule : installedModules) {
                if (!installedModule.enable) {
                    continue;
                }
                try {
                    PineXposed.loadModule(new File(installedModule.getApplication().sourceDir));
                } catch (Throwable e) {
                    e.printStackTrace();
                }
            }
            try {
                PineXposed.onPackageLoad(vPackageName, vProcessName, context.getApplicationInfo(), isFirstApplication, context.getClassLoader());
            } catch (Throwable ignored) {
            }
        }
        if (AnubisCore.get().isHideXposed()) {
            NativeCore.hideXposed();
        }
    }*/

    @Override
    public IBinder getActivityThread() {
        return BRActivityThread.get(AnubisCore.mainThread()).getApplicationThread();
    }

    @Override
    public void bindApplication() {
        if (!isInit()) {
            bindApplication(getAppPackageName(), getAppProcessName());
        }
    }

    @Override
    public void stopService(Intent intent) {
        AppServiceDispatcher.get().stopService(intent);
    }

    @Override
    public void restartJobService(String selfId) throws RemoteException {

    }

    @Override
    public IBinder acquireContentProviderClient(ProviderInfo providerInfo) throws RemoteException {
        if (!isInit()) {
            bindApplication(BActivityThread.getAppConfig().packageName, BActivityThread.getAppConfig().processName);
        }
        String[] split = providerInfo.authority.split(";");
        for (String auth : split) {
            ContentProviderClient contentProviderClient = AnubisCore.getContext().getContentResolver().acquireContentProviderClient(auth);
            IInterface iInterface = BRContentProviderClient.get(contentProviderClient).mContentProvider();
            if (iInterface == null)
                continue;
            return iInterface.asBinder();
        }
        return null;
    }

    @Override
    public IBinder peekService(Intent intent) {
        return AppServiceDispatcher.get().peekService(intent);
    }

    @Override
    public void finishActivity(final IBinder token) {
        mH.post(() -> {
            Map<IBinder, Object> activities = BRActivityThread.get(AnubisCore.mainThread()).mActivities();
            if (activities.isEmpty())
                return;
            Object clientRecord = activities.get(token);
            if (clientRecord == null)
                return;
            Activity activity = getActivityByToken(token);

            while (activity.getParent() != null) {
                activity = activity.getParent();
            }

            int resultCode = BRActivity.get(activity).mResultCode();
            Intent resultData = BRActivity.get(activity).mResultData();
            ActivityManagerCompat.finishActivity(token, resultCode, resultData);
            BRActivity.get(activity)._set_mFinished(true);
        });
    }

    @Override
    public void handleNewIntent(final IBinder token, final Intent intent) {
        mH.post(() -> {
            Intent newIntent;
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP_MR1) {
                String referrer = VirtualPathSpoof.guestVisibleAttributionPackage();
                newIntent = BRReferrerIntent.get()._new(intent, referrer);
            } else {
                newIntent = intent;
            }
            Object mainThread = AnubisCore.mainThread();
            if (BRActivityThread.get(AnubisCore.mainThread())._check_performNewIntents(null, null) != null) {
                BRActivityThread.get(mainThread).performNewIntents(token,Collections.singletonList(newIntent));
            } else if (BRActivityThreadNMR1.get(mainThread)._check_performNewIntents(null, null, false) != null) {
                BRActivityThreadNMR1.get(mainThread).performNewIntents(token,Collections.singletonList(newIntent),true);
            } else if (BRActivityThreadQ.get(mainThread)._check_handleNewIntent(null, null) != null) {
                BRActivityThreadQ.get(mainThread).handleNewIntent(token, Collections.singletonList(newIntent));
            }
        });
    }

    @Override
    public void scheduleReceiver(ReceiverData data) throws RemoteException {
        if (!isInit()) {
            bindApplication();
        }
        mH.post(() -> {
            BroadcastReceiver mReceiver = null;
            Intent intent = data.intent;
            ActivityInfo activityInfo = data.activityInfo;
            BroadcastReceiver.PendingResult pendingResult = data.data.build();

            try {
                Context baseContext = mInitialApplication.getBaseContext();
                ClassLoader classLoader = baseContext.getClassLoader();
                intent.setExtrasClassLoader(classLoader);

                mReceiver = (BroadcastReceiver) classLoader.loadClass(activityInfo.name).newInstance();
                BRBroadcastReceiver.get(mReceiver).setPendingResult(pendingResult);
                mReceiver.onReceive(baseContext, intent);
                BroadcastReceiver.PendingResult finish = BRBroadcastReceiver.get(mReceiver).getPendingResult();
                if (finish != null) {
                    finish.finish();
                }
                AnubisCore.getBActivityManager().finishBroadcast(data.data);
            } catch (Throwable throwable) {
                throwable.printStackTrace();
                Slog.e(TAG,"Error receiving broadcast " + intent + " in " + mReceiver);
            }
        });
    }

    public static Activity getActivityByToken(IBinder token) {
        Map<IBinder, Object> iBinderObjectMap = BRActivityThread.get(AnubisCore.mainThread()).mActivities();
        return BRActivityThreadActivityClientRecord.get(iBinderObjectMap.get(token)).activity();
    }

    private void onBeforeCreateApplication(String packageName, String processName, Context context) {
        for (AppLifecycleCallback appLifecycleCallback : AnubisCore.get().getAppLifecycleCallbacks()) {
            appLifecycleCallback.beforeCreateApplication(packageName, processName, context, BActivityThread.getUserId());
        }
    }

    private void onBeforeApplicationOnCreate(String packageName, String processName, Application application) {
        for (AppLifecycleCallback appLifecycleCallback : AnubisCore.get().getAppLifecycleCallbacks()) {
            appLifecycleCallback.beforeApplicationOnCreate(packageName, processName, application, BActivityThread.getUserId());
        }
    }

    private void onAfterApplicationOnCreate(String packageName, String processName, Application application) {
        for (AppLifecycleCallback appLifecycleCallback : AnubisCore.get().getAppLifecycleCallbacks()) {
            appLifecycleCallback.afterApplicationOnCreate(packageName, processName, application, BActivityThread.getUserId());
        }
    }

    public static class AppBindData {
        String processName;
        ApplicationInfo appInfo;
        List<ProviderInfo> providers;
        Object info;
    }
}
