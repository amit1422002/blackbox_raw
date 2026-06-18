package black.android.os;

import android.os.Parcel;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;

@BClassName("android.os.BaseBundle")
public interface BaseBundle {
    @BField
    Parcel mParcelledData();
}
