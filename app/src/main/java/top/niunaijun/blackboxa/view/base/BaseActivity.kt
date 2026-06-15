package top.niunaijun.blackboxa.view.base

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.app.AppCompatDelegate
import androidx.appcompat.widget.Toolbar


open class BaseActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        AppCompatDelegate.setDefaultNightMode(AppCompatDelegate.MODE_NIGHT_NO)
        super.onCreate(savedInstanceState)
    }

    protected fun initToolbar(toolbar: Toolbar,title:Int, showBack: Boolean = false, onBack: (() -> Unit)? = null) {
        setSupportActionBar(toolbar)
        toolbar.setTitle(title)
        if (showBack) {
            supportActionBar?.let {
                it.setDisplayHomeAsUpEnabled(true)
                toolbar.setNavigationOnClickListener {
                    if (onBack != null) {
                        onBack()
                    }
                    finish()
                }
            }
        }
    }

    protected fun currentUserID():Int{
        return intent.getIntExtra("userID", 0)
    }
}