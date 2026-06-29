package com.anubis.skin;

import android.content.Context;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.util.TypedValue;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

/**
 * Small touchable overlay bar — toggle ESP and show live enemy count.
 */
public final class FarlightEspControlBar extends LinearLayout {

    private final TextView titleView;
    private final TextView enemyCountView;
    private final TextView statusView;
    private final Button toggleButton;

    public FarlightEspControlBar(Context context) {
        super(context);
        setOrientation(VERTICAL);
        setPadding(dp(12), dp(10), dp(12), dp(10));
        setBackground(panelBackground());

        titleView = new TextView(context);
        titleView.setText("Farlight ESP");
        titleView.setTextColor(Color.WHITE);
        titleView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
        titleView.setTypeface(Typeface.DEFAULT_BOLD);
        addView(titleView);

        enemyCountView = new TextView(context);
        enemyCountView.setTextColor(Color.rgb(0, 255, 140));
        enemyCountView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 18);
        enemyCountView.setTypeface(Typeface.DEFAULT_BOLD);
        enemyCountView.setPadding(0, dp(6), 0, dp(8));
        enemyCountView.setText("Enemies: 0");
        addView(enemyCountView);

        TextView statusView = new TextView(context);
        this.statusView = statusView;
        statusView.setTextColor(Color.rgb(180, 180, 200));
        statusView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        statusView.setPadding(0, dp(4), 0, dp(6));
        statusView.setText("Status: waiting");
        addView(statusView);

        toggleButton = new Button(context);
        toggleButton.setAllCaps(false);
        toggleButton.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
        updateToggleLabel();
        toggleButton.setOnClickListener(v -> {
            FarlightEspSettings.setEspEnabled(!FarlightEspSettings.isEspEnabled());
            updateToggleLabel();
        });
        addView(toggleButton, new LayoutParams(LayoutParams.MATCH_PARENT, LayoutParams.WRAP_CONTENT));

        post(refreshRunnable);
    }

    private final Runnable refreshRunnable = new Runnable() {
        @Override
        public void run() {
            int enemies = FarlightEspSettings.getEnemyCount();
            enemyCountView.setText("Enemies: " + enemies);
            statusView.setText("Status: " + FarlightEspDebug.snapshot()
                    + " draw=" + (FarlightEspDrawOverlay.isAttached() ? "Y" : "N"));
            if (getHandler() != null) {
                postDelayed(this, 500L);
            }
        }
    };

    private void updateToggleLabel() {
        if (FarlightEspSettings.isEspEnabled()) {
            toggleButton.setText("ESP: ON");
            toggleButton.setTextColor(Color.rgb(0, 40, 0));
        } else {
            toggleButton.setText("ESP: OFF");
            toggleButton.setTextColor(Color.rgb(80, 0, 0));
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        removeCallbacks(refreshRunnable);
        super.onDetachedFromWindow();
    }

    private GradientDrawable panelBackground() {
        GradientDrawable bg = new GradientDrawable();
        bg.setColor(Color.argb(210, 20, 20, 28));
        bg.setCornerRadius(dp(10));
        bg.setStroke(dp(1), Color.argb(180, 0, 200, 255));
        return bg;
    }

    private int dp(int value) {
        return Math.round(value * getResources().getDisplayMetrics().density);
    }
}
