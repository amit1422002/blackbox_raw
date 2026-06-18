package black.android.app;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticField;
import com.anubis.reflection.annotation.BStaticMethod;

@BClassName("android.app.ActivityTaskManager")
public interface ActivityTaskManager {

    @BStaticMethod
    Object getService();

    @BStaticField
    Object IActivityTaskManagerSingleton();
}
