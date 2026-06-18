package black.android.app;

import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;

@BClassName("android.app.AppOpsManager")
public interface AppOpsManager {
    @BField
    IInterface mService();
}
