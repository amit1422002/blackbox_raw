// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class VariantManagerContent.LevelVariantSets
// Size: 0x90 (Inherited: 0x28)
struct ULevelVariantSets : UObject
{
	struct UObject* DirectorClass; // 0x28(0x8)
	struct TArray<struct UVariantSet*> VariantSets; // 0x30(0x10)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)


	// Object: Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c3a8c
	// Params: [ Num(2) Size(0x18) ]
	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName);

	// Object: Function VariantManagerContent.LevelVariantSets.GetVariantSet
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c3b98
	// Params: [ Num(2) Size(0x10) ]
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex);

	// Object: Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c3c48
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumVariantSets();
};

// Object: Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x2F8 (Inherited: 0x2E0)
struct ALevelVariantSetsActor : AActor
{
	struct FSoftObjectPath LevelVariantSets; // 0x2E0(0x18)


	// Object: Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c41cc
	// Params: [ Num(3) Size(0x21) ]
	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c40dc
	// Params: [ Num(3) Size(0x9) ]
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c4370
	// Params: [ Num(1) Size(0x8) ]
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c4418
	// Params: [ Num(2) Size(0x10) ]
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// Object: Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40 (Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class VariantManagerContent.PropertyValue
// Size: 0x1B8 (Inherited: 0x28)
struct UPropertyValue : UObject
{
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x88(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x98(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xA8(0x10)
	struct FString FullDisplayString; // 0xB8(0x10)
	struct FName PropertySetterName; // 0xC8(0x8)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xD0(0x50)
	bool bHasRecordedData; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct UObject* LeafPropertyClass; // 0x128(0x8)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)
	struct TArray<uint8_t> ValueBytes; // 0x138(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x148(0x1)
	uint8_t Pad_0x149[0x6F]; // 0x149(0x6F)


	// Object: Function VariantManagerContent.PropertyValue.HasRecordedData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32c4b20
	// Params: [ Num(1) Size(0x1) ]
	bool HasRecordedData();

	// Object: Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32c4bd4
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetPropertyTooltip();

	// Object: Function VariantManagerContent.PropertyValue.GetFullDisplayString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32c4b58
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFullDisplayString();
};

// Object: Class VariantManagerContent.PropertyValueTransform
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueTransform : UPropertyValue
{
};

// Object: Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueVisibility : UPropertyValue
{
};

// Object: Class VariantManagerContent.PropertyValueColor
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueColor : UPropertyValue
{
};

// Object: Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueMaterial : UPropertyValue
{
};

// Object: Class VariantManagerContent.PropertyValueOption
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueOption : UPropertyValue
{
};

// Object: Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueSoftObject : UPropertyValue
{
};

// Object: Class VariantManagerContent.SwitchActor
// Size: 0x308 (Inherited: 0x2E0)
struct ASwitchActor : AActor
{
	uint8_t Pad_0x2E0[0x18]; // 0x2E0(0x18)
	struct USceneComponent* SceneComponent; // 0x2F8(0x8)
	int32_t LastSelectedOption; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)


	// Object: Function VariantManagerContent.SwitchActor.SelectOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c5604
	// Params: [ Num(1) Size(0x4) ]
	void SelectOption(int32_t OptionIndex);

	// Object: Function VariantManagerContent.SwitchActor.GetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32c56ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedOption();

	// Object: Function VariantManagerContent.SwitchActor.GetOptions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32c56e0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetOptions();
};

// Object: Class VariantManagerContent.Variant
// Size: 0x70 (Inherited: 0x28)
struct UVariant : UObject
{
	struct FText DisplayText; // 0x28(0x18)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x58(0x10)
	struct UTexture2D* Thumbnail; // 0x68(0x8)


	// Object: Function VariantManagerContent.Variant.SwitchOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c5b18
	// Params: [ Num(0) Size(0x0) ]
	void SwitchOn();

	// Object: Function VariantManagerContent.Variant.SetDisplayText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32c5ce0
	// Params: [ Num(1) Size(0x18) ]
	void SetDisplayText(struct FText& NewDisplayText);

	// Object: Function VariantManagerContent.Variant.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c5ae0
	// Params: [ Num(1) Size(0x1) ]
	bool IsActive();

	// Object: Function VariantManagerContent.Variant.GetThumbnail
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32c5aac
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture2D* GetThumbnail();

	// Object: Function VariantManagerContent.Variant.GetNumActors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c5bdc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumActors();

	// Object: Function VariantManagerContent.Variant.GetDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32c5c10
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDisplayText();

	// Object: Function VariantManagerContent.Variant.GetActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c5b2c
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetActor(int32_t ActorIndex);
};

// Object: Class VariantManagerContent.VariantObjectBinding
// Size: 0x90 (Inherited: 0x28)
struct UVariantObjectBinding : UObject
{
	struct FString CachedActorLabel; // 0x28(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x38(0x18)
	struct TLazyObjectPtr<struct UObject> LazyObjectPtr; // 0x50(0x1C)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x70(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x80(0x10)
};

// Object: Class VariantManagerContent.VariantSet
// Size: 0x70 (Inherited: 0x28)
struct UVariantSet : UObject
{
	struct FText DisplayText; // 0x28(0x18)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	bool bExpanded; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct TArray<struct UVariant*> Variants; // 0x60(0x10)


	// Object: Function VariantManagerContent.VariantSet.SetDisplayText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32c67c8
	// Params: [ Num(1) Size(0x18) ]
	void SetDisplayText(struct FText& NewDisplayText);

	// Object: Function VariantManagerContent.VariantSet.GetVariantByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c6508
	// Params: [ Num(2) Size(0x18) ]
	struct UVariant* GetVariantByName(struct FString VariantName);

	// Object: Function VariantManagerContent.VariantSet.GetVariant
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c6614
	// Params: [ Num(2) Size(0x10) ]
	struct UVariant* GetVariant(int32_t VariantIndex);

	// Object: Function VariantManagerContent.VariantSet.GetNumVariants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x32c66c4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumVariants();

	// Object: Function VariantManagerContent.VariantSet.GetDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32c66f8
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDisplayText();
};

} // namespace SDK
