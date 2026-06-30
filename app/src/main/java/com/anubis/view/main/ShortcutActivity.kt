package com.anubis.view.main

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.lifecycleScope
import kotlinx.coroutines.launch
import com.anubis.loader.AnubisCore
import com.anubis.skin.BgmiSkinLauncher
import com.anubis.skin.GameCompat
import com.anubis.skin.LibAnogsPatcher


class ShortcutActivity:AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val pkg = intent.getStringExtra("pkg")
        val userID = intent.getIntExtra("userId",0)

        lifecycleScope.launch {
            BgmiSkinLauncher.onBeforeLaunch(pkg ?: "", userID)
            AnubisCore.getContext()?.applicationContext?.let { ctx ->
                val gamePkg = pkg
                if (gamePkg != null && GameCompat.isDeltaForce(gamePkg)) {
                    LibAnogsPatcher.startOnGameLaunch(ctx, gamePkg)
                }
            }
            AnubisCore.get().launchApk(pkg,userID)
            finish()
        }
    }
}