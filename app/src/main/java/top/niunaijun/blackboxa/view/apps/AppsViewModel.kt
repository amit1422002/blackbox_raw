package top.niunaijun.blackboxa.view.apps

import androidx.lifecycle.MutableLiveData
import top.niunaijun.blackboxa.bean.AppInfo
import top.niunaijun.blackboxa.bean.ObbProgress
import top.niunaijun.blackboxa.data.AppsRepository
import top.niunaijun.blackboxa.skin.GuestAccountBackupHelper
import top.niunaijun.blackboxa.view.base.BaseViewModel
import android.util.Log


class AppsViewModel(private val repo: AppsRepository) : BaseViewModel() {

    val appsLiveData = MutableLiveData<List<AppInfo>>()

    val resultLiveData = MutableLiveData<String>()

    val launchLiveData = MutableLiveData<Boolean>()

    val obbProgressLiveData = MutableLiveData<ObbProgress?>()

    val obbPickerRequestLiveData = MutableLiveData<String?>()

    
    val updateSortLiveData = MutableLiveData<Boolean>()

    fun getInstalledApps(userId: Int) {
        launchOnUI {
            repo.getVmInstallList(userId, appsLiveData)
        }
    }
    
    
    fun getInstalledAppsWithRetry(userId: Int, maxRetries: Int = 3) {
        var retryCount = 0
        
        fun attemptLoad() {
            launchOnUI {
                repo.getVmInstallList(userId, appsLiveData)
                
                
                val currentApps = appsLiveData.value
                if ((currentApps == null || currentApps.isEmpty()) && retryCount < maxRetries) {
                    retryCount++
                    Log.d("AppsViewModel", "No apps loaded, retrying... (${retryCount}/${maxRetries})")
                    
                    
                    android.os.Handler(android.os.Looper.getMainLooper()).postDelayed({
                        attemptLoad()
                    }, 1000) 
                }
            }
        }
        
        attemptLoad()
    }

    fun install(source: String, userID: Int) {
        launchOnUI {
            repo.installApk(source, userID, resultLiveData, obbProgressLiveData, obbPickerRequestLiveData)
        }
    }

    fun unInstall(packageName: String, userID: Int) {
        launchOnUI {
            repo.unInstall(packageName, userID, resultLiveData)
        }
    }

    fun clearApkData(packageName: String,userID: Int){
        launchOnUI {
            repo.clearApkData(packageName,userID,resultLiveData)
        }
    }

    fun copyObb(packageName: String, treeUri: android.net.Uri, userID: Int) {
        launchOnUI {
            repo.copyObb(packageName, treeUri, userID, resultLiveData, obbProgressLiveData)
        }
    }

    fun logoutBgmiAccount(userID: Int) {
        launchOnUI {
            repo.logoutBgmiAccount(userID, resultLiveData)
        }
    }

    fun resetGuestAccount(userID: Int) {
        launchOnUI {
            repo.resetGuestAccount(userID, resultLiveData)
        }
    }

    fun restoreGuestAccount(userID: Int, backup: GuestAccountBackupHelper.GuestBackup) {
        launchOnUI {
            repo.restoreGuestAccount(userID, backup, resultLiveData)
        }
    }

    fun launchApk(packageName: String, userID: Int) {
        launchOnUI {
            repo.launchApk(packageName, userID, launchLiveData)
        }
    }

    fun updateApkOrder(userID: Int,dataList:List<AppInfo>){
        launchOnUI {
            repo.updateApkOrder(userID,dataList)
        }
    }
}