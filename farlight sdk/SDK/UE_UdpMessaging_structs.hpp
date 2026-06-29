// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// Object: ScriptStruct UdpMessaging.UdpMockMessage
// Size: 0x10 (Inherited: 0x0)
struct FUdpMockMessage
{
	struct TArray<uint8_t> Data; // 0x0(0x10)
};

} // namespace SDK
