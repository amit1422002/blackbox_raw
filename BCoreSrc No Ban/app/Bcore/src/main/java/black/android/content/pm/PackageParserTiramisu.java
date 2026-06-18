package black.android.content.pm;

import android.content.pm.PackageParser;

import java.io.File;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BConstructor;
import com.anubis.reflection.annotation.BMethod;

/**
 * @author gm
 * @function
 * @date :2024/4/24 21:19
 **/
@BClassName("android.content.pm.PackageParser")
public interface PackageParserTiramisu {

    @BConstructor
    android.content.pm.PackageParser _new();

    @BMethod
    PackageParser.Package parsePackage(File File0, int flags);

}
