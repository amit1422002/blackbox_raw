package black.android.os;

import android.os.IBinder;
import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticMethod;

/**
 * Created by Anubis on 2022/3/19.
 */
@BClassName("android.os.IVibratorManagerService")
public interface IVibratorManagerService {

    @BClassName("android.os.IVibratorManagerService$Stub")
    interface Stub {
        @BStaticMethod
        IInterface asInterface(IBinder IBinder0);
    }
}
