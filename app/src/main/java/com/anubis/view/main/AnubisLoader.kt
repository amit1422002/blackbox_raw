package com.anubis.view.main

import android.app.Application
import android.content.Context
import android.util.Log
import java.io.File
import com.anubis.BuildConfig
import com.anubis.loader.AnubisCore
import com.anubis.loader.app.BActivityThread
import com.anubis.loader.app.configuration.AppLifecycleCallback
import com.anubis.loader.app.configuration.ClientConfiguration
import com.anubis.app.App
import com.anubis.app.rocker.RockerManager
import com.anubis.biz.cache.AppSharedPreferenceDelegate
import com.anubis.loader.utils.StealthMode
import com.anubis.skin.GuestLoginLifecycleCallback


class AnubisLoader {

    private var mHideRoot by AppSharedPreferenceDelegate(App.getContext(), true)

    private var mDaemonEnable by AppSharedPreferenceDelegate(App.getContext(), false)
    private var mShowShortcutPermissionDialog by AppSharedPreferenceDelegate(App.getContext(), true)

    
    private var mUseVpnNetwork by AppSharedPreferenceDelegate(App.getContext(), false)

    private var mDisableFlagSecure by AppSharedPreferenceDelegate(App.getContext(), false)

    fun hideRoot(): Boolean {
        return try {
            mHideRoot
        } catch (e: Exception) {
            Log.e(TAG, "Error getting hideRoot: ${e.message}")
            false
        }
    }

    fun invalidHideRoot(hideRoot: Boolean) {
        try {
            this.mHideRoot = hideRoot
        } catch (e: Exception) {
            Log.e(TAG, "Error setting hideRoot: ${e.message}")
        }
    }

    fun disableFlagSecure(): Boolean {
        return try {
            mDisableFlagSecure
        } catch (e: Exception) {
            Log.e(TAG, "Error getting disableFlagSecure: ${e.message}")
            false
        }
    }

    fun invalidDisableFlagSecure(disable: Boolean) {
        try {
            this.mDisableFlagSecure = disable
        } catch (e: Exception) {
            Log.e(TAG, "Error setting disableFlagSecure: ${e.message}")
        }
    }

    fun daemonEnable(): Boolean {
        return try {
            mDaemonEnable
        } catch (e: Exception) {
            Log.e(TAG, "Error getting daemonEnable: ${e.message}")
            false
        }
    }

    fun invalidDaemonEnable(enable: Boolean) {
        try {
            this.mDaemonEnable = enable
        } catch (e: Exception) {
            Log.e(TAG, "Error setting daemonEnable: ${e.message}")
        }
    }

    fun showShortcutPermissionDialog(): Boolean {
        return try {
            mShowShortcutPermissionDialog
        } catch (e: Exception) {
            Log.e(TAG, "Error getting showShortcutPermissionDialog: ${e.message}")
            true
        }
    }

    fun invalidShortcutPermissionDialog(show: Boolean) {
        try {
            this.mShowShortcutPermissionDialog = show
        } catch (e: Exception) {
            Log.e(TAG, "Error setting showShortcutPermissionDialog: ${e.message}")
        }
    }

    fun useVpnNetwork(): Boolean {
        return try {
            mUseVpnNetwork
        } catch (e: Exception) {
            Log.e(TAG, "Error getting useVpnNetwork: ${e.message}")
            false
        }
    }

    fun invalidUseVpnNetwork(enable: Boolean) {
        try {
            this.mUseVpnNetwork = enable
        } catch (e: Exception) {
            Log.e(TAG, "Error setting useVpnNetwork: ${e.message}")
        }
    }

    fun getAnubisCore(): AnubisCore {
        return try {
            AnubisCore.get()
        } catch (e: Exception) {
            Log.e(TAG, "Error getting AnubisCore: ${e.message}")
            throw e
        }
    }

    fun addLifecycleCallback() {
        try {
            AnubisCore.get().addAppLifecycleCallback(GuestLoginLifecycleCallback())
            AnubisCore.get()
                    .addAppLifecycleCallback(
                            object : AppLifecycleCallback() {
                                override fun beforeCreateApplication(
                                        packageName: String?,
                                        processName: String?,
                                        context: Context?,
                                        userId: Int
                                ) {
                                    if (StealthMode.isActive()) return
                                    try {
                                        Log.d(
                                                TAG,
                                                "beforeCreateApplication: pkg $packageName, processName $processName,userID:${BActivityThread.getUserId()}"
                                        )
                                    } catch (e: Exception) {
                                        Log.e(TAG, "Error in beforeCreateApplication: ${e.message}")
                                    }
                                }

                                override fun beforeApplicationOnCreate(
                                        packageName: String?,
                                        processName: String?,
                                        application: Application?,
                                        userId: Int
                                ) {
                                    if (StealthMode.isActive()) return
                                    try {
                                        Log.d(
                                                TAG,
                                                "beforeApplicationOnCreate: pkg $packageName, processName $processName"
                                        )
                                    } catch (e: Exception) {
                                        Log.e(
                                                TAG,
                                                "Error in beforeApplicationOnCreate: ${e.message}"
                                        )
                                    }
                                }

                                override fun afterApplicationOnCreate(
                                        packageName: String?,
                                        processName: String?,
                                        application: Application?,
                                        userId: Int
                                ) {
                                    try {
                                        if (!StealthMode.isActive()) {
                                            Log.d(
                                                    TAG,
                                                    "afterApplicationOnCreate: pkg $packageName, processName $processName"
                                            )
                                        }
                                        RockerManager.init(application, userId)
                                    } catch (e: Exception) {
                                        if (!StealthMode.isActive()) {
                                            Log.e(
                                                    TAG,
                                                    "Error in afterApplicationOnCreate: ${e.message}"
                                            )
                                        }
                                    }
                                }
                            }
                    )
        } catch (e: Exception) {
            Log.e(TAG, "Error adding lifecycle callback: ${e.message}")
        }
    }

    fun attachBaseContext(context: Context) {
        try {
            val hostPkg = BuildConfig.APPLICATION_ID
            AnubisCore.get()
                    .doAttachBaseContext(
                            context,
                            object : ClientConfiguration() {
                                override fun getHostPackageName(): String {
                                    return hostPkg
                                }

                                override fun isHideRoot(): Boolean {
                                    return try {
                                        mHideRoot
                                    } catch (e: Exception) {
                                        Log.e(TAG, "Error checking hideRoot: ${e.message}")
                                        false
                                    }
                                }

                                override fun isEnableDaemonService(): Boolean {
                                    return try {
                                        mDaemonEnable
                                    } catch (e: Exception) {
                                        Log.e(TAG, "Error checking daemonEnable: ${e.message}")
                                        false
                                    }
                                }

                                override fun requestInstallPackage(
                                        file: File?,
                                        userId: Int
                                ): Boolean {
                                    return try {
                                        if (file == null) {
                                            Log.w(TAG, "requestInstallPackage: file is null")
                                            return false
                                        }
                                        val packageInfo =
                                                context.packageManager.getPackageArchiveInfo(
                                                        file.absolutePath,
                                                        0
                                                )
                                        false
                                    } catch (e: Exception) {
                                        Log.e(TAG, "Error in requestInstallPackage: ${e.message}")
                                        false
                                    }
                                }
                            }
                    )
        } catch (e: Exception) {
            Log.e(TAG, "Error in attachBaseContext: ${e.message}")
        }
    }

    fun doOnCreate(context: Context) {
        try {
            AnubisCore.get().doCreate()
        } catch (e: Exception) {
            Log.e(TAG, "Error in doOnCreate: ${e.message}")
        }
    }

    companion object {
        val TAG: String = AnubisLoader::class.java.simpleName
    }
}
