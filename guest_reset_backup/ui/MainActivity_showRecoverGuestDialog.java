// Paste showRecoverGuestDialog into your Activity (needs RecyclerView, AlertDialog imports).

private void showRecoverGuestDialog(String packageName,
        List<GuestAccountBackupHelper.GuestBackup> backups) {
    if (backups == null || backups.isEmpty()) {
        Toast.makeText(getApplicationContext(), R.string.recover_guest_bgmi_none, Toast.LENGTH_LONG).show();
        return;
    }

    View content = getLayoutInflater().inflate(R.layout.dialog_recover_guest, null);
    RecyclerView list = content.findViewById(R.id.recover_guest_list);
    View selectedPanel = content.findViewById(R.id.recover_selected_panel);
    TextView selectedSummary = content.findViewById(R.id.recover_selected_summary);
    AppCompatButton restoreBtn = content.findViewById(R.id.recover_btn_restore);
    AppCompatButton cancelBtn = content.findViewById(R.id.recover_btn_cancel);

    list.setLayoutManager(new LinearLayoutManager(this));
    float density = getResources().getDisplayMetrics().density;
    int listHeight = (int) Math.min(backups.size() * 76f * density, 280f * density);
    ViewGroup.LayoutParams listLp = list.getLayoutParams();
    listLp.height = Math.max(listHeight, (int) (76f * density));
    list.setLayoutParams(listLp);

    RecoverGuestAdapter adapter = new RecoverGuestAdapter(backups, (position, backup) -> {
        selectedPanel.setVisibility(View.VISIBLE);
        selectedSummary.setText(backup.getDisplayLabel(this));
        restoreBtn.setEnabled(true);
        restoreBtn.setAlpha(1f);
    });
    list.setAdapter(adapter);

    AlertDialog dialog = new AlertDialog.Builder(this).setView(content).create();
    cancelBtn.setOnClickListener(v -> dialog.dismiss());

    restoreBtn.setOnClickListener(v -> {
        GuestAccountBackupHelper.GuestBackup picked = adapter.getSelectedBackup();
        if (picked == null) {
            return;
        }
        dialog.dismiss();
        showBottomSheetDialogUninstall(
                getResources().getDrawable(R.drawable.icon_toast_alert),
                getString(R.string.confirm),
                getString(R.string.recover_guest_bgmi_confirm, picked.getDisplayLabel(this)),
                false,
                v1 -> {
                    dismissBottomSheetDialog();
                    new Thread(() -> {
                        boolean ok = GuestAccountBackupHelper.restoreGuestAccount(
                                getApplicationContext(), packageName, 0, picked);
                        runOnUiThread(() -> Toast.makeText(getApplicationContext(),
                                ok ? R.string.recover_guest_bgmi_done : R.string.recover_guest_bgmi_fail,
                                Toast.LENGTH_LONG).show());
                    }, "bgmi-recover-guest").start();
                });
    });

    dialog.show();
}
