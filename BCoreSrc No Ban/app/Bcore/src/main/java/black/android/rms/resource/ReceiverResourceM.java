package black.android.rms.resource;


import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;

@BClassName("android.rms.resource.ReceiverResource")
public interface ReceiverResourceM {
    @BField
    String[] mWhiteList();
}
