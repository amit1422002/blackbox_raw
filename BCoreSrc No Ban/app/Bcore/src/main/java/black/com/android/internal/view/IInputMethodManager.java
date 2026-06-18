package black.com.android.internal.view;


import android.os.IBinder;
import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;
import com.anubis.reflection.annotation.BStaticField;
import com.anubis.reflection.annotation.BStaticMethod;

//这里可能有点问题
@BClassName("com.android.internal.view.IInputMethodManager")
public interface IInputMethodManager {
    @BClassName("com.android.internal.view.IInputMethodManager$Stub")
    interface Stub {
        @BStaticMethod
        IInterface asInterface(IBinder IBinder0);
    }
}
