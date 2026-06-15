package top.niunaijun.blackbox.gms;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;

import java.security.MessageDigest;
import java.util.Arrays;

import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.app.BActivityThread;
import top.niunaijun.blackbox.utils.Slog;

/**
 * During OAuth, cloned apps may query their own signing certificate through GMS.
 * Mirror the host-installed package signatures when available.
 */
public final class GmsOAuthSignatureSpoof {
    private static final String TAG = "GmsOAuthSignatureSpoof";

    /** Guest package whose signing cert is being validated during OAuth. */
    public static volatile String BGMI_PKG;

    private GmsOAuthSignatureSpoof() {
    }

    public static PackageInfo maybeSpoofSignatures(String packageName, int flags, PackageInfo result) {
        if (result == null || packageName == null || !GmsOAuthLaunchContext.isActiveForGmsHooks()) {
            return result;
        }
        String target = spoofTargetPackage();
        if (target == null || !packageName.equals(target)) {
            return result;
        }
        try {
            PackageInfo host = BlackBoxCore.getContext().getPackageManager()
                    .getPackageInfo(packageName, flags | PackageManager.GET_SIGNATURES);
            if (host != null && host.signatures != null && host.signatures.length > 0) {
                result.signatures = host.signatures;
            }
        } catch (Throwable t) {
            Slog.w(TAG, "maybeSpoofSignatures failed for " + packageName, t);
        }
        return result;
    }

    public static boolean matchesSigningCertificate(String packageName, byte[] certificate, int type) {
        if (packageName == null || certificate == null || !GmsOAuthLaunchContext.isActiveForGmsHooks()) {
            return false;
        }
        String target = spoofTargetPackage();
        if (target == null || !packageName.equals(target)) {
            return false;
        }
        try {
            PackageInfo host = BlackBoxCore.getContext().getPackageManager()
                    .getPackageInfo(packageName, PackageManager.GET_SIGNATURES);
            if (host == null || host.signatures == null) {
                return false;
            }
            for (Signature signature : host.signatures) {
                byte[] encoded = signature.toByteArray();
                if (type == PackageManager.CERT_INPUT_SHA256) {
                    MessageDigest digest = MessageDigest.getInstance("SHA-256");
                    if (Arrays.equals(digest.digest(encoded), certificate)) {
                        return true;
                    }
                } else if (Arrays.equals(encoded, certificate)) {
                    return true;
                }
            }
        } catch (Throwable t) {
            Slog.w(TAG, "matchesSigningCertificate failed for " + packageName, t);
        }
        return false;
    }

    private static String spoofTargetPackage() {
        if (BGMI_PKG != null) {
            return BGMI_PKG;
        }
        return BActivityThread.getAppPackageName();
    }
}
