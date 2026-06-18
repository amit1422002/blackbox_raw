package black.android.app.servertransaction;


import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.app.servertransaction.ActivityLifecycleItem")
public interface ActivityLifecycleItem {
    @BMethod
    Integer getTargetState();
}
