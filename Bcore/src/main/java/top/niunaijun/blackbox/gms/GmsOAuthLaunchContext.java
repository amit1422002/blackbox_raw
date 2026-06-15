package top.niunaijun.blackbox.gms;

import top.niunaijun.blackbox.app.BActivityThread;

/**
 * Marks the current thread/process as running an OAuth flow so PM hooks can expose host GMS.
 */
public final class GmsOAuthLaunchContext {
    private static final ThreadLocal<Boolean> ACTIVE = new ThreadLocal<>();

    private GmsOAuthLaunchContext() {
    }

    public static void begin() {
        ACTIVE.set(Boolean.TRUE);
        String guestPkg = BActivityThread.getAppPackageName();
        if (guestPkg != null) {
            GmsOAuthSignatureSpoof.BGMI_PKG = guestPkg;
        }
    }

    public static void end() {
        ACTIVE.remove();
        GmsOAuthSignatureSpoof.BGMI_PKG = null;
    }

    public static boolean isActiveForGmsHooks() {
        return Boolean.TRUE.equals(ACTIVE.get());
    }
}
