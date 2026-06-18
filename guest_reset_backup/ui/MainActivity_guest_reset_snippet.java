// Paste into MainActivity (or your launcher activity) — wire Reset Guest + Recover Guest buttons.

// --- Reset Guest button ---
AppCompatButton resetGuestBgmiBtn = findViewById(R.id.ResetGuestBgmi);
resetGuestBgmiBtn.setOnClickListener(v -> {
    if (!anubisCore.isInstalled(packageName, 0)) {
        Toast.makeText(getApplicationContext(), R.string.logout_bgmi_not_installed, Toast.LENGTH_LONG).show();
        return;
    }
    String clonePath = CloneDataHelper.getCloneDataPath(getApplicationContext(), packageName, 0);
    showBottomSheetDialogUninstall(
            getResources().getDrawable(R.drawable.icon_toast_alert),
            getString(R.string.confirm),
            getString(R.string.reset_guest_bgmi_confirm, clonePath),
            false,
            v1 -> {
                dismissBottomSheetDialog();
                new Thread(() -> {
                    CloneDataHelper.ResetGuestResult result =
                            CloneDataHelper.resetGuestAccountBgmiClone(
                                    getApplicationContext(), packageName, 0);
                    runOnUiThread(() -> {
                        if (!result.success) {
                            Toast.makeText(getApplicationContext(),
                                    R.string.reset_guest_bgmi_fail, Toast.LENGTH_LONG).show();
                            return;
                        }
                        String msg = result.backupPath != null
                                ? getString(R.string.reset_guest_bgmi_done_backup, result.backupPath)
                                : getString(R.string.reset_guest_bgmi_done);
                        Toast.makeText(getApplicationContext(), msg, Toast.LENGTH_LONG).show();
                    });
                }, "bgmi-reset-guest").start();
            });
});

// --- Recover Guest button ---
AppCompatButton recoverGuestBgmiBtn = findViewById(R.id.RecoverGuestBgmi);
recoverGuestBgmiBtn.setOnClickListener(v -> {
    if (!anubisCore.isInstalled(packageName, 0)) {
        Toast.makeText(getApplicationContext(), R.string.logout_bgmi_not_installed, Toast.LENGTH_LONG).show();
        return;
    }
    new Thread(() -> {
        List<GuestAccountBackupHelper.GuestBackup> backups =
                GuestAccountBackupHelper.listBackups();
        runOnUiThread(() -> showRecoverGuestDialog(packageName, backups));
    }, "bgmi-list-guest-backups").start();
});

// showRecoverGuestDialog(...) — full method in same file in this ui/ folder
