package black.android.app;

import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.os.IBinder;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.app.Activity")
public interface Activity {
    @BField
    ActivityInfo mActivityInfo();

    @BField
    String mEmbeddedID();

    @BField
    boolean mFinished();

    @BField
    android.app.Activity mParent();

    @BField
    int mResultCode();

    @BField
    Intent mResultData();

    @BField
    IBinder mToken();

    @BField
    IBinder mResultTo();

    @BField
    String mResultWho();

    @BField
    int mRequestCode();

    @BMethod
    void onActivityResult(int int0, int int1, Intent Intent2);
}
