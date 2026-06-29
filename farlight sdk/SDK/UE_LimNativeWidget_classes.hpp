// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class LimNativeWidget.AgoraManager
// Size: 0x198 (Inherited: 0x28)
struct UAgoraManager : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FMulticastInlineDelegate OnPermissionResult; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEnterRoom; // 0x48(0x10)
	struct FMulticastInlineDelegate OnExitRoom; // 0x58(0x10)
	struct FMulticastInlineDelegate OnEnableWwiseInputSource; // 0x68(0x10)
	struct FMulticastInlineDelegate OnUpdateChannel_Lobby; // 0x78(0x10)
	struct FMulticastInlineDelegate OnUpdateChannel_Battle; // 0x88(0x10)
	struct FMulticastInlineDelegate OnConnectionChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnAgoraUserInfoUpdate; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnAgoraLocalInfoUpdate; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnUserRoomStateChange; // 0xC8(0x10)
	struct FMulticastInlineDelegate OnUserAudioStateChanged; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnAudioStateChanged; // 0xE8(0x10)
	struct FMulticastInlineDelegate OnSetSpeakerVolumeByUid; // 0xF8(0x10)
	struct TArray<int32_t> MuteUIDList; // 0x108(0x10)
	uint8_t Pad_0x118[0x80]; // 0x118(0x80)


	// Object: Function LimNativeWidget.AgoraManager.UnRegisterLuaEvent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterLuaEvent();

	// Object: Function LimNativeWidget.AgoraManager.UnInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32da580
	// Params: [ Num(0) Size(0x0) ]
	void UnInit();

	// Object: Function LimNativeWidget.AgoraManager.SwitchRoom
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32da09c
	// Params: [ Num(3) Size(0x24) ]
	void SwitchRoom(struct FString RoomID, struct FString AppToken, int32_t Uid);

	// Object: Function LimNativeWidget.AgoraManager.SetSubscribeAudioBlocklist
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32d9c88
	// Params: [ Num(4) Size(0x34) ]
	void SetSubscribeAudioBlocklist(struct TArray<int32_t>& OpenIDList, struct FString RoomID, struct FString TeamID, int32_t Uid);

	// Object: Function LimNativeWidget.AgoraManager.SetParameters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32d8a8c
	// Params: [ Num(1) Size(0x10) ]
	void SetParameters(struct FString InParam);

	// Object: Function LimNativeWidget.AgoraManager.SetChannelPublishSubscribeOption
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d9870
	// Params: [ Num(5) Size(0x28) ]
	void SetChannelPublishSubscribeOption(struct FString RoomID, struct FString TeamID, enum class EAgoraGamePublishOption SelectedPublishOption, enum class EAgoraGameSubscribeOption SelectedSubscribeOption, int32_t Uid);

	// Object: Function LimNativeWidget.AgoraManager.SetAudioSessionRestriction
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d8bf0
	// Params: [ Num(0) Size(0x0) ]
	void SetAudioSessionRestriction();

	// Object: Function LimNativeWidget.AgoraManager.SelectSpeak
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d8ee8
	// Params: [ Num(1) Size(0x10) ]
	void SelectSpeak(struct FString InDeviceID);

	// Object: Function LimNativeWidget.AgoraManager.SelectMic
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d8f9c
	// Params: [ Num(1) Size(0x10) ]
	void SelectMic(struct FString InDeviceID);

	// Object: Function LimNativeWidget.AgoraManager.PreInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32da644
	// Params: [ Num(1) Size(0x10) ]
	void PreInit(struct FString Appkey);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnUserRoomStateChange__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x1C) ]
	void OnUserRoomStateChange__DelegateSignature(bool EnterRoom, struct FString ChannelId, int32_t UserUID);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnUserInfoUpdateDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void OnUserInfoUpdateDelegate__DelegateSignature(struct TArray<int32_t>& UserList, struct TArray<int32_t>& UserVolumeList);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnUserAudioStateChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x1C) ]
	void OnUserAudioStateChanged__DelegateSignature(bool Muted, struct FString ChannelId, int32_t UserUID);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnUpdateChannelProDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(5) Size(0x2C) ]
	void OnUpdateChannelProDelegate__DelegateSignature(struct FString RoomChannelID, struct FString TeamChannelID, int32_t LocalUID, int32_t PublishOpt, int32_t SubscribeOption);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnUpdateChannelDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void OnUpdateChannelDelegate__DelegateSignature(struct FString RoomChannelID, int32_t LocalUID);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnLocalInfoUpdateDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x5) ]
	void OnLocalInfoUpdateDelegate__DelegateSignature(int32_t Volume, bool bVad);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnGameSetSpeakerVolumeByUidDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnGameSetSpeakerVolumeByUidDelegate__DelegateSignature(int32_t Uid, int32_t Volume);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnExitRoomDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void OnExitRoomDelegate__DelegateSignature(struct FString ChannelId, int32_t LocalUID);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnEnterRoomDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void OnEnterRoomDelegate__DelegateSignature(struct FString ChannelId, int32_t LocalUID);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnEnableWwiseInputSourceDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnEnableWwiseInputSourceDelegate__DelegateSignature(bool bEnabled);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnConnectionChangedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnConnectionChangedDelegate__DelegateSignature(int32_t State, int32_t Reason);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnAudioDeviceStateChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x18) ]
	void OnAudioDeviceStateChanged__DelegateSignature(struct FString DeviceID, int32_t DeviceType, int32_t DeviceState);

	// Object: DelegateFunction LimNativeWidget.AgoraManager.OnAndroidPermissionResult__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess);

	// Object: Function LimNativeWidget.AgoraManager.MuteRemoteAudioStream
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d96f4
	// Params: [ Num(4) Size(0x20) ]
	void MuteRemoteAudioStream(int32_t TargetUID, struct FString MuteRoomID, bool bMute, int32_t LocalUID);

	// Object: Function LimNativeWidget.AgoraManager.MuteLocalAudioStream
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d8904
	// Params: [ Num(4) Size(0x2C) ]
	void MuteLocalAudioStream(bool bMute, struct FString RoomID, struct FString TeamID, int32_t LocalUID);

	// Object: Function LimNativeWidget.AgoraManager.MediaMute
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d9e24
	// Params: [ Num(3) Size(0x24) ]
	void MediaMute(struct FString RoomID, struct FString TeamID, int32_t Uid);

	// Object: Function LimNativeWidget.AgoraManager.IsInRtcRoomEx
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32d9f64
	// Params: [ Num(3) Size(0x15) ]
	bool IsInRtcRoomEx(struct FString RoomID, int32_t Uid);

	// Object: Function LimNativeWidget.AgoraManager.IsInRtcRoom
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32da064
	// Params: [ Num(1) Size(0x1) ]
	bool IsInRtcRoom();

	// Object: Function LimNativeWidget.AgoraManager.IsInitialized
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32da520
	// Params: [ Num(1) Size(0x1) ]
	bool IsInitialized();

	// Object: Function LimNativeWidget.AgoraManager.InnerEnterRoom
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32da1f0
	// Params: [ Num(3) Size(0x24) ]
	void InnerEnterRoom(struct FString RoomID, struct FString AppToken, int32_t Uid);

	// Object: Function LimNativeWidget.AgoraManager.InnerEnableMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32d94e4
	// Params: [ Num(1) Size(0x1) ]
	void InnerEnableMic(bool bEnable);

	// Object: Function LimNativeWidget.AgoraManager.InitVoiceSDK
	// Flags: [Final|Native|Public]
	// Offset: 0x32da470
	// Params: [ Num(1) Size(0x1) ]
	void InitVoiceSDK(bool bEnableLog);

	// Object: Function LimNativeWidget.AgoraManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32da594
	// Params: [ Num(1) Size(0x1) ]
	void Init(bool bEnableLog);

	// Object: Function LimNativeWidget.AgoraManager.GetSpeakerList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32d9050
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FRTCDeviceInfo> GetSpeakerList();

	// Object: Function LimNativeWidget.AgoraManager.GetMicList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32d9174
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FRTCDeviceInfo> GetMicList();

	// Object: Function LimNativeWidget.AgoraManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32da70c
	// Params: [ Num(1) Size(0x8) ]
	struct UAgoraManager* GetInstance();

	// Object: Function LimNativeWidget.AgoraManager.GameSetSpeakerVolumeByUid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32d9298
	// Params: [ Num(3) Size(0xC) ]
	int32_t GameSetSpeakerVolumeByUid(int32_t Uid, int32_t Volume);

	// Object: Function LimNativeWidget.AgoraManager.GameSetSpeakerVolume
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32d9384
	// Params: [ Num(2) Size(0x8) ]
	int32_t GameSetSpeakerVolume(int32_t Volume);

	// Object: Function LimNativeWidget.AgoraManager.GameSetMicVolume
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32d9434
	// Params: [ Num(2) Size(0x8) ]
	int32_t GameSetMicVolume(int32_t MicVolume);

	// Object: Function LimNativeWidget.AgoraManager.FinishSDKInitation
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void FinishSDKInitation();

	// Object: Function LimNativeWidget.AgoraManager.ExitRoom
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32da1dc
	// Params: [ Num(0) Size(0x0) ]
	void ExitRoom();

	// Object: Function LimNativeWidget.AgoraManager.EnterRoomPro
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d9a30
	// Params: [ Num(7) Size(0x46) ]
	void EnterRoomPro(struct FString RoomID, struct FString TeamID, struct FString RoomToken, struct FString TeamToken, int32_t Uid, enum class EAgoraGamePublishOption PublishOpt, enum class EAgoraGameSubscribeOption SubscribeOpt);

	// Object: Function LimNativeWidget.AgoraManager.EnterRoom
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32da330
	// Params: [ Num(3) Size(0x24) ]
	void EnterRoom(struct FString RoomID, struct FString AppToken, int32_t Uid);

	// Object: Function LimNativeWidget.AgoraManager.EnableSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d9644
	// Params: [ Num(1) Size(0x1) ]
	void EnableSpeaker(bool bEnable);

	// Object: Function LimNativeWidget.AgoraManager.EnableParameters3A
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32d8b40
	// Params: [ Num(1) Size(0x1) ]
	void EnableParameters3A(bool bEnable);

	// Object: Function LimNativeWidget.AgoraManager.EnableMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32d9594
	// Params: [ Num(1) Size(0x1) ]
	void EnableMic(bool bEnable);

	// Object: Function LimNativeWidget.AgoraManager.EnableAudioIndicationEx
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d8c04
	// Params: [ Num(5) Size(0x24) ]
	void EnableAudioIndicationEx(int32_t Millions, int32_t Smooth, bool bReportVad, struct FString RoomID, int32_t LocalUID);

	// Object: Function LimNativeWidget.AgoraManager.EnableAudioIndication
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x32d8dbc
	// Params: [ Num(3) Size(0x9) ]
	void EnableAudioIndication(int32_t Millions, int32_t Smooth, bool bReportVad);

	// Object: Function LimNativeWidget.AgoraManager.DestroyInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32da6f8
	// Params: [ Num(0) Size(0x0) ]
	void DestroyInstance();

	// Object: Function LimNativeWidget.AgoraManager.AgoraAudioDump
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x32d8854
	// Params: [ Num(1) Size(0x1) ]
	void AgoraAudioDump(bool bEnable);
};

// Object: Class LimNativeWidget.AudioPermissionHelperProxy
// Size: 0x48 (Inherited: 0x28)
struct UAudioPermissionHelperProxy : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)


	// Object: Function LimNativeWidget.AudioPermissionHelperProxy.OnAndroidPermissionResult
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32db5bc
	// Params: [ Num(2) Size(0x20) ]
	void OnAndroidPermissionResult(struct TArray<struct FString>& Permissions, struct TArray<bool>& Results);

	// Object: Function LimNativeWidget.AudioPermissionHelperProxy.CheckIOSAudioPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32db728
	// Params: [ Num(1) Size(0x1) ]
	enum class EIOSAudioPermissionState CheckIOSAudioPermission();

	// Object: Function LimNativeWidget.AudioPermissionHelperProxy.CheckAndroidAudioPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32db75c
	// Params: [ Num(1) Size(0x1) ]
	bool CheckAndroidAudioPermission();

	// Object: Function LimNativeWidget.AudioPermissionHelperProxy.AcquireIOSAudioPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32db700
	// Params: [ Num(0) Size(0x0) ]
	void AcquireIOSAudioPermission();

	// Object: Function LimNativeWidget.AudioPermissionHelperProxy.AcquireAndroidAudioPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32db714
	// Params: [ Num(0) Size(0x0) ]
	void AcquireAndroidAudioPermission();
};

// Object: Class LimNativeWidget.LimNativeWidgetSettings
// Size: 0x1C8 (Inherited: 0x38)
struct ULimNativeWidgetSettings : UDeveloperSettings
{
	struct FString rDownloadPath; // 0x38(0x10)
	int32_t FileIOThreadIntervalMs; // 0x48(0x4)
	float CachedDiskFileExpiredDuration; // 0x4C(0x4)
	float CachedResponseExpiredDuration; // 0x50(0x4)
	int32_t CachedResponseMaxCount; // 0x54(0x4)
	struct FSoftObjectPath LocalizationTable; // 0x58(0x18)
	struct FString EnvId; // 0x70(0x10)
	struct FString GME_AppId; // 0x80(0x10)
	struct FString GME_PrivateKey; // 0x90(0x10)
	struct FString GME_Test_AppId; // 0xA0(0x10)
	struct FString GME_Test_PrivateKey; // 0xB0(0x10)
	bool bTestGmeEnv; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x3]; // 0xC1(0x3)
	float GME_EventTick; // 0xC4(0x4)
	int32_t MaxRecordingTime; // 0xC8(0x4)
	bool bShowLimSdkLog; // 0xCC(0x1)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	struct FString Lim_SDKRegion; // 0xD0(0x10)
	struct FString Lim_SDKRegion_Domestic; // 0xE0(0x10)
	int32_t Lim_GameID; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct FString Lim_Slssvr; // 0xF8(0x10)
	struct FString Lim_Slssvr_Test; // 0x108(0x10)
	struct FString Lim_Slssvr_Domestic; // 0x118(0x10)
	struct FString Lim_Slssvr_Domestic_Test; // 0x128(0x10)
	int32_t Use_Farlight_Domain; // 0x138(0x4)
	int32_t Use_Farlight_Domain_Domestic; // 0x13C(0x4)
	struct FString Nertc_AppKey; // 0x140(0x10)
	struct FString Nertc_AppToken; // 0x150(0x10)
	struct FString Nertc_Test_AppKey; // 0x160(0x10)
	struct FString Nertc_Test_AppToken; // 0x170(0x10)
	struct FString Agora_AppKey; // 0x180(0x10)
	struct FString Agora_AppToken; // 0x190(0x10)
	struct FString Agora_Test_AppKey; // 0x1A0(0x10)
	struct FString Agora_Test_AppToken; // 0x1B0(0x10)
	bool bEnvOversea; // 0x1C0(0x1)
	uint8_t Pad_0x1C1[0x7]; // 0x1C1(0x7)


	// Object: Function LimNativeWidget.LimNativeWidgetSettings.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32dc0a4
	// Params: [ Num(1) Size(0x8) ]
	struct ULimNativeWidgetSettings* GetInstance();
};

// Object: Class LimNativeWidget.NertcManager
// Size: 0x1F0 (Inherited: 0x28)
struct UNertcManager : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	struct FMulticastInlineDelegate OnPermissionResult; // 0x40(0x10)
	struct FMulticastInlineDelegate OnEnterRoom; // 0x50(0x10)
	struct FMulticastInlineDelegate OnExitRoom; // 0x60(0x10)
	struct FMulticastInlineDelegate OnConnectionChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnNertcUserInfoUpdate; // 0x80(0x10)
	struct FMulticastInlineDelegate OnNertcLocalInfoUpdate; // 0x90(0x10)
	struct FMulticastInlineDelegate OnUserRoomStateChange; // 0xA0(0x10)
	struct FMulticastInlineDelegate OnUserAudioStateChanged; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnAudioStateChanged; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnAuthGetResult; // 0xD0(0x10)
	struct FMulticastInlineDelegate OnRecodeComplete; // 0xE0(0x10)
	struct FMulticastInlineDelegate OnPlayComplete; // 0xF0(0x10)
	struct FMulticastInlineDelegate OnUploadComplete; // 0x100(0x10)
	struct FMulticastInlineDelegate OnDownloadComplete; // 0x110(0x10)
	struct TArray<int32_t> MuteUIDList; // 0x120(0x10)
	struct FMulticastInlineDelegate OnEnterRoomPre; // 0x130(0x10)
	struct FMulticastInlineDelegate OnExitRoomPre; // 0x140(0x10)
	struct FMulticastInlineDelegate OnSetAudioSendAndRecv; // 0x150(0x10)
	struct FMulticastInlineDelegate OnEnableMic; // 0x160(0x10)
	struct FMulticastInlineDelegate OnEnableSpeaker; // 0x170(0x10)
	struct FMulticastInlineDelegate OnSetSpeakerVolumeByUid; // 0x180(0x10)
	uint8_t Pad_0x190[0x60]; // 0x190(0x60)


	// Object: Function LimNativeWidget.NertcManager.UploadRecordedFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc8fc
	// Params: [ Num(1) Size(0x10) ]
	void UploadRecordedFile(struct FString FilePath);

	// Object: Function LimNativeWidget.NertcManager.UpdateSelfPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x32dd9a8
	// Params: [ Num(2) Size(0x18) ]
	void UpdateSelfPosition(struct FVector& InSelfPosition, struct FRotator& InSelfRotator);

	// Object: Function LimNativeWidget.NertcManager.UpdateAudioRecvRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddaa0
	// Params: [ Num(1) Size(0x4) ]
	void UpdateAudioRecvRange(int32_t InRange);

	// Object: Function LimNativeWidget.NertcManager.UnRegisterLuaEvent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterLuaEvent();

	// Object: Function LimNativeWidget.NertcManager.UnInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32de230
	// Params: [ Num(0) Size(0x0) ]
	void UnInit();

	// Object: Function LimNativeWidget.NertcManager.SwitchRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddd80
	// Params: [ Num(5) Size(0x2C) ]
	void SwitchRoom(struct FString RoomID, struct FString AppToken, int32_t Uid, int32_t TeamID, int32_t AudioDistance);

	// Object: Function LimNativeWidget.NertcManager.StopRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc9ec
	// Params: [ Num(0) Size(0x0) ]
	void StopRecording();

	// Object: Function LimNativeWidget.NertcManager.StopPlayFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc734
	// Params: [ Num(0) Size(0x0) ]
	void StopPlayFile();

	// Object: Function LimNativeWidget.NertcManager.StartRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dca00
	// Params: [ Num(1) Size(0x10) ]
	void StartRecording(struct FString FilePath);

	// Object: Function LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32dd4e0
	// Params: [ Num(1) Size(0x10) ]
	void SetSubscribeAudioOnlyBy(struct TArray<int32_t>& OpenIDList);

	// Object: Function LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32dd660
	// Params: [ Num(1) Size(0x10) ]
	void SetSubscribeAudioBlocklist(struct TArray<int32_t>& OpenIDList);

	// Object: Function LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32dd5a0
	// Params: [ Num(1) Size(0x10) ]
	void SetSubscribeAudioAllowlist(struct TArray<int32_t>& OpenIDList);

	// Object: Function LimNativeWidget.NertcManager.SetRangeAudioTeamID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddca0
	// Params: [ Num(1) Size(0x4) ]
	void SetRangeAudioTeamID(int32_t TeamID);

	// Object: Function LimNativeWidget.NertcManager.SetRangeAudioMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddbf8
	// Params: [ Num(1) Size(0x1) ]
	void SetRangeAudioMode(enum class ERTCRangeAudioMode InAudioMode);

	// Object: Function LimNativeWidget.NertcManager.SetMaxMessageLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dcab4
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxMessageLength(int32_t MsTime);

	// Object: Function LimNativeWidget.NertcManager.SetAudioSendAndRecvRules
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32dd720
	// Params: [ Num(4) Size(0x30) ]
	void SetAudioSendAndRecvRules(enum class ERTCAudioRouteSendType InSendType, struct TArray<int32_t>& InSendOpenIDList, enum class ERTCAudioRouteRecvType InRecvType, struct TArray<int32_t>& InRecvOpenIDList);

	// Object: Function LimNativeWidget.NertcManager.SelectSpeak
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dce34
	// Params: [ Num(1) Size(0x10) ]
	void SelectSpeak(struct FString InDeviceID);

	// Object: Function LimNativeWidget.NertcManager.SelectMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dcee8
	// Params: [ Num(1) Size(0x10) ]
	void SelectMic(struct FString InDeviceID);

	// Object: Function LimNativeWidget.NertcManager.ResumeRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc9c4
	// Params: [ Num(0) Size(0x0) ]
	void ResumeRecording();

	// Object: Function LimNativeWidget.NertcManager.PreInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32de2f4
	// Params: [ Num(1) Size(0x10) ]
	void PreInit(struct FString Appkey);

	// Object: Function LimNativeWidget.NertcManager.PlayRecordedFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc748
	// Params: [ Num(1) Size(0x10) ]
	void PlayRecordedFile(struct FString FilePath);

	// Object: Function LimNativeWidget.NertcManager.PauseRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc9d8
	// Params: [ Num(0) Size(0x0) ]
	void PauseRecording();

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnUserRoomStateChange__DelegateSignature(bool EnterRoom, int32_t Uid);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void OnUserInfoUpdateDelegate__DelegateSignature(struct TArray<int32_t>& UidList, struct TArray<int32_t>& VolumeList);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnUserAudioStateChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnUserAudioStateChanged__DelegateSignature(bool Muted, int32_t Uid);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnUploadCompleteDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x28) ]
	void OnUploadCompleteDelegate__DelegateSignature(int32_t Errorcode, struct FString FilePath, struct FString FileID);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnSetAudioSendAndRecvDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0x30) ]
	void OnSetAudioSendAndRecvDelegate__DelegateSignature(uint8_t SendRule, struct TArray<int32_t>& SendList, uint8_t RecvRule, struct TArray<int32_t>& RecvList);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnRecordCompleteDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x18) ]
	void OnRecordCompleteDelegate__DelegateSignature(int32_t Errorcode, struct FString FilePath);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnPlayCompleteDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x18) ]
	void OnPlayCompleteDelegate__DelegateSignature(int32_t Errorcode, struct FString FilePath);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnNertcConnectionChange__DelegateSignature(int32_t State, int32_t Reason);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x5) ]
	void OnLocalUserVolumeChanged__DelegateSignature(int32_t Volume, bool bVad);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnGameSetSpeakerVolumeByUidDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnGameSetSpeakerVolumeByUidDelegate__DelegateSignature(int32_t Uid, int32_t Volume);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnExitRoomPreDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnExitRoomPreDelegate__DelegateSignature();

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnExitRoomDelegate__DelegateSignature(int32_t Result, int64_t Reason);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomPreDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void OnEnterRoomPreDelegate__DelegateSignature(struct FString RoomID, int32_t Uid);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0x18) ]
	void OnEnterRoomDelegate__DelegateSignature(int64_t RoomID, int32_t Uid, int32_t Result, int64_t Elapsed);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnEnableSpeakerDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnEnableSpeakerDelegate__DelegateSignature(bool bEnabled);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnEnableMicDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnEnableMicDelegate__DelegateSignature(bool bEnabled);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnDownloadCompleteDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x28) ]
	void OnDownloadCompleteDelegate__DelegateSignature(int32_t Errorcode, struct FString FilePath, struct FString FileID);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnAuthDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void OnAuthDelegate__DelegateSignature(int32_t Errorcode);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnAudioDeviceStateChanged__DelegateSignature(bool bChanged);

	// Object: DelegateFunction LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess);

	// Object: Function LimNativeWidget.NertcManager.MediaMute
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dd8bc
	// Params: [ Num(2) Size(0x5) ]
	void MediaMute(int32_t Uid, bool bMute);

	// Object: Function LimNativeWidget.NertcManager.IsInRtcRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddd48
	// Params: [ Num(1) Size(0x1) ]
	bool IsInRtcRoom();

	// Object: Function LimNativeWidget.NertcManager.IsInitialized
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32de1d0
	// Params: [ Num(1) Size(0x1) ]
	bool IsInitialized();

	// Object: Function LimNativeWidget.NertcManager.InnerEnterRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddf50
	// Params: [ Num(3) Size(0x24) ]
	void InnerEnterRoom(struct FString RoomID, struct FString AppToken, int32_t Uid);

	// Object: Function LimNativeWidget.NertcManager.InnerEnableMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dd2d0
	// Params: [ Num(1) Size(0x1) ]
	void InnerEnableMic(bool InEnable);

	// Object: Function LimNativeWidget.NertcManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32de244
	// Params: [ Num(1) Size(0x1) ]
	void Init(bool bEnableLog);

	// Object: Function LimNativeWidget.NertcManager.GetVoiceFileDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc5c4
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetVoiceFileDuration(struct FString FilePath);

	// Object: Function LimNativeWidget.NertcManager.GetSpeakerList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dcf9c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FRTCDeviceInfo> GetSpeakerList();

	// Object: Function LimNativeWidget.NertcManager.GetRecordingLocalFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32dc528
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetRecordingLocalFilePath();

	// Object: Function LimNativeWidget.NertcManager.GetMicList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dd0c0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FRTCDeviceInfo> GetMicList();

	// Object: Function LimNativeWidget.NertcManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32de3bc
	// Params: [ Num(1) Size(0x8) ]
	struct UNertcManager* GetInstance();

	// Object: Function LimNativeWidget.NertcManager.GetFileSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc680
	// Params: [ Num(1) Size(0x10) ]
	void GetFileSize(struct FString FilePath);

	// Object: Function LimNativeWidget.NertcManager.GameSetSpeakerVolumeByUid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32dd1e4
	// Params: [ Num(3) Size(0xC) ]
	int32_t GameSetSpeakerVolumeByUid(int32_t Uid, int32_t Volume);

	// Object: Function LimNativeWidget.NertcManager.ExitRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddf3c
	// Params: [ Num(0) Size(0x0) ]
	void ExitRoom();

	// Object: Function LimNativeWidget.NertcManager.EnterRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32de090
	// Params: [ Num(3) Size(0x24) ]
	void EnterRoom(struct FString RoomID, struct FString AppToken, int32_t Uid);

	// Object: Function LimNativeWidget.NertcManager.EnableSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dd430
	// Params: [ Num(1) Size(0x1) ]
	void EnableSpeaker(bool InEnable);

	// Object: Function LimNativeWidget.NertcManager.EnableRangeVoice
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32ddb48
	// Params: [ Num(1) Size(0x1) ]
	void EnableRangeVoice(bool bEnbale);

	// Object: Function LimNativeWidget.NertcManager.EnableMicNoiseReduction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dcc50
	// Params: [ Num(1) Size(0x1) ]
	void EnableMicNoiseReduction(bool bEnable);

	// Object: Function LimNativeWidget.NertcManager.EnableMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dd380
	// Params: [ Num(1) Size(0x1) ]
	void EnableMic(bool InEnable);

	// Object: Function LimNativeWidget.NertcManager.EnableAudioIndication
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dcd00
	// Params: [ Num(3) Size(0x9) ]
	void EnableAudioIndication(bool InEnable, int32_t Millions, bool bEnableLocal);

	// Object: Function LimNativeWidget.NertcManager.DownloadRecordedFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc7fc
	// Params: [ Num(2) Size(0x20) ]
	void DownloadRecordedFile(struct FString FileID, struct FString FilePath);

	// Object: Function LimNativeWidget.NertcManager.DestroyInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32de3a8
	// Params: [ Num(0) Size(0x0) ]
	void DestroyInstance();

	// Object: Function LimNativeWidget.NertcManager.CheckPlatformMicPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc4f0
	// Params: [ Num(1) Size(0x1) ]
	bool CheckPlatformMicPermission();

	// Object: Function LimNativeWidget.NertcManager.CancelRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dc9b0
	// Params: [ Num(0) Size(0x0) ]
	void CancelRecording();

	// Object: Function LimNativeWidget.NertcManager.ApplyNertcAuth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32dcb5c
	// Params: [ Num(2) Size(0x18) ]
	void ApplyNertcAuth(int32_t Uid, struct FString Token);
};

} // namespace SDK
