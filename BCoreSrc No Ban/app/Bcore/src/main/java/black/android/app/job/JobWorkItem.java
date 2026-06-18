package black.android.app.job;

import android.content.Intent;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BConstructor;
import com.anubis.reflection.annotation.BField;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.app.job.JobWorkItem")
public interface JobWorkItem {
    @BConstructor
    JobWorkItem _new(Intent Intent0);

    @BField
    int mDeliveryCount();

    @BField
    Object mGrants();

    @BField
    int mWorkId();

    @BMethod
    Intent getIntent();
}
