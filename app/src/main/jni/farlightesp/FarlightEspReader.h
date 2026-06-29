#pragma once

#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

struct FarlightEspEntry {
    float x;
    float top;
    float bottom;
    float w;
    float middle;
    float health;
    float teamId;
    float distance;
};

void farlight_esp_reader_start(void);
void farlight_esp_reader_set_screen(int width, int height);
int farlight_esp_reader_poll(FarlightEspEntry *out, int maxOut);
int farlight_esp_reader_count(void);

/** Reader pushes frames into BoxCore-owned buffer (avoids broken dlsym poll across memfd). */
typedef void (*FarlightEspPublishFn)(const FarlightEspEntry *entries, int count);
void farlight_esp_set_publish_callback(FarlightEspPublishFn fn);

#ifdef __cplusplus
}
#endif
