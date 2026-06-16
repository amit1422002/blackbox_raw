package top.niunaijun.blackboxa.view.main

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.lifecycleScope
import kotlinx.coroutines.launch
import top.niunaijun.blackbox.BlackBoxCore
import top.niunaijun.blackboxa.skin.BgmiSkinLauncher


class ShortcutActivity:AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val pkg = intent.getStringExtra("pkg")
        val userID = intent.getIntExtra("userId",0)

        lifecycleScope.launch {
            BgmiSkinLauncher.onBeforeLaunch(pkg ?: "", userID)
            BlackBoxCore.get().launchApk(pkg,userID)
            finish()
        }
    }
}