// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum SolarFramework.EScope
enum class EScope : uint8_t
{
	None = 0,
	Login = 1,
	Lobby = 2,
	Battle = 4,
	Settlement = 8,
	Game = 14,
	Global = 15,
	EScope_MAX = 16
};

// Object: ScriptStruct SolarFramework.SolarConfigEntry
// Size: 0x30 (Inherited: 0x0)
struct FSolarConfigEntry
{
	struct TSoftClassPtr<struct USolarContainer*> ContainerPath; // 0x0(0x28)
	enum class EScope Scope; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

} // namespace SDK
