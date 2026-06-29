// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithObjectTemplate : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class DatasmithContent.DatasmithActorTemplate
// Size: 0xD0 (Inherited: 0x30)
struct UDatasmithActorTemplate : UDatasmithObjectTemplate
{
	struct TSet<struct FName> Layers; // 0x30(0x50)
	struct TSet<struct FName> Tags; // 0x80(0x50)
};

// Object: Class DatasmithContent.DatasmithAdditionalData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithAdditionalData : UObject
{
};

// Object: Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x338 (Inherited: 0x2E0)
struct ADatasmithAreaLightActor : AActor
{
	enum class EDatasmithAreaLightActorType LightType; // 0x2E0(0x1)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x2E1(0x1)
	uint8_t Pad_0x2E2[0x2]; // 0x2E2(0x2)
	struct FVector2D Dimensions; // 0x2E4(0x8)
	float Intensity; // 0x2EC(0x4)
	enum class ELightUnits IntensityUnits; // 0x2F0(0x1)
	uint8_t Pad_0x2F1[0x3]; // 0x2F1(0x3)
	struct FLinearColor Color; // 0x2F4(0x10)
	float Temperature; // 0x304(0x4)
	struct UTextureLightProfile* IESTexture; // 0x308(0x8)
	bool bUseIESBrightness; // 0x310(0x1)
	uint8_t Pad_0x311[0x3]; // 0x311(0x3)
	float IESBrightnessScale; // 0x314(0x4)
	struct FRotator Rotation; // 0x318(0xC)
	float SourceRadius; // 0x324(0x4)
	float SourceLength; // 0x328(0x4)
	float AttenuationRadius; // 0x32C(0x4)
	float SpotlightInnerAngle; // 0x330(0x4)
	float SpotlightOuterAngle; // 0x334(0x4)
};

// Object: Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0x98 (Inherited: 0x30)
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate
{
	enum class EDatasmithAreaLightActorType LightType; // 0x29(0x1)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x2A(0x1)
	struct FVector2D Dimensions; // 0x2C(0x8)
	struct FLinearColor Color; // 0x34(0x10)
	float Intensity; // 0x44(0x4)
	enum class ELightUnits IntensityUnits; // 0x48(0x1)
	float Temperature; // 0x4C(0x4)
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x50(0x28)
	bool bUseIESBrightness; // 0x78(0x1)
	float IESBrightnessScale; // 0x7C(0x4)
	struct FRotator Rotation; // 0x80(0xC)
	float SourceRadius; // 0x8C(0x4)
	float SourceLength; // 0x90(0x4)
	float AttenuationRadius; // 0x94(0x4)
};

// Object: Class DatasmithContent.DatasmithAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithAssetImportData : UAssetImportData
{
};

// Object: Class DatasmithContent.DatasmithStaticMeshImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData
{
};

// Object: Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData
{
};

// Object: Class DatasmithContent.DatasmithSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithSceneImportData : UAssetImportData
{
};

// Object: Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData
{
};

// Object: Class DatasmithContent.DatasmithCADImportSceneData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData
{
};

// Object: Class DatasmithContent.DatasmithMDLSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData
{
};

// Object: Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x70 (Inherited: 0x28)
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData
{
	struct FString Generator; // 0x28(0x10)
	float Version; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString Author; // 0x40(0x10)
	struct FString License; // 0x50(0x10)
	struct FString Source; // 0x60(0x10)
};

// Object: Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData
{
	struct FString SourceMeshName; // 0x28(0x10)
};

// Object: Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x48 (Inherited: 0x28)
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData
{
	bool bGenerateLightmapUVs; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString TexturesDir; // 0x30(0x10)
	uint8_t IntermediateSerialization; // 0x40(0x1)
	bool bColorizeMaterials; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
};

// Object: Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData
{
};

// Object: Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x88 (Inherited: 0x48)
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData
{
	bool bMergeNodes; // 0x42(0x1)
	bool bOptimizeDuplicatedNodes; // 0x43(0x1)
	bool bRemoveInvisibleNodes; // 0x44(0x1)
	bool bSimplifyNodeHierarchy; // 0x45(0x1)
	bool bImportVar; // 0x46(0x1)
	struct FString VarPath; // 0x48(0x10)
	bool bImportPos; // 0x58(0x1)
	uint8_t Pad_0x5E[0x2]; // 0x5E(0x2)
	struct FString PosPath; // 0x60(0x10)
	bool bImportTml; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FString TmlPath; // 0x78(0x10)
};

// Object: Class DatasmithContent.DatasmithVREDAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData
{
};

// Object: Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0xA0 (Inherited: 0x48)
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData
{
	bool bMergeNodes; // 0x42(0x1)
	bool bOptimizeDuplicatedNodes; // 0x43(0x1)
	bool bImportMats; // 0x44(0x1)
	struct FString MatsPath; // 0x48(0x10)
	bool bImportVar; // 0x58(0x1)
	bool bCleanVar; // 0x59(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct FString VarPath; // 0x60(0x10)
	bool bImportLightInfo; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FString LightInfoPath; // 0x78(0x10)
	bool bImportClipInfo; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FString ClipInfoPath; // 0x90(0x10)
};

// Object: Class DatasmithContent.DatasmithIFCSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData
{
};

// Object: Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData
{
	struct FString SourceGlobalId; // 0x28(0x10)
};

// Object: Class DatasmithContent.DatasmithAssetUserData
// Size: 0x78 (Inherited: 0x28)
struct UDatasmithAssetUserData : UAssetUserData
{
	struct TMap<struct FName, struct FString> MetaData; // 0x28(0x50)
};

// Object: Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x60 (Inherited: 0x30)
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30(0x30)
};

// Object: Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0x90 (Inherited: 0x30)
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x2C(0x8)
	struct FDatasmithCameraLensSettingsTemplate LensSettings; // 0x34(0x4)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x38(0x8)
	float CurrentFocalLength; // 0x40(0x4)
	float CurrentAperture; // 0x44(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50(0x40)
};

// Object: Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32b022c
	// Params: [ Num(3) Size(0x20) ]
	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key);

	// Object: Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32b0064
	// Params: [ Num(4) Size(0x38) ]
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues);

	// Object: Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32b034c
	// Params: [ Num(2) Size(0x10) ]
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object);
};

// Object: Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithCustomActionBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x2F0 (Inherited: 0x2E0)
struct ADatasmithImportedSequencesActor : AActor
{
	struct TArray<struct ULevelSequence*> ImportedSequences; // 0x2E0(0x10)


	// Object: Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32b07c4
	// Params: [ Num(1) Size(0x8) ]
	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay);
};

// Object: Class DatasmithContent.DatasmithOptionsBase
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithOptionsBase : UObject
{
};

// Object: Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase
{
	struct FDatasmithTessellationOptions options; // 0x28(0x10)
};

// Object: Class DatasmithContent.DatasmithImportOptions
// Size: 0x78 (Inherited: 0x28)
struct UDatasmithImportOptions : UDatasmithOptionsBase
{
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28(0x1)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29(0x1)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2A(0x1)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2B(0x1)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x2C(0x1)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x2D(0x1)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2E(0x1)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x2F(0x1)
	uint8_t Pad_0x30[0x4]; // 0x30(0x4)
	struct FDatasmithImportBaseOptions BaseOptions; // 0x34(0x14)
	struct FDatasmithReimportOptions ReimportOptions; // 0x48(0x2)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
	struct FString Filename; // 0x50(0x10)
	struct FString FilePath; // 0x60(0x10)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate
{
	struct UMaterialInterface* LandscapeMaterial; // 0x30(0x8)
	int32_t StaticLightingLOD; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x58 (Inherited: 0x30)
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate
{
	uint8_t bVisible : 1; // 0x29(0x1), Mask(0x1)
	uint8_t CastShadows : 1; // 0x29(0x1), Mask(0x2)
	uint8_t bUseTemperature : 1; // 0x29(0x1), Mask(0x4)
	uint8_t bUseIESBrightness : 1; // 0x29(0x1), Mask(0x8)
	float Intensity; // 0x2C(0x4)
	float Temperature; // 0x30(0x4)
	float IESBrightnessScale; // 0x34(0x4)
	struct FLinearColor LightColor; // 0x38(0x10)
	struct UMaterialInterface* LightFunctionMaterial; // 0x48(0x8)
	struct UTextureLightProfile* IESTexture; // 0x50(0x8)
};

// Object: Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x198 (Inherited: 0x30)
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate
{
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30(0x28)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x58(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0xA8(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xF8(0x50)
	struct FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148(0x50)
};

// Object: Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate
{
	enum class ELightUnits IntensityUnits; // 0x29(0x1)
	float SourceRadius; // 0x2C(0x4)
	float SourceLength; // 0x30(0x4)
	float AttenuationRadius; // 0x34(0x4)
};

// Object: Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x80 (Inherited: 0x30)
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithPostProcessSettingsTemplate Settings; // 0x30(0x40)
	uint8_t bEnabled : 1; // 0x70(0x1), Mask(0x1)
	uint8_t bUnbound : 1; // 0x70(0x1), Mask(0x2)
	uint8_t BitPad_0x70_2 : 6; // 0x70(0x1)
	uint8_t Pad_0x71[0xF]; // 0x71(0xF)
};

// Object: Class DatasmithContent.DatasmithScene
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithScene : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class DatasmithContent.DatasmithSceneActor
// Size: 0x338 (Inherited: 0x2E0)
struct ADatasmithSceneActor : AActor
{
	struct UDatasmithScene* Scene; // 0x2E0(0x8)
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors; // 0x2E8(0x50)
};

// Object: Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0xE0 (Inherited: 0x30)
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate
{
	struct FTransform RelativeTransform; // 0x30(0x30)
	uint8_t Mobility; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct TSoftObjectPtr<USceneComponent> AttachParent; // 0x68(0x28)
	struct TSet<struct FName> Tags; // 0x90(0x50)
};

// Object: Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate
{
	uint8_t SourceType; // 0x29(0x1)
	int32_t CubemapResolution; // 0x2C(0x4)
	struct UTextureCube* Cubemap; // 0x30(0x8)
};

// Object: Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate
{
	float InnerConeAngle; // 0x2C(0x4)
	float OuterConeAngle; // 0x30(0x4)
};

// Object: Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x48 (Inherited: 0x30)
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate
{
	struct UStaticMesh* StaticMesh; // 0x30(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x38(0x10)
};

// Object: Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0xA8 (Inherited: 0x30)
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30(0x50)
	int32_t LightMapCoordinateIndex; // 0x80(0x4)
	int32_t LightMapResolution; // 0x84(0x4)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88(0x10)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98(0x10)
};

} // namespace SDK
