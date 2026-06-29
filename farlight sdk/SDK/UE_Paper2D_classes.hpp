// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class Paper2D.AutoSpriteAtlasFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAutoSpriteAtlasFunctionLibrary : UBlueprintFunctionLibrary
{
};

// Object: Class Paper2D.AutoSpriteAtlasSettings
// Size: 0x230 (Inherited: 0x38)
struct UAutoSpriteAtlasSettings : UDeveloperSettings
{
	struct TArray<struct FString> ScanRootPaths; // 0x38(0x10)
	int32_t CommonTextureRefCountLimit; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct TArray<struct FString> IgnoreDirectoryPaths; // 0x50(0x10)
	struct TArray<struct FString> AtlasScanRootPaths; // 0x60(0x10)
	struct TArray<struct FString> IgnoreSpritePaths; // 0x70(0x10)
	struct FString ArtResourcesRootPath; // 0x80(0x10)
	struct TArray<struct FString> TexturesScanRootPaths; // 0x90(0x10)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> TexturePathsToAlwaysPack; // 0xA0(0x10)
	struct TArray<struct FTextureToAlwaysPackEntry> TexturesToAlwaysPack; // 0xB0(0x10)
	struct TArray<struct FTextureToAlwaysPackFromBlueprintEntry> TexturesToAlwaysPackFromBlueprint; // 0xC0(0x10)
	struct TArray<struct FTextureToAlwaysPackFromDirectoryEntry> TexturesToAlwaysPackFromDirectory; // 0xD0(0x10)
	struct TArray<struct FString> IgnoreTexturePaths; // 0xE0(0x10)
	struct TArray<struct FString> UIBlueprintPaths; // 0xF0(0x10)
	struct TArray<struct FString> IgnoreUIBlueprintPaths; // 0x100(0x10)
	struct TArray<struct FString> UIBlueprintSubAtlasPaths; // 0x110(0x10)
	struct TArray<struct FUIBlueprintCommonMapPath> UIBlueprintCommonPaths; // 0x120(0x10)
	int32_t FilterSizeThreshold; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct TMap<struct FString, int32_t> CustomFilterSizeThresholds; // 0x138(0x50)
	int32_t TextureRefMinCountToAtlasCommon; // 0x188(0x4)
	int32_t TextureMinCountGenerateAtlas; // 0x18C(0x4)
	bool bEnableAutoTextureToAtlas; // 0x190(0x1)
	uint8_t Pad_0x191[0x7]; // 0x191(0x7)
	struct FSoftObjectPath AutoSpriteAtlasManagerPath; // 0x198(0x18)
	struct FSoftObjectPath SpriteTemplatePath; // 0x1B0(0x18)
	bool bDiffCopyTexturePreview; // 0x1C8(0x1)
	bool bGenerateTextureClassifyResult; // 0x1C9(0x1)
	bool bGenerateTextureClassifyAtlas; // 0x1CA(0x1)
	bool bGenerateAllPaperSprites; // 0x1CB(0x1)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)
	struct TArray<struct FString> TextureClassifyWhiteList; // 0x1D0(0x10)
	struct TArray<struct FString> PackAtlasWhiteList; // 0x1E0(0x10)
	struct TArray<struct FDirectoryPath> DynamicAtlasTexturePaths; // 0x1F0(0x10)
	struct TArray<struct FString> IgnoreDynamicAtlasTexturePaths; // 0x200(0x10)
	struct TArray<struct FSoftClassPath> AnalyseWidgetBlueprints; // 0x210(0x10)
	struct TArray<struct FSoftObjectPath> CustomLayoutWidgetBlueprints; // 0x220(0x10)


	// Object: Function Paper2D.AutoSpriteAtlasSettings.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38af7b0
	// Params: [ Num(1) Size(0x8) ]
	struct UAutoSpriteAtlasSettings* GetInstance();
};

// Object: Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0x110 (Inherited: 0xF0)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D
{
	bool bSampleAdditionalTextures; // 0xEC(0x1)
	int32_t AdditionalSlotIndex; // 0xF0(0x4)
	uint8_t Pad_0xF5[0x3]; // 0xF5(0x3)
	struct FText SlotDisplayName; // 0xF8(0x18)
};

// Object: Class Paper2D.PaperCharacter
// Size: 0x590 (Inherited: 0x590)
struct APaperCharacter : ACharacter
{
	struct UPaperFlipbookComponent* Sprite; // 0x588(0x8)
};

// Object: Class Paper2D.PaperFlipbook
// Size: 0x50 (Inherited: 0x28)
struct UPaperFlipbook : UObject
{
	float FramesPerSecond; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x8)
	uint8_t CollisionSource; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)


	// Object: Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b00f0
	// Params: [ Num(2) Size(0x5) ]
	bool IsValidKeyFrameIndex(int32_t Index);

	// Object: Function Paper2D.PaperFlipbook.GetTotalDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b046c
	// Params: [ Num(1) Size(0x4) ]
	float GetTotalDuration();

	// Object: Function Paper2D.PaperFlipbook.GetSpriteAtTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b027c
	// Params: [ Num(3) Size(0x10) ]
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);

	// Object: Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b01cc
	// Params: [ Num(2) Size(0x10) ]
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);

	// Object: Function Paper2D.PaperFlipbook.GetNumKeyFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b01b0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumKeyFrames();

	// Object: Function Paper2D.PaperFlipbook.GetNumFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b04a0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumFrames();

	// Object: Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0374
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

// Object: Class Paper2D.PaperFlipbookActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct APaperFlipbookActor : AActor
{
	struct UPaperFlipbookComponent* RenderComponent; // 0x2E0(0x8)
};

// Object: Class Paper2D.PaperFlipbookComponent
// Size: 0x750 (Inherited: 0x700)
struct UPaperFlipbookComponent : UMeshComponent
{
	struct UPaperFlipbook* SourceFlipbook; // 0x700(0x8)
	struct UMaterialInterface* Material; // 0x708(0x8)
	float PlayRate; // 0x710(0x4)
	uint8_t bLooping : 1; // 0x714(0x1), Mask(0x1)
	uint8_t bReversePlayback : 1; // 0x714(0x1), Mask(0x2)
	uint8_t bPlaying : 1; // 0x714(0x1), Mask(0x4)
	uint8_t BitPad_0x714_3 : 5; // 0x714(0x1)
	uint8_t Pad_0x715[0x3]; // 0x715(0x3)
	float AccumulatedTime; // 0x718(0x4)
	int32_t CachedFrameIndex; // 0x71C(0x4)
	struct FLinearColor SpriteColor; // 0x720(0x10)
	struct UBodySetup* CachedBodySetup; // 0x730(0x8)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x738(0x10)
	uint8_t Pad_0x748[0x8]; // 0x748(0x8)


	// Object: Function Paper2D.PaperFlipbookComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b107c
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38b10e0
	// Params: [ Num(1) Size(0x10) ]
	void SetSpriteColor(struct FLinearColor NewColor);

	// Object: Function Paper2D.PaperFlipbookComponent.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b0c38
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayRate(float NewRate);

	// Object: Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b0f20
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);

	// Object: Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b0dfc
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);

	// Object: Function Paper2D.PaperFlipbookComponent.SetNewTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b0b5c
	// Params: [ Num(1) Size(0x4) ]
	void SetNewTime(float NewTime);

	// Object: Function Paper2D.PaperFlipbookComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b0d18
	// Params: [ Num(1) Size(0x1) ]
	void SetLooping(bool bNewLooping);

	// Object: Function Paper2D.PaperFlipbookComponent.SetFlipbook
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38b11c4
	// Params: [ Num(2) Size(0x9) ]
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook);

	// Object: Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b1090
	// Params: [ Num(0) Size(0x0) ]
	void ReverseFromEnd();

	// Object: Function Paper2D.PaperFlipbookComponent.Reverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b10a4
	// Params: [ Num(0) Size(0x0) ]
	void Reverse();

	// Object: Function Paper2D.PaperFlipbookComponent.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b10b8
	// Params: [ Num(0) Size(0x0) ]
	void PlayFromStart();

	// Object: Function Paper2D.PaperFlipbookComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b10cc
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	// Flags: [Final|Native|Protected]
	// Offset: 0x38b0a18
	// Params: [ Num(1) Size(0x8) ]
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook);

	// Object: Function Paper2D.PaperFlipbookComponent.IsReversing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b100c
	// Params: [ Num(1) Size(0x1) ]
	bool IsReversing();

	// Object: Function Paper2D.PaperFlipbookComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b1044
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function Paper2D.PaperFlipbookComponent.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0ce0
	// Params: [ Num(1) Size(0x1) ]
	bool IsLooping();

	// Object: Function Paper2D.PaperFlipbookComponent.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0c04
	// Params: [ Num(1) Size(0x4) ]
	float GetPlayRate();

	// Object: Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0eec
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPlaybackPositionInFrames();

	// Object: Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0dc8
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackPosition();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0af4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFlipbookLengthInFrames();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0b28
	// Params: [ Num(1) Size(0x4) ]
	float GetFlipbookLength();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b0ac0
	// Params: [ Num(1) Size(0x4) ]
	float GetFlipbookFramerate();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbook
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38b1188
	// Params: [ Num(1) Size(0x8) ]
	struct UPaperFlipbook* GetFlipbook();
};

// Object: Class Paper2D.PaperGroupedSpriteActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct APaperGroupedSpriteActor : AActor
{
	struct UPaperGroupedSpriteComponent* RenderComponent; // 0x2E0(0x8)
};

// Object: Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x730 (Inherited: 0x700)
struct UPaperGroupedSpriteComponent : UMeshComponent
{
	struct TArray<struct UMaterialInterface*> InstanceMaterials; // 0x700(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x710(0x10)
	uint8_t Pad_0x720[0x10]; // 0x720(0x10)


	// Object: Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x38b2134
	// Params: [ Num(6) Size(0x44) ]
	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38b1ff0
	// Params: [ Num(4) Size(0x16) ]
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38b1e3c
	// Params: [ Num(1) Size(0xC) ]
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38b1f34
	// Params: [ Num(2) Size(0x5) ]
	bool RemoveInstance(int32_t InstanceIndex);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b234c
	// Params: [ Num(4) Size(0x42) ]
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b1ee4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInstanceCount();

	// Object: Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38b1f18
	// Params: [ Num(0) Size(0x0) ]
	void ClearInstances();

	// Object: Function Paper2D.PaperGroupedSpriteComponent.AddInstance
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x38b24c0
	// Params: [ Num(5) Size(0x50) ]
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color);
};

// Object: Class Paper2D.PaperRuntimeSettings
// Size: 0x30 (Inherited: 0x28)
struct UPaperRuntimeSettings : UObject
{
	bool bEnableSpriteAtlasGroups; // 0x28(0x1)
	bool bEnableTerrainSplineEditing; // 0x29(0x1)
	bool bResizeSpriteDataToMatchTextures; // 0x2A(0x1)
	bool bGeneratePaperSprites; // 0x2B(0x1)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class Paper2D.PaperSpriteDataSheet
// Size: 0x78 (Inherited: 0x28)
struct UPaperSpriteDataSheet : UObject
{
	struct TMap<struct FString, struct FPaperSpriteData> SpriteDataMap; // 0x28(0x50)
};

// Object: Class Paper2D.PaperSprite
// Size: 0xF0 (Inherited: 0x28)
struct UPaperSprite : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct UPaperSpriteDataSheet* SpriteDataSheet; // 0x48(0x8)
	struct FVector2D BakedSourceUV; // 0x50(0x8)
	struct FVector2D BakedSourceDimension; // 0x58(0x8)
	struct UTexture2D* BakedSourceTexture; // 0x60(0x8)
	struct UMaterialInterface* DefaultMaterial; // 0x68(0x8)
	struct UMaterialInterface* AlternateMaterial; // 0x70(0x8)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x78(0x10)
	uint8_t SpriteCollisionDomain; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	float PixelsPerUnrealUnit; // 0x8C(0x4)
	struct UBodySetup* BodySetup; // 0x90(0x8)
	int32_t AlternateMaterialSplitIndex; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct TArray<struct FVector4> BakedRenderData; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x40]; // 0xB0(0x40)
};

// Object: Class Paper2D.PaperSpriteFrame
// Size: 0x40 (Inherited: 0x28)
struct UPaperSpriteFrame : UObject
{
	struct FVector2D BakedSourceUV; // 0x28(0x8)
	struct FVector2D BakedSourceDimension; // 0x30(0x8)
	struct UTexture2D* BakedSourceTexture; // 0x38(0x8)
};

// Object: Class Paper2D.PaperSpriteActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct APaperSpriteActor : AActor
{
	struct UPaperSpriteComponent* RenderComponent; // 0x2E0(0x8)
};

// Object: Class Paper2D.PaperSpriteAtlas
// Size: 0x80 (Inherited: 0x28)
struct UPaperSpriteAtlas : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TMap<struct FName, struct UPaperSpriteFrame*> SpriteFrames; // 0x30(0x50)
};

// Object: Class Paper2D.PaperSpriteAtlasManager
// Size: 0x178 (Inherited: 0x28)
struct UPaperSpriteAtlasManager : UObject
{
	struct TMap<struct FString, struct TSoftObjectPtr<UPaperSpriteAtlas>> SpriteAtlasSoftMap; // 0x28(0x50)
	uint8_t Pad_0x78[0x50]; // 0x78(0x50)
	struct TArray<struct FWidgetBlueprintTextureToSpriteEntry> WidgetBlueprintSpriteMoveInfoList; // 0xC8(0x10)
	struct TMap<struct FString, int32_t> WidgetBlueprintSpriteComponentMoveInfos; // 0xD8(0x50)
	struct TMap<struct FString, struct FWidgetBlueprintTextureToSpriteInfo> WidgetBlueprintSpriteMoveInfos; // 0x128(0x50)
};

// Object: Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38b63a4
	// Params: [ Num(4) Size(0x130) ]
	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height);
};

// Object: Class Paper2D.PaperSpriteComponent
// Size: 0x720 (Inherited: 0x700)
struct UPaperSpriteComponent : UMeshComponent
{
	struct UPaperSprite* SourceSprite; // 0x700(0x8)
	struct UMaterialInterface* MaterialOverride; // 0x708(0x8)
	struct FLinearColor SpriteColor; // 0x710(0x10)


	// Object: Function Paper2D.PaperSpriteComponent.SetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38b6814
	// Params: [ Num(1) Size(0x10) ]
	void SetSpriteColor(struct FLinearColor NewColor);

	// Object: Function Paper2D.PaperSpriteComponent.SetSprite
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38b68f8
	// Params: [ Num(2) Size(0x9) ]
	bool SetSprite(struct UPaperSprite* NewSprite);

	// Object: Function Paper2D.PaperSpriteComponent.GetSprite
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38b68bc
	// Params: [ Num(1) Size(0x8) ]
	struct UPaperSprite* GetSprite();
};

// Object: Class Paper2D.PaperTerrainActor
// Size: 0x2F8 (Inherited: 0x2E0)
struct APaperTerrainActor : AActor
{
	struct USceneComponent* DummyRoot; // 0x2E0(0x8)
	struct UPaperTerrainSplineComponent* SplineComponent; // 0x2E8(0x8)
	struct UPaperTerrainComponent* RenderComponent; // 0x2F0(0x8)
};

// Object: Class Paper2D.PaperTerrainComponent
// Size: 0x650 (Inherited: 0x5F0)
struct UPaperTerrainComponent : UPrimitiveComponent
{
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x5F0(0x8)
	bool bClosedSpline; // 0x5F8(0x1)
	bool bFilledSpline; // 0x5F9(0x1)
	uint8_t Pad_0x5FA[0x6]; // 0x5FA(0x6)
	struct UPaperTerrainSplineComponent* AssociatedSpline; // 0x600(0x8)
	int32_t RandomSeed; // 0x608(0x4)
	float SegmentOverlapAmount; // 0x60C(0x4)
	struct FLinearColor TerrainColor; // 0x610(0x10)
	int32_t ReparamStepsPerSegment; // 0x620(0x4)
	uint8_t SpriteCollisionDomain; // 0x624(0x1)
	uint8_t Pad_0x625[0x3]; // 0x625(0x3)
	float CollisionThickness; // 0x628(0x4)
	uint8_t Pad_0x62C[0x4]; // 0x62C(0x4)
	struct UBodySetup* CachedBodySetup; // 0x630(0x8)
	uint8_t Pad_0x638[0x18]; // 0x638(0x18)


	// Object: Function Paper2D.PaperTerrainComponent.SetTerrainColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38b6f64
	// Params: [ Num(1) Size(0x10) ]
	void SetTerrainColor(struct FLinearColor NewColor);
};

// Object: Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset
{
	struct TArray<struct FPaperTerrainMaterialRule> Rules; // 0x30(0x10)
	struct UPaperSprite* InteriorFill; // 0x40(0x8)
};

// Object: Class Paper2D.PaperTerrainSplineComponent
// Size: 0x6F0 (Inherited: 0x6E0)
struct UPaperTerrainSplineComponent : USplineComponent
{
	uint8_t Pad_0x6E0[0x10]; // 0x6E0(0x10)
};

// Object: Class Paper2D.PaperTileLayer
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileLayer : UObject
{
	struct FText LayerName; // 0x28(0x18)
	int32_t LayerWidth; // 0x40(0x4)
	int32_t LayerHeight; // 0x44(0x4)
	uint8_t bHiddenInGame : 1; // 0x48(0x1), Mask(0x1)
	uint8_t bLayerCollides : 1; // 0x48(0x1), Mask(0x2)
	uint8_t bOverrideCollisionThickness : 1; // 0x48(0x1), Mask(0x4)
	uint8_t bOverrideCollisionOffset : 1; // 0x48(0x1), Mask(0x8)
	uint8_t BitPad_0x48_4 : 4; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float CollisionThicknessOverride; // 0x4C(0x4)
	float CollisionOffsetOverride; // 0x50(0x4)
	struct FLinearColor LayerColor; // 0x54(0x10)
	int32_t AllocatedWidth; // 0x64(0x4)
	int32_t AllocatedHeight; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x70(0x10)
	struct UPaperTileSet* TileSet; // 0x80(0x8)
	struct TArray<int32_t> AllocatedGrid; // 0x88(0x10)
};

// Object: Class Paper2D.PaperTileMap
// Size: 0xA8 (Inherited: 0x28)
struct UPaperTileMap : UObject
{
	int32_t MapWidth; // 0x28(0x4)
	int32_t MapHeight; // 0x2C(0x4)
	int32_t TileWidth; // 0x30(0x4)
	int32_t TileHeight; // 0x34(0x4)
	float PixelsPerUnrealUnit; // 0x38(0x4)
	float SeparationPerTileX; // 0x3C(0x4)
	float SeparationPerTileY; // 0x40(0x4)
	float SeparationPerLayer; // 0x44(0x4)
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x48(0x28)
	struct UMaterialInterface* Material; // 0x70(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x4)
	uint8_t SpriteCollisionDomain; // 0x8C(0x1)
	uint8_t ProjectionMode; // 0x8D(0x1)
	uint8_t Pad_0x8E[0x2]; // 0x8E(0x2)
	int32_t HexSideLength; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct UBodySetup* BodySetup; // 0x98(0x8)
	int32_t LayerNameIndex; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: Class Paper2D.PaperTileMapActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct APaperTileMapActor : AActor
{
	struct UPaperTileMapComponent* RenderComponent; // 0x2E0(0x8)
};

// Object: Class Paper2D.PaperTileMapComponent
// Size: 0x750 (Inherited: 0x700)
struct UPaperTileMapComponent : UMeshComponent
{
	int32_t MapWidth; // 0x6FC(0x4)
	int32_t MapHeight; // 0x700(0x4)
	int32_t TileWidth; // 0x704(0x4)
	int32_t TileHeight; // 0x708(0x4)
	struct UPaperTileSet* DefaultLayerTileSet; // 0x710(0x8)
	struct UMaterialInterface* Material; // 0x718(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x720(0x10)
	struct FLinearColor TileMapColor; // 0x730(0x10)
	int32_t UseSingleLayerIndex; // 0x740(0x4)
	bool bUseSingleLayer; // 0x744(0x1)
	uint8_t Pad_0x745[0x3]; // 0x745(0x3)
	struct UPaperTileMap* TileMap; // 0x748(0x8)


	// Object: Function Paper2D.PaperTileMapComponent.SetTileMapColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38b894c
	// Params: [ Num(1) Size(0x10) ]
	void SetTileMapColor(struct FLinearColor NewColor);

	// Object: Function Paper2D.PaperTileMapComponent.SetTileMap
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38b8f34
	// Params: [ Num(2) Size(0x9) ]
	bool SetTileMap(struct UPaperTileMap* NewTileMap);

	// Object: Function Paper2D.PaperTileMapComponent.SetTile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b8b44
	// Params: [ Num(4) Size(0x20) ]
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue);

	// Object: Function Paper2D.PaperTileMapComponent.SetLayerColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38b87b0
	// Params: [ Num(2) Size(0x14) ]
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer);

	// Object: Function Paper2D.PaperTileMapComponent.SetLayerCollision
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b7fa8
	// Params: [ Num(7) Size(0x15) ]
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);

	// Object: Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b81f8
	// Params: [ Num(2) Size(0x5) ]
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);

	// Object: Function Paper2D.PaperTileMapComponent.ResizeMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b8a60
	// Params: [ Num(2) Size(0x8) ]
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);

	// Object: Function Paper2D.PaperTileMapComponent.RebuildCollision
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b7f94
	// Params: [ Num(0) Size(0x0) ]
	void RebuildCollision();

	// Object: Function Paper2D.PaperTileMapComponent.OwnsTileMap
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b8ff0
	// Params: [ Num(1) Size(0x1) ]
	bool OwnsTileMap();

	// Object: Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b879c
	// Params: [ Num(0) Size(0x0) ]
	void MakeTileMapEditable();

	// Object: Function Paper2D.PaperTileMapComponent.GetTilePolygon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b82e8
	// Params: [ Num(5) Size(0x1D) ]
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace);

	// Object: Function Paper2D.PaperTileMapComponent.GetTileMapColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b89f4
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetTileMapColor();

	// Object: Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b8624
	// Params: [ Num(5) Size(0x1C) ]
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);

	// Object: Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b84ac
	// Params: [ Num(5) Size(0x1C) ]
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);

	// Object: Function Paper2D.PaperTileMapComponent.GetTile
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b8cb0
	// Params: [ Num(4) Size(0x20) ]
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);

	// Object: Function Paper2D.PaperTileMapComponent.GetMapSize
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x38b8de0
	// Params: [ Num(3) Size(0xC) ]
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);

	// Object: Function Paper2D.PaperTileMapComponent.GetLayerColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38b8898
	// Params: [ Num(2) Size(0x14) ]
	struct FLinearColor GetLayerColor(int32_t Layer);

	// Object: Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b9028
	// Params: [ Num(6) Size(0x15) ]
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);

	// Object: Function Paper2D.PaperTileMapComponent.AddNewLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38b8a2c
	// Params: [ Num(1) Size(0x8) ]
	struct UPaperTileLayer* AddNewLayer();
};

// Object: Class Paper2D.PaperTileSet
// Size: 0xA8 (Inherited: 0x28)
struct UPaperTileSet : UObject
{
	struct FIntPoint TileSize; // 0x28(0x8)
	struct UTexture2D* TileSheet; // 0x30(0x8)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FIntMargin BorderMargin; // 0x48(0x10)
	struct FIntPoint PerTileSpacing; // 0x58(0x8)
	struct FIntPoint DrawingOffset; // 0x60(0x8)
	int32_t WidthInTiles; // 0x68(0x4)
	int32_t HeightInTiles; // 0x6C(0x4)
	int32_t AllocatedWidth; // 0x70(0x4)
	int32_t AllocatedHeight; // 0x74(0x4)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x78(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x88(0x10)
	int32_t TileWidth; // 0x98(0x4)
	int32_t TileHeight; // 0x9C(0x4)
	int32_t Margin; // 0xA0(0x4)
	int32_t Spacing; // 0xA4(0x4)
};

// Object: Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function Paper2D.TileMapBlueprintLibrary.MakeTile
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38bd5a0
	// Params: [ Num(6) Size(0x28) ]
	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);

	// Object: Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38bda58
	// Params: [ Num(2) Size(0x18) ]
	struct FName GetTileUserData(struct FPaperTileInfo Tile);

	// Object: Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x38bd998
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile);

	// Object: Function Paper2D.TileMapBlueprintLibrary.BreakTile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38bd76c
	// Params: [ Num(6) Size(0x23) ]
	void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
};

} // namespace SDK
