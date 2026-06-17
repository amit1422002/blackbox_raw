package com.anubis.loader.proxy;

import android.accounts.Account;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.graphics.Color;
import android.os.Bundle;
import android.provider.Settings;
import android.view.Gravity;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.TextView;

import androidx.annotation.Nullable;

import com.anubis.loader.app.BActivityThread;
import com.anubis.loader.core.GmsCore;
import com.anubis.loader.utils.GmsOAuthAccountBridge;
import com.anubis.loader.utils.GmsOAuthHostFallback;
import com.anubis.loader.utils.Slog;

/**
 * Lists host Google accounts; returns selection to GoogleOAuthProxy for host GMS Sign-In.
 */
public class GoogleAccountPickerActivity extends Activity {

    public static final String TAG = "GoogleAccountPicker";
    private static final int REQ_ADD_ACCOUNT = 100;

    private Intent mGmsLaunch;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Intent incoming = getIntent();
        mGmsLaunch = incoming.getParcelableExtra(GmsCore.EXTRA_GMS_TARGET);
        if (mGmsLaunch == null) {
            Slog.e(TAG, "missing GMS launch intent");
            setResult(RESULT_CANCELED);
            finish();
            return;
        }
        try {
            if (BActivityThread.getApplication() != null) {
                mGmsLaunch.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }

        showAccountPicker();
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQ_ADD_ACCOUNT) {
            GmsOAuthAccountBridge.refreshHostAccountCache();
            showAccountPicker();
        }
    }

    private void showAccountPicker() {
        GmsOAuthAccountBridge.refreshHostAccountCache();
        Account[] accounts = GmsOAuthHostFallback.loadHostAccounts();
        if (accounts == null || accounts.length == 0) {
            showNoAccountsDialog();
            return;
        }

        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setBackgroundColor(Color.parseColor("#FF1A1A1A"));
        root.setLayoutParams(new ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT,
                ViewGroup.LayoutParams.MATCH_PARENT));

        TextView header = new TextView(this);
        header.setText("Choose a Google account");
        header.setTextColor(Color.parseColor("#FFD4AF37"));
        header.setTextSize(18f);
        header.setPadding(32, 24, 32, 16);
        header.setGravity(Gravity.CENTER);
        root.addView(header);

        ListView list = new ListView(this);
        list.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, 0, 1f));
        list.setPadding(24, 0, 24, 0);

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
                tv.setTextSize(16f);
                tv.setPadding(32, 28, 32, 28);
                tv.setGravity(Gravity.CENTER_VERTICAL);
                return view;
            }
        };
        list.setAdapter(adapter);

        final Account[] hostAccounts = accounts;
        list.setOnItemClickListener((AdapterView<?> parent, android.view.View view,
                                     int position, long id) -> onAccountSelected(hostAccounts[position]));

        root.addView(list);

        TextView addAccount = new TextView(this);
        addAccount.setText("+ Add another Google account");
        addAccount.setTextColor(Color.parseColor("#FFD4AF37"));
        addAccount.setTextSize(16f);
        addAccount.setPadding(32, 24, 32, 32);
        addAccount.setGravity(Gravity.CENTER);
        addAccount.setOnClickListener(v -> launchAddGoogleAccount());
        root.addView(addAccount);

        setContentView(root);
        Slog.d(TAG, "showing " + accounts.length + " host accounts");
    }

    private void showNoAccountsDialog() {
        new AlertDialog.Builder(this)
                .setTitle("Google Sign-In")
                .setMessage("No Google accounts found on this device. Add a Google account to continue.")
                .setCancelable(true)
                .setOnCancelListener(d -> {
                    setResult(RESULT_CANCELED);
                    finish();
                })
                .setPositiveButton("Add account", (d, w) -> launchAddGoogleAccount())
                .setNegativeButton(android.R.string.cancel, (d, w) -> {
                    setResult(RESULT_CANCELED);
                    finish();
                })
                .show();
    }

    private void launchAddGoogleAccount() {
        Intent intent = new Intent(Settings.ACTION_ADD_ACCOUNT);
        intent.putExtra(Settings.EXTRA_ACCOUNT_TYPES,
                new String[]{GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE});
        try {
            startActivityForResult(intent, REQ_ADD_ACCOUNT);
        } catch (Throwable t) {
            Slog.e(TAG, "add account launch failed", t);
            showNoAccountsDialog();
        }
    }

    private void onAccountSelected(Account account) {
        Slog.d(TAG, "selected " + account.name);
        GmsCore.setOAuthSelectedAccount(account.name);
        com.anubis.loader.utils.OAuthHostAccountStore.ensureAccountListed(account.name);
        com.anubis.loader.utils.OAuthHostAccountStore.persistSelectedAccount(account.name);
        Intent result = new Intent();
        result.putExtra(GmsCore.EXTRA_SELECTED_ACCOUNT, account.name);
        setResult(RESULT_OK, result);
        finish();
    }
}
