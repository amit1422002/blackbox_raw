package top.niunaijun.blackbox.utils.compat;


import android.app.Activity;
import android.app.ActivityManager;
import android.app.WallpaperManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.view.Window;
import android.view.WindowManager;

import black.android.app.BRActivity;
import black.com.android.internal.BRRstyleable;
import top.niunaijun.blackbox.BlackBoxCore;
import top.niunaijun.blackbox.app.BActivityThread;
import top.niunaijun.blackbox.utils.DrawableUtils;
import top.niunaijun.blackbox.utils.Slog;


public class ActivityCompat {

    public static void fix(Activity activity) {
        
        BRActivity.get(activity).mActivityInfo();

        if (Build.VERSION.SDK_INT >= 35) {
            fixActionBarBeforeContent(activity);
        }

        Context baseContext = activity.getBaseContext();
        try {
            TypedArray typedArray = activity.obtainStyledAttributes((BRRstyleable.get().Window()));
            if (typedArray != null) {
                boolean showWallpaper = typedArray.getBoolean(BRRstyleable.get().Window_windowShowWallpaper(),
                        false);
                if (showWallpaper) {
                    activity.getWindow().setBackgroundDrawable(WallpaperManager.getInstance(activity).getDrawable());
                }
                boolean fullscreen = typedArray.getBoolean(BRRstyleable.get().Window_windowFullscreen(), false);
                if (fullscreen) {
                    activity.getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
                }
                typedArray.recycle();
            }
        } catch (Throwable e) {
            e.printStackTrace();
        }

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
            Intent intent = activity.getIntent();
            ApplicationInfo applicationInfo = baseContext.getApplicationInfo();
            PackageManager pm = activity.getPackageManager();
            if (intent != null && activity.isTaskRoot()) {
                try {
                    String label = TaskDescriptionCompat.getTaskDescriptionLabel(
                            BlackBoxCore.getUserId(), applicationInfo.loadLabel(pm));

                    Bitmap icon = null;
                    Drawable drawable = getActivityIcon(activity);
                    if (drawable != null) {
                        ActivityManager am = (ActivityManager) baseContext.getSystemService(Context.ACTIVITY_SERVICE);
                        int iconSize = am.getLauncherLargeIconSize();
                        icon = DrawableUtils.drawableToBitmap(drawable, iconSize, iconSize);
                    }

                    activity.setTaskDescription(new ActivityManager.TaskDescription(label, icon));
                } catch (Throwable e) {
                    e.printStackTrace();
                }
            }
        }
    }

    /**
     * Android 15+ can NPE in WindowDecorActionBar when virtualized apps init the action bar.
     * Force a no-action-bar window after the app theme is applied.
     */
    public static void fixActionBarAfterTheme(Activity activity) {
        if (Build.VERSION.SDK_INT < 35) {
            return;
        }
        try {
            activity.getTheme().applyStyle(android.R.style.Theme_NoTitleBar_Fullscreen, true);
            Window window = activity.getWindow();
            if (window != null) {
                window.addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
            }
        } catch (Throwable e) {
            Slog.w("ActivityCompat", "fixActionBarAfterTheme failed: " + e.getMessage());
        }
    }

    private static void fixActionBarBeforeContent(Activity activity) {
        try {
            activity.requestWindowFeature(Window.FEATURE_NO_TITLE);
            Window window = activity.getWindow();
            if (window != null) {
                window.addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
            }
        } catch (Throwable e) {
            Slog.w("ActivityCompat", "fixActionBarBeforeContent failed: " + e.getMessage());
        }
    }

    private static Drawable getActivityIcon(Activity activity) {
        PackageManager pm = activity.getPackageManager();
        try {
            Drawable icon = pm.getActivityIcon(activity.getComponentName());
            if (icon != null)
                return icon;
        } catch (PackageManager.NameNotFoundException ignore) {
        }

        ApplicationInfo applicationInfo = activity.getApplicationInfo();
        return applicationInfo.loadIcon(pm);
    }
}