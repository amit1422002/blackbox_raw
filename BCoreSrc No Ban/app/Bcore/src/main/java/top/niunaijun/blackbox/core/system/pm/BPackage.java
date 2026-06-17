package top.niunaijun.blackbox.core.system.pm;

import android.os.Parcel;
import android.os.Parcelable;

/**
 * Parcel compatibility: package settings saved before the {@code com.anubis.loader} rename
 * still reference this class name in marshalled bytes.
 */
public final class BPackage extends com.anubis.loader.core.system.pm.BPackage {
    protected BPackage(Parcel in) {
        super(in);
    }

    public static final Parcelable.Creator<BPackage> CREATOR = new Parcelable.Creator<BPackage>() {
        @Override
        public BPackage createFromParcel(Parcel source) {
            return new BPackage(source);
        }

        @Override
        public BPackage[] newArray(int size) {
            return new BPackage[size];
        }
    };
}
