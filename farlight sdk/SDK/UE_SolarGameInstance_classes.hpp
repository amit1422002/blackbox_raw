// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
// Size: 0xC50 (Inherited: 0xC38)
struct USolarGameInstance_C : USolarGameInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xC38(0x8)
	struct FMulticastInlineDelegate OnBroadcastModeChanged; // 0xC40(0x10)


	// Object: DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitFinish_00BE497208DED202D50831B287D3F474
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(2) Size(0x8) ]
	void OnInitFinish_00BE497208DED202D50831B287D3F474(bool bSuccess, int32_t Errorcode);

	// Object: DelegateFunction SolarGameInstance.SolarGameInstance_C.OnReceiveNotification_005F328C08DED202D4821D3E87C68C01
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x4) ]
	void OnReceiveNotification_005F328C08DED202D4821D3E87C68C01(int32_t NotificationType);

	// Object: DelegateFunction SolarGameInstance.SolarGameInstance_C.OnWifiStateChanged_005E490908DED202D482137A87C68B08
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x1) ]
	void OnWifiStateChanged_005E490908DED202D482137A87C68B08(bool bEnabled);

	// Object: DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLIMPCAlilogAdd_005D241008DED202D47D340487C60E48
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x10) ]
	void OnLIMPCAlilogAdd_005D241008DED202D47D340487C60E48(struct FString Datas);

	// Object: DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSLSLogAdd_005C9B0D08DED202D47D32BA87C60E27
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x10) ]
	void OnLSLSLogAdd_005C9B0D08DED202D47D32BA87C60E27(struct FString Datas);

	// Object: DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLimPCSDKCommonReportPoint_005B028508DED202D47D312087C60DFE
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x10) ]
	void OnLimPCSDKCommonReportPoint_005B028508DED202D47D312087C60DFE(struct FString Datas);

	// Object: DelegateFunction SolarGameInstance.SolarGameInstance_C.OnDAPLogAdd_005A9B8708DED202D47D2AEA87C60D60
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x10) ]
	void OnDAPLogAdd_005A9B8708DED202D47D2AEA87C60D60(struct FString Datas);

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnOtherNetworkFailureDisconnect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnOtherNetworkFailureDisconnect();

	// Object: Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x10) ]
	void CheckSavedDirFiles(struct TArray<struct FString>& Files);

	// Object: Function SolarGameInstance.SolarGameInstance_C.IsTrainingMode
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x1) ]
	bool IsTrainingMode();

	// Object: Function SolarGameInstance.SolarGameInstance_C.GetLobbyPreloadAssetsFromLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FString> GetLobbyPreloadAssetsFromLua(enum class ESolarStageAssetPlatformFlags InPlatformFlag);

	// Object: Function SolarGameInstance.SolarGameInstance_C.LuaInitGameFrameWork
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void LuaInitGameFrameWork();

	// Object: Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void InitLuaClasses();

	// Object: Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveShutdown();

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_OfflineTrainingLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void SolarGM_OfflineTrainingLua();

	// Object: Function SolarGameInstance.SolarGameInstance_C.SelectHeroAndSkinForPSOGathring
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x8) ]
	void SelectHeroAndSkinForPSOGathring(int32_t CharacterID, int32_t SkinID);

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnStageFlagLoadAssetsStarted
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x1) ]
	void OnStageFlagLoadAssetsStarted(enum class ESolarStageFlags InCurStageFlag);

	// Object: Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void RegisterNetworkManager();

	// Object: Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x8) ]
	void ExecuteBackKeyLuaCall(struct USolarUserWidget* UserWidget);

	// Object: Function SolarGameInstance.SolarGameInstance_C.ReceiveClientWasKicked
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x10) ]
	void ReceiveClientWasKicked(struct FString KickReason);

	// Object: Function SolarGameInstance.SolarGameInstance_C.AsyncLobbyGameEventMessage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x18) ]
	void AsyncLobbyGameEventMessage(int64_t TaskID, struct FString Buffer);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x20) ]
	void SolarGM_TransmitGMLua(struct FString playerName, struct TArray<struct FString>& GmArray);

	// Object: Function SolarGameInstance.SolarGameInstance_C.ShutDownLimSdk
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void ShutDownLimSdk();

	// Object: Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x1) ]
	void ExecuteChangeAudioModeLuaCall(bool bTurnOn);

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnReportClientBattleEndTLog
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnReportClientBattleEndTLog();

	// Object: Function SolarGameInstance.SolarGameInstance_C.GetGlobalPreloadAssetsFromLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetGlobalPreloadAssetsFromLua();

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddCharacterSkinLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x4) ]
	void SolarGM_AddCharacterSkinLua(int32_t SkinID);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_DelWeaponSkinLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x4) ]
	void SolarGM_DelWeaponSkinLua(int32_t SkinID);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_SetRankScoreLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x8) ]
	void SolarGM_SetRankScoreLua(int32_t ModeGroupID, int32_t Score);

	// Object: Function SolarGameInstance.SolarGameInstance_C.ShutDownRTCSdk
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void ShutDownRTCSdk();

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponSkinLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x4) ]
	void SolarGM_AddWeaponSkinLua(int32_t SkinID);

	// Object: Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void LuaGetBroadcastHeroNameCopy(struct FString SolarPlayerId, struct FString& BroadcastPlayerName);

	// Object: Function SolarGameInstance.SolarGameInstance_C.AsyncDownLoadConfigFile
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x18) ]
	void AsyncDownLoadConfigFile(int64_t TaskID, struct FString URL);

	// Object: Function SolarGameInstance.SolarGameInstance_C.ReportLoadingInfoToBI
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(3) Size(0x15) ]
	void ReportLoadingInfoToBI(struct TArray<struct FString>& LoadingInfo, float LoadingTime, bool bIsFinished);

	// Object: Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void LuaGetBroadcastPlayerNameCopy(struct FString SolarPlayerId, struct FString& BroadcastPlayerName);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x20) ]
	void SolarGM_LobbyLua(struct FString CmdName, struct TArray<struct FString>& Params);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithLua
	// Flags: [Exec|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void SolarGM_TestEnsureMsgWithLua();

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_DelCharacterSkinLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x4) ]
	void SolarGM_DelCharacterSkinLua(int32_t SkinID);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x8) ]
	void SolarGM_AddItemLua(int32_t ItemID, int32_t Count);

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnStageFlagChanged
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x1) ]
	void OnStageFlagChanged(enum class ESolarStageFlags InCurStageFlag);

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x2) ]
	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope);

	// Object: Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void LuaStartGameFrameWork();

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnDisconnect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnDisconnect();

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_QuickMatchLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x8) ]
	void SolarGM_QuickMatchLua(int32_t MapID, int32_t RuleId);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithLua
	// Flags: [Exec|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void SolarGM_TestCrashWithLua();

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnStageFlagLoadAssetsFinished
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x1) ]
	void OnStageFlagLoadAssetsFinished(enum class ESolarStageFlags InCurStageFlag);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x8) ]
	void SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t Count);

	// Object: Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void ShutDownPCSDK();

	// Object: Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x2) ]
	void HandleNetworkError(uint8_t FailureType, bool bIsServer);

	// Object: Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void LuaOnBroadcastModeChanged();

	// Object: Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x20) ]
	void LuaGetBroadcastPlayerName(struct FString SolarPlayerId, struct FString& BroadcastPlayerName);

	// Object: Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x20) ]
	void LuaGetBroadcastHeroName(struct FString SolarPlayerId, struct FString& BroadcastPlayerName);

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
	// Flags: [Exec|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void SolarGM_TestCrashWithBP();

	// Object: Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
	// Flags: [Exec|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void SolarGM_TestEnsureMsgWithBP();

	// Object: Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint);

	// Object: Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnBroadcastModeChanged__DelegateSignature();
};

} // namespace SDK
