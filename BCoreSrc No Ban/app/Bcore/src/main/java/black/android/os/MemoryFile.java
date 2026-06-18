package black.android.os;

import java.io.FileDescriptor;

import com.anubis.reflection.annotation.BClassName;
import com.anubis.reflection.annotation.BMethod;

@BClassName("android.os.MemoryFile")
public interface MemoryFile {
    @BMethod
    FileDescriptor getFileDescriptor();
}
