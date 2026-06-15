package top.niunaijun.blackbox.fake.service;

/**
 * Placeholder for virtualizing {@code IPackageInstaller}; currently returns the host installer.
 */
public final class VirtualPackageInstaller {
    private VirtualPackageInstaller() {
    }

    public static Object wrap(Object installer) {
        return installer;
    }
}
