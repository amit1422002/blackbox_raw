package com.anubis.loader.proxy;

import android.accounts.Account;
import android.app.Activity;
import android.content.Intent;
import android.graphics.Color;
import android.os.Build;
import android.os.Bundle;
import android.view.Gravity;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.TextView;

import androidx.annotation.Nullable;

import com.anubis.loader.utils.GmsOAuthAccountBridge;
import com.anubis.loader.utils.GmsOAuthHostFallback;
import com.anubis.loader.utils.PlayStoreSignInHelper;
import com.anubis.loader.utils.Slog;

/**
 * Full-screen account picker for virtual Play Store sign-in (stays above Play Store UI).
 */
public class PlayStoreAccountPickerActivity extends Activity {

    public static final String TAG = "PlayStorePicker";

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O_MR1) {
            setShowWhenLocked(true);
            setTurnScreenOn(true);
        }
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON
                | WindowManager.LayoutParams.FLAG_DIM_BEHIND);
        getWindow().setDimAmount(0.85f);
        mTargetPackage = getIntent().getStringExtra(PlayStoreSignInHelper.EXTRA_TARGET_PACKAGE);
        showAccountList();
    }

    private String mTargetPackage;

    @Override
    public void onBackPressed() {
        PlayStoreSignInHelper.deliverCancel(mTargetPackage);
        finish();
    }

    private void showAccountList() {
        GmsOAuthAccountBridge.refreshHostAccountCache();
        Account[] accounts = GmsOAuthHostFallback.loadHostAccounts();
        if (accounts == null || accounts.length == 0) {
            Slog.w(TAG, "no accounts to show");
            PlayStoreSignInHelper.deliverCancel(mTargetPackage);
            finish();
            return;
        }

        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setBackgroundColor(Color.parseColor("#FF121212"));
        root.setLayoutParams(new ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT,
                ViewGroup.LayoutParams.MATCH_PARENT));

        TextView header = new TextView(this);
        header.setText("Sign in to Play Store");
        header.setTextColor(Color.parseColor("#FFD4AF37"));
        header.setTextSize(20f);
        header.setPadding(32, 48, 32, 8);
        header.setGravity(Gravity.CENTER);
        root.addView(header);

        TextView sub = new TextView(this);
        sub.setText("Choose a Google account on this phone");
        sub.setTextColor(Color.parseColor("#FFCCCCCC"));
        sub.setTextSize(14f);
        sub.setPadding(32, 0, 32, 24);
        sub.setGravity(Gravity.CENTER);
        root.addView(sub);

        ListView list = new ListView(this);
        list.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, 0, 1f));
        list.setPadding(24, 0, 24, 32);
        list.setDividerHeight(1);
        list.setBackgroundColor(Color.parseColor("#FF1E1E1E"));

        String[] labels = new String[accounts.length];
        for (int i = 0; i < accounts.length; i++) {
            labels[i] = accounts[i].name;
        }

        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this,
                android.R.layout.simple_list_item_1, labels) {
            @Override
            public android.view.View getView(int position, android.view.View convertView,
                                             ViewGroup parent) {
                android.view.View view = super.getView(position, convertView, parent);
                TextView tv = (TextView) view.findViewById(android.R.id.text1);
                tv.setTextColor(Color.WHITE);
                tv.setTextSize(17f);
                tv.setPadding(40, 36, 40, 36);
                return view;
            }
        };
        list.setAdapter(adapter);

        final Account[] pickFrom = accounts;
        list.setOnItemClickListener((AdapterView<?> parent, android.view.View view,
                                     int position, long id) -> {
            String email = pickFrom[position].name;
            Slog.d(TAG, "picked " + email);
            PlayStoreSignInHelper.deliverAccountPick(email, mTargetPackage);
            finish();
        });

        root.addView(list);
        setContentView(root);
        Slog.d(TAG, "visible list: " + accounts.length + " accounts");
    }
}
