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
-keep class com.anubis.loader.** { *; }

# BlackManager resolves AIDL via Class.getName() + "$Stub" — must not rename
-keep class * implements android.os.IInterface { *; }
-keep class * extends android.os.Binder { *; }
-keepclassmembers class * {
    public static ** asInterface(android.os.IBinder);
}

# Host app UI + ViewModels (release R8)
-keep class com.anubis.** { *; }
-keep class cbfg.rvadapter.** { *; }
-keep class me.weishu.reflection.** { *; }

# Kotlin coroutines / LiveData
-keepclassmembers class kotlinx.coroutines.** { volatile <fields>; }
-keep class androidx.lifecycle.** { *; }

-keep class mirror.** { *; }
-keep class black.** { *; }

# BCore ships framework stubs in android.* — R8 must not strip them (clone/APK parse)
-keep class android.app.** { *; }
-keep class android.content.** { *; }
-keep class android.os.** { *; }
-keep class android.location.** { *; }

-keep class com.anubis.loader.utils.compat.** { *; }
-keep class com.anubis.loader.utils.Reflector { *; }
-keep class com.anubis.loader.utils.Reflector$* { *; }
-keep class com.anubis.loader.fake.frameworks.** { *; }
-keep class com.anubis.loader.core.system.** { *; }

-keepattributes *Annotation*,Signature,InnerClasses,EnclosingMethod
