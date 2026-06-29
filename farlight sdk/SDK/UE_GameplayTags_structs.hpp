// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Object: Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Object: Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Object: Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Object: Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// Object: ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagContainer
{
	struct TArray<struct FGameplayTag> GameplayTags; // 0x0(0x10)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTag
// Size: 0x8 (Inherited: 0x0)
struct FGameplayTag
{
	struct FName TagName; // 0x0(0x8)
};

// Object: ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x0)
struct FGameplayTagQuery
{
	int32_t TokenStreamVersion; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x8(0x10)
	struct TArray<uint8_t> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x1 (Inherited: 0x0)
struct FGameplayTagCreationWidgetHelper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTagReferenceHelper
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTagRedirect
{
	struct FName OldTagName; // 0x0(0x8)
	struct FName NewTagName; // 0x8(0x8)
};

// Object: ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50 (Inherited: 0x0)
struct FGameplayTagNode
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagSource
{
	struct FName SourceName; // 0x0(0x8)
	enum class EGameplayTagSourceType SourceType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UGameplayTagsList* SourceTagList; // 0x10(0x8)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x8)
};

// Object: ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 (Inherited: 0x8)
struct FGameplayTagTableRow : FTableRowBase
{
	struct FName Tag; // 0x8(0x8)
	struct FString DevComment; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{
	bool bAllowNonRestrictedChildren; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x20 (Inherited: 0x0)
struct FRestrictedConfigInfo
{
	struct FString RestrictedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagCategoryRemap
{
	struct FString BaseCategory; // 0x0(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

} // namespace SDK
