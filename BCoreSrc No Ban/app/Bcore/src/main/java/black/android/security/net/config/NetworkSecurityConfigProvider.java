package black.android.security.net.config;

import android.content.Context;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BStaticMethod;

@BClassName("android.security.net.config.NetworkSecurityConfigProvider")
public interface NetworkSecurityConfigProvider {
    @BStaticMethod
    void install(Context Context0);
}
