package black.android.rms;

import java.util.Map;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;

@BClassName("android.rms.HwSysResImpl")
public interface HwSysResImplP {
    @BField
    Map<Integer, java.util.ArrayList<String>> mWhiteListMap();
}
