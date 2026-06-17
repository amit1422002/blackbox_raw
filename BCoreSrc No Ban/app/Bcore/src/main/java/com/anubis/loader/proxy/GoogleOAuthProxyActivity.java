package com.anubis.loader.proxy;



import android.accounts.Account;
import android.app.Activity;

import android.content.Intent;

import android.os.Bundle;

import android.os.IBinder;



import androidx.annotation.Nullable;



import black.android.app.BRActivity;

import black.android.app.BRActivityThread;



import com.anubis.loader.BlackBoxCore;

import com.anubis.loader.app.BActivityThread;

import com.anubis.loader.core.GmsCore;

import android.widget.Toast;

import com.anubis.loader.utils.GmsOAuthAccountBridge;

import com.anubis.loader.utils.GmsOAuthHostFallback;

import com.anubis.loader.utils.Slog;



import java.lang.reflect.Field;



/**

 * Routes BGMI Google Sign-In to host account picker + token bridge (skips broken virtual GMS OAuth).

 */

public class GoogleOAuthProxyActivity extends Activity {



    public static final String TAG = "GoogleOAuthProxy";

    private static final int PICKER_REQUEST_CODE = 2;
    private static final int GMS_REQUEST_CODE = 1;

    private Intent mGmsLaunch;
    private String mGuestPkg;



    private static final String STATE_PICKER_LAUNCHED = "picker_launched";

    private static volatile boolean sOAuthLaunchInFlight;



    private boolean mRelayRegistered;

    private boolean mPickerLaunched;

    private boolean mVirtualGmsTried;

    private boolean mHostGmsTried;

    private boolean mTokenBridgeTried;

    private String mLastSelectedAccount;

    private IBinder mSignInHubResultTo;

    private String mSignInHubResultWho;

    private int mSignInHubRequestCode;



    @Override

    protected void onCreate(@Nullable Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);



        if (savedInstanceState != null) {

            mPickerLaunched = savedInstanceState.getBoolean(STATE_PICKER_LAUNCHED, false);
            mGmsLaunch = savedInstanceState.getParcelable("gms_launch");
            mGuestPkg = savedInstanceState.getString("guest_pkg");

            if (mPickerLaunched) {

                return;

            }

        }

        if (sOAuthLaunchInFlight) {

            Slog.d(TAG, "skip duplicate OAuth proxy instance (finish ghost)");

            finish();

            return;

        }



        Intent incoming = getIntent();

        try {

            if (BActivityThread.getApplication() != null) {

                incoming.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());

            }

        } catch (Throwable ignored) {

        }

        Intent target = incoming.getParcelableExtra(GmsCore.EXTRA_GMS_TARGET);

        if (target == null) {

            Slog.e(TAG, "missing GMS target intent");

            sOAuthLaunchInFlight = false;

            setResult(RESULT_CANCELED);

            finish();

            return;

        }



        readOAuthRelayFromIntent(incoming);



        Intent launch = new Intent(target);
        mGmsLaunch = launch;

        String guestPkg = GmsCore.getOAuthGuestPackage(incoming);

        if (guestPkg == null) {

            guestPkg = BActivityThread.getAppPackageName();

        }
        mGuestPkg = guestPkg;



        GmsOAuthAccountBridge.refreshHostAccountCache();

        try {

            BlackBoxCore.getBActivityManager().beginOAuthSession(guestPkg);

        } catch (Throwable t) {

            Slog.w(TAG, "beginOAuthSession failed", t);

        }



        ensureRelayTargetsCaptured();
        GmsCore.clearExternalOAuthPending();

        mPickerLaunched = true;

        sOAuthLaunchInFlight = true;



        try {

            Intent picker = GmsCore.buildAccountPickerIntent(launch, guestPkg);

            Slog.d(TAG, "launch host account picker for " + guestPkg);

            startActivityForResult(picker, PICKER_REQUEST_CODE);

        } catch (Throwable t) {

            sOAuthLaunchInFlight = false;

            Slog.e(TAG, "account picker launch failed", t);

            GmsCore.clearExternalOAuthPending();

            setResult(RESULT_CANCELED);

            finish();

        }

    }



    @Override

    protected void onSaveInstanceState(Bundle outState) {

        super.onSaveInstanceState(outState);

        outState.putBoolean(STATE_PICKER_LAUNCHED, mPickerLaunched);
        outState.putParcelable("gms_launch", mGmsLaunch);
        outState.putString("guest_pkg", mGuestPkg);

    }



    @Override

    protected void onResume() {

        super.onResume();

        ensureRelayTargetsCaptured();

    }



    @Override

    public void onWindowFocusChanged(boolean hasFocus) {

        super.onWindowFocusChanged(hasFocus);

        if (mSignInHubResultTo == null) {

            ensureRelayTargetsCaptured();

        }

    }



    private void readOAuthRelayFromIntent(Intent incoming) {

        if (incoming == null) {

            return;

        }

        Bundle extras = incoming.getExtras();

        if (extras == null) {

            return;

        }

        if (mSignInHubResultTo == null) {

            IBinder resultTo = extras.getBinder(GmsCore.EXTRA_OAUTH_RESULT_TO);

            if (resultTo != null) {

                mSignInHubResultTo = resultTo;

            }

        }

        if (mSignInHubResultWho == null) {

            mSignInHubResultWho = extras.getString(GmsCore.EXTRA_OAUTH_RESULT_WHO);

        }

        if (mSignInHubRequestCode == 0 && extras.containsKey(GmsCore.EXTRA_OAUTH_REQUEST_CODE)) {

            mSignInHubRequestCode = extras.getInt(GmsCore.EXTRA_OAUTH_REQUEST_CODE, 0);

        }

    }



    private void ensureRelayTargetsCaptured() {
        if (mSignInHubResultTo == null) {
            mSignInHubResultTo = BRActivity.get(this).mResultTo();
        }
        if (mSignInHubResultWho == null) {
            mSignInHubResultWho = BRActivity.get(this).mResultWho();
        }
        if (mSignInHubRequestCode == 0) {
            mSignInHubRequestCode = readIntField("mRequestCode", 0);
        }
        readOAuthRelayFromIntent(getIntent());
        if (mSignInHubResultTo != null && mSignInHubRequestCode != 0) {
            Slog.d(TAG, "OAuth relay targets ready req=" + mSignInHubRequestCode);
        }
    }



    @Override

    protected void onActivityResult(int requestCode, int resultCode, Intent data) {

        super.onActivityResult(requestCode, resultCode, data);

        if (data != null) {

            try {

                if (BActivityThread.getApplication() != null) {

                    data.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());

                }

            } catch (Throwable ignored) {

            }

        }

        Slog.d(TAG, "activity result code=" + resultCode + " req=" + requestCode);

        if (requestCode == GmsOAuthHostFallback.REQ_AUTH_RECOVERY
                || requestCode == GmsOAuthHostFallback.REQ_AM_CONSENT
                || requestCode == GmsOAuthHostFallback.REQ_HOST_GMS) {
            GmsOAuthHostFallback.onAuthUiResult(this, requestCode, resultCode, data);
            return;
        }

        if (requestCode == PICKER_REQUEST_CODE) {
            GmsCore.clearExternalOAuthPending();
            if (resultCode == RESULT_OK && data != null) {
                String account = data.getStringExtra(GmsCore.EXTRA_SELECTED_ACCOUNT);
                if (account != null && !account.isEmpty()) {
                    ensureRelayTargetsCaptured();
                    fetchTokenAfterPicker(account);
                    return;
                }
            }
            sOAuthLaunchInFlight = false;
            finishWithResult(resultCode, data);
            return;
        }

        if (requestCode == GMS_REQUEST_CODE) {
            if (resultCode == RESULT_CANCELED && data != null) {
                logGmsSignInCancelStatus(data);
            }
            if (resultCode == RESULT_OK && data != null) {
                sOAuthLaunchInFlight = false;
                IBinder stubToken = BRActivity.get(this).mToken();
                if (GmsCore.tryRelayExternalOAuthResult(stubToken, requestCode, resultCode, data)) {
                    Slog.d(TAG, "relayed GMS sign-in OK via GmsCore");
                    GmsOAuthHostFallback.clearPending();
                    finish();
                    return;
                }
            }
            if (resultCode == RESULT_CANCELED && mLastSelectedAccount != null) {
                if (mVirtualGmsTried && !mTokenBridgeTried) {
                    Slog.d(TAG, "virtual GMS canceled — retry token bridge");
                    launchTokenBridge(mLastSelectedAccount);
                    return;
                }
                if (mTokenBridgeTried && !mHostGmsTried) {
                    Slog.d(TAG, "token bridge failed — retry host GMS SignIn");
                    launchHostGuestGmsSignIn(mLastSelectedAccount);
                    return;
                }
            }
            sOAuthLaunchInFlight = false;
            IBinder stubToken = BRActivity.get(this).mToken();
            if (GmsCore.tryRelayExternalOAuthResult(stubToken, requestCode, resultCode, data)) {
                Slog.d(TAG, "relayed GMS result via GmsCore");
                GmsOAuthHostFallback.clearPending();
                finish();
                return;
            }
            GmsOAuthHostFallback.clearPending();
            finishWithResult(resultCode, data);
        }
    }

    private void fetchTokenAfterPicker(String accountEmail) {
        if (mGmsLaunch == null) {
            Slog.e(TAG, "missing GMS launch after picker");
            finishWithResult(RESULT_CANCELED, null);
            return;
        }
        mLastSelectedAccount = accountEmail;
        mVirtualGmsTried = false;
        mHostGmsTried = false;
        mTokenBridgeTried = false;
        Slog.d(TAG, "auth after picker for " + accountEmail);
        // Virtual GMS + signature spoof; host GMS rejects com.pubg.imobile instantly.
        launchVirtualGmsSignIn(accountEmail);
    }

    /** Build SignInHub result via host GoogleAuthUtil — bypasses silent GMS SignInActivity cancel. */
    private void launchTokenBridge(String accountEmail) {
        if (mGmsLaunch == null) {
            finishWithResult(RESULT_CANCELED, null);
            return;
        }
        mTokenBridgeTried = true;
        Account account = new Account(accountEmail, GmsOAuthAccountBridge.GOOGLE_ACCOUNT_TYPE);
        String clientId = GmsCore.getCachedOAuthServerClientId();
        GmsOAuthAccountBridge.refreshHostAccountCache();
        GmsCore.setOAuthSelectedAccount(accountEmail);
        GmsOAuthAccountBridge.seedOAuthAccount(accountEmail, mGuestPkg);
        GmsCore.activateOAuthSession(mGuestPkg);
        ensureRelayTargetsCaptured();
        Slog.d(TAG, "token bridge after picker for " + accountEmail);
        GmsOAuthHostFallback.fetchSignInResultForAccount(
                this, mGmsLaunch, account, clientId,
                new GmsOAuthHostFallback.Callback() {
                    @Override
                    public void onSuccess(Intent result) {
                        Slog.d(TAG, "token bridge ok for " + accountEmail);
                        sOAuthLaunchInFlight = false;
                        finishWithResult(RESULT_OK, result);
                    }

                    @Override
                    public void onFailure(String reason) {
                        Slog.w(TAG, "token bridge failed: " + reason);
                        if (mVirtualGmsTried && !mHostGmsTried) {
                            launchHostGuestGmsSignIn(accountEmail);
                        } else {
                            sOAuthLaunchInFlight = false;
                            finishWithResult(RESULT_CANCELED, null);
                        }
                    }
                });
    }

    private void prepareSignInAfterPicker(Intent gms, String accountEmail) {
        try {
            if (BActivityThread.getApplication() != null) {
                gms.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
        } catch (Throwable ignored) {
        }
        GmsOAuthAccountBridge.refreshHostAccountCache();
        GmsCore.setOAuthSelectedAccount(accountEmail);
        GmsOAuthAccountBridge.seedOAuthAccount(accountEmail, mGuestPkg);
        GmsCore.activateOAuthSession(mGuestPkg);
        GmsCore.patchSignInConfigurationInteractive(gms, accountEmail);
        ensureRelayTargetsCaptured();
    }

    private void registerGmsRelayAndLaunch(Intent gms, String logLabel) {
        IBinder stubToken = BRActivity.get(this).mToken();
        GmsCore.registerExternalOAuthPending(
                stubToken, GMS_REQUEST_CODE, mSignInHubResultTo,
                mSignInHubResultWho, mSignInHubRequestCode);
        mRelayRegistered = true;
        Toast.makeText(this, "Signing in with Google…", Toast.LENGTH_SHORT).show();
        Slog.d(TAG, logLabel);
        startActivityForResult(gms, GMS_REQUEST_CODE);
    }

    /** Virtual GMS keeps com.pubg.imobile OAuth identity; host UID cannot use BGMI web client id. */
    private void launchVirtualGmsSignIn(String accountEmail) {
        if (mGmsLaunch == null) {
            finishWithResult(RESULT_CANCELED, null);
            return;
        }
        try {
            Intent gms = new Intent(mGmsLaunch);
            prepareSignInAfterPicker(gms, accountEmail);
            GmsCore.prepareVirtualGmsSignIn(gms, mGuestPkg);
            mVirtualGmsTried = true;
            registerGmsRelayAndLaunch(gms, "launch virtual GMS SignIn for " + accountEmail);
        } catch (Throwable t) {
            Slog.e(TAG, "virtual GMS launch failed", t);
            if (!mTokenBridgeTried) {
                launchTokenBridge(accountEmail);
                return;
            }
            if (!mHostGmsTried) {
                mHostGmsTried = true;
                launchHostGuestGmsSignIn(accountEmail);
                return;
            }
            sOAuthLaunchInFlight = false;
            finishWithResult(RESULT_CANCELED, null);
        }
    }

    /** Host real GMS UI — guest OAuth identity via PM hooks (not broken virtual GMS clone). */
    private void launchHostGuestGmsSignIn(String accountEmail) {
        if (mGmsLaunch == null) {
            finishWithResult(RESULT_CANCELED, null);
            return;
        }
        try {
            Intent gms = new Intent(mGmsLaunch);
            prepareSignInAfterPicker(gms, accountEmail);
            // Real phone GMS UI + com.pubg.imobile OAuth identity (not host package).
            GmsCore.prepareGuestExternalGmsSignIn(gms, mGuestPkg);
            mHostGmsTried = true;
            registerGmsRelayAndLaunch(gms, "launch host GMS SignIn for " + accountEmail);
        } catch (Throwable t) {
            Slog.e(TAG, "host GMS launch failed", t);
            if (!mTokenBridgeTried) {
                launchTokenBridge(accountEmail);
                return;
            }
            sOAuthLaunchInFlight = false;
            finishWithResult(RESULT_CANCELED, null);
        }
    }

    private void logGmsSignInCancelStatus(Intent data) {
        if (data == null) {
            Slog.w(TAG, "GMS cancel — null result intent");
            return;
        }
        try {
            if (BActivityThread.getApplication() != null) {
                data.setExtrasClassLoader(BActivityThread.getApplication().getClassLoader());
            }
            Bundle extras = data.getExtras();
            if (extras == null || extras.isEmpty()) {
                Slog.w(TAG, "GMS cancel — empty extras");
                return;
            }
            for (String key : extras.keySet()) {
                Object val = extras.get(key);
                Slog.w(TAG, "GMS cancel extra " + key + "="
                        + (val != null ? val.getClass().getSimpleName() + ":" + val : "null"));
            }
        } catch (Throwable t) {
            Slog.w(TAG, "logGmsSignInCancelStatus failed", t);
        }
    }

    private void finishWithResult(int resultCode, Intent data) {
        GmsCore.clearExternalOAuthPending();
        if (deliverResultToCaller(resultCode, data)) {
            Slog.d(TAG, "relayed via direct deliverResultToCaller");
        } else {
            Slog.w(TAG, "relay failed, setResult fallback");
            setResult(resultCode, data);
        }
        finish();
    }



    private boolean deliverResultToCaller(int resultCode, Intent data) {

        try {

            IBinder resultTo = mSignInHubResultTo;

            if (resultTo == null) {

                resultTo = BRActivity.get(this).mResultTo();

            }

            readOAuthRelayFromIntent(getIntent());

            if (resultTo == null) {

                Bundle extras = getIntent() != null ? getIntent().getExtras() : null;

                if (extras != null) {

                    resultTo = extras.getBinder(GmsCore.EXTRA_OAUTH_RESULT_TO);

                }

            }

            if (resultTo == null) {

                Slog.w(TAG, "no mResultTo on OAuth proxy");

                return false;

            }



            String resultWho = mSignInHubResultWho;

            if (resultWho == null) {

                resultWho = BRActivity.get(this).mResultWho();

            }



            int callerRequestCode = mSignInHubRequestCode;

            if (callerRequestCode == 0) {

                callerRequestCode = readIntField("mRequestCode", 0);

            }

            if (callerRequestCode == 0 && getIntent() != null) {

                callerRequestCode = getIntent().getIntExtra(GmsCore.EXTRA_OAUTH_REQUEST_CODE, 0);

            }



            BRActivityThread.get(BlackBoxCore.mainThread()).sendActivityResult(

                    resultTo, resultWho, callerRequestCode, resultCode, data);

            Slog.d(TAG, "delivered sign-in result req=" + callerRequestCode + " code=" + resultCode);

            return true;

        } catch (Throwable t) {

            Slog.e(TAG, "deliverResultToCaller failed", t);

            return false;

        }

    }



    private int readIntField(String name, int fallback) {

        try {

            Field field = Activity.class.getDeclaredField(name);

            field.setAccessible(true);

            Object value = field.get(this);

            if (value instanceof Integer) {

                return (Integer) value;

            }

        } catch (Throwable ignored) {

        }

        return fallback;

    }

}


