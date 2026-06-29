// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct AHoudiniAssetActor : AActor
{
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x2E0(0x8)
};

// Object: Class HoudiniEngineRuntime.HiddenHoudiniAssetActor
// Size: 0x2E8 (Inherited: 0x2E8)
struct AHiddenHoudiniAssetActor : AHoudiniAssetActor
{
};

// Object: Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniAsset : UObject
{
	struct FString AssetFileName; // 0x28(0x10)
	struct TArray<uint8_t> AssetBytes; // 0x38(0x10)
	uint32_t AssetBytesCount; // 0x48(0x4)
	bool bAssetLimitedCommercial; // 0x4C(0x1)
	bool bAssetNonCommercial; // 0x4D(0x1)
	bool bAssetExpanded; // 0x4E(0x1)
	uint8_t Pad_0x4F[0x1]; // 0x4F(0x1)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0xB90 (Inherited: 0x5F0)
struct UHoudiniAssetComponent : UPrimitiveComponent
{
	uint8_t Pad_0x5F0[0x8]; // 0x5F0(0x8)
	struct FHoudiniInputLandscapeTransferParams LandscapeTransferParams; // 0x5F8(0xC8)
	struct TArray<struct FDirectoryPath> Directories; // 0x6C0(0x10)
	struct UHoudiniAsset* HoudiniAsset; // 0x6D0(0x8)
	bool bCookOnParameterChange; // 0x6D8(0x1)
	bool bUploadTransformsToHoudiniEngine; // 0x6D9(0x1)
	bool bCookOnTransformChange; // 0x6DA(0x1)
	bool bCookOnAssetInputCook; // 0x6DB(0x1)
	bool bOutputless; // 0x6DC(0x1)
	bool bOutputTemplateGeos; // 0x6DD(0x1)
	bool bUseOutputNodes; // 0x6DE(0x1)
	uint8_t Pad_0x6DF[0x1]; // 0x6DF(0x1)
	struct FDirectoryPath TemporaryCookFolder; // 0x6E0(0x10)
	struct FDirectoryPath BakeFolder; // 0x6F0(0x10)
	enum class EHoudiniStaticMeshMethod StaticMeshMethod; // 0x700(0x1)
	uint8_t Pad_0x701[0x7]; // 0x701(0x7)
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties; // 0x708(0x180)
	struct FMeshBuildSettings StaticMeshBuildSettings; // 0x888(0x30)
	bool bOverrideGlobalProxyStaticMeshSettings; // 0x8B8(0x1)
	bool bEnableProxyStaticMeshOverride; // 0x8B9(0x1)
	bool bEnableProxyStaticMeshRefinementByTimerOverride; // 0x8BA(0x1)
	uint8_t Pad_0x8BB[0x1]; // 0x8BB(0x1)
	float ProxyMeshAutoRefineTimeoutSecondsOverride; // 0x8BC(0x4)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x8C0(0x1)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x8C1(0x1)
	uint8_t Pad_0x8C2[0x2]; // 0x8C2(0x2)
	int32_t AssetId; // 0x8C4(0x4)
	struct TArray<int32_t> NodeIdsToCook; // 0x8C8(0x10)
	struct TMap<int32_t, int32_t> OutputNodeCookCounts; // 0x8D8(0x50)
	struct TSet<struct UHoudiniAssetComponent*> DownstreamHoudiniAssets; // 0x928(0x50)
	struct FGuid ComponentGUID; // 0x978(0x10)
	struct FGuid HapiGUID; // 0x988(0x10)
	struct FString HapiAssetName; // 0x998(0x10)
	enum class EHoudiniAssetState AssetState; // 0x9A8(0x1)
	enum class EHoudiniAssetState DebugLastAssetState; // 0x9A9(0x1)
	enum class EHoudiniAssetStateResult AssetStateResult; // 0x9AA(0x1)
	uint8_t Pad_0x9AB[0x5]; // 0x9AB(0x5)
	struct FTransform LastComponentTransform; // 0x9B0(0x30)
	uint32_t SubAssetIndex; // 0x9E0(0x4)
	int32_t AssetCookCount; // 0x9E4(0x4)
	bool bHasBeenLoaded; // 0x9E8(0x1)
	bool bHasBeenDuplicated; // 0x9E9(0x1)
	bool bPendingDelete; // 0x9EA(0x1)
	bool bRecookRequested; // 0x9EB(0x1)
	bool bRebuildRequested; // 0x9EC(0x1)
	bool bEnableCooking; // 0x9ED(0x1)
	bool bForceNeedUpdate; // 0x9EE(0x1)
	bool bLastCookSuccess; // 0x9EF(0x1)
	bool bParameterDefinitionUpdateNeeded; // 0x9F0(0x1)
	bool bBlueprintStructureModified; // 0x9F1(0x1)
	bool bBlueprintModified; // 0x9F2(0x1)
	uint8_t Pad_0x9F3[0x5]; // 0x9F3(0x5)
	struct TArray<struct UHoudiniParameter*> Parameters; // 0x9F8(0x10)
	struct TArray<struct UHoudiniInput*> Inputs; // 0xA08(0x10)
	struct TArray<struct UHoudiniOutput*> Outputs; // 0xA18(0x10)
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0xA28(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> UntrackedOutputs; // 0xA38(0x10)
	struct TArray<struct UHoudiniHandleComponent*> HandleComponents; // 0xA48(0x10)
	bool bHasComponentTransformChanged; // 0xA58(0x1)
	bool bFullyLoaded; // 0xA59(0x1)
	uint8_t Pad_0xA5A[0x6]; // 0xA5A(0x6)
	struct UHoudiniPDGAssetLink* PDGAssetLink; // 0xA60(0x8)
	struct FTimerHandle RefineMeshesTimer; // 0xA68(0x8)
	uint8_t Pad_0xA70[0x18]; // 0xA70(0x18)
	bool bNoProxyMeshNextCookRequested; // 0xA88(0x1)
	uint8_t Pad_0xA89[0x7]; // 0xA89(0x7)
	struct TMap<struct UObject*, int32_t> InputPresets; // 0xA90(0x50)
	bool bBakeAfterNextCook; // 0xAE0(0x1)
	uint8_t Pad_0xAE1[0x7F]; // 0xAE1(0x7F)
	bool bCachedIsPreview; // 0xB60(0x1)
	uint8_t Pad_0xB61[0xF]; // 0xB61(0xF)
	double LastTickTime; // 0xB70(0x8)
	uint8_t Pad_0xB78[0x18]; // 0xB78(0x18)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// Size: 0xC90 (Inherited: 0xB90)
struct UHoudiniAssetBlueprintComponent : UHoudiniAssetComponent
{
	uint8_t Pad_0xB90[0x48]; // 0xB90(0x48)
	bool FauxBPProperty; // 0xBD8(0x1)
	bool bHoudiniAssetChanged; // 0xBD9(0x1)
	bool bUpdatedFromTemplate; // 0xBDA(0x1)
	bool bIsInBlueprintEditor; // 0xBDB(0x1)
	bool bCanDeleteHoudiniNodes; // 0xBDC(0x1)
	bool bHasRegisteredComponentTemplate; // 0xBDD(0x1)
	uint8_t Pad_0xBDE[0xA]; // 0xBDE(0xA)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes; // 0xBE8(0x50)
	struct TMap<struct FGuid, struct FGuid> CachedInputNodes; // 0xC38(0x50)
	uint8_t Pad_0xC88[0x8]; // 0xC88(0x8)


	// Object: Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x31e3470
	// Params: [ Num(3) Size(0x18) ]
	void SetToggleValueAt(struct FString Name, bool Value, int32_t Index);

	// Object: Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x31e35fc
	// Params: [ Num(3) Size(0x18) ]
	void SetFloatParameter(struct FString Name, float Value, int32_t Index);

	// Object: Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x31e3778
	// Params: [ Num(2) Size(0x11) ]
	bool HasParameter(struct FString Name);
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameter
// Size: 0x80 (Inherited: 0x28)
struct UHoudiniAssetParameter : UObject
{
	uint8_t Pad_0x28[0x58]; // 0x28(0x58)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterButton : UHoudiniAssetParameter
{
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// Size: 0xB8 (Inherited: 0x80)
struct UHoudiniAssetParameterChoice : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x38]; // 0x80(0x38)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterColor : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// Size: 0xA8 (Inherited: 0x80)
struct UHoudiniAssetParameterFile : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x28]; // 0x80(0x28)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// Size: 0xB8 (Inherited: 0x80)
struct UHoudiniAssetParameterFloat : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x38]; // 0x80(0x38)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterFolder : UHoudiniAssetParameter
{
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterFolderList : UHoudiniAssetParameter
{
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// Size: 0xB0 (Inherited: 0x80)
struct UHoudiniAssetParameterInt : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x30]; // 0x80(0x30)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterLabel : UHoudiniAssetParameter
{
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// Size: 0x88 (Inherited: 0x80)
struct UHoudiniAssetParameterMultiparm : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// Size: 0x98 (Inherited: 0x80)
struct UHoudiniAssetParameterRamp : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x18]; // 0x80(0x18)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterSeparator : UHoudiniAssetParameter
{
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterString
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterString : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterToggle : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
// Size: 0xC8 (Inherited: 0x28)
struct UHoudiniAssetComponentMaterials_V1 : UObject
{
	uint8_t Pad_0x28[0xA0]; // 0x28(0xA0)
};

// Object: Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
// Size: 0x3E0 (Inherited: 0x350)
struct UHoudiniHandleComponent_V1 : USceneComponent
{
	uint8_t Pad_0x350[0x90]; // 0x350(0x90)
};

// Object: Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
// Size: 0x440 (Inherited: 0x350)
struct UHoudiniSplineComponent_V1 : USceneComponent
{
	uint8_t Pad_0x350[0xF0]; // 0x350(0xF0)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetInput
// Size: 0x1A0 (Inherited: 0x80)
struct UHoudiniAssetInput : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0x120]; // 0x80(0x120)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// Size: 0x160 (Inherited: 0x80)
struct UHoudiniAssetInstanceInput : UHoudiniAssetParameter
{
	uint8_t Pad_0x80[0xE0]; // 0x80(0xE0)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// Size: 0x190 (Inherited: 0x28)
struct UHoudiniAssetInstanceInputField : UObject
{
	uint8_t Pad_0x28[0x168]; // 0x28(0x168)
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
// Size: 0xAE0 (Inherited: 0x5F0)
struct UHoudiniAssetComponent_V1 : UPrimitiveComponent
{
	uint8_t bGeneratedDoubleSidedGeometry : 1; // 0x5F0(0x1), Mask(0x1)
	uint8_t BitPad_0x5F0_1 : 7; // 0x5F0(0x1)
	uint8_t Pad_0x5F1[0x7]; // 0x5F1(0x7)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x5F8(0x8)
	struct FBodyInstance DefaultBodyInstance; // 0x600(0x130)
	uint8_t GeneratedCollisionTraceFlag; // 0x730(0x1)
	uint8_t Pad_0x731[0x3]; // 0x731(0x3)
	int32_t GeneratedLightMapResolution; // 0x734(0x4)
	float GeneratedDistanceFieldResolutionScale; // 0x738(0x4)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x73C(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x74C(0x4)
	uint8_t bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x750(0x1), Mask(0x1)
	uint8_t BitPad_0x750_1 : 7; // 0x750(0x1)
	uint8_t Pad_0x751[0x3]; // 0x751(0x3)
	float GeneratedStreamingDistanceMultiplier; // 0x754(0x4)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x758(0x8)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x760(0x10)
	struct FText BakeFolder; // 0x770(0x18)
	struct FText TempCookFolder; // 0x788(0x18)
	uint8_t Pad_0x7A0[0x340]; // 0x7A0(0x340)
};

// Object: Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
// Size: 0x360 (Inherited: 0x350)
struct UHoudiniInstancedActorComponent_V1 : USceneComponent
{
	uint8_t Pad_0x350[0x10]; // 0x350(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
// Size: 0x370 (Inherited: 0x350)
struct UHoudiniMeshSplitInstancerComponent_V1 : USceneComponent
{
	uint8_t Pad_0x350[0x20]; // 0x350(0x20)
};

// Object: Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// Size: 0x28 (Inherited: 0x28)
struct IHoudiniEngineCopyPropertiesInterface : IInterface
{
};

// Object: Class HoudiniEngineRuntime.HoudiniHandleParameter
// Size: 0x38 (Inherited: 0x28)
struct UHoudiniHandleParameter : UObject
{
	struct UHoudiniParameter* AssetParameter; // 0x28(0x8)
	int32_t TupleIndex; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: Class HoudiniEngineRuntime.HoudiniHandleComponent
// Size: 0x380 (Inherited: 0x350)
struct UHoudiniHandleComponent : USceneComponent
{
	struct TArray<struct UHoudiniHandleParameter*> XformParms; // 0x348(0x10)
	struct UHoudiniHandleParameter* RSTParm; // 0x358(0x8)
	struct UHoudiniHandleParameter* RotOrderParm; // 0x360(0x8)
	enum class EHoudiniHandleType HandleType; // 0x368(0x1)
	struct FString HandleName; // 0x370(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniInput
// Size: 0x278 (Inherited: 0x28)
struct UHoudiniInput : UObject
{
	struct FString Name; // 0x28(0x10)
	struct FString Label; // 0x38(0x10)
	enum class EHoudiniInputType Type; // 0x48(0x1)
	enum class EHoudiniInputType PreviousType; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	int32_t AssetNodeId; // 0x4C(0x4)
	int32_t InputNodeId; // 0x50(0x4)
	int32_t InputIndex; // 0x54(0x4)
	int32_t ParmId; // 0x58(0x4)
	bool bIsObjectPathParameter; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct TArray<int32_t> CreatedDataNodeIds; // 0x60(0x10)
	bool bHasChanged; // 0x70(0x1)
	bool bNeedsToTriggerUpdate; // 0x71(0x1)
	uint8_t Pad_0x72[0x2]; // 0x72(0x2)
	struct FBox CachedBounds; // 0x74(0x1C)
	struct FString Help; // 0x90(0x10)
	enum class EHoudiniXformType KeepWorldTransform; // 0xA0(0x1)
	bool bPackBeforeMerge; // 0xA1(0x1)
	bool bImportAsReference; // 0xA2(0x1)
	bool bImportAsReferenceRotScaleEnabled; // 0xA3(0x1)
	bool bImportAsReferenceBboxEnabled; // 0xA4(0x1)
	bool bImportAsReferenceMaterialEnabled; // 0xA5(0x1)
	bool bExportLODs; // 0xA6(0x1)
	bool bExportSockets; // 0xA7(0x1)
	bool bExportColliders; // 0xA8(0x1)
	bool bExportMaterialParameters; // 0xA9(0x1)
	bool bCookOnCurveChanged; // 0xAA(0x1)
	uint8_t Pad_0xAB[0x5]; // 0xAB(0x5)
	struct TArray<struct UHoudiniInputObject*> GeometryInputObjects; // 0xB0(0x10)
	bool bStaticMeshChanged; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct TArray<struct UHoudiniInputObject*> AssetInputObjects; // 0xC8(0x10)
	bool bInputAssetConnectedInHoudini; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct TArray<struct UHoudiniInputObject*> CurveInputObjects; // 0xE0(0x10)
	float DefaultCurveOffset; // 0xF0(0x4)
	bool bAddRotAndScaleAttributesOnCurves; // 0xF4(0x1)
	bool bUseLegacyInputCurves; // 0xF5(0x1)
	uint8_t Pad_0xF6[0x2]; // 0xF6(0x2)
	struct TArray<struct UHoudiniInputObject*> LandscapeInputObjects; // 0xF8(0x10)
	bool bLandscapeHasExportTypeChanged; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct TArray<struct UHoudiniInputObject*> LandscapeSplinesInputObjects; // 0x110(0x10)
	struct TArray<struct UHoudiniInputObject*> FoliageInputObjects; // 0x120(0x10)
	struct TArray<struct UHoudiniInputObject*> WorldSMCInputObjects; // 0x130(0x10)
	struct TArray<struct UHoudiniInputObject*> PointCloudInputObjects; // 0x140(0x10)
	struct TArray<struct UHoudiniInputObject*> WorldInputObjects; // 0x150(0x10)
	struct TArray<struct UHoudiniInputObject*> TextureInputObjects; // 0x160(0x10)
	struct TArray<struct AActor*> WorldInputBoundSelectorObjects; // 0x170(0x10)
	bool bIsWorldInputBoundSelector; // 0x180(0x1)
	bool bWorldInputBoundSelectorAutoUpdate; // 0x181(0x1)
	uint8_t Pad_0x182[0x2]; // 0x182(0x2)
	float UnrealSplineResolution; // 0x184(0x4)
	struct TArray<struct UHoudiniInputObject*> SkeletalInputObjects; // 0x188(0x10)
	struct TArray<struct UHoudiniInputObject*> GeometryCollectionInputObjects; // 0x198(0x10)
	struct TSet<struct ULandscapeComponent*> LandscapeSelectedComponents; // 0x1A8(0x50)
	struct TSet<int32_t> InputNodesPendingDelete; // 0x1F8(0x50)
	struct TArray<struct UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs; // 0x248(0x10)
	struct TArray<struct UHoudiniInputObject*> LastUndoDeletedInputs; // 0x258(0x10)
	bool bUpdateInputLandscape; // 0x268(0x1)
	enum class EHoudiniLandscapeExportType LandscapeExportType; // 0x269(0x1)
	bool bLandscapeExportSelectionOnly; // 0x26A(0x1)
	bool bLandscapeAutoSelectComponent; // 0x26B(0x1)
	bool bLandscapeExportMaterials; // 0x26C(0x1)
	bool bLandscapeExportLighting; // 0x26D(0x1)
	bool bLandscapeExportNormalizedUVs; // 0x26E(0x1)
	bool bLandscapeExportTileUVs; // 0x26F(0x1)
	bool bCanDeleteHoudiniNodes; // 0x270(0x1)
	bool bAutoSelectInputType; // 0x271(0x1)
	bool bEnableSMCWorldFilter; // 0x272(0x1)
	bool bIsIncludeStaticMesh; // 0x273(0x1)
	bool bNeedSendModelMaterial; // 0x274(0x1)
	bool bNeedSendDataTableModel; // 0x275(0x1)
	bool bNeedSendFoliageInstanceCustomData; // 0x276(0x1)
	uint8_t Pad_0x277[0x1]; // 0x277(0x1)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputObject
// Size: 0xF0 (Inherited: 0x28)
struct UHoudiniInputObject : UObject
{
	struct TSoftObjectPtr<UObject> InputObject; // 0x28(0x28)
	struct FTransform Transform; // 0x50(0x30)
	enum class EHoudiniInputObjectType Type; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	int32_t InputNodeId; // 0x84(0x4)
	int32_t InputObjectNodeId; // 0x88(0x4)
	struct FGuid Guid; // 0x8C(0x10)
	uint8_t Pad_0x9C[0x2C]; // 0x9C(0x2C)
	bool bHasChanged; // 0xC8(0x1)
	bool bNeedsToTriggerUpdate; // 0xC9(0x1)
	bool bTransformChanged; // 0xCA(0x1)
	bool bImportAsReference; // 0xCB(0x1)
	bool bImportAsReferenceRotScaleEnabled; // 0xCC(0x1)
	bool bImportAsReferenceBboxEnabled; // 0xCD(0x1)
	bool bImportAsReferenceMaterialEnabled; // 0xCE(0x1)
	uint8_t Pad_0xCF[0x1]; // 0xCF(0x1)
	struct TArray<struct FString> MaterialReferences; // 0xD0(0x10)
	bool bCanDeleteHoudiniNodes; // 0xE0(0x1)
	uint8_t Pad_0xE1[0xF]; // 0xE1(0xF)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputStaticMesh : UHoudiniInputObject
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputTexture
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputTexture : UHoudiniInputObject
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputSkeletalMesh : UHoudiniInputObject
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputGeometryCollection : UHoudiniInputObject
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// Size: 0x120 (Inherited: 0xF0)
struct UHoudiniInputSceneComponent : UHoudiniInputObject
{
	struct FTransform ActorTransform; // 0xF0(0x30)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// Size: 0x150 (Inherited: 0x120)
struct UHoudiniInputMeshComponent : UHoudiniInputSceneComponent
{
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x120(0x28)
	uint8_t Pad_0x148[0x8]; // 0x148(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// Size: 0x160 (Inherited: 0x150)
struct UHoudiniInputInstancedMeshComponent : UHoudiniInputMeshComponent
{
	struct TArray<struct FTransform> InstanceTransforms; // 0x148(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputLandscapeSplineComponent
// Size: 0x140 (Inherited: 0x120)
struct UHoudiniInputLandscapeSplineComponent : UHoudiniInputSceneComponent
{
	int32_t NumberOfSplineControlPoints; // 0x120(0x4)
	float SplineLength; // 0x124(0x4)
	float SplineResolution; // 0x128(0x4)
	bool SplineClosed; // 0x12C(0x1)
	uint8_t Pad_0x12D[0x3]; // 0x12D(0x3)
	struct TArray<struct FTransform> SplineControlPoints; // 0x130(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// Size: 0x140 (Inherited: 0x120)
struct UHoudiniInputSplineComponent : UHoudiniInputSceneComponent
{
	int32_t NumberOfSplineControlPoints; // 0x120(0x4)
	float SplineLength; // 0x124(0x4)
	float SplineResolution; // 0x128(0x4)
	bool SplineClosed; // 0x12C(0x1)
	uint8_t Pad_0x12D[0x3]; // 0x12D(0x3)
	struct TArray<struct FTransform> SplineControlPoints; // 0x130(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
// Size: 0x120 (Inherited: 0x120)
struct UHoudiniInputGeometryCollectionComponent : UHoudiniInputSceneComponent
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
// Size: 0x120 (Inherited: 0x120)
struct UHoudiniInputSkeletalMeshComponent : UHoudiniInputSceneComponent
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputHoudiniSplineComponent : UHoudiniInputObject
{
	enum class EHoudiniCurveType CurveType; // 0xE1(0x1)
	enum class EHoudiniCurveMethod CurveMethod; // 0xE2(0x1)
	bool Reversed; // 0xE3(0x1)
	struct UHoudiniSplineComponent* CachedComponent; // 0xE8(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// Size: 0x140 (Inherited: 0x120)
struct UHoudiniInputCameraComponent : UHoudiniInputSceneComponent
{
	float FOV; // 0x120(0x4)
	float AspectRatio; // 0x124(0x4)
	bool bIsOrthographic; // 0x128(0x1)
	uint8_t Pad_0x129[0x3]; // 0x129(0x3)
	float OrthoWidth; // 0x12C(0x4)
	float OrthoNearClipPlane; // 0x130(0x4)
	float OrthoFarClipPlane; // 0x134(0x4)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputHoudiniAsset : UHoudiniInputObject
{
	int32_t AssetOutputIndex; // 0xE4(0x4)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputActor
// Size: 0x150 (Inherited: 0xF0)
struct UHoudiniInputActor : UHoudiniInputObject
{
	struct TArray<struct UHoudiniInputSceneComponent*> ActorComponents; // 0xE8(0x10)
	struct TSet<struct TSoftObjectPtr<UObject>> ActorSceneComponents; // 0xF8(0x50)
	int32_t LastUpdateNumComponentsAdded; // 0x148(0x4)
	int32_t LastUpdateNumComponentsRemoved; // 0x14C(0x4)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputLandscape
// Size: 0x250 (Inherited: 0x150)
struct UHoudiniInputLandscape : UHoudiniInputActor
{
	struct FTransform CachedInputLandscapeTraqnsform; // 0x150(0x30)
	int32_t CachedNumLandscapeComponents; // 0x180(0x4)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	struct FHoudiniInputLandscapeTransferParams TransferParams; // 0x188(0xC8)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputInstancedFoliage
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputInstancedFoliage : UHoudiniInputObject
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputBrush
// Size: 0x170 (Inherited: 0x150)
struct UHoudiniInputBrush : UHoudiniInputActor
{
	struct TArray<struct FHoudiniBrushInfo> BrushesInfo; // 0x150(0x10)
	struct UModel* CombinedModel; // 0x160(0x8)
	bool bIgnoreInputObject; // 0x168(0x1)
	uint8_t CachedInputBrushType; // 0x169(0x1)
	uint8_t Pad_0x16A[0x6]; // 0x16A(0x6)
};

// Object: Class HoudiniEngineRuntime.HoudiniInputDataTable
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputDataTable : UHoudiniInputObject
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
// Size: 0xF0 (Inherited: 0xF0)
struct UHoudiniInputFoliageType_InstancedStaticMesh : UHoudiniInputStaticMesh
{
};

// Object: Class HoudiniEngineRuntime.HoudiniInputBlueprint
// Size: 0x150 (Inherited: 0xF0)
struct UHoudiniInputBlueprint : UHoudiniInputObject
{
	struct TArray<struct UHoudiniInputSceneComponent*> BPComponents; // 0xE8(0x10)
	struct TSet<struct TSoftObjectPtr<UObject>> BPSceneComponents; // 0xF8(0x50)
	int32_t LastUpdateNumComponentsAdded; // 0x148(0x4)
	int32_t LastUpdateNumComponentsRemoved; // 0x14C(0x4)
};

// Object: Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// Size: 0x360 (Inherited: 0x350)
struct UHoudiniInstancedActorComponent : USceneComponent
{
	struct UObject* InstancedObject; // 0x348(0x8)
	struct TArray<struct AActor*> InstancedActors; // 0x350(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// Size: 0x370 (Inherited: 0x350)
struct UHoudiniMeshSplitInstancerComponent : USceneComponent
{
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x348(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x358(0x10)
	struct UStaticMesh* InstancedMesh; // 0x368(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniLandscapePtr
// Size: 0x60 (Inherited: 0x28)
struct UHoudiniLandscapePtr : UObject
{
	struct TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr; // 0x28(0x28)
	enum class EHoudiniLandscapeOutputBakeType BakeType; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FName EditLayerName; // 0x54(0x8)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer
// Size: 0x60 (Inherited: 0x28)
struct UHoudiniLandscapeEditLayer : UObject
{
	struct TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr; // 0x28(0x28)
	struct FString LayerName; // 0x50(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniOutput
// Size: 0x1B0 (Inherited: 0x28)
struct UHoudiniOutput : UObject
{
	enum class EHoudiniOutputType Type; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TArray<struct FHoudiniGeoPartObject> HoudiniGeoPartObjects; // 0x30(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects; // 0x40(0x50)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs; // 0x90(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> AssignementMaterials; // 0xE0(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> ReplacementMaterials; // 0x130(0x50)
	uint8_t Pad_0x180[0x4]; // 0x180(0x4)
	bool bLandscapeWorldComposition; // 0x184(0x1)
	uint8_t Pad_0x185[0x3]; // 0x185(0x3)
	struct TArray<struct AActor*> HoudiniCreatedSocketActors; // 0x188(0x10)
	struct TArray<struct AActor*> HoudiniAttachedSocketActors; // 0x198(0x10)
	bool bIsEditableNode; // 0x1A8(0x1)
	bool bHasEditableNodeBuilt; // 0x1A9(0x1)
	bool bIsUpdating; // 0x1AA(0x1)
	bool bCanDeleteHoudiniNodes; // 0x1AB(0x1)
	uint8_t Pad_0x1AC[0x4]; // 0x1AC(0x4)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameter
// Size: 0x108 (Inherited: 0x28)
struct UHoudiniParameter : UObject
{
	struct FString Name; // 0x28(0x10)
	struct FString Label; // 0x38(0x10)
	enum class EHoudiniParameterType ParmType; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	uint32_t TupleSize; // 0x4C(0x4)
	int32_t NodeId; // 0x50(0x4)
	int32_t ParmId; // 0x54(0x4)
	int32_t ParentParmId; // 0x58(0x4)
	int32_t ChildIndex; // 0x5C(0x4)
	bool bIsVisible; // 0x60(0x1)
	bool bIsParentFolderVisible; // 0x61(0x1)
	bool bIsDisabled; // 0x62(0x1)
	bool bHasChanged; // 0x63(0x1)
	bool bNeedsToTriggerUpdate; // 0x64(0x1)
	bool bIsDefault; // 0x65(0x1)
	bool bIsSpare; // 0x66(0x1)
	bool bJoinNext; // 0x67(0x1)
	bool bIsChildOfMultiParm; // 0x68(0x1)
	bool bIsDirectChildOfMultiParm; // 0x69(0x1)
	bool bPendingRevertToDefault; // 0x6A(0x1)
	uint8_t Pad_0x6B[0x5]; // 0x6B(0x5)
	struct TArray<int32_t> TuplePendingRevertToDefault; // 0x70(0x10)
	struct FString Help; // 0x80(0x10)
	uint32_t TagCount; // 0x90(0x4)
	int32_t ValueIndex; // 0x94(0x4)
	bool bHasExpression; // 0x98(0x1)
	bool bShowExpression; // 0x99(0x1)
	uint8_t Pad_0x9A[0x6]; // 0x9A(0x6)
	struct FString ParamExpression; // 0xA0(0x10)
	struct TMap<struct FString, struct FString> Tags; // 0xB0(0x50)
	bool bAutoUpdate; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterButton
// Size: 0x108 (Inherited: 0x108)
struct UHoudiniParameterButton : UHoudiniParameter
{
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// Size: 0x128 (Inherited: 0x108)
struct UHoudiniParameterButtonStrip : UHoudiniParameter
{
	int32_t Count; // 0x104(0x4)
	struct TArray<struct FString> Labels; // 0x108(0x10)
	struct TArray<int32_t> Values; // 0x118(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterChoice
// Size: 0x178 (Inherited: 0x108)
struct UHoudiniParameterChoice : UHoudiniParameter
{
	int32_t IntValue; // 0x104(0x4)
	int32_t DefaultIntValue; // 0x108(0x4)
	struct FString StringValue; // 0x110(0x10)
	struct FString DefaultStringValue; // 0x120(0x10)
	struct TArray<struct FString> StringChoiceValues; // 0x130(0x10)
	struct TArray<struct FString> StringChoiceLabels; // 0x140(0x10)
	uint8_t Pad_0x150[0x10]; // 0x150(0x10)
	bool bIsChildOfRamp; // 0x160(0x1)
	uint8_t Pad_0x161[0x7]; // 0x161(0x7)
	struct TArray<int32_t> IntValuesArray; // 0x168(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterColor
// Size: 0x128 (Inherited: 0x108)
struct UHoudiniParameterColor : UHoudiniParameter
{
	struct FLinearColor Color; // 0x104(0x10)
	struct FLinearColor DefaultColor; // 0x114(0x10)
	bool bIsChildOfRamp; // 0x124(0x1)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterFile
// Size: 0x140 (Inherited: 0x108)
struct UHoudiniParameterFile : UHoudiniParameter
{
	struct TArray<struct FString> Values; // 0x108(0x10)
	struct TArray<struct FString> DefaultValues; // 0x118(0x10)
	struct FString Filters; // 0x128(0x10)
	bool bIsReadOnly; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterFloat
// Size: 0x158 (Inherited: 0x108)
struct UHoudiniParameterFloat : UHoudiniParameter
{
	struct TArray<float> Values; // 0x108(0x10)
	struct TArray<float> DefaultValues; // 0x118(0x10)
	struct FString Unit; // 0x128(0x10)
	bool bNoSwap; // 0x138(0x1)
	bool bHasMin; // 0x139(0x1)
	bool bHasMax; // 0x13A(0x1)
	bool bHasUIMin; // 0x13B(0x1)
	bool bHasUIMax; // 0x13C(0x1)
	bool bIsLogarithmic; // 0x13D(0x1)
	uint8_t Pad_0x13E[0x2]; // 0x13E(0x2)
	float Min; // 0x140(0x4)
	float Max; // 0x144(0x4)
	float UIMin; // 0x148(0x4)
	float UIMax; // 0x14C(0x4)
	bool bIsChildOfRamp; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterFolder
// Size: 0x110 (Inherited: 0x108)
struct UHoudiniParameterFolder : UHoudiniParameter
{
	enum class EHoudiniFolderParameterType FolderType; // 0x101(0x1)
	bool bExpanded; // 0x102(0x1)
	bool bChosen; // 0x103(0x1)
	int32_t ChildCounter; // 0x104(0x4)
	bool bIsContentShown; // 0x108(0x1)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterFolderList
// Size: 0x118 (Inherited: 0x108)
struct UHoudiniParameterFolderList : UHoudiniParameter
{
	bool bIsTabMenu; // 0x101(0x1)
	bool bIsTabsShown; // 0x102(0x1)
	struct TArray<struct UHoudiniParameterFolder*> TabFolders; // 0x108(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterInt
// Size: 0x150 (Inherited: 0x108)
struct UHoudiniParameterInt : UHoudiniParameter
{
	struct TArray<int32_t> Values; // 0x108(0x10)
	struct TArray<int32_t> DefaultValues; // 0x118(0x10)
	struct FString Unit; // 0x128(0x10)
	bool bHasMin; // 0x138(0x1)
	bool bHasMax; // 0x139(0x1)
	bool bHasUIMin; // 0x13A(0x1)
	bool bHasUIMax; // 0x13B(0x1)
	bool bIsLogarithmic; // 0x13C(0x1)
	uint8_t Pad_0x13D[0x3]; // 0x13D(0x3)
	int32_t Min; // 0x140(0x4)
	int32_t Max; // 0x144(0x4)
	int32_t UIMin; // 0x148(0x4)
	int32_t UIMax; // 0x14C(0x4)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterLabel
// Size: 0x118 (Inherited: 0x108)
struct UHoudiniParameterLabel : UHoudiniParameter
{
	struct TArray<struct FString> LabelStrings; // 0x108(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// Size: 0x148 (Inherited: 0x108)
struct UHoudiniParameterMultiParm : UHoudiniParameter
{
	bool bIsShown; // 0x101(0x1)
	int32_t Value; // 0x104(0x4)
	struct FString TemplateName; // 0x108(0x10)
	int32_t MultiparmValue; // 0x118(0x4)
	uint32_t MultiParmInstanceNum; // 0x11C(0x4)
	uint32_t MultiParmInstanceLength; // 0x120(0x4)
	uint32_t MultiParmInstanceCount; // 0x124(0x4)
	uint32_t InstanceStartOffset; // 0x128(0x4)
	struct TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray; // 0x130(0x10)
	int32_t DefaultInstanceCount; // 0x140(0x4)
	uint8_t Pad_0x145[0x3]; // 0x145(0x3)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// Size: 0x110 (Inherited: 0x108)
struct UHoudiniParameterOperatorPath : UHoudiniParameter
{
	struct TWeakObjectPtr<struct UHoudiniInput> HoudiniInput; // 0x104(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniParameterRampModificationEvent : UObject
{
	bool bIsInsertEvent; // 0x28(0x1)
	bool bIsFloatRamp; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t DeleteInstanceIndex; // 0x2C(0x4)
	float InsertPosition; // 0x30(0x4)
	float InsertFloat; // 0x34(0x4)
	struct FLinearColor InsertColor; // 0x38(0x10)
	enum class EHoudiniRampInterpolationType InsertInterpolation; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniParameterRampFloatPoint : UObject
{
	float Position; // 0x28(0x4)
	float Value; // 0x2C(0x4)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t InstanceIndex; // 0x34(0x4)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x38(0x8)
	struct UHoudiniParameterFloat* ValueParentParm; // 0x40(0x8)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x48(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// Size: 0x60 (Inherited: 0x28)
struct UHoudiniParameterRampColorPoint : UObject
{
	float Position; // 0x28(0x4)
	struct FLinearColor Value; // 0x2C(0x10)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	int32_t InstanceIndex; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x48(0x8)
	struct UHoudiniParameterColor* ValueParentParm; // 0x50(0x8)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x58(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// Size: 0x1B0 (Inherited: 0x148)
struct UHoudiniParameterRampFloat : UHoudiniParameterMultiParm
{
	struct TArray<struct UHoudiniParameterRampFloatPoint*> Points; // 0x148(0x10)
	struct TArray<struct UHoudiniParameterRampFloatPoint*> CachedPoints; // 0x158(0x10)
	struct TArray<float> DefaultPositions; // 0x168(0x10)
	struct TArray<float> DefaultValues; // 0x178(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x188(0x10)
	int32_t NumDefaultPoints; // 0x198(0x4)
	bool bCaching; // 0x19C(0x1)
	uint8_t Pad_0x19D[0x3]; // 0x19D(0x3)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1A0(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterRampColor
// Size: 0x1B8 (Inherited: 0x148)
struct UHoudiniParameterRampColor : UHoudiniParameterMultiParm
{
	struct TArray<struct UHoudiniParameterRampColorPoint*> Points; // 0x148(0x10)
	bool bCaching; // 0x158(0x1)
	uint8_t Pad_0x159[0x7]; // 0x159(0x7)
	struct TArray<struct UHoudiniParameterRampColorPoint*> CachedPoints; // 0x160(0x10)
	struct TArray<float> DefaultPositions; // 0x170(0x10)
	struct TArray<struct FLinearColor> DefaultValues; // 0x180(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x190(0x10)
	int32_t NumDefaultPoints; // 0x1A0(0x4)
	uint8_t Pad_0x1A4[0x4]; // 0x1A4(0x4)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1A8(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterSeparator
// Size: 0x108 (Inherited: 0x108)
struct UHoudiniParameterSeparator : UHoudiniParameter
{
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterString
// Size: 0x140 (Inherited: 0x108)
struct UHoudiniParameterString : UHoudiniParameter
{
	struct TArray<struct FString> Values; // 0x108(0x10)
	struct TArray<struct FString> DefaultValues; // 0x118(0x10)
	struct TArray<struct UObject*> ChosenAssets; // 0x128(0x10)
	bool bIsAssetRef; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
};

// Object: Class HoudiniEngineRuntime.HoudiniParameterToggle
// Size: 0x128 (Inherited: 0x108)
struct UHoudiniParameterToggle : UHoudiniParameter
{
	struct TArray<int32_t> Values; // 0x108(0x10)
	struct TArray<int32_t> DefaultValues; // 0x118(0x10)
};

// Object: Class HoudiniEngineRuntime.TOPNode
// Size: 0x420 (Inherited: 0x28)
struct UTOPNode : UObject
{
	int32_t NodeId; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString NodeName; // 0x30(0x10)
	struct FString NodePath; // 0x40(0x10)
	struct FString ParentName; // 0x50(0x10)
	struct UObject* WorkResultParent; // 0x60(0x8)
	struct TArray<struct FTOPWorkResult> WorkResult; // 0x68(0x10)
	bool bHidden; // 0x78(0x1)
	bool bAutoLoad; // 0x79(0x1)
	enum class EPDGNodeState NodeState; // 0x7A(0x1)
	bool bCachedHaveNotLoadedWorkResults; // 0x7B(0x1)
	bool bCachedHaveLoadedWorkResults; // 0x7C(0x1)
	bool bHasChildNodes; // 0x7D(0x1)
	uint8_t Pad_0x7E[0x2]; // 0x7E(0x2)
	struct TSet<struct FString> ClearedLandscapeLayers; // 0x80(0x50)
	uint8_t Pad_0xD0[0x80]; // 0xD0(0x80)
	bool bShow; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
	struct TMap<struct FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs; // 0x158(0x50)
	struct FWorkItemTally WorkItemTally; // 0x1A8(0x238)
	struct FAggregatedWorkItemTally AggregatedWorkItemTally; // 0x3E0(0x28)
	bool bHasReceivedCookCompleteEvent; // 0x408(0x1)
	uint8_t Pad_0x409[0x7]; // 0x409(0x7)
	struct FOutputActorOwner OutputActorOwner; // 0x410(0x10)
};

// Object: Class HoudiniEngineRuntime.TOPNetwork
// Size: 0x98 (Inherited: 0x28)
struct UTOPNetwork : UObject
{
	int32_t NodeId; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString NodeName; // 0x30(0x10)
	struct FString NodePath; // 0x40(0x10)
	struct TArray<struct UTOPNode*> AllTOPNodes; // 0x50(0x10)
	int32_t SelectedTOPIndex; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct FString ParentName; // 0x68(0x10)
	bool bShowResults; // 0x78(0x1)
	bool bAutoLoadResults; // 0x79(0x1)
	uint8_t Pad_0x7A[0x1E]; // 0x7A(0x1E)
};

// Object: Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// Size: 0x130 (Inherited: 0x28)
struct UHoudiniPDGAssetLink : UObject
{
	struct FString AssetName; // 0x28(0x10)
	struct FString AssetNodePath; // 0x38(0x10)
	int32_t AssetId; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct TArray<struct UTOPNetwork*> AllTOPNetworks; // 0x50(0x10)
	int32_t SelectedTOPNetworkIndex; // 0x60(0x4)
	enum class EPDGLinkState LinkState; // 0x64(0x1)
	bool bAutoCook; // 0x65(0x1)
	bool bUseTOPNodeFilter; // 0x66(0x1)
	bool bUseTOPOutputFilter; // 0x67(0x1)
	struct FString TOPNodeFilter; // 0x68(0x10)
	struct FString TOPOutputFilter; // 0x78(0x10)
	int32_t NumWorkItems; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FAggregatedWorkItemTally WorkItemTally; // 0x90(0x28)
	struct FString OutputCachePath; // 0xB8(0x10)
	bool bNeedsUIRefresh; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct AActor* OutputParentActor; // 0xD0(0x8)
	struct FDirectoryPath BakeFolder; // 0xD8(0x10)
	uint8_t Pad_0xE8[0x48]; // 0xE8(0x48)
};

// Object: Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x2D0 (Inherited: 0x28)
struct UHoudiniRuntimeSettings : UObject
{
	uint8_t SessionType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString ServerHost; // 0x30(0x10)
	int32_t ServerPort; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString ServerPipeName; // 0x48(0x10)
	bool bStartAutomaticServer; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float AutomaticServerTimeout; // 0x5C(0x4)
	bool bSyncWithHoudiniCook; // 0x60(0x1)
	bool bCookUsingHoudiniTime; // 0x61(0x1)
	bool bSyncViewport; // 0x62(0x1)
	bool bSyncHoudiniViewport; // 0x63(0x1)
	bool bSyncUnrealViewport; // 0x64(0x1)
	bool bShowMultiAssetDialog; // 0x65(0x1)
	bool bPreferHdaMemoryCopyOverHdaSourceFile; // 0x66(0x1)
	bool bPauseCookingOnStart; // 0x67(0x1)
	bool bDisplaySlateCookingNotifications; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString DefaultTemporaryCookFolder; // 0x70(0x10)
	struct FString DefaultBakeFolder; // 0x80(0x10)
	bool bEnableTheReferenceCountedInputSystem; // 0x90(0x1)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x91(0x1)
	bool MarshallingLandscapesUseFullResolution; // 0x92(0x1)
	bool MarshallingLandscapesForceMinMaxValues; // 0x93(0x1)
	float MarshallingLandscapesForcedMinValue; // 0x94(0x4)
	float MarshallingLandscapesForcedMaxValue; // 0x98(0x4)
	bool bAddRotAndScaleAttributesOnCurves; // 0x9C(0x1)
	bool bUseLegacyInputCurves; // 0x9D(0x1)
	uint8_t Pad_0x9E[0x2]; // 0x9E(0x2)
	float MarshallingSplineResolution; // 0xA0(0x4)
	bool bEnableProxyStaticMesh; // 0xA4(0x1)
	bool bShowDefaultMesh; // 0xA5(0x1)
	bool bEnableProxyStaticMeshRefinementByTimer; // 0xA6(0x1)
	uint8_t Pad_0xA7[0x1]; // 0xA7(0x1)
	float ProxyMeshAutoRefineTimeoutSeconds; // 0xA8(0x4)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorld; // 0xAC(0x1)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIE; // 0xAD(0x1)
	uint8_t bDoubleSidedGeometry : 1; // 0xAE(0x1), Mask(0x1)
	uint8_t BitPad_0xAE_1 : 7; // 0xAE(0x1)
	uint8_t Pad_0xAF[0x1]; // 0xAF(0x1)
	struct UPhysicalMaterial* PhysMaterial; // 0xB0(0x8)
	struct FBodyInstance DefaultBodyInstance; // 0xB8(0x130)
	uint8_t CollisionTraceFlag; // 0x1E8(0x1)
	uint8_t Pad_0x1E9[0x3]; // 0x1E9(0x3)
	int32_t LightMapResolution; // 0x1EC(0x4)
	float LpvBiasMultiplier; // 0x1F0(0x4)
	float GeneratedDistanceFieldResolutionScale; // 0x1F4(0x4)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x1F8(0x10)
	int32_t LightMapCoordinateIndex; // 0x208(0x4)
	uint8_t bUseMaximumStreamingTexelRatio : 1; // 0x20C(0x1), Mask(0x1)
	uint8_t BitPad_0x20C_1 : 7; // 0x20C(0x1)
	uint8_t Pad_0x20D[0x3]; // 0x20D(0x3)
	float StreamingDistanceMultiplier; // 0x210(0x4)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	struct UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x218(0x8)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x220(0x10)
	bool bUseFullPrecisionUVs; // 0x230(0x1)
	uint8_t Pad_0x231[0x3]; // 0x231(0x3)
	int32_t SrcLightmapIndex; // 0x234(0x4)
	int32_t DstLightmapIndex; // 0x238(0x4)
	int32_t MinLightmapResolution; // 0x23C(0x4)
	bool bRemoveDegenerates; // 0x240(0x1)
	uint8_t GenerateLightmapUVsFlag; // 0x241(0x1)
	uint8_t RecomputeNormalsFlag; // 0x242(0x1)
	uint8_t RecomputeTangentsFlag; // 0x243(0x1)
	bool bUseMikkTSpace; // 0x244(0x1)
	bool bBuildAdjacencyBuffer; // 0x245(0x1)
	uint8_t bComputeWeightedNormals : 1; // 0x246(0x1), Mask(0x1)
	uint8_t bBuildReversedIndexBuffer : 1; // 0x246(0x1), Mask(0x2)
	uint8_t bUseHighPrecisionTangentBasis : 1; // 0x246(0x1), Mask(0x4)
	uint8_t BitPad_0x246_3 : 5; // 0x246(0x1)
	uint8_t Pad_0x247[0x1]; // 0x247(0x1)
	float DistanceFieldResolutionScale; // 0x248(0x4)
	uint8_t bGenerateDistanceFieldAsIfTwoSided : 1; // 0x24C(0x1), Mask(0x1)
	uint8_t bSupportFaceRemap : 1; // 0x24C(0x1), Mask(0x2)
	uint8_t BitPad_0x24C_2 : 6; // 0x24C(0x1)
	bool bPDGAsyncCommandletImportEnabled; // 0x24D(0x1)
	bool bEnableBackwardCompatibility; // 0x24E(0x1)
	bool bAutomaticLegacyHDARebuild; // 0x24F(0x1)
	bool bUseCustomHoudiniLocation; // 0x250(0x1)
	uint8_t Pad_0x251[0x7]; // 0x251(0x7)
	struct FDirectoryPath CustomHoudiniLocation; // 0x258(0x10)
	uint8_t HoudiniExecutable; // 0x268(0x1)
	uint8_t Pad_0x269[0x3]; // 0x269(0x3)
	int32_t CookingThreadStackSize; // 0x26C(0x4)
	struct FString HoudiniEnvironmentFiles; // 0x270(0x10)
	struct FString SyncNetDiscPath; // 0x280(0x10)
	struct FString OtlSearchPath; // 0x290(0x10)
	struct FString DsoSearchPath; // 0x2A0(0x10)
	struct FString ImageDsoSearchPath; // 0x2B0(0x10)
	struct FString AudioDsoSearchPath; // 0x2C0(0x10)
};

// Object: Class HoudiniEngineRuntime.HoudiniSplineComponent
// Size: 0x5F0 (Inherited: 0x350)
struct UHoudiniSplineComponent : USceneComponent
{
	struct TArray<struct FTransform> CurvePoints; // 0x350(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x360(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x370(0x10)
	struct FString HoudiniSplineName; // 0x380(0x10)
	bool bClosed; // 0x390(0x1)
	bool bReversed; // 0x391(0x1)
	uint8_t Pad_0x392[0x2]; // 0x392(0x2)
	int32_t CurveOrder; // 0x394(0x4)
	bool bIsHoudiniSplineVisible; // 0x398(0x1)
	enum class EHoudiniCurveType CurveType; // 0x399(0x1)
	enum class EHoudiniCurveMethod CurveMethod; // 0x39A(0x1)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization; // 0x39B(0x1)
	bool bIsOutputCurve; // 0x39C(0x1)
	bool bCookOnCurveChanged; // 0x39D(0x1)
	bool bIsLegacyInputCurve; // 0x39E(0x1)
	uint8_t Pad_0x39F[0x231]; // 0x39F(0x231)
	bool bHasChanged; // 0x5D0(0x1)
	bool bNeedsToTriggerUpdate; // 0x5D1(0x1)
	bool bIsInputCurve; // 0x5D2(0x1)
	bool bIsEditableOutputCurve; // 0x5D3(0x1)
	int32_t NodeId; // 0x5D4(0x4)
	struct FString PartName; // 0x5D8(0x10)
	uint8_t Pad_0x5E8[0x8]; // 0x5E8(0x8)
};

// Object: Class HoudiniEngineRuntime.HoudiniStaticMesh
// Size: 0xC8 (Inherited: 0x28)
struct UHoudiniStaticMesh : UObject
{
	bool bHasNormals; // 0x28(0x1)
	bool bHasTangents; // 0x29(0x1)
	bool bHasColors; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x1]; // 0x2B(0x1)
	uint32_t NumUVLayers; // 0x2C(0x4)
	bool bHasPerFaceMaterials; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct TArray<struct FVector> VertexPositions; // 0x38(0x10)
	struct TArray<struct FIntVector> TriangleIndices; // 0x48(0x10)
	struct TArray<struct FColor> VertexInstanceColors; // 0x58(0x10)
	struct TArray<struct FVector> VertexInstanceNormals; // 0x68(0x10)
	struct TArray<struct FVector> VertexInstanceUTangents; // 0x78(0x10)
	struct TArray<struct FVector> VertexInstanceVTangents; // 0x88(0x10)
	struct TArray<struct FVector2D> VertexInstanceUVs; // 0x98(0x10)
	struct TArray<int32_t> MaterialIDsPerTriangle; // 0xA8(0x10)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0xB8(0x10)


	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3203f30
	// Params: [ Num(2) Size(0x10) ]
	void SetVertexPosition(uint32_t InVertexIndex, struct FVector& InPosition);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3203ab0
	// Params: [ Num(3) Size(0x14) ]
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, uint8_t InTriangleVertexIndex, struct FVector& InVTangent);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3203810
	// Params: [ Num(4) Size(0x10) ]
	void SetTriangleVertexUV(uint32_t InTriangleIndex, uint8_t InTriangleVertexIndex, uint8_t InUVLayer, struct FVector2D& InUV);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3203be0
	// Params: [ Num(3) Size(0x14) ]
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, uint8_t InTriangleVertexIndex, struct FVector& InUTangent);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3203d10
	// Params: [ Num(3) Size(0x14) ]
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, uint8_t InTriangleVertexIndex, struct FVector& InNormal);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3203e40
	// Params: [ Num(2) Size(0x10) ]
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, struct FIntVector& InTriangleVertexIndices);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3203980
	// Params: [ Num(3) Size(0xC) ]
	void SetTriangleVertexColor(uint32_t InTriangleIndex, uint8_t InTriangleVertexIndex, struct FColor& InColor);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
	// Flags: [Final|Native|Public]
	// Offset: 0x320372c
	// Params: [ Num(2) Size(0x8) ]
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3203630
	// Params: [ Num(2) Size(0x38) ]
	void SetStaticMaterial(uint32_t InMaterialIndex, struct FStaticMaterial& InStaticMaterial);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
	// Flags: [Final|Native|Public]
	// Offset: 0x320413c
	// Params: [ Num(1) Size(0x4) ]
	void SetNumUVLayers(uint32_t InNumUVLayers);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
	// Flags: [Final|Native|Public]
	// Offset: 0x3204078
	// Params: [ Num(1) Size(0x4) ]
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
	// Flags: [Final|Native|Public]
	// Offset: 0x32042cc
	// Params: [ Num(1) Size(0x1) ]
	void SetHasTangents(bool bInHasTangents);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
	// Flags: [Final|Native|Public]
	// Offset: 0x3204464
	// Params: [ Num(1) Size(0x1) ]
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
	// Flags: [Final|Native|Public]
	// Offset: 0x3204398
	// Params: [ Num(1) Size(0x1) ]
	void SetHasNormals(bool bInHasNormals);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
	// Flags: [Final|Native|Public]
	// Offset: 0x3204200
	// Params: [ Num(1) Size(0x1) ]
	void SetHasColors(bool bInHasColors);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
	// Flags: [Final|Native|Public]
	// Offset: 0x32033ac
	// Params: [ Num(0) Size(0x0) ]
	void Optimize();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3202cb0
	// Params: [ Num(2) Size(0x2) ]
	bool IsValid(bool bInSkipVertexIndicesCheck);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
	// Flags: [Final|Native|Public]
	// Offset: 0x3204530
	// Params: [ Num(8) Size(0x14) ]
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x320437c
	// Params: [ Num(1) Size(0x1) ]
	bool HasTangents();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3204514
	// Params: [ Num(1) Size(0x1) ]
	bool HasPerFaceMaterials();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3204448
	// Params: [ Num(1) Size(0x1) ]
	bool HasNormals();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x32042b0
	// Params: [ Num(1) Size(0x1) ]
	bool HasColors();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x32032c0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetVertexPositions();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3203044
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetVertexInstanceVTangents();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3202fc8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector2D> GetVertexInstanceUVs();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x32030c4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetVertexInstanceUTangents();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3203144
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetVertexInstanceNormals();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x32031c4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FColor> GetVertexInstanceColors();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3203240
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FIntVector> GetTriangleIndices();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3202ecc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FStaticMaterial> GetStaticMaterials();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x320405c
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetNumVertices();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3204020
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetNumVertexInstances();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x32041e4
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetNumUVLayers();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3204040
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetNumTriangles();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3204120
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetNumStaticMaterials();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3202d6c
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetMaterialIndex(struct FName InMaterialSlotName);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3202f4c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetMaterialIDsPerTriangle();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
	// Flags: [Final|Native|Public]
	// Offset: 0x3202e1c
	// Params: [ Num(2) Size(0x10) ]
	struct UMaterialInterface* GetMaterial(int32_t InMaterialIndex);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
	// Flags: [Final|Native|Public]
	// Offset: 0x32033c0
	// Params: [ Num(1) Size(0x1) ]
	void CalculateTangents(bool bInComputeWeightedNormals);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
	// Flags: [Final|Native|Public]
	// Offset: 0x3203470
	// Params: [ Num(1) Size(0x1) ]
	void CalculateNormals(bool bInComputeWeightedNormals);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0x3203340
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox CalcBounds();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3203520
	// Params: [ Num(2) Size(0x34) ]
	uint32_t AddStaticMaterial(struct FStaticMaterial& InStaticMaterial);
};

// Object: Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// Size: 0x730 (Inherited: 0x700)
struct UHoudiniStaticMeshComponent : UMeshComponent
{
	struct UHoudiniStaticMesh* Mesh; // 0x700(0x8)
	struct FBox LocalBounds; // 0x708(0x1C)
	bool bHoudiniIconVisible; // 0x724(0x1)
	uint8_t Pad_0x725[0xB]; // 0x725(0xB)


	// Object: Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x3205b6c
	// Params: [ Num(1) Size(0x8) ]
	void SetMesh(struct UHoudiniStaticMesh* InMesh);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
	// Flags: [Final|Native|Public]
	// Offset: 0x3205a70
	// Params: [ Num(1) Size(0x1) ]
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
	// Flags: [Final|Native|Public]
	// Offset: 0x3205b3c
	// Params: [ Num(0) Size(0x0) ]
	void NotifyMeshUpdated();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3205b20
	// Params: [ Num(1) Size(0x1) ]
	bool IsHoudiniIconVisible();

	// Object: Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x3205b50
	// Params: [ Num(1) Size(0x8) ]
	struct UHoudiniStaticMesh* GetMesh();
};

// Object: Class HoudiniEngineRuntime.HoudiniAssetStateEvents
// Size: 0x28 (Inherited: 0x28)
struct IHoudiniAssetStateEvents : IInterface
{
};

} // namespace SDK
