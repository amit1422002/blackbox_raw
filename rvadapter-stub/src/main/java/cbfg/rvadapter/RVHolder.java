package cbfg.rvadapter;
import android.view.*; import androidx.annotation.NonNull; import androidx.recyclerview.widget.RecyclerView;
public abstract class RVHolder<T> extends RecyclerView.ViewHolder {
    public RVHolder(@NonNull View v){super(v);}
    public abstract void setContent(T item,boolean sel,Object payload);
    public <V extends View> V findViewById(int id){return itemView.findViewById(id);}
    protected View inflate(int l,ViewGroup p){return LayoutInflater.from(p.getContext()).inflate(l,p,false);}
}
