// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SolarWebSocketClient.SolarWebSocketNetworkManager
// Size: 0x70 (Inherited: 0x28)
struct USolarWebSocketNetworkManager : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)


	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.UnRegisterLuaDelegates
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterLuaDelegates();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.UnInitLuaManager
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void UnInitLuaManager();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.UnInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9aad38
	// Params: [ Num(0) Size(0x0) ]
	void UnInit();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.RegisterLuaDelegates
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void RegisterLuaDelegates();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.OnRecvData
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void OnRecvData(struct TArray<uint8_t>& Data, int32_t DataSize);

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.OnHandleReceiveDataTimer
	// Flags: [Final|Native|Public]
	// Offset: 0xa9aac04
	// Params: [ Num(0) Size(0x0) ]
	void OnHandleReceiveDataTimer();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.OnConnectStateChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void OnConnectStateChanged(int32_t State);

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.InitLuaManager
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void InitLuaManager();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9aad4c
	// Params: [ Num(1) Size(0x8) ]
	void Init(struct UGameInstance* InGameInstance);

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa9aae08
	// Params: [ Num(1) Size(0x8) ]
	struct USolarWebSocketNetworkManager* GetInstance();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.Disconnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9aac18
	// Params: [ Num(0) Size(0x0) ]
	void Disconnect();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.DestroyInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa9aadf4
	// Params: [ Num(0) Size(0x0) ]
	void DestroyInstance();

	// Object: Function SolarWebSocketClient.SolarWebSocketNetworkManager.Connect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9aac2c
	// Params: [ Num(2) Size(0x14) ]
	int32_t Connect(struct FString ServerUrl);
};

} // namespace SDK
