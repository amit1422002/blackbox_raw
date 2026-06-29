package com.anubis.skin;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.util.DisplayMetrics;
import android.view.Choreographer;
import android.view.MotionEvent;
import android.view.View;

/**
 * Transparent full-screen canvas overlay — draws Farlight ESP boxes/lines/health.
 */
public final class FarlightEspOverlayView extends View {

    private static final int[] TEAM_COLORS = {
            Color.rgb(255, 0, 0),
            Color.rgb(0, 255, 0),
            Color.rgb(0, 128, 255),
            Color.rgb(255, 165, 0),
            Color.rgb(255, 0, 255),
            Color.rgb(0, 255, 255),
            Color.rgb(255, 255, 0),
            Color.rgb(128, 0, 255),
    };

    private final Paint linePaint = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint boxPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint healthFill = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint healthStroke = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint textPaint = new Paint(Paint.ANTI_ALIAS_FLAG);

    private final Paint debugPaint = new Paint(Paint.ANTI_ALIAS_FLAG);

    private FarlightEspPlayer[] players = new FarlightEspPlayer[0];
    private boolean showBox = true;
    private boolean showLine = true;
    private boolean showHealth = true;

    private final Choreographer.FrameCallback frameCallback = new Choreographer.FrameCallback() {
        @Override
        public void doFrame(long frameTimeNanos) {
            players = FarlightEspPlayer.parse(FarlightEspNative.pollFrames());
            FarlightEspSettings.setEnemyCount(players.length);
            invalidate();
            Choreographer.getInstance().postFrameCallback(this);
        }
    };

    public FarlightEspOverlayView(Context context) {
        super(context);
        setWillNotDraw(false);
        setClickable(false);
        setFocusable(false);
        setFocusableInTouchMode(false);
        setBackgroundColor(Color.TRANSPARENT);
        setLayerType(LAYER_TYPE_HARDWARE, null);

        linePaint.setColor(Color.RED);
        linePaint.setStrokeWidth(3f);
        linePaint.setStyle(Paint.Style.STROKE);

        boxPaint.setColor(Color.rgb(0, 253, 254));
        boxPaint.setStrokeWidth(2.5f);
        boxPaint.setStyle(Paint.Style.STROKE);

        healthStroke.setColor(Color.BLACK);
        healthStroke.setStrokeWidth(2f);
        healthStroke.setStyle(Paint.Style.STROKE);

        healthFill.setStyle(Paint.Style.FILL);

        textPaint.setColor(Color.argb(200, 255, 255, 255));
        textPaint.setTextSize(24f);

        debugPaint.setStyle(Paint.Style.STROKE);
        debugPaint.setStrokeWidth(4f);
        debugPaint.setColor(Color.argb(200, 0, 255, 0));
    }

    public void setShowBox(boolean showBox) {
        this.showBox = showBox;
    }

    public void setShowLine(boolean showLine) {
        this.showLine = showLine;
    }

    public void setShowHealth(boolean showHealth) {
        this.showHealth = showHealth;
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent ev) {
        return false;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        FarlightEspDebug.i("EspOverlayView attached to window");
        Choreographer.getInstance().postFrameCallback(frameCallback);
    }

    @Override
    protected void onDetachedFromWindow() {
        Choreographer.getInstance().removeFrameCallback(frameCallback);
        FarlightEspDebug.i("EspOverlayView detached from window");
        super.onDetachedFromWindow();
    }

    @Override
    protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        super.onSizeChanged(w, h, oldw, oldh);
        if (w > 0 && h > 0) {
            int lw = FarlightEspSettings.landscapeWidth(w, h);
            int lh = FarlightEspSettings.landscapeHeight(w, h);
            FarlightEspNative.setScreenSize(lw, lh);
        }
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);

        int screenW = getWidth();
        int screenH = getHeight();
        if (screenW <= 0 || screenH <= 0) {
            DisplayMetrics dm = getContext().getApplicationContext().getResources().getDisplayMetrics();
            screenW = dm.widthPixels;
            screenH = dm.heightPixels;
        }

        // Debug marker — proves draw overlay is visible (top-right green circle)
        if (screenW > 0 && screenH > 0) {
            canvas.drawCircle(screenW - 48f, 48f, 20f, debugPaint);
        }

        boolean espOn = FarlightEspSettings.isEspEnabled();
        int drawn = 0;

        if (!espOn) {
            FarlightEspDebug.onDraw(players.length, 0, screenW, screenH, false, FarlightEspDrawOverlay.isAttached());
            return;
        }

        if (screenW <= 0 || players.length == 0) {
            FarlightEspDebug.onDraw(players.length, 0, screenW, screenH, true, FarlightEspDrawOverlay.isAttached());
            return;
        }

        int nativeW = FarlightEspSettings.getNativeScreenWidth();
        int nativeH = FarlightEspSettings.getNativeScreenHeight();

        for (FarlightEspPlayer p : players) {
            if (p.w <= 0f) {
                continue;
            }
            drawn++;
            float px = p.x;
            float pw = p.w;
            float ptop = p.top;
            float pbottom = p.bottom;
            float pmid = p.middle;
            if (nativeW > 0 && nativeH > 0
                    && (Math.abs(nativeW - screenW) > 2 || Math.abs(nativeH - screenH) > 2)) {
                float scaleX = (float) screenW / (float) nativeW;
                float scaleY = (float) screenH / (float) nativeH;
                px = p.x * scaleX;
                pw = p.w * scaleX;
                ptop = p.top * scaleY;
                pbottom = p.bottom * scaleY;
                pmid = p.middle * scaleX;
            }
            if (showLine) {
                canvas.drawLine(screenW * 0.5f, 118f, pmid, ptop - 71f, linePaint);
            }
            if (showBox) {
                drawCornerBox(canvas, px, ptop, px + pw, pbottom);
            }
            if (showHealth) {
                drawHealthBar(canvas, pmid, ptop, p.health, p.teamId);
            }
        }

        FarlightEspDebug.onDraw(players.length, drawn, screenW, screenH, true, FarlightEspDrawOverlay.isAttached());
    }

    private void drawCornerBox(Canvas canvas, float left, float top, float right, float bottom) {
        float w = right - left;
        float third = w / 3f;
        canvas.drawLine(left, top, left + third, top, boxPaint);
        canvas.drawLine(right, top, right - third, top, boxPaint);
        canvas.drawLine(left, top, left, top + third, boxPaint);
        canvas.drawLine(right, top, right, top + third, boxPaint);
        canvas.drawLine(left, bottom, left + third, bottom, boxPaint);
        canvas.drawLine(right, bottom, right - third, bottom, boxPaint);
        canvas.drawLine(left, bottom, left, bottom - third, boxPaint);
        canvas.drawLine(right, bottom, right, bottom - third, boxPaint);
    }

    private void drawHealthBar(Canvas canvas, float centerX, float topY, float health, int teamId) {
        int tid = teamId;
        if (tid > 99) {
            tid /= 2;
        }
        healthFill.setColor(TEAM_COLORS[Math.abs(tid) % TEAM_COLORS.length]);

        float barLeft = centerX - 75f;
        float barTop = topY - 31f;
        float fillWidth = health * 150f / 100f;
        float offset = 9f;

        canvas.drawRect(barLeft, barTop, barLeft + fillWidth, barTop + 25f, healthFill);
        canvas.drawRect(barLeft, barTop, centerX + 75f + offset, barTop + 27f, healthStroke);

        String label = tid + ".RPG";
        float textW = textPaint.measureText(label);
        canvas.drawText(label, centerX - textW * 0.5f, topY - 17f, textPaint);
    }
}
