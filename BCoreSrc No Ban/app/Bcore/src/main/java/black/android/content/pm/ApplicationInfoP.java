package black.android.content.pm;


import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.content.pm.ApplicationInfo")
public interface ApplicationInfoP {
    @BField
    String[] splitClassLoaderNames();

    @BMethod
    void setHiddenApiEnforcementPolicy(int int0);
}
