// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class Gauntlet.GauntletTestController
// Size: 0x30 (Inherited: 0x28)
struct UGauntletTestController : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class Gauntlet.GauntletTestControllerBootTest
// Size: 0x30 (Inherited: 0x30)
struct UGauntletTestControllerBootTest : UGauntletTestController
{
};

// Object: Class Gauntlet.GauntletTestControllerErrorTest
// Size: 0x50 (Inherited: 0x30)
struct UGauntletTestControllerErrorTest : UGauntletTestController
{
	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
};

} // namespace SDK
