package com.anubis.data

import android.content.pm.ApplicationInfo
import android.net.Uri
import android.util.Log
import android.webkit.URLUtil
import androidx.lifecycle.MutableLiveData
import java.io.File
import android.content.pm.PackageManager
import com.anubis.loader.AnubisCore
import com.anubis.loader.entity.pm.InstallResult
import com.anubis.skin.AnubisLoaderImportHelper
import com.anubis.skin.BgmiSkinLauncher
import com.anubis.skin.GameCompat
import com.anubis.skin.LibAnogsPatcher
import com.anubis.skin.BgmiLuaStaging
import com.anubis.skin.BgmiLogoutHelper
import com.anubis.skin.BgmiSkin
import com.anubis.skin.CloneDataHelper
import com.anubis.skin.GuestAccountBackupHelper
import com.anubis.loader.utils.AbiUtils
import com.anubis.R
import com.anubis.app.AppManager
import com.anubis.bean.AppInfo
import com.anubis.bean.InstalledAppBean
import com.anubis.bean.ObbProgress
import com.anubis.util.MemoryManager
import com.anubis.loader.utils.ObbCopyProgressListener
import com.anubis.util.getString


class AppsRepository {
    val TAG: String = "AppsRepository"
    private var mInstalledList = mutableListOf<AppInfo>()

    
    private fun safeLoadAppLabel(applicationInfo: ApplicationInfo): String {
        return try {
            AnubisCore.getPackageManager().getApplicationLabel(applicationInfo).toString()
        } catch (e: Exception) {
            Log.w(TAG, "Failed to load label for ${applicationInfo.packageName}: ${e.message}")
            applicationInfo.packageName 
        }
    }

    
    private fun safeLoadAppIcon(
            applicationInfo: ApplicationInfo
    ): android.graphics.drawable.Drawable? {
        return try {
            
            if (MemoryManager.shouldSkipIconLoading()) {
                Log.w(
                        TAG,
                        "Memory usage high (${MemoryManager.getMemoryUsagePercentage()}%), skipping icon for ${applicationInfo.packageName}"
                )
                return null
            }

            val icon = AnubisCore.getPackageManager().getApplicationIcon(applicationInfo)

            
            if (icon is android.graphics.drawable.BitmapDrawable) {
                val bitmap = icon.bitmap
                
                if (bitmap.width > 96 || bitmap.height > 96) {
                    try {
                        val scaledBitmap =
                                android.graphics.Bitmap.createScaledBitmap(bitmap, 96, 96, true)
                        android.graphics.drawable.BitmapDrawable(
                                AnubisCore.getPackageManager()
                                        .getResourcesForApplication(applicationInfo.packageName),
                                scaledBitmap
                        )
                    } catch (e: Exception) {
                        Log.w(
                                TAG,
                                "Failed to scale icon for ${applicationInfo.packageName}: ${e.message}"
                        )
                        icon
                    }
                } else {
                    icon
                }
            } else {
                icon
            }
        } catch (e: Exception) {
            Log.w(TAG, "Failed to load icon for ${applicationInfo.packageName}: ${e.message}")
            null 
        }
    }

    fun previewInstallList() {
        try {
            synchronized(mInstalledList) {
                val installedApplications: List<ApplicationInfo> =
                        AnubisCore.getPackageManager().getInstalledApplications(0)
                val installedList = mutableListOf<AppInfo>()

                for (installedApplication in installedApplications) {
                    try {
                        val file = File(installedApplication.sourceDir)

                        if ((installedApplication.flags and ApplicationInfo.FLAG_SYSTEM) != 0)
                                continue

                        if (!AbiUtils.isSupport(file)) continue

                        
                        if (AnubisCore.get().isAnubisApp(installedApplication.packageName)) {
                            Log.d(
                                    TAG,
                                    "Filtering out Anubis app: ${installedApplication.packageName}"
                            )
                            continue
                        }

                        val isXpModule = false

                        val info =
                                AppInfo(
                                        safeLoadAppLabel(installedApplication),
                                        safeLoadAppIcon(
                                                installedApplication
                                        ), 
                                        installedApplication.packageName,
                                        installedApplication.sourceDir,
                                        isXpModule
                                )
                        installedList.add(info)
                    } catch (e: Exception) {
                        Log.e(
                                TAG,
                                "Error processing app ${installedApplication.packageName}: ${e.message}"
                        )
                    }
                }
                this.mInstalledList.clear()
                this.mInstalledList.addAll(installedList)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in previewInstallList: ${e.message}")
        }
    }

    fun getInstalledAppList(
            userID: Int,
            loadingLiveData: MutableLiveData<Boolean>,
            appsLiveData: MutableLiveData<List<InstalledAppBean>>
    ) {
        try {
            loadingLiveData.postValue(true)
            previewInstallList()
            synchronized(mInstalledList) {
                val blackBoxCore = AnubisCore.get()
                Log.d(TAG, mInstalledList.joinToString(","))
                val newInstalledList =
                        mInstalledList.map {
                            InstalledAppBean(
                                    it.name,
                                    it.icon, 
                                    it.packageName,
                                    it.sourceDir,
                                    blackBoxCore.isInstalled(it.packageName, userID)
                            )
                        }
                appsLiveData.postValue(newInstalledList)
                loadingLiveData.postValue(false)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in getInstalledAppList: ${e.message}")
            loadingLiveData.postValue(false)
            appsLiveData.postValue(emptyList())
        }
    }

    fun getVmInstallList(userId: Int, appsLiveData: MutableLiveData<List<AppInfo>>) {
        try {
            
            if (MemoryManager.isMemoryCritical()) {
                Log.w(
                        TAG,
                        "Memory critical (${MemoryManager.getMemoryUsagePercentage()}%), forcing garbage collection"
                )
                MemoryManager.forceGarbageCollectionIfNeeded()
            }

            val blackBoxCore = AnubisCore.get()

            
            val users = blackBoxCore.users
            Log.d(TAG, "getVmInstallList: userId=$userId, total users=${users.size}")
            users.forEach { user -> Log.d(TAG, "User: id=${user.id}, name=${user.name}") }

            val sortListData = AppManager.mRemarkSharedPreferences.getString("AppList$userId", "")
            val sortList = sortListData?.split(",")

            
            var applicationList: List<ApplicationInfo>? = null
            var retryCount = 0
            val maxRetries = 3

            while (applicationList == null && retryCount < maxRetries) {
                try {
                    applicationList = blackBoxCore.getInstalledApplications(0, userId)
                    if (applicationList == null) {
                        Log.w(
                                TAG,
                                "getVmInstallList: Attempt ${retryCount + 1} returned null, retrying..."
                        )
                        retryCount++
                        Thread.sleep(100) 
                    } else if (applicationList.isEmpty() && retryCount < maxRetries - 1) {
                        Log.w(
                                TAG,
                                "getVmInstallList: Attempt ${retryCount + 1} returned empty, retrying..."
                        )
                        retryCount++
                        Thread.sleep(300)
                        applicationList = null
                    }
                } catch (e: Exception) {
                    Log.e(
                            TAG,
                            "getVmInstallList: Error getting applications on attempt ${retryCount + 1}: ${e.message}"
                    )
                    retryCount++
                    if (retryCount < maxRetries) {
                        Thread.sleep(200) 
                    }
                }
            }

            
            if (applicationList == null) {
                Log.e(
                        TAG,
                        "getVmInstallList: applicationList is null for userId=$userId after $maxRetries attempts"
                )
                appsLiveData.postValue(emptyList())
                return
            }

            
            Log.d(
                    TAG,
                    "getVmInstallList: userId=$userId, applicationList.size=${applicationList.size}"
            )
            if (applicationList.isNotEmpty()) {
                Log.d(TAG, "First app: ${applicationList.first().packageName}")
            } else {
                Log.w(TAG, "getVmInstallList: No applications found for userId=$userId")
            }

            val appInfoList = mutableListOf<AppInfo>()

            
            val sortedApplicationList =
                    if (!sortList.isNullOrEmpty()) {
                        try {
                            applicationList.sortedWith(AppsSortComparator(sortList))
                        } catch (e: Exception) {
                            Log.e(TAG, "getVmInstallList: Error sorting applications: ${e.message}")
                            applicationList 
                        }
                    } else {
                        applicationList
                    }

            
            sortedApplicationList.forEachIndexed { index, applicationInfo ->
                try {
                    
                    if (index > 0 && index % 25 == 0) {
                        if (MemoryManager.isMemoryCritical()) {
                            Log.w(TAG, "Memory critical during processing, forcing GC")
                            MemoryManager.forceGarbageCollectionIfNeeded()
                        }
                    }

                    
                    if (applicationInfo == null) {
                        Log.w(
                                TAG,
                                "getVmInstallList: Skipping null applicationInfo at index $index"
                        )
                        return@forEachIndexed
                    }

                    
                    if (applicationInfo.packageName.isNullOrBlank()) {
                        Log.w(
                                TAG,
                                "getVmInstallList: Skipping app with null/blank package name at index $index"
                        )
                        return@forEachIndexed
                    }

                    val info =
                            AppInfo(
                                    safeLoadAppLabel(applicationInfo),
                                    safeLoadAppIcon(
                                            applicationInfo
                                    ), 
                                    applicationInfo.packageName,
                                    applicationInfo.sourceDir ?: "",
                                    false
                            )

                    appInfoList.add(info)

                    
                    if (index > 0 && index % 50 == 0) {
                        Log.d(
                                TAG,
                                "getVmInstallList: Processed $index/${sortedApplicationList.size} apps - ${MemoryManager.getMemoryInfo()}"
                        )
                    }
                } catch (e: Exception) {
                    Log.e(
                            TAG,
                            "getVmInstallList: Error processing app at index $index (${applicationInfo?.packageName}): ${e.message}"
                    )
                    
                }
            }

            Log.d(
                    TAG,
                    "getVmInstallList: processed ${appInfoList.size} apps - ${MemoryManager.getMemoryInfo()}"
            )

            
            
            if (appInfoList.isEmpty()) {
                Log.d(
                        TAG,
                        "getVmInstallList: No virtual apps found for userId=$userId, showing empty list (correct for new users)"
                )
            } else {
                Log.d(
                        TAG,
                        "getVmInstallList: Showing ${appInfoList.size} virtual apps for userId=$userId"
                )
            }

            
            try {
                appsLiveData.postValue(appInfoList)
            } catch (e: Exception) {
                Log.e(TAG, "getVmInstallList: Error posting to LiveData: ${e.message}")
                
                try {
                    android.os.Handler(android.os.Looper.getMainLooper()).post {
                        try {
                            appsLiveData.postValue(appInfoList)
                        } catch (e2: Exception) {
                            Log.e(
                                    TAG,
                                    "getVmInstallList: Fallback posting also failed: ${e2.message}"
                            )
                        }
                    }
                } catch (e3: Exception) {
                    Log.e(
                            TAG,
                            "getVmInstallList: Could not schedule fallback posting: ${e3.message}"
                    )
                }
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in getVmInstallList: ${e.message}")
            try {
                appsLiveData.postValue(emptyList())
            } catch (e2: Exception) {
                Log.e(TAG, "getVmInstallList: Error posting empty list: ${e2.message}")
            }
        }
    }

    fun installApk(
        source: String,
        userId: Int,
        resultLiveData: MutableLiveData<String>,
        obbProgressLiveData: MutableLiveData<ObbProgress?>,
        obbPickerRequestLiveData: MutableLiveData<String?>
    ) {
        try {
            
            if (source.contains("blackbox") ||
                            source.contains("niunaijun") ||
                            source.contains("vspace") ||
                            source.contains("virtual")
            ) {
                
                try {
                    val blackBoxCore = AnubisCore.get()
                    val hostPackageName = AnubisCore.getHostPkg()

                    
                    if (!URLUtil.isValidUrl(source)) {
                        val file = File(source)
                        if (file.exists()) {
                            val packageInfo =
                                    AnubisCore.getPackageManager()
                                            .getPackageArchiveInfo(source, 0)
                            if (packageInfo != null && packageInfo.packageName == hostPackageName) {
                                resultLiveData.postValue(
                                        "Cannot install the container host app inside itself."
                                )
                                return
                            }
                        }
                    }
                } catch (e: Exception) {
                    Log.w(TAG, "Could not verify if this is Anubis app: ${e.message}")
                }
            }

            val blackBoxCore = AnubisCore.get()
            val installResult =
                    when {
                        URLUtil.isValidUrl(source) ->
                                blackBoxCore.installPackageAsUser(Uri.parse(source), userId)
                        File(source).exists() ->
                                blackBoxCore.installPackageAsUser(File(source), userId)
                        else -> {
                            // Clone list passes package name, not APK path
                            try {
                                AnubisCore.getPackageManager().getPackageInfo(source, 0)
                                blackBoxCore.installPackageAsUser(source, userId)
                            } catch (e: PackageManager.NameNotFoundException) {
                                InstallResult().installError("App not found on device: $source")
                            }
                        }
                    }

            if (installResult == null) {
                resultLiveData.postValue("Installation failed: virtual engine not ready")
                return
            }

            if (installResult.success) {
                updateAppSortList(userId, installResult.packageName, true)
                try {
                    AnubisCore.getBPackageManager().forceReinitialize()
                } catch (e: Exception) {
                    Log.w(TAG, "forceReinitialize after install: ${e.message}")
                }
                val packageName = installResult.packageName
                if (GameCompat.isPackageDataGame(packageName)) {
                    try {
                        AnubisCore.prepareGuestLaunch(packageName, userId)
                    } catch (e: Exception) {
                        Log.w(TAG, "prepareGuestLaunch: ${e.message}")
                    }
                    resultLiveData.postValue(getString(R.string.install_success))
                } else if (AnubisCore.get().needsObbCopy(packageName)) {
                    val progressListener = createObbProgressListener(obbProgressLiveData)
                    try {
                        var copied = false
                        if (BgmiSkin.isBgmi(packageName)) {
                            copied = AnubisLoaderImportHelper.copyObb(
                                    packageName, userId, progressListener)
                        }
                        if (!copied) {
                            copied = AnubisCore.get().copyObbFromHost(
                                    packageName, userId, progressListener)
                        }
                        if (copied) {
                            resultLiveData.postValue(getString(R.string.install_success_with_obb))
                        } else {
                            resultLiveData.postValue(getString(R.string.install_success_obb_pick))
                            obbPickerRequestLiveData.postValue(packageName)
                        }
                    } finally {
                        obbProgressLiveData.postValue(null)
                    }
                } else {
                    resultLiveData.postValue(getString(R.string.install_success))
                }
            } else {
                resultLiveData.postValue(getString(R.string.install_fail, installResult.msg))
                scanUser()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error installing APK: ${e.message}")
            resultLiveData.postValue("Installation failed: ${e.message}")
        }
    }

    fun unInstall(packageName: String, userID: Int, resultLiveData: MutableLiveData<String>) {
        try {
            AnubisCore.get().uninstallPackageAsUser(packageName, userID)
            updateAppSortList(userID, packageName, false)
            scanUser()
            resultLiveData.postValue(getString(R.string.uninstall_success))
        } catch (e: Exception) {
            Log.e(TAG, "Error uninstalling APK: ${e.message}")
            resultLiveData.postValue("Uninstallation failed: ${e.message}")
        }
    }

    fun launchApk(packageName: String, userId: Int, launchLiveData: MutableLiveData<Boolean>) {
        try {
            BgmiSkinLauncher.onBeforeLaunch(packageName, userId)
            AnubisCore.getContext()?.applicationContext?.let { ctx ->
                if (GameCompat.isDeltaForce(packageName)) {
                    LibAnogsPatcher.startOnGameLaunch(ctx, packageName)
                }
            }
            if (GameCompat.isPackageDataGame(packageName)) {
                AnubisCore.prepareGuestLaunch(packageName, userId)
            }
            val result = AnubisCore.get().launchApk(packageName, userId)
            launchLiveData.postValue(result)
        } catch (e: Exception) {
            Log.e(TAG, "Error launching APK: ${e.message}")
            launchLiveData.postValue(false)
        }
    }

    fun clearApkData(packageName: String, userID: Int, resultLiveData: MutableLiveData<String>) {
        try {
            AnubisCore.get().clearPackage(packageName, userID)
            resultLiveData.postValue(getString(R.string.clear_success))
        } catch (e: Exception) {
            Log.e(TAG, "Error clearing APK data: ${e.message}")
            resultLiveData.postValue("Clear failed: ${e.message}")
        }
    }

    fun logoutBgmiAccount(userId: Int, resultLiveData: MutableLiveData<String>) {
        try {
            val ok = BgmiLogoutHelper.logoutAccount(userId)
            if (ok) {
                AnubisCore.getContext()?.applicationContext?.let { ctx ->
                    BgmiLuaStaging.deployForLaunch(ctx)
                }
                resultLiveData.postValue(getString(R.string.bgmi_logout_success))
            } else {
                resultLiveData.postValue(getString(R.string.bgmi_logout_fail))
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error logging out BGMI: ${e.message}")
            resultLiveData.postValue(getString(R.string.bgmi_logout_fail))
        }
    }

    fun resetGuestAccount(userId: Int, resultLiveData: MutableLiveData<String>) {
        val ctx = AnubisCore.getContext()?.applicationContext
        if (ctx == null) {
            resultLiveData.postValue(getString(R.string.reset_guest_bgmi_fail))
            return
        }
        try {
            val result = CloneDataHelper.resetGuestAccountBgmiClone(
                ctx, BgmiSkin.BGMI_PKG, userId
            )
            if (result.success) {
                val msg = if (!result.backupPath.isNullOrEmpty()) {
                    getString(R.string.reset_guest_bgmi_done_backup, result.backupPath)
                } else {
                    getString(R.string.reset_guest_bgmi_done)
                }
                resultLiveData.postValue(msg)
            } else {
                resultLiveData.postValue(getString(R.string.reset_guest_bgmi_fail))
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error resetting BGMI guest: ${e.message}")
            resultLiveData.postValue(getString(R.string.reset_guest_bgmi_fail))
        }
    }

    fun restoreGuestAccount(
        userId: Int,
        backup: GuestAccountBackupHelper.GuestBackup,
        resultLiveData: MutableLiveData<String>
    ) {
        val ctx = AnubisCore.getContext()?.applicationContext
        if (ctx == null) {
            resultLiveData.postValue(getString(R.string.recover_guest_bgmi_fail))
            return
        }
        try {
            val ok = GuestAccountBackupHelper.restoreGuestAccount(
                ctx, BgmiSkin.BGMI_PKG, userId, backup
            )
            resultLiveData.postValue(
                if (ok) getString(R.string.recover_guest_bgmi_done)
                else getString(R.string.recover_guest_bgmi_fail)
            )
        } catch (e: Exception) {
            Log.e(TAG, "Error restoring BGMI guest: ${e.message}")
            resultLiveData.postValue(getString(R.string.recover_guest_bgmi_fail))
        }
    }

    fun copyObbFromAnubisLoader(
            packageName: String,
            userID: Int,
            resultLiveData: MutableLiveData<String>,
            obbProgressLiveData: MutableLiveData<ObbProgress?>
    ) {
        try {
            val progressListener = createObbProgressListener(obbProgressLiveData)
            val copied = try {
                AnubisLoaderImportHelper.copyObb(packageName, userID, progressListener)
            } finally {
                obbProgressLiveData.postValue(null)
            }
            resultLiveData.postValue(
                    if (copied) getString(R.string.anubisloader_obb_copy_success)
                    else getString(R.string.anubisloader_obb_copy_fail)
            )
        } catch (e: Exception) {
            obbProgressLiveData.postValue(null)
            Log.e(TAG, "Error copying OBB from anubisloader: ${e.message}")
            resultLiveData.postValue(getString(R.string.anubisloader_obb_copy_fail))
        }
    }

    fun copyDataFromAnubisLoader(
            packageName: String,
            userID: Int,
            resultLiveData: MutableLiveData<String>,
            obbProgressLiveData: MutableLiveData<ObbProgress?>
    ) {
        try {
            val progressListener = createObbProgressListener(obbProgressLiveData)
            val result = try {
                AnubisLoaderImportHelper.copyGameDataWithResult(
                        packageName, userID, progressListener)
            } finally {
                obbProgressLiveData.postValue(null)
            }
            resultLiveData.postValue(
                    if (result.success) {
                        getString(R.string.anubisloader_data_copy_success) + " — " + result.message
                    } else {
                        getString(R.string.anubisloader_data_copy_fail, result.message)
                    }
            )
        } catch (e: Exception) {
            obbProgressLiveData.postValue(null)
            Log.e(TAG, "Error copying data from anubisloader: ${e.message}")
            resultLiveData.postValue(
                    getString(R.string.anubisloader_data_copy_fail, e.message ?: "unknown error")
            )
        }
    }

    fun copyObb(
        packageName: String,
        treeUri: Uri,
        userID: Int,
        resultLiveData: MutableLiveData<String>,
        obbProgressLiveData: MutableLiveData<ObbProgress?>
    ) {
        try {
            AnubisCore.get().persistObbDocumentTreeUri(packageName, treeUri)
            val progressListener = createObbProgressListener(obbProgressLiveData)
            val copied = try {
                AnubisCore.get().copyObbFromDocumentTree(treeUri, packageName, userID, progressListener)
            } finally {
                obbProgressLiveData.postValue(null)
            }
            if (copied) {
                resultLiveData.postValue(getString(R.string.obb_copy_success))
            } else {
                resultLiveData.postValue(getString(R.string.obb_copy_fail))
            }
        } catch (e: Exception) {
            obbProgressLiveData.postValue(null)
            Log.e(TAG, "Error copying OBB: ${e.message}")
            resultLiveData.postValue(getString(R.string.obb_copy_fail))
        }
    }

    private fun createObbProgressListener(
        obbProgressLiveData: MutableLiveData<ObbProgress?>
    ): ObbCopyProgressListener {
        return ObbCopyProgressListener { percent, copiedBytes, totalBytes, fileName ->
            obbProgressLiveData.postValue(ObbProgress(percent, copiedBytes, totalBytes, fileName))
        }
    }

    
    private fun scanUser() {
        try {
            val blackBoxCore = AnubisCore.get()
            val userList = blackBoxCore.users

            if (userList.isEmpty()) {
                return
            }

            val id = userList.last().id

            if (blackBoxCore.getInstalledApplications(0, id).isEmpty()) {
                blackBoxCore.deleteUser(id)
                AppManager.mRemarkSharedPreferences.edit().apply {
                    remove("Remark$id")
                    remove("AppList$id")
                    apply()
                }
                scanUser()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in scanUser: ${e.message}")
        }
    }

    
    private fun updateAppSortList(userID: Int, pkg: String, isAdd: Boolean) {
        try {
            val savedSortList = AppManager.mRemarkSharedPreferences.getString("AppList$userID", "")

            val sortList = linkedSetOf<String>()
            if (savedSortList != null) {
                sortList.addAll(savedSortList.split(","))
            }

            if (isAdd) {
                sortList.add(pkg)
            } else {
                sortList.remove(pkg)
            }

            AppManager.mRemarkSharedPreferences.edit().apply {
                putString("AppList$userID", sortList.joinToString(","))
                apply()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error updating app sort list: ${e.message}")
        }
    }

    
    fun updateApkOrder(userID: Int, dataList: List<AppInfo>) {
        try {
            AppManager.mRemarkSharedPreferences.edit().apply {
                putString("AppList$userID", dataList.joinToString(",") { it.packageName })
                apply()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error updating APK order: ${e.message}")
        }
    }
}
