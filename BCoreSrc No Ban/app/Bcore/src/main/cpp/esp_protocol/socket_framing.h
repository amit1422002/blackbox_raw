#pragma once

#include <arpa/inet.h>
#include <cerrno>
#include <cstdint>
#include <cstring>
#include <poll.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

#include "farlight_esp_protocol.h"

namespace esp_socket {

inline int sendAll(int fd, const void *data, size_t size) {
    const auto *buf = static_cast<const char *>(data);
    while (size > 0) {
        ssize_t n = write(fd, buf, size);
        if (n < 0) {
            if (errno == EINTR) {
                continue;
            }
            return -1;
        }
        if (n == 0) {
            return -1;
        }
        buf += n;
        size -= static_cast<size_t>(n);
    }
    return 0;
}

inline int recvAll(int fd, void *data, size_t size) {
    auto *buf = static_cast<char *>(data);
    while (size > 0) {
        ssize_t n = read(fd, buf, size);
        if (n < 0) {
            if (errno == EINTR) {
                continue;
            }
            return -1;
        }
        if (n == 0) {
            return -1;
        }
        buf += n;
        size -= static_cast<size_t>(n);
    }
    return 0;
}

inline bool sendPacket(int fd, const void *payload, uint32_t size) {
    if (fd <= 0 || payload == nullptr || size == 0 || size > 1024 * 1024) {
        return false;
    }
    uint32_t netLen = htonl(size);
    return sendAll(fd, &netLen, sizeof(netLen)) == 0 &&
           sendAll(fd, payload, size) == 0;
}

inline int recvPacket(int fd, void *out, uint32_t maxSize) {
    if (fd <= 0 || out == nullptr || maxSize == 0) {
        return 0;
    }
    uint32_t netLen = 0;
    if (recvAll(fd, &netLen, sizeof(netLen)) != 0) {
        return -1;
    }
    uint32_t len = ntohl(netLen);
    if (len == 0 || len > maxSize) {
        return 0;
    }
    if (recvAll(fd, out, len) != 0) {
        return -1;
    }
    return static_cast<int>(len);
}

inline void initAbstractAddr(sockaddr_un &addr, char *nameBuf, size_t nameCap) {
    memset(nameBuf, 0, nameCap);
    nameBuf[0] = '\0';
    strncpy(nameBuf + 1, FARLIGHT_ESP_SOCKET_NAME, nameCap - 2);
    memset(&addr, 0, sizeof(addr));
    addr.sun_family = AF_UNIX;
    strncpy(addr.sun_path, nameBuf, sizeof(addr.sun_path) - 1);
}

} // namespace esp_socket
