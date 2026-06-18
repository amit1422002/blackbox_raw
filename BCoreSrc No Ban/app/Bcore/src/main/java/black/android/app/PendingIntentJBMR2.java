package black.android.app;

import android.content.Intent;
import android.os.IBinder;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BConstructor;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.app.PendingIntent")
public interface PendingIntentJBMR2 {
    @BConstructor
    PendingIntentJBMR2 _new(IBinder IBinder0);

    @BMethod
    Intent getIntent();
}
