package top.niunaijun.blackbox.entity.pm;

import android.os.Parcel;
import android.os.Parcelable;

/**
 * Parcel compatibility for package settings saved under the legacy package name.
 */
public final class InstallOption extends com.anubis.loader.entity.pm.InstallOption {
    protected InstallOption(Parcel in) {
        super(in);
    }

    public static final Parcelable.Creator<InstallOption> CREATOR = new Parcelable.Creator<InstallOption>() {
        @Override
        public InstallOption createFromParcel(Parcel source) {
            return new InstallOption(source);
        }

        @Override
        public InstallOption[] newArray(int size) {
            return new InstallOption[size];
        }
    };
}
