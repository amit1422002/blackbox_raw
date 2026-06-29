#include "FarlightEspReader.h"

#include "../esp_core/Header/Memory.hpp"
#include "../esp_core/Main/FarlightOffsets.hpp"
#include "../esp_core/Main/MemTools.h"

#include <android/log.h>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstring>
#include <dlfcn.h>
#include <mutex>
#include <thread>
#include <unordered_set>
#include <vector>

namespace {

constexpr const char* kTag = "FarlightEsp";
constexpr int kMaxEsp = 64;
constexpr int kFieldsPerEntry = 8;

std::mutex g_mutex;
std::vector<FarlightEspEntry> g_entries;
std::atomic<bool> g_started{false};
std::atomic<int> g_screenW{0};
std::atomic<int> g_screenH{0};

uintptr_t g_ue4Base = 0;
float g_selfX = 0.f;
float g_selfY = 0.f;
float g_selfZ = 0.f;

struct CameraView {
    float camX = 0.f;
    float camY = 0.f;
    float camZ = 0.f;
    float pitch = 0.f;
    float yaw = 0.f;
    float roll = 0.f;
    float fov = 90.f;
    float aspect = 0.f;
    bool valid = false;
};

CameraView g_camera;
float g_viewMatrix[16]{};
bool g_matrixValid = false;
std::atomic<int> g_lastDebugCount{0};
const char* g_failReason = "init";
const char* g_lastFailReason = "init";

uintptr_t g_cachedPC = 0;
uintptr_t g_cachedPawn = 0;

struct ScanStats {
    int nullPawn = 0;
    int filtered = 0;
    int noMesh = 0;
    int noPos = 0;
    int behindCam = 0;
    int badBox = 0;
    int tooFar = 0;
    int added = 0;
    int validPawns = 0;
};

ScanStats g_scanStats;

static void NormalizeLandscape(int& w, int& h)
{
    if (w > 0 && h > 0 && w < h) {
        std::swap(w, h);
    }
}

FarlightEspPublishFn g_publish_fn = nullptr;

using BoxcorePublishFn = void (*)(const FarlightEspEntry*, int);

BoxcorePublishFn ResolveBoxcorePublish()
{
    static BoxcorePublishFn fn = nullptr;
    static int resolveLog = 0;
    if (fn != nullptr || resolveLog > 0) {
        return fn;
    }
    fn = reinterpret_cast<BoxcorePublishFn>(
            dlsym(RTLD_DEFAULT, "farlight_boxcore_publish_esp"));
    if (fn == nullptr) {
        void* art = dlopen("libartpalette.so", RTLD_NOW | RTLD_NOLOAD);
        if (art != nullptr) {
            fn = reinterpret_cast<BoxcorePublishFn>(
                    dlsym(art, "farlight_boxcore_publish_esp"));
        }
    }
    resolveLog = 1;
    __android_log_print(ANDROID_LOG_INFO, kTag,
                        "boxcore publish fn=%p", fn);
    return fn;
}

void PublishEntriesLocked()
{
    const int count = static_cast<int>(g_entries.size());
    BoxcorePublishFn boxFn = ResolveBoxcorePublish();
    if (boxFn != nullptr) {
        if (count > 0) {
            boxFn(g_entries.data(), count);
        }
        return;
    }
    if (!g_publish_fn) {
        return;
    }
    if (count > 0) {
        g_publish_fn(g_entries.data(), count);
    }
}

void SetFailReason(const char* reason)
{
    if (reason && g_failReason != reason) {
        g_failReason = reason;
        if (g_lastFailReason != reason) {
            g_lastFailReason = reason;
            __android_log_print(ANDROID_LOG_WARN, kTag, "reader status: %s", reason);
        }
    }
}

bool ReadPawnPos(uintptr_t pawn, float& ox, float& oy, float& oz);
float ReadPawnYaw(uintptr_t pawn);
bool WorldToScreenCam(int sw, int sh, float wx, float wy, float wz, float& outX, float& outY);
bool ProjectPawnBox(int sw, int sh, float wx, float wy, float wz,
                      float& outX, float& outTop, float& outBottom, float& outW, float& outMid);
uint8_t ReadTeamId(uintptr_t playerState);
float ReadHealthPercent(uintptr_t pawn);
bool ReadPOVInto(uintptr_t pov, CameraView& out);
bool ReadCameraView(uintptr_t playerController);

uintptr_t ResolveWorld(uintptr_t ue4Base)
{
    using namespace FarlightOff;
    // Prefer engine viewport world — more stable in-game than raw GWorld (menu world flicker).
    uintptr_t engine = getZZ(ue4Base + GEngine);
    uintptr_t viewport = engine ? getZZ(engine + EngineGameViewport) : 0;
    uintptr_t world = viewport ? getZZ(viewport + ViewportWorld) : 0;
    if (world)
        return world;

    world = getZZ(ue4Base + GWorld);
    if (world)
        return world;

    return getZZ(ue4Base + GWorldExternal);
}

bool ResolveLocalChain(uintptr_t world,
                       uintptr_t& outPC,
                       uintptr_t& outPawn,
                       uintptr_t& outGameState,
                       uintptr_t& outPlayerArray,
                       int& outPlayerCount)
{
    using namespace FarlightOff;
    outPC = 0;
    outPawn = 0;
    outGameState = 0;
    outPlayerArray = 0;
    outPlayerCount = 0;
    if (!world)
        return false;

    uintptr_t gameInstance = getZZ(world + OwningGameInstance);
    uintptr_t localPlayers = gameInstance ? getZZ(gameInstance + LocalPlayers) : 0;
    int localCount = gameInstance ? getDword(gameInstance + LocalPlayers + sizeof(uintptr_t)) : 0;
    if (localPlayers && localCount > 0) {
        uintptr_t localPlayer = getZZ(localPlayers);
        outPC = localPlayer ? getZZ(localPlayer + FarlightOff::PlayerController) : 0;
        outPawn = outPC ? getZZ(outPC + AcknowledgedPawn) : 0;
    }

    outGameState = getZZ(world + GameState);
    outPlayerArray = outGameState ? getZZ(outGameState + PlayerArray) : 0;
    outPlayerCount = outGameState ? getDword(outGameState + PlayerArray + sizeof(uintptr_t)) : 0;

    // Fallback: find local pawn from PlayerArray when GI chain is briefly null.
    if (!outPC && outPlayerArray && outPlayerCount > 0) {
        const int scan = outPlayerCount < MaxPlayerScan ? outPlayerCount : MaxPlayerScan;
        for (int i = 0; i < scan; ++i) {
            uintptr_t ps = getZZ(outPlayerArray + static_cast<uintptr_t>(i) * sizeof(uintptr_t));
            if (!ps)
                continue;
            uintptr_t pawn = getZZ(ps + PawnPrivate);
            if (!pawn)
                continue;
            uintptr_t ctrl = getZZ(pawn + FarlightOff::PawnController);
            if (!ctrl)
                continue;
            uintptr_t ack = getZZ(ctrl + AcknowledgedPawn);
            if (ack == pawn) {
                outPC = ctrl;
                outPawn = pawn;
                break;
            }
        }
    }

    if (outPC)
        g_cachedPC = outPC;
    else if (g_cachedPC)
        outPC = g_cachedPC;

    if (outPawn)
        g_cachedPawn = outPawn;
    else if (g_cachedPawn)
        outPawn = g_cachedPawn;

    return outPC != 0;
}

bool ShouldDrawPawn(uintptr_t selfPawn, uintptr_t pawn, uintptr_t playerStatePtr, bool relaxTeam)
{
    using namespace FarlightOff;
    if (!pawn || pawn == selfPawn)
        return false;

    if (!relaxTeam && playerStatePtr && selfPawn) {
        if ((getDword(playerStatePtr + bIsSameTeamWithLocalPlayer) & 0xFF) != 0)
            return false;

        uintptr_t selfPS = getZZ(selfPawn + PlayerState);
        if (selfPS) {
            uint8_t selfTeam = 0;
            uint8_t enemyTeam = 0;
            uintptr_t selfTeamInfo = getZZ(selfPS + TeamInfo);
            if (selfTeamInfo)
                selfTeam = static_cast<uint8_t>(getDword(selfTeamInfo + FarlightOff::TeamID));
            uintptr_t enemyTeamInfo = getZZ(playerStatePtr + TeamInfo);
            if (enemyTeamInfo)
                enemyTeam = static_cast<uint8_t>(getDword(enemyTeamInfo + FarlightOff::TeamID));
            if (selfTeam != 0 && enemyTeam != 0 && selfTeam == enemyTeam)
                return false;
        }
    }
    return true;
}

bool TryAddPawn(uintptr_t selfPawn,
                uintptr_t pawn,
                uintptr_t playerStatePtr,
                int sw,
                int sh,
                bool relaxTeam,
                std::vector<FarlightEspEntry>& out,
                std::unordered_set<uintptr_t>& seen)
{
    if (!pawn) {
        g_scanStats.nullPawn++;
        return false;
    }
    if (!ShouldDrawPawn(selfPawn, pawn, playerStatePtr, relaxTeam)) {
        g_scanStats.filtered++;
        return false;
    }
    if (!seen.insert(pawn).second)
        return false;

    g_scanStats.validPawns++;

    uintptr_t mesh = getZZ(pawn + FarlightOff::Mesh);
    if (!mesh)
        g_scanStats.noMesh++;

    float ex = 0.f, ey = 0.f, ez = 0.f;
    if (!ReadPawnPos(pawn, ex, ey, ez)) {
        g_scanStats.noPos++;
        return false;
    }

    if (!g_camera.valid) {
        g_scanStats.behindCam++;
        return false;
    }

    float boxX = 0.f;
    float boxTop = 0.f;
    float boxBottom = 0.f;
    float boxW = 0.f;
    float boxMid = 0.f;
    if (!ProjectPawnBox(sw, sh, ex, ey, ez, boxX, boxTop, boxBottom, boxW, boxMid)) {
        g_scanStats.behindCam++;
        return false;
    }
    if (boxW <= 0.f) {
        g_scanStats.badBox++;
        return false;
    }

    float distance = sqrtf(powf(ex - g_selfX, 2.f) + powf(ey - g_selfY, 2.f) + powf(ez - g_selfZ, 2.f)) * 0.01f;
    if (distance > FarlightOff::MaxDistanceM) {
        g_scanStats.tooFar++;
        return false;
    }

    float health = ReadHealthPercent(pawn);
    if (health <= 0.f)
        health = 100.f;

    FarlightEspEntry entry{};
    entry.x = boxX;
    entry.top = boxTop;
    entry.bottom = boxBottom;
    entry.w = boxW;
    entry.middle = boxMid;
    entry.health = health;
    entry.teamId = playerStatePtr ? static_cast<float>(ReadTeamId(playerStatePtr)) : 0.f;
    entry.distance = distance;
    out.push_back(entry);
    g_scanStats.added++;
    return true;
}

void ScanPlayerArray(uintptr_t selfPawn,
                     uintptr_t playerArray,
                     int actorCount,
                     int sw,
                     int sh,
                     bool relaxTeam,
                     std::vector<FarlightEspEntry>& out,
                     std::unordered_set<uintptr_t>& seen)
{
    using namespace FarlightOff;
    const int scanCount = actorCount > 0 && actorCount < MaxPlayerScan ? actorCount : MaxPlayerScan;
    for (int i = 0; i < scanCount && static_cast<int>(out.size()) < kMaxEsp; ++i) {
        uintptr_t playerStatePtr = playerArray ? getZZ(playerArray + static_cast<uintptr_t>(i) * sizeof(uintptr_t)) : 0;
        if (!playerStatePtr)
            continue;
        uintptr_t pawn = getZZ(playerStatePtr + PawnPrivate);
        TryAddPawn(selfPawn, pawn, playerStatePtr, sw, sh, relaxTeam, out, seen);
    }
}

void ScanLevelActors(uintptr_t selfPawn,
                     uintptr_t world,
                     int sw,
                     int sh,
                     bool relaxTeam,
                     std::vector<FarlightEspEntry>& out,
                     std::unordered_set<uintptr_t>& seen)
{
    using namespace FarlightOff;
    uintptr_t level = getZZ(world + PersistentLevel);
    if (!level)
        return;

    uintptr_t cluster = getZZ(level + LevelActorCluster);
    if (!cluster)
        return;

    uintptr_t actorArray = getZZ(cluster + ActorClusterActors);
    int actorCount = getDword(cluster + ActorClusterActors + sizeof(uintptr_t));
    if (!actorArray || actorCount <= 0)
        return;

    const int scanCount = actorCount < 512 ? actorCount : 512;
    for (int i = 0; i < scanCount && static_cast<int>(out.size()) < kMaxEsp; ++i) {
        uintptr_t actor = getZZ(actorArray + static_cast<uintptr_t>(i) * sizeof(uintptr_t));
        if (!actor)
            continue;
        uintptr_t playerStatePtr = getZZ(actor + PlayerState);
        TryAddPawn(selfPawn, actor, playerStatePtr, sw, sh, relaxTeam, out, seen);
    }
}

bool ReadPawnPos(uintptr_t pawn, float& ox, float& oy, float& oz)
{
    using namespace FarlightOff;
    uintptr_t movement = getZZ(pawn + CharacterMovement);
    if (movement) {
        ox = getFloat(movement + LastUpdateLocation);
        oy = getFloat(movement + LastUpdateLocation + 4);
        oz = getFloat(movement + LastUpdateLocation + 8);
        if (std::fabs(ox) + std::fabs(oy) + std::fabs(oz) > 1.f)
            return true;
    }
    uintptr_t root = getZZ(pawn + RootComponent);
    if (root) {
        ox = getFloat(root + CompWorldTranslation);
        oy = getFloat(root + CompWorldTranslation + 4);
        oz = getFloat(root + CompWorldTranslation + 8);
        if (std::fabs(ox) + std::fabs(oy) + std::fabs(oz) > 1.f)
            return true;
    }
    return false;
}

float ReadPawnYaw(uintptr_t pawn)
{
    using namespace FarlightOff;
    if (!pawn)
        return 0.f;
    uintptr_t root = getZZ(pawn + RootComponent);
    if (!root)
        return 0.f;
    const uintptr_t quatBase = root + ComponentToWorld;
    const float qx = getFloat(quatBase);
    const float qy = getFloat(quatBase + 4);
    const float qz = getFloat(quatBase + 8);
    const float qw = getFloat(quatBase + 12);
    const float siny = 2.f * (qw * qz + qx * qy);
    const float cosy = 1.f - 2.f * (qy * qy + qz * qz);
    return atan2f(siny, cosy) * 180.f / 3.14159265f;
}

bool WorldToScreenCam(int sw, int sh, float wx, float wy, float wz, float& outX, float& outY)
{
    const CameraView& cam = g_camera;
    if (!cam.valid || sw <= 0 || sh <= 0) {
        return false;
    }

    constexpr float kPi = 3.14159265f;
    const float radPitch = cam.pitch * kPi / 180.f;
    const float radYaw = cam.yaw * kPi / 180.f;
    const float radRoll = cam.roll * kPi / 180.f;

    const float sp = sinf(radPitch), cp = cosf(radPitch);
    const float sy = sinf(radYaw), cy = cosf(radYaw);
    const float sr = sinf(radRoll), cr = cosf(radRoll);

    const float axisXx = cp * cy;
    const float axisXy = cp * sy;
    const float axisXz = sp;
    const float axisYx = sr * sp * cy - cr * sy;
    const float axisYy = sr * sp * sy + cr * cy;
    const float axisYz = -sr * cp;
    const float axisZx = -(cr * sp * cy + sr * sy);
    const float axisZy = cy * sr - cr * sp * sy;
    const float axisZz = cr * cp;

    const float dx = wx - cam.camX;
    const float dy = wy - cam.camY;
    const float dz = wz - cam.camZ;

    const float transformedX = dx * axisYx + dy * axisYy + dz * axisYz;
    const float transformedY = dx * axisZx + dy * axisZy + dz * axisZz;
    float transformedZ = dx * axisXx + dy * axisXy + dz * axisXz;
    // PUBG-style: clamp depth instead of hard-reject (reduces false negatives).
    if (transformedZ < 1.f) {
        transformedZ = 1.f;
    }

    const float fovRad = cam.fov * kPi / 360.f;
    const float screenCenterX = static_cast<float>(sw) * 0.5f;
    const float screenCenterY = static_cast<float>(sh) * 0.5f;
    float aspect = cam.aspect;
    if (aspect < 0.01f) {
        aspect = static_cast<float>(sw) / static_cast<float>(sh);
    }
    const float tanHalfH = tanf(fovRad);
    if (tanHalfH < 0.001f) {
        return false;
    }
    const float tanHalfV = tanHalfH / aspect;

    outX = screenCenterX + transformedX * (screenCenterX / tanHalfH) / transformedZ;
    outY = screenCenterY - transformedY * (screenCenterY / tanHalfV) / transformedZ;
    return std::isfinite(outX) && std::isfinite(outY);
}

bool ProjectPawnBox(int sw, int sh, float wx, float wy, float wz,
                    float& outX, float& outTop, float& outBottom, float& outW, float& outMid)
{
    constexpr float kHeadAboveRoot = 88.f;
    constexpr float kFeetBelowRoot = 92.f;
    float headX = 0.f;
    float headY = 0.f;
    float feetX = 0.f;
    float feetY = 0.f;
    if (!WorldToScreenCam(sw, sh, wx, wy, wz + kHeadAboveRoot, headX, headY)) {
        return false;
    }
    if (!WorldToScreenCam(sw, sh, wx, wy, wz - kFeetBelowRoot, feetX, feetY)) {
        return false;
    }

    const float top = std::min(headY, feetY);
    const float bottom = std::max(headY, feetY);
    const float halfH = std::max((bottom - top) * 0.5f, 10.f);
    const float halfW = halfH * 0.42f;
    const float cx = (headX + feetX) * 0.5f;

    outTop = top;
    outBottom = bottom;
    outW = halfW * 2.f;
    outX = cx - halfW;
    outMid = cx;
    return outW > 0.f && std::isfinite(outX) && std::isfinite(outTop);
}

void MatrixMultiplyColumnMajor(const float* a, const float* b, float* out)
{
    for (int col = 0; col < 4; ++col) {
        for (int row = 0; row < 4; ++row) {
            float sum = 0.f;
            for (int k = 0; k < 4; ++k) {
                sum += a[row + k * 4] * b[k + col * 4];
            }
            out[row + col * 4] = sum;
        }
    }
}

bool ReadPOVInto(uintptr_t pov, CameraView& out)
{
    using namespace FarlightOff;
    out = {};
    out.camX = getFloat(pov + POVLocation);
    out.camY = getFloat(pov + POVLocation + 4);
    out.camZ = getFloat(pov + POVLocation + 8);
    out.pitch = getFloat(pov + POVRotation);
    out.yaw = getFloat(pov + POVRotation + 4);
    out.roll = getFloat(pov + POVRotation + 8);
    out.fov = getFloat(pov + POVFOV);
    out.aspect = getFloat(pov + POVAspectRatio);
    if (std::fabs(out.camX) + std::fabs(out.camY) + std::fabs(out.camZ) < 1.f && out.fov < 1.f) {
        return false;
    }
    if (out.fov < 1.f) {
        out.fov = 90.f;
    }
    out.valid = true;
    return true;
}

bool BuildViewProjection(uintptr_t pov, int sw, int sh, float outMatrix[16], CameraView& outCam)
{
    using namespace FarlightOff;
    if (!ReadPOVInto(pov, outCam)) {
        return false;
    }

    float aspect = getFloat(pov + POVAspectRatio);
    if (aspect < 0.01f && sw > 0 && sh > 0) {
        aspect = static_cast<float>(sw) / static_cast<float>(sh);
    }
    if (aspect < 0.01f) {
        aspect = 16.f / 9.f;
    }

    constexpr float kPi = 3.14159265f;
    const float radPitch = outCam.pitch * kPi / 180.f;
    const float radYaw = outCam.yaw * kPi / 180.f;
    const float radRoll = outCam.roll * kPi / 180.f;
    const float sp = sinf(radPitch), cp = cosf(radPitch);
    const float sy = sinf(radYaw), cy = cosf(radYaw);
    const float sr = sinf(radRoll), cr = cosf(radRoll);

    float view[16]{};
    view[0] = cp * cy;
    view[1] = cp * sy;
    view[2] = sp;
    view[4] = sr * sp * cy - cr * sy;
    view[5] = sr * sp * sy + cr * cy;
    view[6] = -sr * cp;
    view[8] = -(cr * sp * cy + sr * sy);
    view[9] = cy * sr - cr * sp * sy;
    view[10] = cr * cp;
    view[12] = -(view[0] * outCam.camX + view[4] * outCam.camY + view[8] * outCam.camZ);
    view[13] = -(view[1] * outCam.camX + view[5] * outCam.camY + view[9] * outCam.camZ);
    view[14] = -(view[2] * outCam.camX + view[6] * outCam.camY + view[10] * outCam.camZ);
    view[15] = 1.f;

    float tanHalf = tanf(outCam.fov * kPi / 360.f);
    if (tanHalf < 0.001f) {
        tanHalf = 0.001f;
    }
    float proj[16]{};
    proj[0] = 1.f / tanHalf / aspect;
    proj[5] = 1.f / tanHalf;
    proj[10] = 0.f;
    proj[11] = -1.f;
    proj[14] = -10.f;
    proj[15] = 0.f;

    MatrixMultiplyColumnMajor(view, proj, outMatrix);
    return true;
}

bool BuildViewProjectionFromCamera(const CameraView& cam, int sw, int sh, float outMatrix[16])
{
    CameraView tmp = cam;
    float aspect = 16.f / 9.f;
    if (sw > 0 && sh > 0) {
        aspect = static_cast<float>(sw) / static_cast<float>(sh);
    }

    constexpr float kPi = 3.14159265f;
    const float radPitch = tmp.pitch * kPi / 180.f;
    const float radYaw = tmp.yaw * kPi / 180.f;
    const float radRoll = tmp.roll * kPi / 180.f;
    const float sp = sinf(radPitch), cp = cosf(radPitch);
    const float sy = sinf(radYaw), cy = cosf(radYaw);
    const float sr = sinf(radRoll), cr = cosf(radRoll);

    float view[16]{};
    view[0] = cp * cy;
    view[1] = cp * sy;
    view[2] = sp;
    view[4] = sr * sp * cy - cr * sy;
    view[5] = sr * sp * sy + cr * cy;
    view[6] = -sr * cp;
    view[8] = -(cr * sp * cy + sr * sy);
    view[9] = cy * sr - cr * sp * sy;
    view[10] = cr * cp;
    view[12] = -(view[0] * tmp.camX + view[4] * tmp.camY + view[8] * tmp.camZ);
    view[13] = -(view[1] * tmp.camX + view[5] * tmp.camY + view[9] * tmp.camZ);
    view[14] = -(view[2] * tmp.camX + view[6] * tmp.camY + view[10] * tmp.camZ);
    view[15] = 1.f;

    float tanHalf = tanf(tmp.fov * kPi / 360.f);
    if (tanHalf < 0.001f) {
        tanHalf = 0.001f;
    }
    float proj[16]{};
    proj[0] = 1.f / tanHalf / aspect;
    proj[5] = 1.f / tanHalf;
    proj[10] = 0.f;
    proj[11] = -1.f;
    proj[14] = -10.f;
    proj[15] = 0.f;

    MatrixMultiplyColumnMajor(view, proj, outMatrix);
    return true;
}

bool ProjectWithMatrix(int sw, int sh, float wx, float wy, float wz, float& outX, float& outY)
{
    if (!g_matrixValid || sw <= 0 || sh <= 0) {
        return false;
    }
    const float* m = g_viewMatrix;
    const float clipW = m[3] * wx + m[7] * wy + m[11] * wz + m[15];
    if (clipW < 0.01f) {
        return false;
    }
    const float halfW = static_cast<float>(sw) * 0.5f;
    const float halfH = static_cast<float>(sh) * 0.5f;
    outX = halfW + (m[0] * wx + m[4] * wy + m[8] * wz + m[12]) / clipW * halfW;
    outY = halfH - (m[1] * wx + m[5] * wy + m[9] * wz + m[13]) / clipW * halfH;
    return std::isfinite(outX) && std::isfinite(outY);
}

bool ReadCameraView(uintptr_t playerController)
{
    using namespace FarlightOff;
    g_camera = {};
    g_camera.valid = false;
    g_matrixValid = false;

    uintptr_t camMgr = getZZ(playerController + PlayerCameraManager);
    if (!camMgr) {
        return false;
    }

    const uintptr_t pubPov = camMgr + CameraCache + CameraCachePOV;
    const uintptr_t privPov = camMgr + CameraCachePrivate + CameraCachePOV;

    CameraView pub{};
    CameraView priv{};
    const bool hasPub = ReadPOVInto(pubPov, pub);
    const bool hasPriv = ReadPOVInto(privPov, priv);

    if (!hasPub && !hasPriv) {
        return false;
    }

    const float cp = getFloat(playerController + ControlRotation);
    const float cy = getFloat(playerController + ControlRotation + 4);
    const bool stalePubYaw = !hasPub || std::fabs(pub.yaw) < 2.f;

    if (!stalePubYaw && hasPub) {
        g_camera = pub;
    } else if (hasPriv) {
        // TPS: keep location + rotation from the same POV (mixing caches causes parallax drift).
        g_camera = priv;
        if (priv.fov < 1.f && hasPub && pub.fov > 1.f) {
            g_camera.fov = pub.fov;
        }
        if (std::fabs(priv.pitch) > 50.f) {
            if (std::fabs(cp) > 2.f && std::fabs(cp) < 75.f) {
                g_camera.pitch = cp;
            } else if (hasPub && std::fabs(pub.pitch) < 50.f) {
                g_camera.pitch = pub.pitch;
            } else {
                g_camera.pitch = 0.f;
            }
        }
        if (std::fabs(priv.yaw) < 2.f) {
            if (std::fabs(cy) > 2.f) {
                g_camera.yaw = cy;
            } else if (hasPub && std::fabs(pub.yaw) > 2.f) {
                g_camera.yaw = pub.yaw;
            } else {
                uintptr_t pawn = getZZ(playerController + AcknowledgedPawn);
                const float py = ReadPawnYaw(pawn);
                if (std::fabs(py) > 2.f) {
                    g_camera.yaw = py;
                }
            }
        }
    } else if (hasPub) {
        g_camera = pub;
        if (std::fabs(cy) > 2.f) {
            g_camera.yaw = cy;
        }
    }

    if (std::fabs(g_camera.pitch) > 85.f) {
        g_camera.pitch = 0.f;
    }
    if (std::fabs(g_camera.pitch) < 2.f && std::fabs(cp) > 2.f && std::fabs(cp) < 75.f) {
        g_camera.pitch = cp;
    }

    g_camera.aspect = getFloat((stalePubYaw && hasPriv) ? privPov + POVAspectRatio
                                                         : pubPov + POVAspectRatio);
    if (g_camera.aspect < 0.01f && hasPub) {
        g_camera.aspect = pub.aspect;
    }
    if (g_camera.fov < 1.f) {
        g_camera.fov = 90.f;
    }

    g_camera.valid = true;
    return true;
}

uint8_t ReadTeamId(uintptr_t playerState)
{
    using namespace FarlightOff;
    uintptr_t teamInfo = getZZ(playerState + TeamInfo);
    if (!teamInfo)
        return 0;
    return static_cast<uint8_t>(getDword(teamInfo + FarlightOff::TeamID));
}

bool IsEnemy(uintptr_t selfPawn, uintptr_t enemyPawn)
{
    if (!enemyPawn)
        return false;
    uintptr_t enemyPS = getZZ(enemyPawn + FarlightOff::PlayerState);
    return ShouldDrawPawn(selfPawn, enemyPawn, enemyPS, false);
}

float ReadHealthPercent(uintptr_t pawn)
{
    using namespace FarlightOff;
    uintptr_t asc = getZZ(pawn + SolarAbilitySystemComponent);
    if (!asc)
        return 100.f;

    uintptr_t attrArray = getZZ(asc + SpawnedAttributes);
    int attrCount = getDword(asc + SpawnedAttributes + sizeof(uintptr_t));
    if (!attrArray || attrCount <= 0)
        return 100.f;

    for (int i = 0; i < attrCount && i < 6; ++i) {
        uintptr_t attrSet = getZZ(attrArray + static_cast<uintptr_t>(i) * sizeof(uintptr_t));
        if (!attrSet)
            continue;
        float hpMax = getFloat(attrSet + MaxHealthAttr + AttributeCurrentValue);
        float hpCur = getFloat(attrSet + CurrentHealthAttr + AttributeCurrentValue);
        if (hpMax > 1.f)
            return hpCur / hpMax * 100.f;
        if (hpCur > 0.f)
            return hpCur;
    }
    return 100.f;
}

void CollectEsp(std::vector<FarlightEspEntry>& out)
{
    out.clear();
    memset(&g_scanStats, 0, sizeof(g_scanStats));
    using namespace FarlightOff;

    if (g_ue4Base == 0)
        g_ue4Base = Memory::FindModuleBase("libUE4.so");
    if (g_ue4Base == 0) {
        SetFailReason("no_ue4");
        return;
    }

    int sw = g_screenW.load();
    int sh = g_screenH.load();
    if (sw <= 0 || sh <= 0) {
        sw = 2400;
        sh = 1080;
    }
    NormalizeLandscape(sw, sh);

    uintptr_t world = ResolveWorld(g_ue4Base);
    if (!world) {
        SetFailReason("no_world");
        return;
    }

    uintptr_t playerController = 0;
    uintptr_t selfPawn = 0;
    uintptr_t gameState = 0;
    uintptr_t playerArray = 0;
    int playerCount = 0;
    ResolveLocalChain(world, playerController, selfPawn, gameState, playerArray, playerCount);

    if (!playerController) {
        SetFailReason("no_player_controller");
        return;
    }

    if (!ReadCameraView(playerController)) {
        SetFailReason("no_view_matrix");
        return;
    }

    if (selfPawn)
        ReadPawnPos(selfPawn, g_selfX, g_selfY, g_selfZ);

    // Training / FFA: first pass relaxed (show all except self). If nothing found, strict team filter.
    const bool relaxTeam = true;
    std::unordered_set<uintptr_t> seen;
    ScanPlayerArray(selfPawn, playerArray, playerCount, sw, sh, relaxTeam, out, seen);
    int levelActors = 0;
    if (static_cast<int>(out.size()) < 1) {
        uintptr_t level = getZZ(world + PersistentLevel);
        uintptr_t cluster = level ? getZZ(level + LevelActorCluster) : 0;
        if (cluster)
            levelActors = getDword(cluster + ActorClusterActors + sizeof(uintptr_t));
        ScanLevelActors(selfPawn, world, sw, sh, relaxTeam, out, seen);
    }
    if (static_cast<int>(out.size()) < 1 && relaxTeam) {
        ScanPlayerArray(selfPawn, playerArray, playerCount, sw, sh, false, out, seen);
        if (out.empty())
            ScanLevelActors(selfPawn, world, sw, sh, false, out, seen);
    }

    if (out.empty())
        SetFailReason("no_targets");
    else
        SetFailReason("ok");

    static auto lastLog = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    if (std::chrono::duration_cast<std::chrono::seconds>(now - lastLog).count() >= 5) {
        lastLog = now;
        g_lastDebugCount.store(static_cast<int>(out.size()));
        __android_log_print(ANDROID_LOG_INFO, kTag,
                            "scan reason=%s world=%p pc=%p pawn=%p players=%d levelActors=%d targets=%d "
                            "rej(null=%d filt=%d pos=%d w2s=%d box=%d added=%d valid=%d) "
                            "cam fov=%.1f pitch=%.1f yaw=%.1f loc=(%.0f,%.0f,%.0f) screen=%dx%d",
                            g_failReason, (void*)world, (void*)playerController, (void*)selfPawn,
                            playerCount, levelActors, static_cast<int>(out.size()),
                            g_scanStats.nullPawn, g_scanStats.filtered, g_scanStats.noPos,
                            g_scanStats.behindCam, g_scanStats.badBox, g_scanStats.added,
                            g_scanStats.validPawns, g_camera.fov, g_camera.pitch, g_camera.yaw,
                            g_camera.camX, g_camera.camY, g_camera.camZ, sw, sh);
    }
}

void ReaderLoop()
{
    __android_log_print(ANDROID_LOG_INFO, kTag, "reader thread start pid=%d", getpid());
    while (g_ue4Base == 0) {
        g_ue4Base = Memory::FindModuleBase("libUE4.so");
        if (g_ue4Base != 0)
            break;
        sleep(1);
    }

    std::vector<FarlightEspEntry> scratch;
    while (true) {
        CollectEsp(scratch);
        {
            std::lock_guard<std::mutex> lock(g_mutex);
            g_entries.swap(scratch);
            PublishEntriesLocked();
        }
        usleep(16 * 1000);
    }
}

} // namespace

extern "C" void farlight_esp_fill_response(int sw, int sh, FarlightEspEntry *out, int maxOut,
                                             int *outCount)
{
    if (outCount != nullptr) {
        *outCount = 0;
    }
    if (out == nullptr || maxOut <= 0) {
        return;
    }
    if (sw > 0) {
        NormalizeLandscape(sw, sh);
        g_screenW.store(sw);
    }
    if (sh > 0) {
        g_screenH.store(sh);
    }
    std::vector<FarlightEspEntry> scratch;
    CollectEsp(scratch);
    int count = static_cast<int>(scratch.size());
    if (count > maxOut) {
        count = maxOut;
    }
    if (count > 0) {
        memcpy(out, scratch.data(), static_cast<size_t>(count) * sizeof(FarlightEspEntry));
    }
    if (outCount != nullptr) {
        *outCount = count;
    }
}

extern "C" {

void farlight_esp_reader_start(void)
{
    if (g_started.exchange(true))
        return;
    std::thread(ReaderLoop).detach();
}

void farlight_esp_reader_set_screen(int width, int height)
{
    g_screenW.store(width > 0 ? width : 0);
    g_screenH.store(height > 0 ? height : 0);
}

int farlight_esp_reader_poll(FarlightEspEntry *out, int maxOut)
{
    if (!out || maxOut <= 0)
        return 0;
    std::lock_guard<std::mutex> lock(g_mutex);
    const int count = static_cast<int>(g_entries.size()) < maxOut
                              ? static_cast<int>(g_entries.size())
                              : maxOut;
    if (count > 0)
        memcpy(out, g_entries.data(), static_cast<size_t>(count) * sizeof(FarlightEspEntry));
    return count;
}

int farlight_esp_reader_count(void)
{
    std::lock_guard<std::mutex> lock(g_mutex);
    return static_cast<int>(g_entries.size());
}

void farlight_esp_set_publish_callback(FarlightEspPublishFn fn)
{
    g_publish_fn = fn;
    __android_log_print(ANDROID_LOG_INFO, kTag, "publish callback set fn=%p", fn);
    if (fn) {
        std::lock_guard<std::mutex> lock(g_mutex);
        PublishEntriesLocked();
    }
}

} // extern "C"
