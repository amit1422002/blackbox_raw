package black.android.net.wifi;


import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticField;

@BClassName("android.net.wifi.WifiScanner")
public interface WifiScanner {
    @BStaticField
    String GET_AVAILABLE_CHANNELS_EXTRA();
}
