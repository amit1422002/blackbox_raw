package black.android.content;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;

/**
 * Created by Anubis on 2022/2/20.
 */
@BClassName("android.content.AttributionSourceState")
public interface AttributionSourceState {
    @BField
    String packageName();

    @BField
    int pid();

    @BField
    int uid();
}
