package com.ayan.box.activity;

import android.app.AlertDialog;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.view.WindowManager;
import android.widget.ProgressBar;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

import com.ayan.box.R;

import org.lsposed.lsparanoid.Obfuscate;

@Obfuscate
public class SplashActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private TextView progressText;
    private int progress = 0;
    private Handler handler = new Handler();
    private SharedPreferences prefs;

    private String txtChecking, txtVerified, txtLoading;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        hideSystemUI();
        setContentView(R.layout.activity_splash);

        progressBar = findViewById(R.id.progressBar);
        progressText = findViewById(R.id.progressText);
        prefs = getSharedPreferences("AppPrefs", MODE_PRIVATE);

        // Check if language selected
        String lang = prefs.getString("lang", null);
        if (lang == null) {
            showLanguageDialog();
        } else {
            setLanguageTexts(lang);
            startProgress(prefs.getBoolean("first_launch", true));
        }
    }

    private void showLanguageDialog() {
        new AlertDialog.Builder(this)
                .setTitle("Select Language")
                .setCancelable(false)
                .setItems(new CharSequence[]{"English", "中文"}, (dialog, which) -> {
                    String lang = (which == 1 ? "zh" : "en");
                    prefs.edit().putString("lang", lang).apply();
                    setLanguageTexts(lang);
                    startProgress(true);
                }).show();
    }

    private void setLanguageTexts(String lang) {
        if ("zh".equals(lang)) {
            txtChecking = "正在检查资源...";
            txtVerified = "验证完成 ✅";
            txtLoading  = "加载中...";
        } else {
            txtChecking = "Checking resources...";
            txtVerified = "Verified ✅";
            txtLoading  = "Finalizing setup...";
        }
    }

    private void startProgress(boolean isFirstLaunch) {
        progress = 0;
        final int totalTime = isFirstLaunch ? 5000 : 2000;
        final int interval = 100;
        final int steps = totalTime / interval;
        final int progressStep = 100 / steps;

        handler.postDelayed(new Runnable() {
            @Override
            public void run() {
                if (progress < 100) {
                    progress += progressStep;
                    progressBar.setProgress(progress);
                    updateProgressText(progress);
                    handler.postDelayed(this, interval);
                } else {
                    if (isFirstLaunch) {
                        prefs.edit().putBoolean("first_launch", false).apply();
                    }
                    // Launch main activity
                    startActivity(new Intent(SplashActivity.this, MainActivity.class));
                    finish();
                }
            }
        }, interval);
    }

    private void updateProgressText(int progress) {
        if (progress < 50) {
            progressText.setText(txtChecking);
        } else {
            progressText.setText(txtLoading);
        }
    }

    private void hideSystemUI() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            getWindow().getDecorView().getWindowInsetsController().hide(
                    android.view.WindowInsets.Type.statusBars() |
                            android.view.WindowInsets.Type.navigationBars());
        } else {
            getWindow().getDecorView().setSystemUiVisibility(
                    View.SYSTEM_UI_FLAG_FULLSCREEN |
                            View.SYSTEM_UI_FLAG_HIDE_NAVIGATION |
                            View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY);
            getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                    WindowManager.LayoutParams.FLAG_FULLSCREEN);
        }
    }
}
