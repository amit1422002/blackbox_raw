package com.ayan.box.adapter;

import android.content.Context;
import android.content.SharedPreferences;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.ayan.box.R;
import com.ayan.box.activity.MainActivity;

import java.util.List;
import com.anubis.loader.BlackBoxCore;
import android.graphics.drawable.Drawable;


public class AppAdapter extends RecyclerView.Adapter<AppAdapter.AppViewHolder> {

    public interface OnAppClickListener {
        void onAppClick(AppItem app);
        void onUninstallClick(AppItem app);
    }

    private Context context;
    private List<AppItem> appList;
    private OnAppClickListener listener;

    private String txtInstalled, txtNotInstalled, txtUninstall;

    public AppAdapter(Context context, List<AppItem> appList, OnAppClickListener listener) {
        this.context = context;
        this.appList = appList;
        this.listener = listener;

        // Load language from SharedPreferences
        SharedPreferences prefs = context.getSharedPreferences("AppPrefs", Context.MODE_PRIVATE);
        String lang = prefs.getString("lang", "en");
        if ("zh".equals(lang)) {
            txtInstalled = "已安装";
            txtNotInstalled = "未安装";
            txtUninstall = "卸载";
        } else {
            txtInstalled = "Installed";
            txtNotInstalled = "Not Installed";
            txtUninstall = "Uninstall";
        }
    }

    @NonNull
    @Override
    public AppViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.cjump, parent, false);
        return new AppViewHolder(view);
    }

    @Override
public void onBindViewHolder(@NonNull AppViewHolder holder, int position) {
    AppItem app = appList.get(position);

    holder.appIcon.setImageDrawable(app.getIcon());
    holder.appName.setText(app.getAppName());

    if (app.isInstalled()) {
        holder.appStatus.setText(txtInstalled);
        holder.uninstallText.setText(txtUninstall);
        holder.uninstallText.setVisibility(View.VISIBLE);
    } else {
        holder.appStatus.setText(txtNotInstalled);
        holder.uninstallText.setVisibility(View.GONE);
    }

    holder.itemView.setOnClickListener(v -> {
        if (listener != null) listener.onAppClick(app);
    });

    holder.uninstallText.setOnClickListener(v -> {
        if (listener != null) listener.onUninstallClick(app);
    });
}

    

    @Override
    public int getItemCount() {
        return appList.size();
    }

    static class AppViewHolder extends RecyclerView.ViewHolder {
        ImageView appIcon;
        TextView appName, appStatus, uninstallText;

        AppViewHolder(@NonNull View itemView) {
            super(itemView);
            appIcon = itemView.findViewById(R.id.appIcon);
            appName = itemView.findViewById(R.id.appName);
            appStatus = itemView.findViewById(R.id.appStatus);
            uninstallText = itemView.findViewById(R.id.uninstallText);
        }
    }

    // App model
    public static class AppItem {
    private String appName, packageName;
    private Drawable icon;
    private boolean installed;

    public AppItem(String appName, String packageName, Drawable icon, boolean installed) {
        this.appName = appName;
        this.packageName = packageName;
        this.icon = icon;
        this.installed = installed;
    }

    public String getAppName() { return appName; }
    public String getPackageName() { return packageName; }
    public Drawable getIcon() { return icon; }
    public boolean isInstalled() { return installed; }
    public void setInstalled(boolean installed) { this.installed = installed; }
}

}
