// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f1e700
	// Params: [ Num(5) Size(0x20) ]
	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress);

	// Object: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f1e33c
	// Params: [ Num(8) Size(0x69) ]
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden);
};

// Object: Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)


	// Object: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f1ebf4
	// Params: [ Num(3) Size(0x18) ]
	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController);

	// Object: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f1eb10
	// Params: [ Num(3) Size(0x18) ]
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x30]; // 0x50(0x30)


	// Object: Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f1f0ac
	// Params: [ Num(6) Size(0x28) ]
	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag);
};

// Object: Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)


	// Object: Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f1f5e0
	// Params: [ Num(3) Size(0x18) ]
	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x48]; // 0x50(0x48)


	// Object: Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f1fa14
	// Params: [ Num(5) Size(0x20) ]
	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
};

// Object: Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)


	// Object: Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f1fed8
	// Params: [ Num(3) Size(0x18) ]
	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x30]; // 0x50(0x30)


	// Object: Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f2030c
	// Params: [ Num(7) Size(0x40) ]
	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, uint8_t LocalPlayerOutcome, uint8_t OtherPlayersOutcome);
};

// Object: Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)


	// Object: Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f208b4
	// Params: [ Num(5) Size(0x38) ]
	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface);
};

// Object: Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x40]; // 0x50(0x40)


	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f212e4
	// Params: [ Num(2) Size(0x118) ]
	struct FString GetServerName(struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f21524
	// Params: [ Num(2) Size(0x10C) ]
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f20edc
	// Params: [ Num(2) Size(0x10C) ]
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f210e0
	// Params: [ Num(2) Size(0x10C) ]
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f21728
	// Params: [ Num(5) Size(0x20) ]
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
};

// Object: Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x38]; // 0x50(0x38)


	// Object: Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f21d2c
	// Params: [ Num(8) Size(0x38) ]
	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x38]; // 0x48(0x38)


	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f223bc
	// Params: [ Num(3) Size(0x28) ]
	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xA8 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy2 : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x60]; // 0x48(0x60)


	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f22ba4
	// Params: [ Num(2) Size(0x10) ]
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController);

	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f22afc
	// Params: [ Num(2) Size(0x10) ]
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController);

	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f22c4c
	// Params: [ Num(3) Size(0x28) ]
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)


	// Object: Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f2313c
	// Params: [ Num(3) Size(0x20) ]
	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy2 : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f23718
	// Params: [ Num(3) Size(0x20) ]
	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)


	// Object: Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f23bb0
	// Params: [ Num(3) Size(0x20) ]
	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xA8 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x60]; // 0x48(0x60)


	// Object: Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f24108
	// Params: [ Num(3) Size(0x20) ]
	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.IpConnection
// Size: 0x1BF0 (Inherited: 0x1B50)
struct UIpConnection : UNetConnection
{
	uint8_t Pad_0x1B50[0x50]; // 0x1B50(0x50)
	float SocketErrorDisconnectDelay; // 0x1BA0(0x4)
	uint8_t Pad_0x1BA4[0x4C]; // 0x1BA4(0x4C)
};

// Object: Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x7D8 (Inherited: 0x768)
struct UIpNetDriver : UNetDriver
{
	uint8_t LogPortUnreach : 1; // 0x766(0x1), Mask(0x1)
	uint8_t AllowPlayerPortUnreach : 1; // 0x766(0x1), Mask(0x2)
	uint32_t MaxPortCountToTry; // 0x768(0x4)
	uint8_t BitPad_0x76C_2 : 6; // 0x76C(0x1)
	uint8_t Pad_0x76D[0xF]; // 0x76D(0xF)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x77C(0x4)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x780(0x4)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x784(0x4)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x788(0x4)
	uint8_t Pad_0x78C[0x4]; // 0x78C(0x4)
	double MaxSecondsInReceive; // 0x790(0x8)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x798(0x4)
	float ResolutionConnectionTimeout; // 0x79C(0x4)
	uint8_t Pad_0x7A0[0x38]; // 0x7A0(0x38)
};

// Object: Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x180 (Inherited: 0x30)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x130]; // 0x50(0x130)


	// Object: Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f27bb4
	// Params: [ Num(4) Size(0x120) ]
	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult);
};

// Object: Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f28184
	// Params: [ Num(4) Size(0x15) ]
	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue);
};

// Object: Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct ULeaderboardFlushCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f284f0
	// Params: [ Num(3) Size(0x18) ]
	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName);
};

// Object: Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct ULeaderboardQueryCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)


	// Object: Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f28944
	// Params: [ Num(3) Size(0x18) ]
	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName);
};

// Object: Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)


	// Object: Function OnlineSubsystemUtils.LogoutCallbackProxy.LogOut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f28d98
	// Params: [ Num(3) Size(0x18) ]
	struct ULogoutCallbackProxy* LogOut(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x310 (Inherited: 0x2E0)
struct AOnlineBeacon : AActor
{
	uint8_t Pad_0x2E0[0x8]; // 0x2E0(0x8)
	float BeaconConnectionInitialTimeout; // 0x2E8(0x4)
	float BeaconConnectionTimeout; // 0x2EC(0x4)
	struct UNetDriver* NetDriver; // 0x2F0(0x8)
	uint8_t Pad_0x2F8[0x18]; // 0x2F8(0x18)
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x370 (Inherited: 0x310)
struct AOnlineBeaconClient : AOnlineBeacon
{
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x310(0x8)
	struct UNetConnection* BeaconConnection; // 0x318(0x8)
	enum class EBeaconConnectionState ConnectionState; // 0x320(0x1)
	uint8_t Pad_0x321[0x4F]; // 0x321(0x4F)


	// Object: Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetClient]
	// Offset: 0x5f29378
	// Params: [ Num(0) Size(0x0) ]
	void ClientOnConnected();
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x3C8 (Inherited: 0x310)
struct AOnlineBeaconHost : AOnlineBeacon
{
	int32_t ListenPort; // 0x310(0x4)
	uint8_t Pad_0x314[0x4]; // 0x314(0x4)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x318(0x10)
	uint8_t Pad_0x328[0xA0]; // 0x328(0xA0)
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x308 (Inherited: 0x2E0)
struct AOnlineBeaconHostObject : AActor
{
	struct FString BeaconTypeName; // 0x2E0(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x2F0(0x8)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x2F8(0x10)
};

// Object: Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x128 (Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface
{
	struct FName VoiceSubsystemNameOverride; // 0x28(0x8)
	uint8_t Pad_0x30[0xF8]; // 0x30(0xF8)
};

// Object: Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 (Inherited: 0x38)
struct UOnlinePIESettings : UDeveloperSettings
{
	bool bOnlinePIEEnabled; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x40(0x10)
};

// Object: Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1E0 (Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession
{
	uint8_t Pad_0x28[0x1B0]; // 0x28(0x1B0)
	bool bIsFromInvite; // 0x1D8(0x1)
	bool bHandlingDisconnect; // 0x1D9(0x1)
	uint8_t Pad_0x1DA[0x6]; // 0x1DA(0x6)
};

// Object: Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x430 (Inherited: 0x370)
struct APartyBeaconClient : AOnlineBeaconClient
{
	uint8_t Pad_0x370[0x30]; // 0x370(0x30)
	struct FString DestSessionId; // 0x3A0(0x10)
	struct FPartyReservation PendingReservation; // 0x3B0(0x50)
	enum class EClientRequestType RequestType; // 0x400(0x1)
	bool bPendingReservationSent; // 0x401(0x1)
	bool bCancelReservation; // 0x402(0x1)
	uint8_t Pad_0x403[0x2D]; // 0x403(0x2D)


	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x5f2a470
	// Params: [ Num(2) Size(0x60) ]
	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x5f2a644
	// Params: [ Num(2) Size(0x60) ]
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x5f2a29c
	// Params: [ Num(2) Size(0x60) ]
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x5f2a140
	// Params: [ Num(1) Size(0x28) ]
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2a834
	// Params: [ Num(1) Size(0x4) ]
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2a818
	// Params: [ Num(0) Size(0x0) ]
	void ClientSendReservationFull();

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2a994
	// Params: [ Num(1) Size(0x1) ]
	void ClientReservationResponse(uint8_t ReservationResponse);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2a8e4
	// Params: [ Num(1) Size(0x1) ]
	void ClientCancelReservationResponse(uint8_t ReservationResponse);
};

// Object: Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x380 (Inherited: 0x308)
struct APartyBeaconHost : AOnlineBeaconHostObject
{
	struct UPartyBeaconState* State; // 0x308(0x8)
	uint8_t Pad_0x310[0x60]; // 0x310(0x60)
	bool bLogoutOnSessionTimeout; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	float SessionTimeoutSecs; // 0x374(0x4)
	float TravelSessionTimeoutSecs; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
};

// Object: Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x78 (Inherited: 0x28)
struct UPartyBeaconState : UObject
{
	struct FName SessionName; // 0x28(0x8)
	int32_t NumConsumedReservations; // 0x30(0x4)
	int32_t MaxReservations; // 0x34(0x4)
	int32_t NumTeams; // 0x38(0x4)
	int32_t NumPlayersPerTeam; // 0x3C(0x4)
	struct FName TeamAssignmentMethod; // 0x40(0x8)
	int32_t ReservedHostTeamNum; // 0x48(0x4)
	int32_t ForceTeamNum; // 0x4C(0x4)
	bool bRestrictCrossConsole; // 0x50(0x1)
	bool bEnableRemovalRequests; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct TArray<struct FPartyReservation> Reservations; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
};

// Object: Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)


	// Object: Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f2bf40
	// Params: [ Num(6) Size(0x30) ]
	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, uint8_t Outcome, int32_t TurnTimeoutInSeconds);
};

// Object: Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60 (Inherited: 0x30)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)


	// Object: Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f2c498
	// Params: [ Num(3) Size(0x18) ]
	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController);
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x458 (Inherited: 0x370)
struct ASpectatorBeaconClient : AOnlineBeaconClient
{
	uint8_t Pad_0x370[0x30]; // 0x370(0x30)
	struct FString DestSessionId; // 0x3A0(0x10)
	struct FSpectatorReservation PendingReservation; // 0x3B0(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x428(0x1)
	bool bPendingReservationSent; // 0x429(0x1)
	bool bCancelReservation; // 0x42A(0x1)
	uint8_t Pad_0x42B[0x2D]; // 0x42B(0x2D)


	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x5f2cacc
	// Params: [ Num(2) Size(0x88) ]
	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x5f2c970
	// Params: [ Num(1) Size(0x28) ]
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2cd38
	// Params: [ Num(1) Size(0x4) ]
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2cd1c
	// Params: [ Num(0) Size(0x0) ]
	void ClientSendReservationFull();

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2ce98
	// Params: [ Num(1) Size(0x1) ]
	void ClientReservationResponse(uint8_t ReservationResponse);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2cde8
	// Params: [ Num(1) Size(0x1) ]
	void ClientCancelReservationResponse(uint8_t ReservationResponse);
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x380 (Inherited: 0x308)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject
{
	struct USpectatorBeaconState* State; // 0x308(0x8)
	uint8_t Pad_0x310[0x60]; // 0x310(0x60)
	bool bLogoutOnSessionTimeout; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	float SessionTimeoutSecs; // 0x374(0x4)
	float TravelSessionTimeoutSecs; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60 (Inherited: 0x28)
struct USpectatorBeaconState : UObject
{
	struct FName SessionName; // 0x28(0x8)
	int32_t NumConsumedReservations; // 0x30(0x4)
	int32_t MaxReservations; // 0x34(0x4)
	bool bRestrictCrossConsole; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Object: Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x370 (Inherited: 0x370)
struct ATestBeaconClient : AOnlineBeaconClient
{

	// Object: Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x5f2df24
	// Params: [ Num(0) Size(0x0) ]
	void ServerPong();

	// Object: Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x5f2df80
	// Params: [ Num(0) Size(0x0) ]
	void ClientPing();
};

// Object: Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x308 (Inherited: 0x308)
struct ATestBeaconHost : AOnlineBeaconHostObject
{
};

// Object: Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f31448
	// Params: [ Num(3) Size(0x18) ]
	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f3122c
	// Params: [ Num(5) Size(0x38) ]
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f3155c
	// Params: [ Num(4) Size(0x24) ]
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f3172c
	// Params: [ Num(4) Size(0x21) ]
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn);
};

// Object: Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x880 (Inherited: 0x820)
struct UVoipListenerSynthComponent : USynthComponent
{
	uint8_t Pad_0x820[0x60]; // 0x820(0x60)


	// Object: Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f31bc0
	// Params: [ Num(1) Size(0x1) ]
	bool IsIdling();
};

} // namespace SDK
