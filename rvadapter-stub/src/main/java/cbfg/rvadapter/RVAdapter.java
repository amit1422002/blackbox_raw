package cbfg.rvadapter;
import android.content.Context; import android.view.*; import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView; import java.util.*;
@SuppressWarnings({"unchecked","rawtypes"})
public class RVAdapter<T> extends RecyclerView.Adapter<RVHolder> {
    public interface ItemClickListener<T>{void onItemClick(View v,T i,int p);}
    public interface ItemLongClickListener<T>{boolean onItemLongClick(View v,T i,int p);}
    private final RVHolderFactory mF; private List<T> mI=new ArrayList<>();
    private ItemClickListener<T> mC; private ItemLongClickListener<T> mL;
    public RVAdapter(Context c,RVHolderFactory f){mF=f;}
    public RVAdapter<T> bind(RecyclerView r){r.setAdapter(this);return this;}
    public RVAdapter<T> setItemClickListener(ItemClickListener<T> l){mC=l;return this;}
    public RVAdapter<T> setItemLongClickListener(ItemLongClickListener<T> l){mL=l;return this;}
    public void setItems(List<T> i){mI=i!=null?new ArrayList<>(i):new ArrayList<>();notifyDataSetChanged();}
    public List<T> getItems(){return mI;}
    public void replaceAt(int p,T i){if(p>=0&&p<mI.size()){mI.set(p,i);notifyItemChanged(p);}}
    @NonNull @Override public RVHolder onCreateViewHolder(@NonNull ViewGroup p,int t){return mF.createViewHolder(p,t,mI.isEmpty()?new Object():mI.get(0));}
    @Override public void onBindViewHolder(@NonNull RVHolder h,int pos){
        if(pos<mI.size()){T it=mI.get(pos);h.setContent(it,false,null);
        if(mC!=null)h.itemView.setOnClickListener(v->{int p2=h.getAdapterPosition();if(p2!=RecyclerView.NO_ID&&p2<mI.size())mC.onItemClick(h.itemView,mI.get(p2),p2);});
        if(mL!=null)h.itemView.setOnLongClickListener(v->{int p2=h.getAdapterPosition();if(p2!=RecyclerView.NO_ID&&p2<mI.size())return mL.onItemLongClick(h.itemView,mI.get(p2),p2);return false;});}}
    @Override public int getItemCount(){return mI.size();}
}
