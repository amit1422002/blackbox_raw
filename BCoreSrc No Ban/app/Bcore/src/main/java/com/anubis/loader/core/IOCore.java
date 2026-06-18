package com.anubis.loader.core;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Process;
import android.text.TextUtils;
import com.anubis.loader.AnubisCore;
import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.env.BEnvironment;
import com.anubis.loader.utils.FileUtils;
import com.anubis.loader.utils.TrieTree;
import java.io.File;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Objects;
import org.lsposed.lsparanoid.Obfuscate;

@Obfuscate

/** Created by Milk on 4/9/21. * ∧＿∧ (`･ω･∥ 丶　つ０ しーＪ 此处无Bug */
@SuppressLint("SdCardPath")
public class IOCore {
  public static final String TAG = "IOCore";

  private static final IOCore sIOCore = new IOCore();
  private static final TrieTree mTrieTree = new TrieTree();
  private static final TrieTree sBlackTree = new TrieTree();
  private final Map<String, String> mRedirectMap = new LinkedHashMap<>();

  private static final Map<String, Map<String, String>> sCachePackageRedirect = new HashMap<>();

  public static IOCore get() {
    return sIOCore;
  }

  // /data/data/com.google/  ----->  /data/data/com.virtual/data/com.google/
  public void addRedirect(String origPath, String redirectPath) {
    if (TextUtils.isEmpty(origPath)
        || TextUtils.isEmpty(redirectPath)
        || mRedirectMap.get(origPath) != null) return;
    // Add the key to TrieTree
    mTrieTree.add(origPath);
    mRedirectMap.put(origPath, redirectPath);
    File redirectFile = new File(redirectPath);
    if (!redirectFile.exists()) {
      FileUtils.mkdirs(redirectPath);
    }
    NativeCore.addIORule(origPath, redirectPath);
  }

  public String redirectPath(String path) {
    if (TextUtils.isEmpty(path)) return path;
    if (path.contains("/anubis/") || path.contains("/.vfs")) {
      return path;
    }

    // Search the key from TrieTree
    String key = mTrieTree.search(path);
    if (!TextUtils.isEmpty(key)) {
      path = path.replace(key, Objects.requireNonNull(mRedirectMap.get(key)));
    }
    return path;
  }

  public File redirectPath(File path) {
    if (path == null) return null;
    String pathStr = path.getAbsolutePath();
    String redirectPath = redirectPath(pathStr);
    if (pathStr.equals(redirectPath)){
      return path;
    }
    return new File(redirectPath);
  }

  public String redirectPath(String path, Map<String, String> rule) {
    if (TextUtils.isEmpty(path)) return path;

    // Search the key from TrieTree
    String key = mTrieTree.search(path);
    if (!TextUtils.isEmpty(key)) path = path.replace(key, Objects.requireNonNull(rule.get(key)));

    return path;
  }

  public File redirectPath(File path, Map<String, String> rule) {
    if (path == null) return null;
    String pathStr = path.getAbsolutePath();
    return new File(redirectPath(pathStr, rule));
  }

  // 由于正常情况Application已完成重定向，以下重定向是怕代码写死。
  public void enableRedirect(Context context) {
    Map<String, String> rule = new LinkedHashMap<>();
    String packageName = context.getPackageName();
    int userId = BActivityThread.getUserId();

    try {
      int systemUserId = AnubisCore.getHostUserId();
      String virtualData = BEnvironment.getDataDir(packageName, userId).getAbsolutePath();
      String virtualLib = BEnvironment.getAppLibDir(packageName).getAbsolutePath();
      String virtualDe = BEnvironment.getDeDataDir(packageName, userId).getAbsolutePath();

      addPackageDataRedirects(rule, packageName, systemUserId, virtualData, virtualDe, virtualLib);

      if (AnubisCore.getContext().getExternalCacheDir() != null
          && context.getExternalCacheDir() != null) {
        File external = BEnvironment.getExternalUserDir(BActivityThread.getUserId());
        // sdcard
        File sdcardAndroidFile = new File("/sdcard/Android");
        String androidDir = String.format("/storage/emulated/%d/Android", systemUserId);
        if (!sdcardAndroidFile.exists()) {
          sdcardAndroidFile = new File(androidDir);
        }
        if (sdcardAndroidFile.exists()) {
          File[] childDirs = sdcardAndroidFile.listFiles(pathname -> pathname.isDirectory());
          if (childDirs != null) {
            for (File childDir : childDirs) {
              rule.put(
                  "/sdcard/Android/" + childDir.getName(),
                  external.getAbsolutePath() + "/Android/" + childDir.getName());
              rule.put(
                  androidDir + "/" + childDir.getName(),
                  external.getAbsolutePath() + "/Android/" + childDir.getName());
            }
          } else {
            rule.put("/sdcard/Android", external.getAbsolutePath() + "/Android");
            rule.put(androidDir, external.getAbsolutePath() + "/Android");
          }
        } else {
          rule.put("/sdcard/Android", external.getAbsolutePath());
          rule.put(androidDir, external.getAbsolutePath());
        }
        // Loader copies used /localhost/Android/obb before user/0 alignment; forward reads.
        File legacyObbRoot = new File(BEnvironment.getExternalVirtualRoot(), "Android/obb");
        File userObbRoot = new File(external, "Android/obb");
        String legacyPath = legacyObbRoot.getAbsolutePath();
        String userPath = userObbRoot.getAbsolutePath();
        if (!legacyPath.equals(userPath)) {
          rule.put(legacyPath, userPath);
          rule.put(legacyPath + "/", userPath + "/");
        }
      }
      if (AnubisCore.get().isHideRoot()) {
        hideRoot(rule);
      }
      proc(rule);
    } catch (Exception e) {
      e.printStackTrace();
    }
    for (String key : rule.keySet()) {
      get().addRedirect(key, rule.get(key));
    }
    NativeCore.enableIO();
  }

  private static void addPackageDataRedirects(
      Map<String, String> rule,
      String packageName,
      int systemUserId,
      String dataDir,
      String deDataDir,
      String libDir) {
    rule.put(String.format("/data/data/%s/lib", packageName), libDir);
    rule.put(String.format("/data/user/%d/%s/lib", systemUserId, packageName), libDir);
    rule.put(String.format("/data/data/%s", packageName), dataDir);
    rule.put(String.format("/data/user/%d/%s", systemUserId, packageName), dataDir);
    rule.put(String.format("/data/user_de/%d/%s", systemUserId, packageName), deDataDir);
  }

  private void hideRoot(Map<String, String> rule) {
    rule.put("/system/app/Superuser.apk", "/system/app/Superuser.apk-fake");
    rule.put("/sbin/su", "/sbin/su-fake");
    rule.put("/system/bin/su", "/system/bin/su-fake");
    rule.put("/system/xbin/su", "/system/xbin/su-fake");
    rule.put("/data/local/xbin/su", "/data/local/xbin/su-fake");
    rule.put("/data/local/bin/su", "/data/local/bin/su-fake");
    rule.put("/system/sd/xbin/su", "/system/sd/xbin/su-fake");
    rule.put("/system/bin/failsafe/su", "/system/bin/failsafe/su-fake");
    rule.put("/data/local/su", "/data/local/su-fake");
    rule.put("/su/bin/su", "/su/bin/su-fake");
  }

  private void proc(Map<String, String> rule) {
    int appPid = BActivityThread.getAppPid();
    if (appPid < 0) {
      return;
    }
    int pid = Process.myPid();
    File procDir = BEnvironment.getProcDir(appPid);
    String procBase = procDir.getAbsolutePath() + "/";

    rule.put("/proc/" + pid + "/cmdline", procBase + "cmdline");
    rule.put("/proc/self/cmdline", procBase + "cmdline");
    rule.put("/proc/" + pid + "/comm", procBase + "comm");
    rule.put("/proc/self/comm", procBase + "comm");
    rule.put("/proc/" + pid + "/status", procBase + "status");
    rule.put("/proc/self/status", procBase + "status");
    rule.put("/proc/" + pid + "/maps", procBase + "maps");
    rule.put("/proc/self/maps", procBase + "maps");
  }
}
