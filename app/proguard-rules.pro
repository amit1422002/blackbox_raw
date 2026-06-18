# Add project specific ProGuard rules here.
# You can control the set of applied configuration files using the
# proguardFiles setting in build.gradle.
#
# For more details, see
#   http://developer.android.com/guide/developing/tools/proguard.html

# If your project uses WebView with JS, uncomment the following
# and specify the fully qualified class name to the JavaScript interface
# class:
#-keepclassmembers class fqcn.of.javascript.interface.for.webview {
#   public *;
#}

# Uncomment this to preserve the line number information for
# debugging stack traces.
#-keepattributes SourceFile,LineNumberTable

# If you keep the line number information, uncomment this to
# hide the original source file name.
#-renamesourcefileattribute SourceFile

-keep class com.anubis.loader.** {*; }
-keep class com.anubis.jnihook.** {*; }
-keep class mirror.** {*; }
-keep class android.** {*; }
-keep class com.android.** {*; }

-keep class com.anubis.reflection.** {*; }
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