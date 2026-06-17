package com.anubis.loader.utils;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.os.Build;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;

import java.security.MessageDigest;
import java.util.Arrays;

/**
 * During OAuth, return virtual-clone BGMI PackageInfo (incl. SigningInfo on API 28+)
 * when virtual GMS validates com.pubg.imobile / host package signatures.
 */
public final class GmsOAuthSignatureSpoof {
    public static final String BGMI_PKG = "com.pubg.imobile";

    private GmsOAuthSignatureSpoof() {
    }

    public static PackageInfo maybeSpoofSignatures(String queriedPkg, int flags, PackageInfo info) {
        if (queriedPkg == null || !isOAuthContext()) {
            return info;
        }

        String appPkg = BActivityThread.getAppPackageName();
        String hostPkg = BlackBoxCore.getHostPkg();
        boolean inGoogle = appPkg != null && GmsCore.isGoogleAppOrService(appPkg);
        boolean inBgmi = BGMI_PKG.equals(appPkg);
        boolean inHostOAuth = hostPkg.equals(appPkg);
        if (!inGoogle && !inBgmi && !inHostOAuth) {
            return info;
        }

        if (!queriedPkg.equals(BGMI_PKG) && !queriedPkg.equals(hostPkg)) {
            return info;
        }

        PackageInfo virtualBgmi = loadVirtualBgmiPackageInfo(flags);
        if (virtualBgmi == null) {
            Slog.w("GmsOAuthSpoof", "virtual " + BGMI_PKG + " PackageInfo unavailable");
            return info;
        }

        if (BGMI_PKG.equals(queriedPkg)) {
            Slog.d("GmsOAuthSpoof", "return virtual PackageInfo for " + BGMI_PKG + " proc=" + appPkg);
            return virtualBgmi;
        }

        if (hostPkg.equals(queriedPkg) && info != null) {
            mergeSigningData(virtualBgmi, info);
            Slog.d("GmsOAuthSpoof", "merged virtual BGMI signing into host PackageInfo proc=" + appPkg);
            return info;
        }

        return info;
    }

    private static boolean isOAuthContext() {
        return GmsCore.hasExternalOAuthPending()
                || GmsCore.isOAuthSignatureSpoofActive()
                || GmsOAuthLaunchContext.isActiveForGmsHooks();
    }

    private static PackageInfo loadVirtualBgmiPackageInfo(int flags) {
        try {
            int userId = BActivityThread.getUserId();
            int sigFlags = flags | PackageManager.GET_SIGNATURES;
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
                sigFlags |= PackageManager.GET_SIGNING_CERTIFICATES;
            }
            return BlackBoxCore.getBPackageManager().getPackageInfo(BGMI_PKG, sigFlags, userId);
        } catch (Throwable t) {
            Slog.w("GmsOAuthSpoof", "loadVirtualBgmiPackageInfo failed", t);
            return null;
        }
    }

    private static void mergeSigningData(PackageInfo from, PackageInfo to) {
        if (from == null || to == null) {
            return;
        }
        to.signatures = from.signatures;
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P && from.signingInfo != null) {
            to.signingInfo = from.signingInfo;
        }
    }

    /**
     * Virtual BGMI is not on the host PM — GMS calls hasSigningCertificate after getPackageInfo.
     */
    public static boolean matchesSigningCertificate(String packageName, byte[] certificate, int type) {
        if (!isOAuthContext() || packageName == null || certificate == null) {
            return false;
        }
        String hostPkg = BlackBoxCore.getHostPkg();
        if (!BGMI_PKG.equals(packageName) && !hostPkg.equals(packageName)) {
            return false;
        }
        String appPkg = BActivityThread.getAppPackageName();
        boolean inGoogle = appPkg != null && GmsCore.isGoogleAppOrService(appPkg);
        if (!inGoogle && !BGMI_PKG.equals(appPkg) && !hostPkg.equals(appPkg)) {
            return false;
        }
        PackageInfo virtualBgmi = loadVirtualBgmiPackageInfo(
                PackageManager.GET_SIGNING_CERTIFICATES | PackageManager.GET_SIGNATURES);
        if (virtualBgmi == null) {
            Slog.w("GmsOAuthSpoof", "hasSigningCertificate: virtual BGMI unavailable");
            return false;
        }
        boolean match = packageInfoMatchesCertificate(virtualBgmi, certificate, type);
        if (!match) {
            Slog.w("GmsOAuthSpoof", "hasSigningCertificate loose allow " + packageName
                    + " type=" + type + " proc=" + appPkg);
            match = true;
        } else {
            Slog.d("GmsOAuthSpoof", "hasSigningCertificate matched " + packageName
                    + " type=" + type + " proc=" + appPkg);
        }
        return match;
    }

    private static boolean packageInfoMatchesCertificate(PackageInfo pi, byte[] certificate, int type) {
        if (pi == null || certificate == null) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P && pi.signingInfo != null) {
            Signature[] signers = pi.signingInfo.hasMultipleSigners()
                    ? pi.signingInfo.getApkContentsSigners()
                    : pi.signingInfo.getSigningCertificateHistory();
            if (signers != null) {
                for (Signature signer : signers) {
                    if (signatureMatchesCertificate(signer, certificate, type)) {
                        return true;
                    }
                }
            }
        }
        if (pi.signatures != null) {
            for (Signature signer : pi.signatures) {
                if (signatureMatchesCertificate(signer, certificate, type)) {
                    return true;
                }
            }
        }
        return false;
    }

    private static boolean signatureMatchesCertificate(Signature signature, byte[] certificate, int type) {
        if (signature == null || certificate == null) {
            return false;
        }
        try {
            byte[] sigBytes = signature.toByteArray();
            if (type == 2) {
                MessageDigest md = MessageDigest.getInstance("SHA-256");
                return Arrays.equals(md.digest(sigBytes), certificate);
            }
            if (Arrays.equals(sigBytes, certificate)) {
                return true;
            }
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            return Arrays.equals(md.digest(sigBytes), certificate);
        } catch (Throwable ignored) {
            return false;
        }
    }
}
