package com.anubis.skin;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;
import java.util.Locale;

import com.anubis.R;

public final class RecoverGuestAdapter extends RecyclerView.Adapter<RecoverGuestAdapter.Holder> {

    public interface OnGuestPickedListener {
        void onGuestPicked(int position, GuestAccountBackupHelper.GuestBackup backup);
    }

    private final List<GuestAccountBackupHelper.GuestBackup> backups;
    private final OnGuestPickedListener listener;
    private int selectedPosition = RecyclerView.NO_POSITION;

    public RecoverGuestAdapter(List<GuestAccountBackupHelper.GuestBackup> backups,
                               OnGuestPickedListener listener) {
        this.backups = backups;
        this.listener = listener;
    }

    public GuestAccountBackupHelper.GuestBackup getSelectedBackup() {
        if (selectedPosition < 0 || selectedPosition >= backups.size()) {
            return null;
        }
        return backups.get(selectedPosition);
    }

    @NonNull
    @Override
    public Holder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(parent.getContext())
                .inflate(R.layout.item_recover_guest, parent, false);
        return new Holder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull Holder holder, int position) {
        Context ctx = holder.itemView.getContext();
        GuestAccountBackupHelper.GuestBackup backup = backups.get(position);
        boolean selected = position == selectedPosition;

        int guestNum = backups.size() - position;
        holder.index.setText(ctx.getString(R.string.recover_guest_bgmi_guest_n, guestNum));

        String time = new SimpleDateFormat("dd MMM yyyy, HH:mm", Locale.getDefault())
                .format(new Date(backup.timestampMs));
        holder.date.setText(time);

        String uuid = backup.uuid == null || backup.uuid.isEmpty()
                ? ctx.getString(R.string.recover_guest_bgmi_no_uuid)
                : backup.uuid;
        holder.uuid.setText(uuid);

        holder.radio.setChecked(selected);
        holder.root.setSelected(selected);
        holder.check.setVisibility(selected ? View.VISIBLE : View.GONE);

        holder.root.setOnClickListener(v -> {
            int old = selectedPosition;
            int clicked = holder.getBindingAdapterPosition();
            if (clicked == RecyclerView.NO_POSITION) {
                return;
            }
            selectedPosition = clicked;
            if (old != RecyclerView.NO_POSITION) {
                notifyItemChanged(old);
            }
            notifyItemChanged(selectedPosition);
            if (listener != null) {
                listener.onGuestPicked(selectedPosition, backups.get(selectedPosition));
            }
        });
    }

    @Override
    public int getItemCount() {
        return backups.size();
    }

    static final class Holder extends RecyclerView.ViewHolder {
        final LinearLayout root;
        final RadioButton radio;
        final TextView index;
        final TextView date;
        final TextView uuid;
        final ImageView check;

        Holder(@NonNull View itemView) {
            super(itemView);
            root = itemView.findViewById(R.id.guest_item_root);
            radio = itemView.findViewById(R.id.guest_radio);
            index = itemView.findViewById(R.id.guest_index);
            date = itemView.findViewById(R.id.guest_date);
            uuid = itemView.findViewById(R.id.guest_uuid);
            check = itemView.findViewById(R.id.guest_check);
        }
    }
}
