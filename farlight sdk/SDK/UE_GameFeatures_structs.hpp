// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum GameFeatures.EGameFeatureTargetState
enum class EGameFeatureTargetState : uint8_t
{
	Installed = 0,
	Registered = 1,
	Loaded = 2,
	Active = 3,
	Count = 4,
	EGameFeatureTargetState_MAX = 5
};

// Object: ScriptStruct GameFeatures.GameFeatureComponentEntry
// Size: 0x58 (Inherited: 0x0)
struct FGameFeatureComponentEntry
{
	struct TSoftClassPtr<struct AActor*> ActorClass; // 0x0(0x28)
	struct TSoftClassPtr<struct UActorComponent*> ComponentClass; // 0x28(0x28)
	uint8_t bClientComponent : 1; // 0x50(0x1), Mask(0x1)
	uint8_t bServerComponent : 1; // 0x50(0x1), Mask(0x2)
	uint8_t BitPad_0x50_2 : 6; // 0x50(0x1)
	uint8_t AdditionFlags; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
};

// Object: ScriptStruct GameFeatures.DataRegistrySourceToAdd
// Size: 0x60 (Inherited: 0x0)
struct FDataRegistrySourceToAdd
{
	struct FName RegistryToAddTo; // 0x0(0x8)
	int32_t AssetPriority; // 0x8(0x4)
	uint8_t bClientSource : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bServerSource : 1; // 0xC(0x1), Mask(0x2)
	uint8_t BitPad_0xC_2 : 6; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct TSoftObjectPtr<UDataTable> DataTableToAdd; // 0x10(0x28)
	struct TSoftObjectPtr<UCurveTable> CurveTableToAdd; // 0x38(0x28)
};

// Object: ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// Size: 0xD8 (Inherited: 0x0)
struct FGameFeaturePluginStateMachineProperties
{
	uint8_t Pad_0x0[0x98]; // 0x0(0x98)
	struct UGameFeatureData* GameFeatureData; // 0x98(0x8)
	uint8_t Pad_0xA0[0x38]; // 0xA0(0x38)
};

// Object: ScriptStruct GameFeatures.InstallBundlePluginProtocolOptions
// Size: 0xC (Inherited: 0x0)
struct FInstallBundlePluginProtocolOptions
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct GameFeatures.GameFeaturePluginIdentifier
// Size: 0x28 (Inherited: 0x0)
struct FGameFeaturePluginIdentifier
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

} // namespace SDK
