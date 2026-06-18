package com.anubis.app

import android.content.Context
import android.content.SharedPreferences
import android.util.Log
import com.anubis.view.main.AnubisLoader


object AppManager {
    private const val TAG = "AppManager"

    @JvmStatic
    val mAnubisLoader by lazy {
        try {
            AnubisLoader()
        } catch (e: Exception) {
            Log.e(TAG, "Error creating AnubisLoader: ${e.message}")

            AnubisLoader() 
        }
    }

    @JvmStatic
    val mAnubisCore by lazy {
        try {
            mAnubisLoader.getAnubisCore()
        } catch (e: Exception) {
            Log.e(TAG, "Error getting AnubisCore: ${e.message}")
            throw e 
        }
    }

    @JvmStatic
    val mRemarkSharedPreferences: SharedPreferences by lazy {
        try {
            App.getContext().getSharedPreferences("UserRemark", Context.MODE_PRIVATE)
        } catch (e: Exception) {
            Log.e(TAG, "Error creating SharedPreferences: ${e.message}")
            throw e 
        }
    }

    fun doAttachBaseContext(context: Context) {
        try {
            mAnubisLoader.attachBaseContext(context)
            mAnubisLoader.addLifecycleCallback()
        } catch (e: Exception) {
            Log.e(TAG, "Error in doAttachBaseContext: ${e.message}")
            
        }
    }

    fun doOnCreate(context: Context) {
        try {
            mAnubisLoader.doOnCreate(context)
            initThirdService(context)
        } catch (e: Exception) {
            Log.e(TAG, "Error in doOnCreate: ${e.message}")
            
        }
    }

    private fun initThirdService(context: Context) {
        try {
            
            
        } catch (e: Exception) {
            Log.e(TAG, "Error in initThirdService: ${e.message}")
        }
    }
}
