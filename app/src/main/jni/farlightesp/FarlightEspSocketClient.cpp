#include "../esp_protocol/farlight_esp_protocol.h"
#include "../esp_protocol/socket_framing.h"

#include <android/log.h>
#include <atomic>
#include <cstring>
#include <thread>
#include <unistd.h>

extern "C" void farlight_esp_fill_response(int sw, int sh, FarlightEspEntry *out, int maxOut,
                                             int *outCount);

namespace {

constexpr const char *kTag = "FarlightEsp";

bool ConnectServer(int &outFd) {
    sockaddr_un addr{};
    char nameBuf[108]{};
    esp_socket::initAbstractAddr(addr, nameBuf, sizeof(nameBuf));

    const int fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (fd < 0) {
        return false;
    }

    for (int i = 0; i < 160; ++i) {
        if (connect(fd, reinterpret_cast<sockaddr *>(&addr), sizeof(addr)) == 0) {
            outFd = fd;
            return true;
        }
        usleep(250000);
    }
    close(fd);
    return false;
}

void ServiceLoop(int clientFd) {
    FarlightEspRequest req{};
    FarlightEspResponse resp{};

    while (true) {
        const int got = esp_socket::recvPacket(clientFd, &req, sizeof(req));
        if (got <= 0) {
            break;
        }
        if (req.mode != FARLIGHT_ESP_MODE_INIT && req.mode != FARLIGHT_ESP_MODE_DRAW) {
            continue;
        }

        memset(&resp, 0, sizeof(resp));
        int count = 0;
        farlight_esp_fill_response(req.screenWidth, req.screenHeight,
                                   resp.players, FARLIGHT_MAX_ESP_PLAYERS, &count);
        resp.playerCount = count;

        static int sLog;
        if ((++sLog % 120) == 1) {
            __android_log_print(ANDROID_LOG_INFO, kTag,
                                "sock client frame enemies=%d screen=%dx%d",
                                count, req.screenWidth, req.screenHeight);
        }

        if (!esp_socket::sendPacket(clientFd, &resp, sizeof(resp))) {
            break;
        }
    }
}

void SocketThread() {
    __android_log_print(ANDROID_LOG_INFO, kTag, "sock client start pid=%d", getpid());
    while (true) {
        int fd = -1;
        if (!ConnectServer(fd)) {
            __android_log_print(ANDROID_LOG_WARN, kTag, "sock client connect failed — retry");
            sleep(2);
            continue;
        }
        __android_log_print(ANDROID_LOG_INFO, kTag, "sock client connected fd=%d", fd);
        ServiceLoop(fd);
        close(fd);
        sleep(1);
    }
}

std::atomic<bool> g_clientStarted{false};

} // namespace

extern "C" void farlight_esp_socket_client_start(void) {
    if (g_clientStarted.exchange(true)) {
        return;
    }
    std::thread(SocketThread).detach();
}
