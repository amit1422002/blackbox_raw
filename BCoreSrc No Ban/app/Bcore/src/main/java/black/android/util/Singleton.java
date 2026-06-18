package black.android.util;


import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.util.Singleton")
public interface Singleton {
    @BField
    Object mInstance();

    @BMethod
    Object get();
}
