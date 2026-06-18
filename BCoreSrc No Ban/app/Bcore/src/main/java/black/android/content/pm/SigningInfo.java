package black.android.content.pm;

import android.content.pm.PackageParser.SigningDetails;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BConstructor;
import com.anubis.reflection.annotation.BField;

@BClassName("android.content.pm.SigningInfo")
public interface SigningInfo {
    @BConstructor
    android.content.pm.SigningInfo _new(SigningDetails SigningDetails0);

    @BField
    SigningDetails mSigningDetails();
}
