// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
	LA_ThreeKilometers = 0,
	LA_OneKilometer = 1,
	LA_HundredMeters = 2,
	LA_TenMeters = 3,
	LA_Best = 4,
	LA_Navigation = 5,
	LA_MAX = 6
};

// Object: ScriptStruct LocationServicesBPLibrary.LocationServicesData
// Size: 0x18 (Inherited: 0x0)
struct FLocationServicesData
{
	float Timestamp; // 0x0(0x4)
	float Longitude; // 0x4(0x4)
	float Latitude; // 0x8(0x4)
	float HorizontalAccuracy; // 0xC(0x4)
	float VerticalAccuracy; // 0x10(0x4)
	float Altitude; // 0x14(0x4)
};

} // namespace SDK
