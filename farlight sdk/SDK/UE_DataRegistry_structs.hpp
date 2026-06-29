// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8_t
{
	NotStarted = 0,
	WaitingForInitialAcquire = 1,
	InitialAcquireFinished = 2,
	WaitingForResources = 3,
	AcquireFinished = 4,
	AcquireError = 5,
	DoesNotExist = 6,
	EDataRegistryAcquireStatus_MAX = 7
};

// Object: Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
	NoAssets = 0,
	SearchAssets = 1,
	RegisterAssets = 2,
	SearchAndRegisterAssets = 3,
	EMetaDataRegistrySourceAssetUsage_MAX = 4
};

// Object: Enum DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
	Found = 0,
	NotFound = 1,
	EDataRegistrySubsystemGetItemResult_MAX = 2
};

// Object: Enum DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8_t
{
	DoesNotExist = 0,
	Unknown = 1,
	Remote = 2,
	OnDisk = 3,
	LocalAsset = 4,
	PreCached = 5,
	EDataRegistryAvailability_MAX = 6
};

// Object: ScriptStruct DataRegistry.DataRegistryLookup
// Size: 0x20 (Inherited: 0x0)
struct FDataRegistryLookup
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct DataRegistry.DataRegistryId
// Size: 0x10 (Inherited: 0x0)
struct FDataRegistryId
{
	struct FDataRegistryType RegistryType; // 0x0(0x8)
	struct FName ItemName; // 0x8(0x8)
};

// Object: ScriptStruct DataRegistry.DataRegistryType
// Size: 0x8 (Inherited: 0x0)
struct FDataRegistryType
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
// Size: 0x8 (Inherited: 0x0)
struct FDataRegistrySource_DataTableRules
{
	bool bPrecacheTable; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float CachedTableKeepSeconds; // 0x4(0x4)
};

// Object: ScriptStruct DataRegistry.DataRegistrySourceItemId
// Size: 0x40 (Inherited: 0x0)
struct FDataRegistrySourceItemId
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct DataRegistry.DataRegistryCachePolicy
// Size: 0x14 (Inherited: 0x0)
struct FDataRegistryCachePolicy
{
	bool bCacheIsAlwaysVolatile; // 0x0(0x1)
	bool bUseCurveTableCacheVersion; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t MinNumberKept; // 0x4(0x4)
	int32_t MaxNumberKept; // 0x8(0x4)
	float ForceKeepSeconds; // 0xC(0x4)
	float ForceReleaseSeconds; // 0x10(0x4)
};

// Object: ScriptStruct DataRegistry.DataRegistryIdFormat
// Size: 0x8 (Inherited: 0x0)
struct FDataRegistryIdFormat
{
	struct FGameplayTag BaseGameplayTag; // 0x0(0x8)
};

} // namespace SDK
