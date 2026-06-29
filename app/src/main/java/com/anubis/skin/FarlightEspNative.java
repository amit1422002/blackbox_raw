package com.anubis.skin;

import android.util.Log;

import com.anubis.loader.core.NativeCore;

/**
 * JNI bridge to memfd-loaded Farlight ESP memory reader (Java draws overlay).
 */
public final class FarlightEspNative {

    private static final String TAG = FarlightEspDebug.TAG;
    private static volatile boolean sReaderStarted;
    private static volatile boolean sNativesBound;

    private FarlightEspNative() {
    }

    public static boolean isNativesBound() {
        return sNativesBound;
    }

    public static void onMemfdLoaded() {
        try {
            if (!sNativesBound) {
                FarlightEspDebug.dbg("registerFarlightEspNatives calling...");
                if (!NativeCore.registerFarlightEspNatives(FarlightEspNative.class)) {
                    FarlightEspDebug.setNativeStatus("jni_register_failed");
                    FarlightEspDebug.w("registerFarlightEspNatives failed");
                    return;
                }
                sNativesBound = true;
                FarlightEspDebug.setNativeStatus("jni_ok");
                FarlightEspDebug.i("FarlightEsp JNI bound via NativeCore");
            }
            if (!sReaderStarted) {
                nativeStartReader();
                sReaderStarted = true;
                FarlightEspDebug.setNativeStatus("reader_started");
                FarlightEspDebug.i("native reader started (memfd may have started earlier)");
            }
            float[] probe = NativeCore.pollFarlightEspFrames();
            int probeCount = probe != null && probe.length > 0 ? (int) probe[0] : 0;
            FarlightEspDebug.i("post-bind probe enemies=" + probeCount);
        } catch (Throwable t) {
            FarlightEspDebug.setNativeStatus("jni_error:" + t.getClass().getSimpleName());
            FarlightEspDebug.w("onMemfdLoaded failed", t);
        }
    }

    public static void setScreenSize(int width, int height) {
        if (!sNativesBound) {
            FarlightEspDebug.dbg("setScreenSize skipped — JNI not bound (" + width + "x" + height + ")");
            return;
        }
        try {
            int w = FarlightEspSettings.landscapeWidth(width, height);
            int h = FarlightEspSettings.landscapeHeight(width, height);
            nativeSetScreen(w, h);
            FarlightEspSettings.setNativeScreenSize(w, h);
            FarlightEspDebug.dbg("setScreenSize " + w + "x" + h);
        } catch (Throwable t) {
            FarlightEspDebug.w("setScreenSize failed", t);
        }
    }

    public static float[] pollFrames() {
        if (!sNativesBound) {
            FarlightEspDebug.onPoll(0, false);
            return new float[]{0f};
        }
        try {
            float[] data = NativeCore.pollFarlightEspFrames();
            int count = data != null && data.length > 0 ? (int) data[0] : 0;
            FarlightEspDebug.onPoll(count, true);
            return data != null ? data : new float[]{0f};
        } catch (Throwable t) {
            FarlightEspDebug.setNativeStatus("poll_error");
            FarlightEspDebug.w("pollFrames failed", t);
            return new float[]{0f};
        }
    }

    private static native void nativeStartReader();

    private static native void nativeSetScreen(int width, int height);

    private static native float[] nativePoll();
}
