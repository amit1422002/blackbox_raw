// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum LimNativeWidget.EAgoraGameSubscribeOption
enum class EAgoraGameSubscribeOption : uint8_t
{
	None = 0,
	Room = 1,
	Team = 2,
	RoomAndTeam = 3,
	EAgoraGameSubscribeOption_MAX = 4
};

// Object: Enum LimNativeWidget.EAgoraGamePublishOption
enum class EAgoraGamePublishOption : uint8_t
{
	None = 0,
	Room = 1,
	Team = 2,
	EAgoraGamePublishOption_MAX = 3
};

// Object: Enum LimNativeWidget.ERTCAudioRouteRecvType
enum class ERTCAudioRouteRecvType : uint8_t
{
	RecvInquireError = 0,
	NotRecvFromAnyone = 1,
	RecvFromAll = 2,
	RecvBlacklist = 3,
	RecvWhitelist = 4,
	ERTCAudioRouteRecvType_MAX = 5
};

// Object: Enum LimNativeWidget.ERTCAudioRouteSendType
enum class ERTCAudioRouteSendType : uint8_t
{
	InquireError = 0,
	NotSendToAnyone = 1,
	SendToAll = 2,
	SendBlacklist = 3,
	SendWhitelist = 4,
	ERTCAudioRouteSendType_MAX = 5
};

// Object: Enum LimNativeWidget.ERTCRangeAudioMode
enum class ERTCRangeAudioMode : uint8_t
{
	World = 0,
	Team = 1,
	ERTCRangeAudioMode_MAX = 2
};

// Object: Enum LimNativeWidget.EAgoraAudioRoute
enum class EAgoraAudioRoute : uint8_t
{
	ROUTE_HEADSET = 0,
	ROUTE_EARPIECE = 1,
	ROUTE_HEADSETNOMIC = 2,
	ROUTE_SPEAKERPHONE = 3,
	ROUTE_LOUDSPEAKER = 4,
	ROUTE_HEADSETBLUETOOTH = 5,
	ROUTE_USB = 6,
	ROUTE_HDMI = 7,
	ROUTE_DISPLAYPORT = 8,
	ROUTE_AIRPLAY = 9,
	ROUTE_BLUETOOTH_SPEAKER = 10,
	ROUTE_MAX = 11
};

// Object: Enum LimNativeWidget.EIOSAudioPermissionState
enum class EIOSAudioPermissionState : uint8_t
{
	AudioPermission_Unknown = 0,
	AudioPermission_Undetermined = 1,
	AudioPermission_Denied = 2,
	AudioPermission_Granted = 3,
	AudioPermission_MAX = 4
};

// Object: ScriptStruct LimNativeWidget.RTCDeviceInfo
// Size: 0x30 (Inherited: 0x0)
struct FRTCDeviceInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FString DeviceID; // 0x8(0x10)
	struct FString DeviceName; // 0x18(0x10)
	bool bNewDevice; // 0x28(0x1)
	bool bUsedDevice; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

// Object: ScriptStruct LimNativeWidget.AgoraUserUpdateData
// Size: 0x20 (Inherited: 0x0)
struct FAgoraUserUpdateData
{
	struct TArray<int32_t> UserIDList; // 0x0(0x10)
	struct TArray<int32_t> UserVolumeList; // 0x10(0x10)
};

// Object: ScriptStruct LimNativeWidget.RTCUserUpdateData
// Size: 0x10 (Inherited: 0x0)
struct FRTCUserUpdateData
{
	struct TArray<struct FString> UserList; // 0x0(0x10)
};

} // namespace SDK
