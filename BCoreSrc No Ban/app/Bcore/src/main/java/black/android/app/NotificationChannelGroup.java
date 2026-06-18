package black.android.app;

import java.util.List;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;

@BClassName("android.app.NotificationChannelGroup")
public interface NotificationChannelGroup {
    @BField
    List<android.app.NotificationChannel> mChannels();

    @BField
    String mId();
}
