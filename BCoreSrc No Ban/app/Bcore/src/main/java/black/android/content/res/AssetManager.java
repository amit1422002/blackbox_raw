package black.android.content.res;

import android.content.res.Configuration;
import android.util.DisplayMetrics;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BConstructor;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.content.res.AssetManager")
public interface AssetManager {
    @BConstructor
    android.content.res.AssetManager _new();

    @BMethod
    Integer addAssetPath(String String0);

    @BMethod
    Configuration getConfiguration();

    @BMethod
    DisplayMetrics getDisplayMetrics();
}
