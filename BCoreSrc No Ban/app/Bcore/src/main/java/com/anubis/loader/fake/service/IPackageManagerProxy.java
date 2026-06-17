package com.anubis.loader.fake.service;

import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.os.Bundle;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.text.TextUtils;
import android.util.Log;

import java.lang.reflect.Method;
import java.lang.reflect.Parameter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import black.android.app.BRActivityThread;
import black.android.app.BRContextImpl;
import black.android.app.ContextImpl;
//import black.android.content.pm.BRPackageManager;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.system.pm.BPackageManagerService;
import com.anubis.loader.core.system.user.BUserHandle;
import com.anubis.loader.core.env.AppSystemEnv;
import com.anubis.loader.proxy.ProxyManifest;
//import com.anubis.loader.fake.FakeCore;
import com.anubis.loader.fake.hook.BinderInvocationStub;
import com.anubis.loader.fake.hook.MethodHook;
import com.anubis.loader.fake.hook.ProxyMethod;
import com.anubis.loader.fake.service.base.PkgMethodProxy;
import com.anubis.loader.fake.service.base.ValueMethodProxy;
import com.anubis.loader.fake.service.pm.VirtualPackageInstaller;
import com.anubis.loader.utils.GmsOAuthLaunchContext;
import com.anubis.loader.utils.GmsOAuthSignatureSpoof;
import com.anubis.loader.utils.MethodParameterUtils;
import com.anubis.loader.utils.Reflector;
import com.anubis.loader.utils.Slog;
import com.anubis.loader.utils.compat.BuildCompat;
import com.anubis.loader.utils.compat.ParceledListSliceCompat;
import org.lsposed.lsparanoid.Obfuscate;

/**
 * Created by Milk on 3/30/21.
 * * ∧＿∧
 * (`･ω･∥
 * 丶　つ０
 * しーＪ
 * 此处无Bug
 */
@Obfuscate
public class IPackageManagerProxy extends BinderInvocationStub {
    public static final String TAG = "PackageManagerStub";

    /**
     * Stub processes (:pN) must resolve host PackageInfo during ActivityThread.handleBindApplication.
     * Only hide the host loader from queries after the guest app is fully bound.
     */
    private static boolean shouldHideHostFromGuest() {
        if (!BActivityThread.isThreadInit()) {
            return false;
        }
        if (!BActivityThread.currentActivityThread().isInit()) {
            return false;
        }
        String appPkg = BActivityThread.getAppPackageName();
        return appPkg != null && !appPkg.equals(BlackBoxCore.getHostPkg());
    }

    public IPackageManagerProxy() {
        super(BRActivityThread.get().sPackageManager().asBinder());
    }

    @Override
    protected Object getWho() {
        return BRActivityThread.get().sPackageManager();
    }

     @Override
    protected void inject(Object baseInvocation, Object proxyInvocation) {
        BRActivityThread.get()._set_sPackageManager(proxyInvocation);
        replaceSystemService("package");
        Object systemContext = BRActivityThread.get(BlackBoxCore.mainThread()).getSystemContext();
        PackageManager mPackageManager = BRContextImpl.get(systemContext).mPackageManager();
        if (mPackageManager != null) {
            try {
                Reflector.on("android.app.ApplicationPackageManager").field("mPM").set(mPackageManager, proxyInvocation);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override
    public boolean isBadEnv() {
        return false;
    }

    @Override
    protected void onBindMethod() {
        super.onBindMethod();
        addMethodHook(new ValueMethodProxy("addOnPermissionsChangeListener", 0));
        addMethodHook(new ValueMethodProxy("removeOnPermissionsChangeListener", 0));
        addMethodHook(new PkgMethodProxy("shouldShowRequestPermissionRationale"));
        if (BuildCompat.isT()) {
            return;
        }
        addMethodHook(new PkgMethodProxy("clearPackagePreferredActivities"));
    }

    @ProxyMethod("resolveIntent")
    public static class ResolveIntent extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Intent intent = (Intent) args[0];
            String resolvedType = (String) args[1];
            int flags = MethodParameterUtils.toInt(args[2]);
            String guestPkg = BActivityThread.getAppPackageName();
            String targetPkg = GmsCore.getIntentPackage(intent);
            if (GmsCore.shouldUseHostGoogle(guestPkg)
                    && !GmsCore.isOAuthInternalGmsLaunch(intent)
                    && !GmsCore.isOAuthSessionActive()
                    && GmsCore.isGoogleIntent(intent)
                    && targetPkg != null
                    && GmsCore.isGoogleAppOrService(targetPkg)) {
                Object hostResolve = method.invoke(who, args);
                if (hostResolve != null) {
                    return hostResolve;
                }
            }
            ResolveInfo resolveInfo = BlackBoxCore.getBPackageManager().resolveIntent(intent, resolvedType, flags, BActivityThread.getUserId());
            if (resolveInfo != null) {
                return resolveInfo;
            }
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("resolveService")
    public static class ResolveService extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Intent intent = (Intent) args[0];
            String resolvedType = (String) args[1];
            int flags = MethodParameterUtils.toInt(args[2]);
            ResolveInfo resolveInfo = BlackBoxCore.getBPackageManager().resolveService(intent, flags, resolvedType, BActivityThread.getUserId());
            if (resolveInfo != null) {
                return resolveInfo;
            }
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("setComponentEnabledSetting")
    public static class SetComponentEnabledSetting extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return 0;
        }
    }

  @ProxyMethod("getPackageInfo")
    public static class GetPackageInfo extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String packageName = (String) args[0];
            // API 33+: getPackageInfo(String, long versionCode, int flags) — arg[1] is versionCode, not flags.
            if (args.length >= 3 && args[1] instanceof Long) {
                return method.invoke(who, args);
            }
            int flags;
            if (args.length >= 3 && args[1] instanceof Integer && args[2] instanceof Integer) {
                flags = (int) args[1];
                MethodParameterUtils.replaceLastUserId(args);
                return method.invoke(who, args);
            }
            flags = MethodParameterUtils.toPackageFlags(args[1]);

            PackageInfo result;
            if (packageName != null && packageName.equals(BlackBoxCore.getHostPkg())) {
                if (shouldHideHostFromGuest()) {
                    return null;
                }
                result = (PackageInfo) method.invoke(who, args);
            } else if (GmsCore.isGoogleAppOrService(packageName)) {
                result = getClonedGooglePackageInfo(packageName, flags);
                if (result == null) {
                    result = (PackageInfo) method.invoke(who, args);
                }
            } else {
                PackageInfo packageInfo = BlackBoxCore.getBPackageManager()
                        .getPackageInfo(packageName, flags, BActivityThread.getUserId());
                if (packageInfo != null) {
                    result = packageInfo;
                } else {
                    result = (PackageInfo) method.invoke(who, args);
                }
            }
            try {
                return GmsOAuthSignatureSpoof.maybeSpoofSignatures(packageName, flags, result);
            } catch (Throwable t) {
                Slog.w(TAG, "signature spoof failed for " + packageName, t);
                return result;
            }
        }
    }

    @ProxyMethod("getPackageUid")
    public static class GetPackageUid extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String packageName = args[0] instanceof String ? (String) args[0] : null;
            if (packageName != null && packageName.equals(GmsOAuthSignatureSpoof.BGMI_PKG)
                    && (GmsCore.isOAuthSignatureSpoofActive()
                    || GmsOAuthLaunchContext.isActiveForGmsHooks())) {
                int appId = BPackageManagerService.get().getAppId(packageName);
                if (appId > 0) {
                    int guestUid = BUserHandle.getUid(BActivityThread.getUserId(), appId);
                    Slog.d(TAG, "OAuth getPackageUid " + packageName + " -> guest uid " + guestUid);
                    return guestUid;
                }
            }
            MethodParameterUtils.replaceFirstAppPkg(args);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("hasSigningCertificate")
    public static class HasSigningCertificate extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String packageName = (String) args[0];
            byte[] certificate = (byte[]) args[1];
            int type = MethodParameterUtils.toInt(args[2]);
            if (packageName != null
                    && (GmsCore.isOAuthSignatureSpoofActive()
                    || GmsOAuthLaunchContext.isActiveForGmsHooks())) {
                Slog.d(TAG, "OAuth hasSigningCertificate query " + packageName + " type=" + type);
                boolean spoofed = GmsOAuthSignatureSpoof.matchesSigningCertificate(
                        packageName, certificate, type);
                if (spoofed) {
                    return true;
                }
            }
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getProviderInfo")
    public static class GetProviderInfo extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            ComponentName componentName = (ComponentName) args[0];
            if (ProxyManifest.isHostProxyComponent(componentName) && shouldHideHostFromGuest()
                    && !GmsCore.isOAuthHelperClass(componentName.getClassName())) {
                return null;
            }
            if (ProxyManifest.isHostProxyComponent(componentName)) {
                return method.invoke(who, args);
            }
            int flags = MethodParameterUtils.toInt(args[1]);
            ProviderInfo providerInfo = BlackBoxCore.getBPackageManager().getProviderInfo(componentName, flags, BActivityThread.getUserId());
            if (providerInfo != null)
                return providerInfo;
            if (AppSystemEnv.isOpenPackage(componentName)) {
                return method.invoke(who, args);
            }
            return null;
        }
    }

    @ProxyMethod("getReceiverInfo")
    public static class GetReceiverInfo extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            ComponentName componentName = (ComponentName) args[0];
            if (ProxyManifest.isHostProxyComponent(componentName) && shouldHideHostFromGuest()
                    && !GmsCore.isOAuthHelperClass(componentName.getClassName())) {
                return null;
            }
            if (ProxyManifest.isHostProxyComponent(componentName)) {
                return method.invoke(who, args);
            }
            int flags = MethodParameterUtils.toInt(args[1]);
            ActivityInfo receiverInfo = BlackBoxCore.getBPackageManager().getReceiverInfo(componentName, flags, BActivityThread.getUserId());
            if (receiverInfo != null)
                return receiverInfo;
            if (AppSystemEnv.isOpenPackage(componentName)) {
                return method.invoke(who, args);
            }
            return null;
        }
    }

    @ProxyMethod("getActivityInfo")
    public static class GetActivityInfo extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            ComponentName componentName = (ComponentName) args[0];
            if (ProxyManifest.isHostProxyComponent(componentName) && shouldHideHostFromGuest()
                    && !GmsCore.isOAuthHelperClass(componentName.getClassName())) {
                return null;
            }
            if (ProxyManifest.isHostProxyComponent(componentName)) {
                return method.invoke(who, args);
            }
            int flags = MethodParameterUtils.toInt(args[1]);
            ActivityInfo activityInfo = BlackBoxCore.getBPackageManager().getActivityInfo(componentName, flags, BActivityThread.getUserId());
            if (activityInfo != null)
                return activityInfo;
            if (AppSystemEnv.isOpenPackage(componentName)) {
                return method.invoke(who, args);
            }
            return null;
        }
    }

    @ProxyMethod("getServiceInfo")
    public static class GetServiceInfo extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            ComponentName componentName = (ComponentName) args[0];
            if (ProxyManifest.isHostProxyComponent(componentName) && shouldHideHostFromGuest()
                    && !GmsCore.isOAuthHelperClass(componentName.getClassName())) {
                return null;
            }
            if (ProxyManifest.isHostProxyComponent(componentName)) {
                return method.invoke(who, args);
            }
            int flags = MethodParameterUtils.toInt(args[1]);
            ServiceInfo serviceInfo = BlackBoxCore.getBPackageManager().getServiceInfo(componentName, flags, BActivityThread.getUserId());
            if (serviceInfo != null)
                return serviceInfo;
            if (AppSystemEnv.isOpenPackage(componentName)) {
                return method.invoke(who, args);
            }
            return null;
        }
    }

    @ProxyMethod("getInstalledApplications")
    public static class GetInstalledApplications extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            int flags = MethodParameterUtils.toInt(args[0]);
            List<ApplicationInfo> installedApplications =
                    new ArrayList<>(BlackBoxCore.getBPackageManager().getInstalledApplications(flags, BActivityThread.getUserId()));
            mergeHostGoogleApplications(installedApplications, flags);
            return ParceledListSliceCompat.create(installedApplications);
        }
    }

    @ProxyMethod("getInstalledPackages")
    public static class GetInstalledPackages extends MethodHook {

        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            int flags = MethodParameterUtils.toInt(args[0]);
            List<PackageInfo> installedPackages =
                    new ArrayList<>(BlackBoxCore.getBPackageManager().getInstalledPackages(flags, BActivityThread.getUserId()));
            mergeHostGooglePackages(installedPackages, flags);
            return ParceledListSliceCompat.create(installedPackages);
        }
    }

    private static final int GMS_VERSION_META = 12451000;

    private static void ensureHostGmsMetaData(ApplicationInfo info) {
        if (info == null) {
            return;
        }
        if (info.metaData == null) {
            info.metaData = new Bundle();
        }
        if (!info.metaData.containsKey("com.google.android.gms.version")) {
            info.metaData.putInt("com.google.android.gms.version", GMS_VERSION_META);
        }
    }

    @ProxyMethod("getApplicationInfo")
    public static class GetApplicationInfo extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String packageName = (String) args[0];
            int flags = MethodParameterUtils.toPackageFlags(args[1]);
            if (packageName != null && packageName.equals(BlackBoxCore.getHostPkg())) {
                if (shouldHideHostFromGuest()) {
                    return null;
                }
                ApplicationInfo info = (ApplicationInfo) method.invoke(who, args);
                ensureHostGmsMetaData(info);
                return info;
            }
            if (GmsCore.isGoogleAppOrService(packageName)) {
                ApplicationInfo cloned = getClonedGoogleApplicationInfo(packageName, flags);
                if (cloned != null) {
                    return cloned;
                }
                ApplicationInfo info = (ApplicationInfo) method.invoke(who, args);
                ensureHostGmsMetaData(info);
                return info;
            }
            ApplicationInfo applicationInfo = BlackBoxCore.getBPackageManager().getApplicationInfo(packageName, flags, BActivityThread.getUserId());
            if (applicationInfo != null) {
                applicationInfo.flags |= ApplicationInfo.FLAG_EXTERNAL_STORAGE;
                return applicationInfo;
            }
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getPackageInstaller")
    public static class GetPackageInstaller extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Object installer = method.invoke(who, args);
            if (!shouldVirtualizePackageInstaller()) {
                return installer;
            }
            return VirtualPackageInstaller.wrap(installer);
        }
    }

    @ProxyMethod("queryContentProviders")
    public static class QueryContentProviders extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            int flags = MethodParameterUtils.toInt(args[2]);
            List<ProviderInfo> providers = BlackBoxCore.getBPackageManager().
                    queryContentProviders(BActivityThread.getAppProcessName(), BActivityThread.getBUid(), flags, BActivityThread.getUserId());
            return ParceledListSliceCompat.create(providers);
        }
    }

    @ProxyMethod("queryIntentReceivers")
    public static class QueryBroadcastReceivers extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            Intent intent = MethodParameterUtils.getFirstParam(args, Intent.class);
            String type = MethodParameterUtils.getFirstParam(args, String.class);
            Integer flags = MethodParameterUtils.getFirstParam(args, Integer.class);
            List<ResolveInfo> resolves = BlackBoxCore.getBPackageManager().queryBroadcastReceivers(intent, flags, type, BActivityThread.getUserId());
            Slog.d(TAG, "queryIntentReceivers: " + resolves);

            // http://androidxref.com/7.0.0_r1/xref/frameworks/base/core/java/android/app/ApplicationPackageManager.java#872
            if (BuildCompat.isN()) {
                return ParceledListSliceCompat.create(resolves);
            }

            // http://androidxref.com/6.0.1_r10/xref/frameworks/base/core/java/android/app/ApplicationPackageManager.java#699
            return resolves;
        }
    }

    @ProxyMethod("resolveContentProvider")
    public static class ResolveContentProvider extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            String authority = (String) args[0];
            if (ProxyManifest.isProxy(authority) && shouldHideHostFromGuest()) {
                return null;
            }
            if (ProxyManifest.isProxy(authority)) {
                return method.invoke(who, args);
            }
            int flags = MethodParameterUtils.toInt(args[1]);
            ProviderInfo providerInfo = BlackBoxCore.getBPackageManager().resolveContentProvider(authority, flags, BActivityThread.getUserId());
            if (providerInfo == null) {
                return method.invoke(who, args);
            }
            return providerInfo;
        }
    }

    @ProxyMethod("canRequestPackageInstalls")
    public static class CanRequestPackageInstalls extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            MethodParameterUtils.replaceFirstAppPkg(args);
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getPackagesForUid")
    public static class GetPackagesForUid extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            int uid = (Integer) args[0];
            if (uid == BlackBoxCore.getHostUid()) {
                args[0] = BActivityThread.getBUid();
                uid = (int) args[0];
            }
            String[] packagesForUid = BlackBoxCore.getBPackageManager().getPackagesForUid(uid);
            Slog.d(TAG, args[0] + " , " + BActivityThread.getAppProcessName() + " GetPackagesForUid: " + Arrays.toString(packagesForUid));
            return packagesForUid;
        }
    }

    @ProxyMethod("getInstallerPackageName")
    public static class GetInstallerPackageName extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            // fake google play
            return "com.android.vending";
        }
    }

    @ProxyMethod("getSharedLibraries")
    public static class GetSharedLibraries extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return method.invoke(who, args);
        }
    }

    @ProxyMethod("getComponentEnabledSetting")
    public static class getComponentEnabledSetting extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            ComponentName componentName = (ComponentName) args[0];
            String packageName = componentName.getPackageName();
            
            ApplicationInfo applicationInfo = BlackBoxCore.getBPackageManager().getApplicationInfo(packageName,0, BActivityThread.getUserId());
            
            if(applicationInfo != null){
                return PackageManager.COMPONENT_ENABLED_STATE_DEFAULT;
            }
            if (AppSystemEnv.isOpenPackage(componentName)) {
                return method.invoke(who, args);
            }
            throw new IllegalArgumentException();
        }
    }

  /** Cloned GSF/GMS/Play Store must use virtual dataDir so Finsky can write prefs/SQLite. */
    private static boolean shouldUseClonedGooglePaths() {
        String caller = BActivityThread.getAppPackageName();
        if (caller == null) {
            return false;
        }
        return GmsCore.isGoogleAppOrService(caller)
                || GmsCore.SETTINGS_PKG.equals(caller);
    }

    private static boolean shouldVirtualizePackageInstaller() {
        if (!BActivityThread.isThreadInit()) {
            return false;
        }
        String caller = BActivityThread.getAppPackageName();
        return caller != null && !caller.equals(BlackBoxCore.getHostPkg());
    }

    private static ApplicationInfo getClonedGoogleApplicationInfo(String packageName, int flags) {
        if (!shouldUseClonedGooglePaths()) {
            return null;
        }
        int userId = BActivityThread.getUserId();
        if (!BlackBoxCore.get().isInstalled(packageName, userId)) {
            return null;
        }
        ApplicationInfo virtual = BlackBoxCore.getBPackageManager()
                .getApplicationInfo(packageName, flags, userId);
        if (virtual != null) {
            ensureHostGmsMetaData(virtual);
        }
        return virtual;
    }

    private static PackageInfo getClonedGooglePackageInfo(String packageName, int flags) {
        if (!shouldUseClonedGooglePaths()) {
            return null;
        }
        int userId = BActivityThread.getUserId();
        if (!BlackBoxCore.get().isInstalled(packageName, userId)) {
            return null;
        }
        PackageInfo virtual = BlackBoxCore.getBPackageManager()
                .getPackageInfo(packageName, flags, userId);
        if (virtual != null && virtual.applicationInfo != null) {
            ensureHostGmsMetaData(virtual.applicationInfo);
        }
        return virtual;
    }

    private static void mergeHostGooglePackages(List<PackageInfo> installedPackages, int flags) {
        if (!GmsCore.shouldUseHostGoogle(BActivityThread.getAppPackageName())) {
            return;
        }
        Set<String> present = new HashSet<>();
        for (PackageInfo info : installedPackages) {
            present.add(info.packageName);
        }
        PackageManager hostPm = BlackBoxCore.getContext().getPackageManager();
        for (String googlePkg : GmsCore.getAllGooglePackages()) {
            if (present.contains(googlePkg)) {
                continue;
            }
            try {
                installedPackages.add(hostPm.getPackageInfo(googlePkg, flags));
            } catch (PackageManager.NameNotFoundException ignored) {
            }
        }
    }

    private static void mergeHostGoogleApplications(List<ApplicationInfo> installedApplications, int flags) {
        if (!GmsCore.shouldUseHostGoogle(BActivityThread.getAppPackageName())) {
            return;
        }
        Set<String> present = new HashSet<>();
        for (ApplicationInfo info : installedApplications) {
            present.add(info.packageName);
        }
        PackageManager hostPm = BlackBoxCore.getContext().getPackageManager();
        for (String googlePkg : GmsCore.getAllGooglePackages()) {
            if (present.contains(googlePkg)) {
                continue;
            }
            try {
                installedApplications.add(hostPm.getApplicationInfo(googlePkg, flags));
            } catch (PackageManager.NameNotFoundException ignored) {
            }
        }
    }
}
