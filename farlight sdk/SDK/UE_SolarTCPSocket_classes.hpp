// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SolarTCPSocket.SolarTCPSocketClient
// Size: 0xE0 (Inherited: 0x28)
struct USolarTCPSocketClient : UObject
{
	uint8_t Pad_0x28[0xC]; // 0x28(0xC)
	int32_t SendBufferSize; // 0x34(0x4)
	int32_t ReceiveBufferSize; // 0x38(0x4)
	float TimeBetweenTicks; // 0x3C(0x4)
	uint8_t Pad_0x40[0xA0]; // 0x40(0xA0)


	// Object: Function SolarTCPSocket.SolarTCPSocketClient.SendData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d49620
	// Params: [ Num(3) Size(0x19) ]
	bool SendData(int32_t ConnectionId, struct TArray<uint8_t> Data);

	// Object: Function SolarTCPSocket.SolarTCPSocketClient.Disconnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d49774
	// Params: [ Num(1) Size(0x4) ]
	void Disconnect(int32_t ConnectionId);

	// Object: Function SolarTCPSocket.SolarTCPSocketClient.Connect
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d4981c
	// Params: [ Num(6) Size(0x48) ]
	void Connect(struct FString IP, int32_t Port, struct FDelegate& OnConnected, struct FDelegate& OnDisconnected, struct FDelegate& OnMessageReceived, int32_t& ConnectionId);
};

} // namespace SDK
