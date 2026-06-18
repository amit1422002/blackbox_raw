# JNI / native entry points
-keepclasseswithmembernames class * {
    native <methods>;
}
-keep @androidx.annotation.Keep class * { *; }
-keepclassmembers class * {
    @androidx.annotation.Keep *;
}

-keep class com.anubis.loader.core.NativeCore { *; }
-keep class com.anubis.jnihook.** { *; }

# Black-reflection stubs (required at runtime)
-keep class com.anubis.reflection.** { *; }
-keep @com.anubis.reflection.annotation.BClass class * {*;}
-keep @com.anubis.reflection.annotation.BClassName class * {*;}
-keep @com.anubis.reflection.annotation.BClassNameNotProcess class * {*;}
-keepclasseswithmembernames class * {
    @com.anubis.reflection.annotation.BField.* <methods>;
    @com.anubis.reflection.annotation.BFieldNotProcess.* <methods>;
    @com.anubis.reflection.annotation.BFieldSetNotProcess.* <methods>;
    @com.anubis.reflection.annotation.BFieldCheckNotProcess.* <methods>;
    @com.anubis.reflection.annotation.BMethod.* <methods>;
    @com.anubis.reflection.annotation.BStaticField.* <methods>;
    @com.anubis.reflection.annotation.BStaticMethod.* <methods>;
    @com.anubis.reflection.annotation.BMethodCheckNotProcess.* <methods>;
    @com.anubis.reflection.annotation.BConstructor.* <methods>;
    @com.anubis.reflection.annotation.BConstructorNotProcess.* <methods>;
}

# Parcelable / AIDL used across processes
-keep class com.anubis.loader.entity.** { *; }
-keep class com.anubis.loader.core.system.pm.BPackage { *; }
-keep class com.anubis.loader.core.system.pm.BPackageUserState { *; }
-keep class com.anubis.loader.entity.pm.InstallOption { *; }

# Proxy manifest components referenced by name
-keep class com.anubis.loader.proxy.** { *; }

# Allow obfuscation of remaining loader internals
-keep,allowobfuscation class com.anubis.loader.** { *; }

-keep class mirror.** { *; }
-keep class black.** { *; }

-keepattributes *Annotation*,Signature,InnerClasses,EnclosingMethod
