// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5
};

// Object: Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8_t
{
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2,
	EDatasmithImportHierarchy_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
	LIGHTMAP_64 = 0,
	LIGHTMAP_128 = 1,
	LIGHTMAP_256 = 2,
	LIGHTMAP_512 = 3,
	LIGHTMAP_1024 = 4,
	LIGHTMAP_2048 = 5,
	LIGHTMAP_4096 = 6,
	LIGHTMAP_MAX = 7
};

// Object: Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
	LIGHTMAP_16 = 0,
	LIGHTMAP_32 = 1,
	LIGHTMAP_64 = 2,
	LIGHTMAP_128 = 3,
	LIGHTMAP_256 = 4,
	LIGHTMAP_512 = 5,
	LIGHTMAP_MAX = 6
};

// Object: Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4
};

// Object: Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2
};

// Object: ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// Size: 0x30 (Inherited: 0x0)
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
	uint8_t bEnableLookAtTracking : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bAllowRoll : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x8(0x28)
};

// Object: ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// Size: 0x40 (Inherited: 0x0)
struct FDatasmithPostProcessSettingsTemplate
{
	uint8_t bOverride_WhiteTemp : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_ColorSaturation : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_VignetteIntensity : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_FilmWhitePoint : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_AutoExposureMethod : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_CameraISO : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bOverride_CameraShutterSpeed : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bOverride_DepthOfFieldFstop : 1; // 0x0(0x1), Mask(0x80)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float WhiteTemp; // 0x4(0x4)
	float VignetteIntensity; // 0x8(0x4)
	struct FLinearColor FilmWhitePoint; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	uint8_t AutoExposureMethod; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float CameraISO; // 0x34(0x4)
	float CameraShutterSpeed; // 0x38(0x4)
	float DepthOfFieldFstop; // 0x3C(0x4)
};

// Object: ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// Size: 0x8 (Inherited: 0x0)
struct FDatasmithCameraFocusSettingsTemplate
{
	enum class ECameraFocusMethod FocusMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ManualFocusDistance; // 0x4(0x4)
};

// Object: ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// Size: 0x4 (Inherited: 0x0)
struct FDatasmithCameraLensSettingsTemplate
{
	float MaxFStop; // 0x0(0x4)
};

// Object: ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// Size: 0x8 (Inherited: 0x0)
struct FDatasmithCameraFilmbackSettingsTemplate
{
	float SensorWidth; // 0x0(0x4)
	float SensorHeight; // 0x4(0x4)
};

// Object: ScriptStruct DatasmithContent.DatasmithTessellationOptions
// Size: 0x10 (Inherited: 0x0)
struct FDatasmithTessellationOptions
{
	float ChordTolerance; // 0x0(0x4)
	float MaxEdgeLength; // 0x4(0x4)
	float NormalTolerance; // 0x8(0x4)
	enum class EDatasmithCADStitchingTechnique StitchingTechnique; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// Size: 0x14 (Inherited: 0x0)
struct FDatasmithImportBaseOptions
{
	enum class EDatasmithImportScene SceneHandling; // 0x0(0x1)
	bool bIncludeGeometry; // 0x1(0x1)
	bool bIncludeMaterial; // 0x2(0x1)
	bool bIncludeLight; // 0x3(0x1)
	bool bIncludeCamera; // 0x4(0x1)
	bool bIncludeAnimation; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FDatasmithAssetImportOptions AssetOptions; // 0x8(0x8)
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10(0x4)
};

// Object: ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// Size: 0x4 (Inherited: 0x0)
struct FDatasmithStaticMeshImportOptions
{
	enum class EDatasmithImportLightmapMin MinLightmapResolution; // 0x0(0x1)
	enum class EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1(0x1)
	bool bGenerateLightmapUVs; // 0x2(0x1)
	bool bRemoveDegenerates; // 0x3(0x1)
};

// Object: ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// Size: 0x8 (Inherited: 0x0)
struct FDatasmithAssetImportOptions
{
	struct FName PackagePath; // 0x0(0x8)
};

// Object: ScriptStruct DatasmithContent.DatasmithReimportOptions
// Size: 0x2 (Inherited: 0x0)
struct FDatasmithReimportOptions
{
	bool bUpdateActors; // 0x0(0x1)
	bool bRespawnDeletedActors; // 0x1(0x1)
};

// Object: ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// Size: 0x50 (Inherited: 0x0)
struct FDatasmithStaticParameterSetTemplate
{
	struct TMap<struct FName, bool> StaticSwitchParameters; // 0x0(0x50)
};

// Object: ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// Size: 0x50 (Inherited: 0x0)
struct FDatasmithMeshSectionInfoMapTemplate
{
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map; // 0x0(0x50)
};

// Object: ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// Size: 0x4 (Inherited: 0x0)
struct FDatasmithMeshSectionInfoTemplate
{
	int32_t MaterialIndex; // 0x0(0x4)
};

// Object: ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// Size: 0x10 (Inherited: 0x0)
struct FDatasmithStaticMaterialTemplate
{
	struct FName MaterialSlotName; // 0x0(0x8)
	struct UMaterialInterface* MaterialInterface; // 0x8(0x8)
};

// Object: ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// Size: 0x10 (Inherited: 0x0)
struct FDatasmithMeshBuildSettingsTemplate
{
	uint8_t bUseMikkTSpace : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bRecomputeNormals : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bRecomputeTangents : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bRemoveDegenerates : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bBuildAdjacencyBuffer : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bUseFullPrecisionUVs : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bGenerateLightmapUVs : 1; // 0x0(0x1), Mask(0x80)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t MinLightmapResolution; // 0x4(0x4)
	int32_t SrcLightmapIndex; // 0x8(0x4)
	int32_t DstLightmapIndex; // 0xC(0x4)
};

} // namespace SDK
