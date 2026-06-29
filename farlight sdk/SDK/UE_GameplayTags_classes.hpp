// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a94aac
	// Params: [ Num(3) Size(0x29) ]
	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a93e50
	// Params: [ Num(3) Size(0x19) ]
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a93cc8
	// Params: [ Num(3) Size(0x31) ]
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a946f8
	// Params: [ Num(3) Size(0x41) ]
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a9582c
	// Params: [ Num(3) Size(0x11) ]
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a95b5c
	// Params: [ Num(4) Size(0x12) ]
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a959fc
	// Params: [ Num(4) Size(0x2A) ]
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a945e4
	// Params: [ Num(2) Size(0x40) ]
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a95624
	// Params: [ Num(2) Size(0x10) ]
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a941bc
	// Params: [ Num(2) Size(0x90) ]
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a94434
	// Params: [ Num(2) Size(0x28) ]
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a94500
	// Params: [ Num(2) Size(0x30) ]
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a94fe0
	// Params: [ Num(2) Size(0x49) ]
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a95780
	// Params: [ Num(2) Size(0x9) ]
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a953f4
	// Params: [ Num(4) Size(0x2A) ]
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a95260
	// Params: [ Num(4) Size(0x42) ]
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a950cc
	// Params: [ Num(4) Size(0x42) ]
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a94098
	// Params: [ Num(3) Size(0x31) ]
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a956cc
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetTagName(struct FGameplayTag& GameplayTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a95554
	// Params: [ Num(2) Size(0x24) ]
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a93bc0
	// Params: [ Num(2) Size(0x30) ]
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a93ae0
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a94cd0
	// Params: [ Num(4) Size(0x68) ]
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a94838
	// Params: [ Num(3) Size(0x41) ]
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a95914
	// Params: [ Num(3) Size(0x11) ]
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a93f9c
	// Params: [ Num(3) Size(0x19) ]
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a94e88
	// Params: [ Num(3) Size(0x69) ]
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a94310
	// Params: [ Num(2) Size(0x30) ]
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a94978
	// Params: [ Num(2) Size(0x40) ]
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a94bc4
	// Params: [ Num(2) Size(0x28) ]
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag);
};

// Object: Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameplayTagAssetInterface : IInterface
{

	// Object: Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9a96a44
	// Params: [ Num(2) Size(0x9) ]
	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck);

	// Object: Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9a9687c
	// Params: [ Num(2) Size(0x21) ]
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9a96960
	// Params: [ Num(2) Size(0x21) ]
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9a96b00
	// Params: [ Num(1) Size(0x20) ]
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer);
};

// Object: Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98 (Inherited: 0x28)
struct UEditableGameplayTagQuery : UObject
{
	struct FString UserDescription; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x48(0x8)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression : UObject
{
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression
{
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression
{
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression
{
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression
{
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression
{
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression
{
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class GameplayTags.GameplayTagsManager
// Size: 0x248 (Inherited: 0x28)
struct UGameplayTagsManager : UObject
{
	uint8_t Pad_0x28[0x140]; // 0x28(0x140)
	struct TMap<struct FName, struct FGameplayTagSource> TagSources; // 0x168(0x50)
	uint8_t Pad_0x1B8[0x80]; // 0x1B8(0x80)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x238(0x10)
};

// Object: Class GameplayTags.GameplayTagsList
// Size: 0x98 (Inherited: 0x28)
struct UGameplayTagsList : UObject
{
	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x38(0x10)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)
};

// Object: Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedGameplayTagsList : UObject
{
	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38(0x10)
};

// Object: Class GameplayTags.GameplayTagsSettings
// Size: 0x108 (Inherited: 0x98)
struct UGameplayTagsSettings : UGameplayTagsList
{
	bool ImportTagsFromConfig; // 0x98(0x1)
	bool WarnOnInvalidTags; // 0x99(0x1)
	bool ClearInvalidTags; // 0x9A(0x1)
	bool FastReplication; // 0x9B(0x1)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FString InvalidTagCharacters; // 0xA0(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0xB0(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0xC0(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0xD0(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0xE0(0x10)
	int32_t NumBitsForContainerSize; // 0xF0(0x4)
	int32_t NetIndexFirstBitSegment; // 0xF4(0x4)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xF8(0x10)
};

// Object: Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x50 (Inherited: 0x38)
struct UGameplayTagsDeveloperSettings : UDeveloperSettings
{
	struct FString DeveloperConfigName; // 0x38(0x10)
	struct FName FavoriteTagSource; // 0x48(0x8)
};

} // namespace SDK
