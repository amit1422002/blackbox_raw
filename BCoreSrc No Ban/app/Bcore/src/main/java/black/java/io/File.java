package black.java.io;


import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticField;

@BClassName("java.io.File")
public interface File {
    @BStaticField
    Object fs();
}
