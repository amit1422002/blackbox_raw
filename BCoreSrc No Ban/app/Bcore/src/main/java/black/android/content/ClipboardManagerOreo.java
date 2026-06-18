package black.android.content;

import android.os.IInterface;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;
import com.anubis.reflection.annotation.BStaticField;

@BClassName("android.content.ClipboardManager")
public interface ClipboardManagerOreo {
    @BStaticField
    IInterface sService();

    @BField
    IInterface mService();
}
