package black.android.app;

import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticField;
import com.anubis.reflection.annotation.BStaticMethod;

@BClassName("android.app.ActivityManager")
public interface ActivityManagerOreo {
    @BStaticField
    Object IActivityManagerSingleton();

    @BStaticMethod
    IInterface getService();
}
