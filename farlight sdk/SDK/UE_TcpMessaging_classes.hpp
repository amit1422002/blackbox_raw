// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class TcpMessaging.TcpMessagingSettings
// Size: 0x58 (Inherited: 0x28)
struct UTcpMessagingSettings : UObject
{
	bool EnableTransport; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString ListenEndpoint; // 0x30(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x40(0x10)
	int32_t ConnectionRetryDelay; // 0x50(0x4)
	bool bStopServiceWhenAppDeactivates; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
};

} // namespace SDK
