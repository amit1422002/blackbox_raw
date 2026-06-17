package com.ayan.box.activity;

import android.Manifest;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Bundle;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.ayan.box.R;
import com.ayan.box.adapter.AppAdapter;

import java.util.ArrayList;
import java.util.List;

import com.anubis.loader.BlackBoxCore;

public class MainActivity extends AppCompatActivity {

    private RecyclerView appGrid;
    private AppAdapter adapter;
    private List<AppAdapter.AppItem> appList;

    private static final int REQUEST_STORAGE = 100;
    private static final int REQUEST_NOTIFICATION = 101;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        checkPermissions();
        showWelcomeDialog();


        appGrid = findViewById(R.id.appGrid);
        appGrid.setLayoutManager(new GridLayoutManager(this, 4)); // 🔥 4 per row (small icons)

        // 👉 Initialize list
        appList = new ArrayList<>();

        // 👉 Setup adapter
        adapter = new AppAdapter(this, appList, new AppAdapter.OnAppClickListener() {
            @Override
            public void onAppClick(AppAdapter.AppItem app) {
                if (app.isInstalled()) {
                    BlackBoxCore.get().launchApk(app.getPackageName(), 0);
                    Toast.makeText(MainActivity.this, "Launching 🚀 " + app.getAppName(), Toast.LENGTH_SHORT).show();
                } else {
                    BlackBoxCore.get().installPackageAsUser(app.getPackageName(), 0);
                    Toast.makeText(MainActivity.this, "Installed ✅ " + app.getAppName(), Toast.LENGTH_SHORT).show();
                }
                refreshList();
            }

            @Override
            public void onUninstallClick(AppAdapter.AppItem app) {
                BlackBoxCore.get().uninstallPackageAsUser(app.getPackageName(), 0);
                Toast.makeText(MainActivity.this, "Removed ❌ " + app.getAppName(), Toast.LENGTH_SHORT).show();
                refreshList();
            }
        });

        appGrid.setAdapter(adapter);

        // 👉 Load user apps dynamically
        loadUserApps();
    }

    private void loadUserApps() {
        PackageManager pm = getPackageManager();
        List<ApplicationInfo> installedApps = pm.getInstalledApplications(PackageManager.GET_META_DATA);

        appList.clear(); // reset list

        for (ApplicationInfo appInfo : installedApps) {
            // Only show user-installed apps (exclude system apps)
            if ((appInfo.flags & ApplicationInfo.FLAG_SYSTEM) == 0) {
                String name = appInfo.loadLabel(pm).toString();
                String packageName = appInfo.packageName;
                Drawable icon = appInfo.loadIcon(pm);
                boolean installed = BlackBoxCore.get().isInstalled(packageName, 0);

                appList.add(new AppAdapter.AppItem(name, packageName, icon, installed));
            }
        }

        adapter.notifyDataSetChanged();
    }

    private void refreshList() {
        for (AppAdapter.AppItem item : appList) {
            item.setInstalled(BlackBoxCore.get().isInstalled(item.getPackageName(), 0));
        }
        adapter.notifyDataSetChanged();
    }

    private void checkPermissions() {
        // Storage permission (READ/WRITE)
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.Q) {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.WRITE_EXTERNAL_STORAGE)
                    != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this,
                        new String[]{Manifest.permission.WRITE_EXTERNAL_STORAGE},
                        REQUEST_STORAGE);
            }
        }

        // Notification permission (Android 13+)
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.POST_NOTIFICATIONS)
                    != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this,
                        new String[]{Manifest.permission.POST_NOTIFICATIONS},
                        REQUEST_NOTIFICATION);
            }
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions, @NonNull int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);

        if (requestCode == REQUEST_STORAGE) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                Toast.makeText(this, "Storage permission granted ✅", Toast.LENGTH_SHORT).show();
            } else {
                Toast.makeText(this, "Storage permission denied ❌", Toast.LENGTH_SHORT).show();
            }
        }

        if (requestCode == REQUEST_NOTIFICATION) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                Toast.makeText(this, "Notification permission granted ✅", Toast.LENGTH_SHORT).show();
            } else {
                Toast.makeText(this, "Notification permission denied ❌", Toast.LENGTH_SHORT).show();
            }
        }
    }
    
    private void showWelcomeDialog() {
    androidx.appcompat.app.AlertDialog.Builder builder = new androidx.appcompat.app.AlertDialog.Builder(this, R.style.CustomDialog);

    builder.setTitle("Ayan Container")
            .setMessage("Made by @rayansyed77\n Obb Dir Is blackbox/android/obb")
            .setPositiveButton("OK", (dialog, which) -> dialog.dismiss())
            .setCancelable(false);

    builder.show();
}

}
