package com.anubis.skin;

/**
 * One enemy ESP frame in screen space (from native memory reader).
 */
public final class FarlightEspPlayer {

    public final float x;
    public final float top;
    public final float bottom;
    public final float w;
    public final float middle;
    public final float health;
    public final int teamId;
    public final float distance;

    public FarlightEspPlayer(float x, float top, float bottom, float w, float middle,
                             float health, int teamId, float distance) {
        this.x = x;
        this.top = top;
        this.bottom = bottom;
        this.w = w;
        this.middle = middle;
        this.health = health;
        this.teamId = teamId;
        this.distance = distance;
    }

    static FarlightEspPlayer[] parse(float[] data) {
        if (data == null || data.length < 1) {
            return new FarlightEspPlayer[0];
        }
        int count = (int) data[0];
        if (count <= 0) {
            return new FarlightEspPlayer[0];
        }
        final int fields = 8;
        int max = Math.min(count, (data.length - 1) / fields);
        FarlightEspPlayer[] out = new FarlightEspPlayer[max];
        for (int i = 0; i < max; i++) {
            int base = 1 + i * fields;
            out[i] = new FarlightEspPlayer(
                    data[base],
                    data[base + 1],
                    data[base + 2],
                    data[base + 3],
                    data[base + 4],
                    data[base + 5],
                    (int) data[base + 6],
                    data[base + 7]
            );
        }
        return out;
    }
}
