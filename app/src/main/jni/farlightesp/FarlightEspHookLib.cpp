#include <android/log.h>

#include "FarlightEspReader.h"

extern "C" void farlight_esp_socket_client_start(void);

__attribute__((constructor)) static void onFarlightEspLoad() {
    __android_log_print(ANDROID_LOG_INFO, "FarlightEsp", "memfd loaded — starting socket client");
    farlight_esp_socket_client_start();
}

extern "C" __attribute__((visibility("default"))) void farlight_esp_bootstrap() {
    farlight_esp_socket_client_start();
}
