package black.android.content;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BConstructor;
import com.anubis.reflection.annotation.BField;
import com.anubis.reflection.annotation.BMethod;

/**
 * Created by Anubis on 2022/2/20.
 */
@BClassName("android.content.AttributionSource")
public interface AttributionSource {
    @BConstructor
    Object _new(int i,int i2,String str,String str2);

    @BConstructor
    Object _new(int i,String str,String str2);

    @BField
    Object mAttributionSourceState();

    @BMethod
    Object getNext();
}
