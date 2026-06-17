package top.niunaijun.blackbox.fake.service;

import java.lang.reflect.Method;

import black.android.telephony.BRTelephonyManager;
import top.niunaijun.blackbox.fake.hook.ClassInvocationStub;
import top.niunaijun.blackbox.fake.hook.MethodHook;
import top.niunaijun.blackbox.fake.hook.ProxyMethod;
import top.niunaijun.blackbox.utils.MethodParameterUtils;
import top.niunaijun.blackbox.utils.VirtualDeviceIds;


public class IPhoneSubInfoProxy extends ClassInvocationStub {
    public static final String TAG = "IPhoneSubInfoProxy";

    public IPhoneSubInfoProxy() {
        if (BRTelephonyManager.get()._check_sServiceHandleCacheEnabled() != null) {
            BRTelephonyManager.get()._set_sServiceHandleCacheEnabled(true);
        }
        if (BRTelephonyManager.get()._check_getSubscriberInfoService() != null) {
            BRTelephonyManager.get().getSubscriberInfoService();
        }
    }

    @Override
    protected Object getWho() {
        return BRTelephonyManager.get().sIPhoneSubInfo();
    }

    @Override
    protected void inject(Object baseInvocation, Object proxyInvocation) {
        BRTelephonyManager.get()._set_sIPhoneSubInfo(proxyInvocation);
    }

    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        MethodParameterUtils.replaceFirstAppPkg(args);
        return super.invoke(proxy, method, args);
    }

    @Override
    public boolean isBadEnv() {
        return false;
    }

    @ProxyMethod("getDeviceId")
    public static class GetDeviceId extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getImei();
        }
    }

    @ProxyMethod("getDeviceIdForPhone")
    public static class GetDeviceIdForPhone extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getImei();
        }
    }

    @ProxyMethod("getDeviceIdForSubscriber")
    public static class GetDeviceIdForSubscriber extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getImei();
        }
    }

    @ProxyMethod("getImeiForSubscriber")
    public static class GetImeiForSubscriber extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getImei();
        }
    }

    @ProxyMethod("getMeidForSubscriber")
    public static class GetMeidForSubscriber extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getMeid();
        }
    }

    @ProxyMethod("getSubscriberId")
    public static class GetSubscriberId extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getImsi();
        }
    }

    @ProxyMethod("getSubscriberIdForSubscriber")
    public static class GetSubscriberIdForSubscriber extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getImsi();
        }
    }

    @ProxyMethod("getIccSerialNumber")
    public static class GetIccSerialNumber extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getSerial();
        }
    }

    @ProxyMethod("getIccSerialNumberForSubscriber")
    public static class GetIccSerialNumberForSubscriber extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            if (!VirtualDeviceIds.shouldSpoof()) {
                return method.invoke(who, args);
            }
            return VirtualDeviceIds.getSerial();
        }
    }

    @ProxyMethod("getLine1NumberForSubscriber")
    public static class getLine1NumberForSubscriber extends MethodHook {
        @Override
        protected Object hook(Object who, Method method, Object[] args) throws Throwable {
            return null;
        }
    }
}
