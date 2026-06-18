package black.android.graphics;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticMethod;

/**
 * Created by Anubis on 2022/2/24.
 */
@BClassName("android.graphics.Compatibility")
public interface Compatibility {
    @BStaticMethod
    void setTargetSdkVersion(int targetSdkVersion);
}
