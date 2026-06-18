package black.android.app;

import android.os.IBinder;
import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticMethod;

@BClassName("android.app.IWallpaperManager")
public interface IWallpaperManager {
    @BClassName("android.app.IWallpaperManager$Stub")
    interface Stub {
        @BStaticMethod
        IInterface asInterface(IBinder IBinder0);
    }
}
