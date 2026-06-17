package com.ayan.box;

import android.app.Application;
import android.content.Context;
import android.util.Log;

import com.anubis.loader.BlackBoxCore;
import com.anubis.loader.app.configuration.ClientConfiguration;
import com.anubis.loader.license.BcoreEmbedConfig;
import org.lsposed.lsparanoid.Obfuscate;

/**
 * Minimal host bootstrap — same lifecycle order as {@code com.pubgm.BoxApplication}: install hooks before
 * {@code super.attachBaseContext} so {@code :black} and {@link com.anubis.loader.core.system.SystemCallProvider} see
 * {@link BlackBoxCore#getContext()} ready.
 * <p>
 * Note: Replacing {@code public} with {@code private} on SDK types does not hide the engine from APK analysis or runtime
 * checks; bytecode still exposes package/type names unless R8 obfuscation + careful keep rules apply.
 */
@Obfuscate
public class BoxApplication extends Application {

    private static final String TAG = "ayan.BoxApplication";

    private static final Object LOCK = new Object();

    /** After {@link BlackBoxCore#doAttachBaseContext(Context, ClientConfiguration)} completed without fatal error. */
    private static volatile boolean sBlackBoxAttached;

    /** After {@link BlackBoxCore#doCreate()} completed. */
    private static volatile boolean sBlackBoxCreated;

    /** Retained — host code may probe the running {@link Application}. */
    static BoxApplication gApp;

    public static BoxApplication get() {
        return gApp;
    }

    private static ClientConfiguration buildConfig(Context base) {
        return new ClientConfiguration() {
            @Override
            public String getHostPackageName() {
                return base.getPackageName();
            }

            @Override
            public String getLicenseActivationKey() {
                return BcoreEmbedConfig.EMBEDDED_ACTIVATION_KEY == null
                        ? ""
                        : BcoreEmbedConfig.EMBEDDED_ACTIVATION_KEY.trim();
            }
        };
    }

    @Override
    protected void attachBaseContext(Context base) {
        synchronized (LOCK) {
            if (!sBlackBoxAttached) {
                try {
                    BlackBoxCore.get().doAttachBaseContext(base, buildConfig(base));
                    sBlackBoxAttached = true;
                } catch (IllegalStateException e) {
                    Log.e(TAG, "BCore license / gate failed during attachBaseContext", e);
                } catch (Exception e) {
                    Log.e(TAG, "doAttachBaseContext failed", e);
                }
            }
        }
        super.attachBaseContext(base);
        gApp = this;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        gApp = this;

        synchronized (LOCK) {
            if (sBlackBoxAttached && !sBlackBoxCreated) {
                try {
                    BlackBoxCore.get().doCreate();
                    sBlackBoxCreated = true;
                    Log.i(TAG, "BlackBox ready (attached + created)");
                } catch (Exception e) {
                    Log.e(TAG, "doCreate failed", e);
                }
            }
        }
    }
}
