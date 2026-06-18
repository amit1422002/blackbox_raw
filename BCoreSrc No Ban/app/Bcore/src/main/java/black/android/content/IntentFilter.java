package black.android.content;

import java.util.List;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BField;

@BClassName("android.content.IntentFilter")
public interface IntentFilter {
    @BField
    List<String> mActions();

    @BField
    List<String> mCategories();
}
