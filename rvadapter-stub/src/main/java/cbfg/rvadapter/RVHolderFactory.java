package cbfg.rvadapter;
import android.view.*; 
public abstract class RVHolderFactory {
    public abstract RVHolder<?> createViewHolder(ViewGroup parent,int viewType,Object item);
    protected View inflate(int l,ViewGroup p){return LayoutInflater.from(p.getContext()).inflate(l,p,false);}
}
