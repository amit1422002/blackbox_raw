#include <cstdint>
#include <thread>
#include <chrono>
#include <android/log.h>

#include "../Header/Header.hpp"
#include "../Header/ANwCreator.hpp"
#include "../Render/AImGui.hpp"
#include "Font.h"
#include "android_native_app_glue.h"
#include "FarlightOffsets.hpp"
#include <cmath>
#include <cstring>
#include <dlfcn.h>

#ifndef FARLIGHT_ESP_LOADER
#include "T3/T3验证.h"
#endif
android_app* g_App = nullptr;
bool 显示方框 = true, 显示射线 = true, 显示人数, 显示血量 = true, 显示名字;
uintptr_t libUE4_Base,G_SAFE,libtdmqimei,libgcloud模块头;
long int 打印地址;
int Widtih=0;
int Higtih=0;
bool MemuSwitch=true;
bool 获取地址;
bool 链接模块;
#include "内存工具.h"
#include "Vector.h"
float 自身坐标x,自身坐标y,自身坐标z;
float 敌人坐标x,敌人坐标y,敌人坐标z;
bool 人物内透,枪械自瞄,枪械范围,开启离线,注入过检测,关闭离线;
int ActorCount1;

/*
void 绘制加粗文本(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.1, y-0.1}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.1, y+0.1}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}*/

static char BQAQSQEQ[128] = {"mhGBjAUHeS8fr3Z1nsKuNbt7xWciqoy/dlzkT06FEJQLMOwIC4YX5pgvRaD2P9+V"};
#ifdef FARLIGHT_ESP_LOADER
static bool isLogin = false;
#else
char *内容2 = NULL;
std::string getClipboardText() {
if (!g_App)
return "";
auto activity = g_App->activity;
if (!activity)
return "";

auto vm = activity->vm;
if (!vm)
return "";

auto object = activity->clazz;
if (!object)
return "";

std::string result;

JNIEnv *env;
vm->AttachCurrentThread(&env, 0);
{
auto ContextClass = env->FindClass("android/content/Context");
auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

auto str = env->NewStringUTF("clipboard");
auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
env->DeleteLocalRef(str);

auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

auto text = env->CallObjectMethod(clipboardManager, getText);
if (text) {
str = (jstring) env->CallObjectMethod(text, toStringMethod);
result = env->GetStringUTFChars(str, 0);
env->DeleteLocalRef(str);
env->DeleteLocalRef(text);
}

env->DeleteLocalRef(CharSequenceClass);
env->DeleteLocalRef(ClipboardManagerClass);
env->DeleteLocalRef(clipboardManager);
env->DeleteLocalRef(ContextClass);
}
vm->DetachCurrentThread();

return result;
}
const char *GetAndroidID(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass("android/content/Context");
jmethodID getContentResolverMethod = env->GetMethodID(contextClass, "getContentResolver", "()Landroid/content/ContentResolver;");
jclass settingSecureClass = env->FindClass("android/provider/Settings$Secure");
jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, "getString", "(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;");

auto obj = env->CallObjectMethod(context, getContentResolverMethod);
auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF("android_id"));
return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
jclass buildClass = env->FindClass("android/os/Build");
jfieldID modelId = env->GetStaticFieldID(buildClass, "MODEL", "Ljava/lang/String;");

auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
jclass buildClass = env->FindClass("android/os/Build");
jfieldID modelId = env->GetStaticFieldID(buildClass, "BRAND", "Ljava/lang/String;");

auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass("android/content/Context");
jmethodID getPackageNameId = env->GetMethodID(contextClass, "getPackageName", "()Ljava/lang/String;");

auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
jclass uuidClass = env->FindClass("java/util/UUID");

auto len = strlen(uuid);

jbyteArray myJByteArray = env->NewByteArray(len);
env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, "nameUUIDFromBytes", "([B)Ljava/util/UUID;");
jmethodID toStringMethod = env->GetMethodID(uuidClass, "toString", "()Ljava/lang/String;");

auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
return env->GetStringUTFChars(str, 0);
}




static char s[64];
static bool isLogin = false; // skip T3 card login — set true to restore vendor auth UI
char *appkey = "1a5ea7eb949d5943c406e835aeeb196c";
char *登录调用码 = "FE32868A16610F5B";
char *公告调用码 = "3BD18C109E7F331F";
char *解绑调用码 = "65720692D25CFF24";
char *提示 = "";
static bool 错误提示 = false;
char *公告 = httppost("w.t3data.net",公告调用码, "");
std::string Login(const char *user_key) {
if (!g_App)
return "内部错误";
auto activity = g_App->activity;
if (!activity)
return "内部错误";

auto vm = activity->vm;
if (!vm)
return "内部错误"; 

auto object = activity->clazz;
if (!object)
return "内部错误";

JNIEnv *env;
vm->AttachCurrentThread(&env, 0);
std::string hwid = user_key;

hwid += GetAndroidID(env, object);
hwid += GetDeviceModel(env);
hwid += GetDeviceBrand(env);
std::string UUID = getHEX(加64(GetAndroidID(env, object)));
vm->DetachCurrentThread();
std::string errMsg;

//时间戳效验
time_t ti = time(NULL);
static char sj[13];
获取时间戳(sj);
std::string sjc = getHEX(加64(sj));

//单码签名校验
char sign2[256];
sprintf(sign2, "kami=%s&imei=%s&t=%s&%s", getHEX(加64(user_key)), UUID.c_str(), sjc.c_str(), appkey);
char sign2md5[32] = { 0 };
获取MD5(sign2, sign2md5);
std::string sign22 = getHEX(加64(sign2md5));

char 整[4096];
sprintf(整,"kami=%s&imei=%s&t=%s&s=%s", getHEX(加64(user_key)), UUID.c_str(), sjc.c_str(), sign22.c_str());
char *内容 = NULL;

char *数据 = httppost("w.t3data.net",登录调用码, 整);
char *公告 = httppost("w.t3data.net",公告调用码, 整);
内容 = 解64(数据);
内容2 = 解64(公告);
if (strncmp(内容, "登录成功:200;", 12) == 0)
{
char *卡密ID = strstrstr(内容, "卡密ID:", ";");
到期时间 = strstrstr(内容, "到期时间:", ";");
char *到期时间 = strstrstr(内容, "当前时间戳:", ";");
char *当前时间 = strstrstr(内容, "当前时间:", ";");
char *效验密钥 = strstrstr(内容, "效验密钥", ";");
//获取时间戳(sj);
long vs1 = (long)atoll(sj);
long vs2 = (long)atoll(当前时间);
if ((vs1 - vs2) < 18)
{
isLogin = false;
}
else
{
错误提示 = true;
提示 = "时间戳效验失败";
}
}
else
{
错误提示 = true;
提示 = 内容;
}
return "OK";
}
std::string Unbind(const char *user_key) {
char 解绑整[256];
sprintf(解绑整,"kami=%s", user_key);
char *解绑数据 = httppost("w.t3data.net",解绑调用码, 解绑整);
错误提示 = true;
提示 = 解绑数据;
return "OK";
}
#endif // !FARLIGHT_ESP_LOADER


#include "DrawTools.h"
struct Vec2 {
    float x;
    float y;
    Vec2() {
        this->x = 0;
        this->y = 0;
    }
    Vec2(float x, float y) {
        this->x = x;
        this->y = y;
    }
    Vec2 operator+(float v) const {
        return Vec2(x + v, y + v);
    }
    Vec2 operator-(float v) const {
        return Vec2(x - v, y - v);
    }
    Vec2 operator*(float v) const {
        return Vec2(x * v, y * v);
    }
    Vec2 operator/(float v) const {
        return Vec2(x / v, y / v);
    }
    Vec2& operator+=(float v) {
        x += v; y += v; return *this;
    }
    Vec2& operator-=(float v) {
        x -= v; y -= v; return *this;
    }
    Vec2& operator*=(float v) {
        x *= v; y *= v; return *this;
    }
    Vec2& operator/=(float v) {
        x /= v; y /= v; return *this;
    }
    Vec2 operator+(const Vec2& v) const {
        return Vec2(x + v.x, y + v.y);
    }
    Vec2 operator-(const Vec2& v) const {
        return Vec2(x - v.x, y - v.y);
    }
    Vec2 operator*(const Vec2& v) const {
        return Vec2(x * v.x, y * v.y);
    }
    Vec2 operator/(const Vec2& v) const {
        return Vec2(x / v.x, y / v.y);
    }
    Vec2& operator+=(const Vec2& v) {
        x += v.x; y += v.y; return *this;
    }
    Vec2& operator-=(const Vec2& v) {
        x -= v.x; y -= v.y; return *this;
    }
    Vec2& operator*=(const Vec2& v) {
        x *= v.x; y *= v.y; return *this;
    }
    Vec2& operator/=(const Vec2& v) {
        x /= v.x; y /= v.y; return *this;
    }
};

// 信息绘制函数
void DrawHealth(Vec2 box, float w, float iHealth, uint32_t TeamID, char* name)
{

float cornerRadius = 0.0f;
float x = box.x;
float y = box.y;

float 差值;
if (TeamID > 99) TeamID = TeamID / 2;
if (TeamID > 9) 差值 = 3; else 差值 = 0;
char TeamText[50];
sprintf(TeamText, "%d.%s", TeamID, name);
char Teamid[50];
sprintf(Teamid, "%d", TeamID);
/*枫埜泛滥 泛滥频道@JSCNB666 枫埜泛滥 泛滥频道@JSCNB666枫埜泛滥 泛滥频道@JSCNB666枫埜泛滥 泛滥频道@JSCNB666枫埜泛滥 泛滥频道@JSCNB666   */
ImColor healthColor = iHealth == 100.0f ? ImColor(255, 255, 255, 120) :iHealth >= 75.0f ? ImColor(255, 255, 255, 120) :iHealth >= 50.0f ? ImColor(255, 150, 150, 120) :iHealth >= 25.0f ? ImColor(255, 80, 80, 120) :ImColor(255, 0, 0, 120);
/*枫埜泛滥 泛滥频道@JSCNB666 枫埜泛滥 泛滥频道@JSCNB666枫埜泛滥 泛滥频道@JSCNB666枫埜泛滥 泛滥频道@JSCNB666枫埜泛滥 泛滥频道@JSCNB666   */
if (显示血量) {
    float width = 152;
    float height = 28;
    float offset = 9.0f;

    ImVec2 topLeft(x - 75, y - 31);
    ImVec2 topRight(x - 75 + (iHealth * 150 / 100), y - 31);
    ImVec2 bottomLeft(x - 75 + offset, y - 6);
    ImVec2 bottomRight(x - 75 + offset + (iHealth * 150 / 100), y - 6);

    ImColor strokeColor(0, 0, 0, 255);
    float strokeWidth = 2.0f;
    ImGui::GetBackgroundDrawList()->AddQuad(topLeft, {x + 75, y - 32}, {x + 75 + offset, y - 5}, {x - 75 + offset, y - 4}, strokeColor, strokeWidth);

    if (iHealth > 0)
        ImGui::GetBackgroundDrawList()->AddQuadFilled(topLeft, topRight, bottomRight, bottomLeft, ImColor(arr[TeamID % length]));
}


    auto textSize_信息 = ImGui::GetFont()->CalcTextSizeA(27, FLT_MAX, -1, TeamText, NULL, NULL);
    DrawTf.绘制字体描边(25, x - (textSize_信息.x / 2), box.y - 17 - (textSize_信息.y / 2), ImVec4{255, 255, 255, 120}, TeamText);

}

ImColor bone_color;
ImColor bone_redColor = ImColor(ImVec4(255/255.f, 0/255.f, 0/255.f, 255/255.f));
ImColor bone_greenColor = ImColor(ImVec4(0/255.f, 255/255.f, 0/255.f, 255/255.f));
ImColor blueColor = ImColor(ImVec4(36/255.f, 249/255.f, 217/255.f, 255/255.f));
ImColor whiteColor = ImColor(ImVec4(255/255.f, 255/255.f, 258/255.f, 1.0f));
ImColor blackColor = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 1.0f));
ImColor halflackColor = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.3f));
ImColor health_Color = ImColor(ImVec4(93,255,174, 0.85f));
ImColor vehicle_color = ImColor(ImVec4(255/255.f,240/255.f,0/255.f,255/255.f));
ImColor rifle_color = ImColor(ImVec4(255/255.f,0/255.f,0/255.f,255.f/255.f));
ImColor submachine_color = ImColor(ImVec4(255/255.f,110/255.f,180/255.f,255.f/255.f));
ImColor snipe_color = ImColor(ImVec4(144/255.f,238/255.f,0/255.f,255.f/255.f));
ImColor box_color = ImColor(ImVec4(255/255.f,192/255.f,203/255.f,255.f/255.f));
ImColor drop_color = ImColor(ImVec4(255/255.f,0/255.f,0/255.f,255.f/255.f));
ImColor drug_color = ImColor(ImVec4(255/255.f,105/255.f,180/255.f,255.f/255.f));
ImColor armor_color = ImColor(ImVec4(255/255.f,215/255.f,0/255.f,255.f/255.f));
ImColor color_556 = ImColor(ImVec4(0/255.f,255/255.f,0/255.f,255.f/255.f));
ImColor color_762 = ImColor(ImVec4(255/255.f,255/255.f,0/255.f,255.f/255.f));
ImColor mirror_color = ImColor(ImVec4{255.f/255.f,144.f/255.f,0.f/255.f,255.f/255.f});
ImColor otherparts_color = ImColor(ImVec4{245.f/255.f,245.f/255.f,245.f/255.f,255.f/255.f});
ImColor expansion_color = ImColor(ImVec4{208.f/255.f,128.f/255.f,114.f/255.f,255.f/255.f});
ImColor aim_color = ImColor(ImVec4(255/255.f,0/255.f,0/255.f,255/255.f));
ImColor redColor = ImColor(ImVec4(255/255.f, 0/255.f, 0/255.f, 255/255.f));
ImColor greenColor = ImColor(ImVec4(50/255.f, 222/215.f, 50/255.f, 200/255.f));
ImColor yellowColor = ImColor(ImVec4(255/255.f, 215/255.f, 0/255.f, 200/255.f));
ImColor jbColor = ImColor(225,255, 255);
ImColor 红色 = ImColor(ImVec4(255/255.f, 0/255.f, 0/255.f, 255/255.f));
ImColor 绿色 = ImColor(ImVec4(0/255.f, 255/255.f, 0/255.f, 255/255.f));
ImColor 掩体颜色;
//bool 漏打 = true;
ImColor red50Color = ImVec4(255/255.f, 0/255.f, 0/255.f, 100/255.f);
ImColor green50Color = ImColor(ImVec4(0/255.f, 255/255.f, 0/255.f, 100/255.f));
ImColor 浅蓝 = ImColor(ImVec4(36/255.f, 249/255.f, 217/255.f, 255/255.f));
ImColor 蓝色 = ImColor(ImVec4(170/255.f, 203/255.f, 244/255.f, 0.95f));
ImColor 白色 = ImColor(ImVec4(255/255.f, 255/255.f, 258/255.f, 0.95f));
ImColor 浅粉 = ImColor(ImVec4(255/255.f, 200/255.f, 250/255.f, 0.95f));
ImColor 黑色 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.7f));
ImColor 半黑 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.18f));
ImColor 血色 = ImColor(ImVec4(0/255.f, 249/255.f, 0/255.f, 0.35f));

ImColor 黄色 = ImColor(ImVec4(255/255.f, 255/255.f, 0/255.f, 0.95f));
ImColor 橘黄 = ImColor(ImVec4(255/255.f, 150/255.f, 30/255.f, 0.95f));
ImColor 粉红 = ImColor(ImVec4(220/255.f, 108/255.f, 1202/255.f, 0.95f));
ImColor 紫色 = ImColor(ImVec4(169/255.f, 120/255.f, 223/255.f, 0.95f));
ImColor 青绿 = ImColor(ImVec4(145/255.f,232/255.f,135/255.f,255/255.f));

// 保存全局引用
uintptr_t 矩阵地址,世界地址,自身地址,数组地址,团队地址,UE4模块头,SAFA模块头,ObjectAddress;
int ObjectCount,TeamID;

float angle, tempDis, X, Y, W, MIDDLE, Distance, Health, Fuel, Health1, top1, TOP, BOTTOM;
bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
void WriteInt(uintptr_t addr,int var){
    WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),8);
}

static bool ReadPawnPos(uintptr_t pawn, float& ox, float& oy, float& oz)
{
    using namespace FarlightOff;
    uintptr_t movement = getZZ(pawn + CharacterMovement);
    if (movement)
    {
        ox = getFloat(movement + LastUpdateLocation);
        oy = getFloat(movement + LastUpdateLocation + 4);
        oz = getFloat(movement + LastUpdateLocation + 8);
        if (std::fabs(ox) + std::fabs(oy) + std::fabs(oz) > 1.f)
            return true;
    }
    uintptr_t root = getZZ(pawn + RootComponent);
    if (root)
    {
        ox = getFloat(root + CompWorldTranslation);
        oy = getFloat(root + CompWorldTranslation + 4);
        oz = getFloat(root + CompWorldTranslation + 8);
        if (std::fabs(ox) + std::fabs(oy) + std::fabs(oz) > 1.f)
            return true;
    }
    return false;
}

static void MatrixMultiplyColumnMajor(const float* a, const float* b, float* out)
{
    for (int col = 0; col < 4; ++col)
    {
        for (int row = 0; row < 4; ++row)
        {
            float sum = 0.f;
            for (int k = 0; k < 4; ++k)
                sum += a[row + k * 4] * b[k + col * 4];
            out[row + col * 4] = sum;
        }
    }
}

static bool BuildViewMatrix(uintptr_t playerController)
{
    using namespace FarlightOff;
    uintptr_t camMgr = getZZ(playerController + PlayerCameraManager);
    if (!camMgr)
        return false;

    uintptr_t pov = camMgr + CameraCache + CameraCachePOV;
    float camX = getFloat(pov + POVLocation);
    float camY = getFloat(pov + POVLocation + 4);
    float camZ = getFloat(pov + POVLocation + 8);
    float pitch = getFloat(pov + POVRotation);
    float yaw = getFloat(pov + POVRotation + 4);
    float roll = getFloat(pov + POVRotation + 8);
    float fov = getFloat(pov + POVFOV);
    float aspect = getFloat(pov + POVAspectRatio);
    if (fov < 1.f)
        fov = 90.f;
    if (aspect < 0.01f && Higtih > 0)
        aspect = (float)Widtih / (float)Higtih;

    constexpr float kPi = 3.14159265f;
    float radPitch = pitch * kPi / 180.f;
    float radYaw = yaw * kPi / 180.f;
    float radRoll = roll * kPi / 180.f;
    float SP = sinf(radPitch), CP = cosf(radPitch);
    float SY = sinf(radYaw), CY = cosf(radYaw);
    float SR = sinf(radRoll), CR = cosf(radRoll);

    float view[16];
    memset(view, 0, sizeof(view));
    view[0] = CP * CY;
    view[1] = CP * SY;
    view[2] = SP;
    view[4] = SR * SP * CY - CR * SY;
    view[5] = SR * SP * SY + CR * CY;
    view[6] = -SR * CP;
    view[8] = -(CR * SP * CY + SR * SY);
    view[9] = CY * SR - CR * SP * SY;
    view[10] = CR * CP;
    view[12] = -(view[0] * camX + view[4] * camY + view[8] * camZ);
    view[13] = -(view[1] * camX + view[5] * camY + view[9] * camZ);
    view[14] = -(view[2] * camX + view[6] * camY + view[10] * camZ);
    view[15] = 1.f;

    float tanHalf = tanf(fov * kPi / 360.f);
    if (tanHalf < 0.001f)
        tanHalf = 0.001f;
    float proj[16];
    memset(proj, 0, sizeof(proj));
    proj[0] = 1.f / tanHalf / aspect;
    proj[5] = 1.f / tanHalf;
    proj[10] = 0.f;
    proj[11] = -1.f;
    proj[14] = -10.f;
    proj[15] = 0.f;

    MatrixMultiplyColumnMajor(view, proj, matrix);
    return true;
}

static uint8_t ReadTeamId(uintptr_t playerState)
{
    using namespace FarlightOff;
    uintptr_t teamInfo = getZZ(playerState + TeamInfo);
    if (!teamInfo)
        return 0;
    return (uint8_t)getDword(teamInfo + TeamID);
}

static bool IsEnemy(uintptr_t selfPawn, uintptr_t enemyPawn)
{
    using namespace FarlightOff;
    if (!selfPawn || !enemyPawn || selfPawn == enemyPawn)
        return false;

    uintptr_t enemyPS = getZZ(enemyPawn + PlayerState);
    if (!enemyPS)
        return false;
    if (getDword(enemyPS + bIsSameTeamWithLocalPlayer) != 0)
        return false;

    uintptr_t selfPS = getZZ(selfPawn + PlayerState);
    if (!selfPS)
        return true;

    uint8_t selfTeam = ReadTeamId(selfPS);
    uint8_t enemyTeam = ReadTeamId(enemyPS);
    if (selfTeam != 0 && enemyTeam != 0 && selfTeam == enemyTeam)
        return false;
    return true;
}

static float ReadHealthPercent(uintptr_t pawn)
{
    using namespace FarlightOff;
    uintptr_t asc = getZZ(pawn + SolarAbilitySystemComponent);
    if (!asc)
        return 100.f;

    uintptr_t attrArray = getZZ(asc + SpawnedAttributes);
    int attrCount = getDword(asc + SpawnedAttributes + sizeof(uintptr_t));
    if (!attrArray || attrCount <= 0)
        return 100.f;

    for (int i = 0; i < attrCount && i < 6; ++i)
    {
        uintptr_t attrSet = getZZ(attrArray + (uintptr_t)i * sizeof(uintptr_t));
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

static android_app* ResolveNativeApp(uintptr_t libUE4)
{
    void* ue = dlopen("libUE4.so", RTLD_NOW | RTLD_NOLOAD);
    if (ue)
    {
        auto** sym = (android_app**)dlsym(ue, "GNativeAndroidApp");
        if (sym && *sym)
            return *sym;
    }
    if (FarlightOff::GNativeAndroidApp != 0)
        return *(android_app**)(libUE4 + FarlightOff::GNativeAndroidApp);
    return nullptr;
}

void hook(){
    // Farlight — no Valorant/libgcloud patches here.
}

void RenderData(ImDrawList *draw) 
{
ObjectCount = 0;

if(UE4模块头==0){  
UE4模块头 = Memory::FindModuleBase("libUE4.so");
}
    using namespace FarlightOff;

    uintptr_t world = getZZ(UE4模块头 + GWorld);
    if (!world)
        return;

    uintptr_t gameInstance = getZZ(world + OwningGameInstance);
    uintptr_t localPlayers = gameInstance ? getZZ(gameInstance + LocalPlayers) : 0;
    uintptr_t localPlayer = localPlayers ? getZZ(localPlayers) : 0;
    uintptr_t playerController = localPlayer ? getZZ(localPlayer + PlayerController) : 0;
    自身地址 = playerController ? getZZ(playerController + AcknowledgedPawn) : 0;

    uintptr_t gameState = getZZ(world + GameState);
    数组地址 = gameState ? getZZ(gameState + PlayerArray) : 0;
    ActorCount1 = gameState ? getDword(gameState + PlayerArray + sizeof(uintptr_t)) : 0;

    if (!BuildViewMatrix(playerController))
    {
        memset(matrix, 0, sizeof(matrix));
        return;
    }

    if (自身地址)
        ReadPawnPos(自身地址, 自身坐标x, 自身坐标y, 自身坐标z);

    uintptr_t selfPS = 自身地址 ? getZZ(自身地址 + PlayerState) : 0;
    团队地址 = selfPS ? ReadTeamId(selfPS) : 0;
	
    const int scanCount = ActorCount1 > 0 && ActorCount1 < MaxPlayerScan ? ActorCount1 : MaxPlayerScan;
	for (int i = 0; i < scanCount; i++)
    {
		uintptr_t playerStatePtr = 数组地址 ? getZZ(数组地址 + (uintptr_t)i * sizeof(uintptr_t)) : 0;
        if (!playerStatePtr)
            continue;

		ObjectAddress = getZZ(playerStatePtr + PawnPrivate);
        if (ObjectAddress == 0 || ObjectAddress == 自身地址)
            continue;

        if (!getZZ(ObjectAddress + Mesh))
            continue;

        if (!IsEnemy(自身地址, ObjectAddress))
            continue;

        if (!ReadPawnPos(ObjectAddress, 敌人坐标x, 敌人坐标y, 敌人坐标z))
            continue;

	camera = matrix[3] * 敌人坐标x + matrix[7] * 敌人坐标y + matrix[11] * 敌人坐标z + matrix[15];
        if (camera < 0.01f)
            continue;

        r_x = Widtih*0.5 + (matrix[0] * 敌人坐标x + matrix[4] * 敌人坐标y + matrix[8] * 敌人坐标z + matrix[12]) / camera * Widtih*0.5;
        r_y = Higtih*0.5 - (matrix[1] * 敌人坐标x + matrix[5] * 敌人坐标y + matrix[9] * (敌人坐标z - 5) + matrix[13]) / camera * Higtih*0.5;
        r_w = Higtih*0.5 - (matrix[1] * 敌人坐标x + matrix[5] * 敌人坐标y + matrix[9] * (敌人坐标z + 205) + matrix[13]) / camera * Higtih*0.5;

        X = r_x - (r_y - r_w) / 4;
        Y = r_y;
        W = (r_y - r_w) / 2;
        MIDDLE = X + W / 2;
        BOTTOM = Y + W;
        TOP = Y - W;     
        Distance = sqrt(pow(敌人坐标x - 自身坐标x, 2) + pow(敌人坐标y - 自身坐标y, 2) + pow(敌人坐标z - 自身坐标z, 2)) * 0.01;
   
            if (Distance > MaxDistanceM)
            {
                continue;
            }

            TeamID = ReadTeamId(playerStatePtr);
            Health = ReadHealthPercent(ObjectAddress);

            if (Health <= 0.f)
            {
                continue;
            }
          ObjectCount++;
		  
                   if (显示射线&&W>0)
                {
                  
         ///  draw->AddLine({Widtih*0.5, 118}, {MIDDLE, TOP - 71.0}, bone_color, 3);
		   draw->AddLine({static_cast<float>(Widtih*0.5), 118.0f}, 
              {static_cast<float>(MIDDLE), static_cast<float>(TOP - 71.0)}, 
              红色, 3);
              }
				
			
	           if (显示方框&&W>0)
                {
                ImGui::GetForegroundDrawList()->AddLine({X, TOP}, {X+(W/3), TOP}, ImColor(0, 253,254, 255), 2.5f);
                ImGui::GetForegroundDrawList()->AddLine({X+W, TOP}, {X+W-(W/3), TOP},ImColor(0, 253,254, 255), 2.5f);
                ImGui::GetForegroundDrawList()->AddLine({X, TOP}, {X, TOP+(W/3)},ImColor(0, 253,254, 255), 2.5f);
                ImGui::GetForegroundDrawList()->AddLine({X+W, TOP}, {X+W, TOP+(W/3)},ImColor(0, 253,254, 255), 2.5f);
                ImGui::GetForegroundDrawList()->AddLine({X, BOTTOM}, {X+(W/3), BOTTOM},ImColor(0, 253,254, 255), 2.5f);
                ImGui::GetForegroundDrawList()->AddLine({X+W, BOTTOM}, {X+W-(W/3), BOTTOM},ImColor(0, 253,254, 255), 2.5f);
                ImGui::GetForegroundDrawList()->AddLine({X, BOTTOM}, {X, BOTTOM-(W/3)},ImColor(0, 253,254, 255),2.5f);
                ImGui::GetForegroundDrawList()->AddLine({X+W, BOTTOM}, {X+W, BOTTOM-(W/3)},ImColor(0, 253,254, 255), 2.5f); 
             //       draw->AddRect({X, TOP}, {X + W, BOTTOM}, whiteColor, 0, 0, 3);
                }
				
				if(显示血量&&W>0){
					DrawHealth({MIDDLE, TOP }, W * 2, Health, TeamID, "RPG");
				}
	
	}/*
	        if (显示人数)
    {
      std::string count1;
        ImColor sColor;
        if (ObjectCount==0){
            count1 += "0";
            sColor = 绿色;
            draw->AddRectFilled({Widtih*0.5 - 150, 60}, {Widtih*0.5 + 150, 140},ImColor(ImVec4(0/255.f, 255/255.f, 0/255.f, 0.5f)) , 1, 0);
            auto textSize1 = ImGui::CalcTextSize(count1.c_str(), 0,7 45);
            绘制加粗文本(45, Widtih*0.5 - (textSize1.x / 2), 77, 白色, 白色, count1.c_str());
            
        }else{
            //count1 += std::to_string((int)plearzr + (int)plearbot);
            
            sColor = 红色;
            draw->AddRectFilled({Widtih*0.5 - 150, 60}, {Widtih*0.5 + 150, 140},ImColor(ImVec4(255/255.f, 0/255.f, 0/255.f, 0.5f)) , 1, 0);
            auto textSize1 = ImGui::CalcTextSize(count1.c_str(), 0, 45);
            绘制加粗文本(45, Widtih*0.5 - (textSize1.x / 2), 77,白色 , 白色, count1.c_str());
        }
        draw->AddCircleFilled({Widtih*0.5 , 125}, 3.1, sColor, 0);
    }
    */
}



#define GNativeAndroidApp_Offset FarlightOff::GNativeAndroidApp

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);
int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    // 音量键切换菜单（不拦截）
    if (AInputEvent_getType(inputEvent) == AINPUT_EVENT_TYPE_KEY) {
        int32_t keyCode = AKeyEvent_getKeyCode(inputEvent);
        int32_t action = AKeyEvent_getAction(inputEvent);
        
    }
    
    // 触摸事件处理
    if (AInputEvent_getType(inputEvent) == AINPUT_EVENT_TYPE_MOTION) {
        // 获取ImGui的IO
        ImGuiIO& io = ImGui::GetIO();
        
        // 如果菜单可见，让ImGui先处理

            int32_t handled = ImGui_ImplAndroid_HandleInputEvent(inputEvent);
            
            // 如果ImGui想要捕获这个事件（在可交互元素上），则返回处理结果
            if (io.WantCaptureMouse) {
                return handled;
            }
            
            // ImGui不想要捕获（点击在空白处或非交互区域），传递给游戏
            if (orig_onInputEvent) {
                return orig_onInputEvent(app, inputEvent);
            }
    }
    
    // 其他事件传递给原始处理器
    if (orig_onInputEvent) {
        return orig_onInputEvent(app, inputEvent);
    }
    
    return 0;
}

extern "C" void android_main(struct android_app* state) {
//    app_dummy();
	
}

void farlight_esp_main()
{
    std::thread([]
    {
        pid = getpid();
        __android_log_print(ANDROID_LOG_INFO, "FarlightEsp", "overlay start pid=%d", pid);

        while (Data.libUE4 <= 0)
        {
            Data.libUE4 = Memory::FindModuleBase("libUE4.so");
            if (Data.libUE4 > 0) break;
            sleep(1);
        }

        while (!g_App) {
            g_App = ResolveNativeApp(Data.libUE4);
            if (!g_App && GNativeAndroidApp_Offset != 0)
                g_App = *(android_app **) (Data.libUE4 + GNativeAndroidApp_Offset);
            sleep(1);
        }

        if (g_App->onInputEvent != onInputEvent) {
            orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
            g_App->onInputEvent = onInputEvent;
        }

        ANativeWindow* lastWindow = nullptr;
        ANativeActivity* currentActivity = nullptr;
        android::AImGui* imgui = nullptr;
        bool fontLoaded = false;
        
        while (true)
        {
            android_app* currentApp = ResolveNativeApp(Data.libUE4);
            if (!currentApp && GNativeAndroidApp_Offset != 0)
                currentApp = *(android_app**)(Data.libUE4 + GNativeAndroidApp_Offset);
            
            if (currentApp)
            {
                ANativeWindow* currentWindow = currentApp->window;
                
                if (currentWindow && currentWindow != lastWindow)
                {
                    if (imgui)
                    {
                        imgui->Destroy();
                        delete imgui;
                        imgui = nullptr;
                        fontLoaded = false;
                    }
                    
                    if (currentWindow) {
                        int32_t screenWidth = ANativeWindow_getWidth(currentWindow);
                        int32_t screenHeight = ANativeWindow_getHeight(currentWindow);
                        Widtih = screenWidth;
                        Higtih = screenHeight;
                    }
                    
                    ANativeActivity* activity = currentApp->activity;
                    if (activity)
                    {
                        imgui = new android::AImGui({activity, true});
                        lastWindow = currentWindow;
                        currentActivity = activity;
                    }
                }
                
                if (currentApp->activity && currentApp->activity != currentActivity)
                {
                    currentActivity = currentApp->activity;
                }
            }
            
            if (imgui && !fontLoaded) {
                ImGuiIO& io = ImGui::GetIO();
                io.Fonts->Clear();
                io.Fonts->AddFontDefault();
                io.Fonts->Build();
                io.FontGlobalScale = 1.5f;
                fontLoaded = true;
            }
            
            hook();
            if (imgui)
            {
                imgui->BeginFrame();

                    ImGui::SetNextWindowPos(ImVec2(100, 100), ImGuiCond_FirstUseEver);
                    ImGui::SetNextWindowSize(ImVec2(420, 320), ImGuiCond_FirstUseEver);
                    
    if (ImGui::Begin("Farlight ESP", nullptr, ImGuiWindowFlags_NoResize)) {
    ImGui::Text("Farlight 84 — Enemy ESP");
    ImGui::Checkbox("方框 ESP", &显示方框);
    ImGui::Checkbox("射线 ESP", &显示射线);
    ImGui::Checkbox("血量 ESP", &显示血量);
    ImGui::Text("敌人数量: %d", ObjectCount);
                        ImGui::Text("游戏帧率 %.3f ms/frame (%.1f FPS)", 
                            1000.0f / ImGui::GetIO().Framerate, 
                            ImGui::GetIO().Framerate);
                        
                        hook();
                        RenderData(ImGui::GetBackgroundDrawList());
                    } 
                ImGui::End();
                imgui->EndFrame();
            }
            
            std::this_thread::sleep_for(std::chrono::milliseconds(16));
        }
    }).detach();
}

#ifndef FARLIGHT_ESP_LOADER
__attribute__((constructor))
static void MyStart()
{
    farlight_esp_main();
}
#endif


