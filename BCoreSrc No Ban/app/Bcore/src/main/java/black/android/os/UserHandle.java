package black.android.os;


import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticMethod;

@BClassName("android.os.UserHandle")
public interface UserHandle {
    @BStaticMethod
    Integer myUserId();
}
