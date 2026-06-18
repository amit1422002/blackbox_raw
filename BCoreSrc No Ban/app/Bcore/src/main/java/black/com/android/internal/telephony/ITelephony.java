package black.com.android.internal.telephony;

import android.os.IBinder;
import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticMethod;

@BClassName("com.android.internal.telephony.ITelephony")
public interface ITelephony {
    @BClassName("com.android.internal.telephony.ITelephony$Stub")
    interface Stub {
        @BStaticMethod
        IInterface asInterface(IBinder IBinder0);
    }
}
