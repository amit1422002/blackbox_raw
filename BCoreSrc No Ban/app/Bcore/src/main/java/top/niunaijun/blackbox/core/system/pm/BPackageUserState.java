package top.niunaijun.blackbox.core.system.pm;

import android.os.Parcel;
import android.os.Parcelable;

/**
 * Parcel compatibility for package settings saved under the legacy package name.
 */
public final class BPackageUserState extends com.anubis.loader.core.system.pm.BPackageUserState {
    protected BPackageUserState(Parcel in) {
        super(in);
    }

    public static final Parcelable.Creator<BPackageUserState> CREATOR = new Parcelable.Creator<BPackageUserState>() {
        @Override
        public BPackageUserState createFromParcel(Parcel source) {
            return new BPackageUserState(source);
        }

        @Override
        public BPackageUserState[] newArray(int size) {
            return new BPackageUserState[size];
        }
    };
}
