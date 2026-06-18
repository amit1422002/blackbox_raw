package black.android.app.admin;

import android.os.IBinder;
import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticMethod;

@BClassName("android.app.admin.IDevicePolicyManager")
public interface IDevicePolicyManager {
    @BClassName("android.app.admin.IDevicePolicyManager$Stub")
    interface Stub {
        @BStaticMethod
        IInterface asInterface(IBinder IBinder0);
    }
}
