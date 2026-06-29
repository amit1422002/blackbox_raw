// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum HoudiniEngineRuntime.EHoudiniStaticMeshMethod
enum class EHoudiniStaticMeshMethod : uint8_t
{
	RawMesh = 0,
	FMeshDescription = 1,
	UHoudiniStaticMesh = 2,
	EHoudiniStaticMeshMethod_MAX = 3
};

// Object: Enum HoudiniEngineRuntime.EHoudiniAssetStateResult
enum class EHoudiniAssetStateResult : uint8_t
{
	None = 0,
	Working = 1,
	Success = 2,
	FinishedWithError = 3,
	FinishedWithFatalError = 4,
	Aborted = 5,
	EHoudiniAssetStateResult_MAX = 6
};

// Object: Enum HoudiniEngineRuntime.EHoudiniAssetState
enum class EHoudiniAssetState : uint8_t
{
	NeedInstantiation = 0,
	NewHDA = 1,
	PreInstantiation = 2,
	Instantiating = 3,
	PreCook = 4,
	Cooking = 5,
	PostCook = 6,
	PreProcess = 7,
	Processing = 8,
	None = 9,
	NeedRebuild = 10,
	NeedDelete = 11,
	Deleting = 12,
	ProcessTemplate = 13,
	EHoudiniAssetState_MAX = 14
};

// Object: Enum HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
enum class EHoudiniProxyRefineRequestResult : uint8_t
{
	Invalid = 0,
	None = 1,
	PendingCooks = 2,
	Refined = 3,
	EHoudiniProxyRefineRequestResult_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniProxyRefineResult
enum class EHoudiniProxyRefineResult : uint8_t
{
	Invalid = 0,
	Failed = 1,
	Success = 2,
	Skipped = 3,
	EHoudiniProxyRefineResult_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniLandscapeExportType
enum class EHoudiniLandscapeExportType : uint8_t
{
	Heightfield = 0,
	Mesh = 1,
	Points = 2,
	EHoudiniLandscapeExportType_MAX = 3
};

// Object: Enum HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
enum class EHoudiniCurveBreakpointParameterization : uint8_t
{
	Invalid = 0,
	Uniform = 1,
	Chord = 2,
	Centripetal = 3,
	EHoudiniCurveBreakpointParameterization_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniCurveMethod
enum class EHoudiniCurveMethod : uint8_t
{
	Invalid = 0,
	CVs = 1,
	Breakpoints = 2,
	Freehand = 3,
	EHoudiniCurveMethod_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniCurveType
enum class EHoudiniCurveType : uint8_t
{
	Invalid = 0,
	Polygon = 1,
	Nurbs = 2,
	Bezier = 3,
	Points = 4,
	EHoudiniCurveType_MAX = 5
};

// Object: Enum HoudiniEngineRuntime.EHoudiniOutputType
enum class EHoudiniOutputType : uint8_t
{
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Landscape = 3,
	Curve = 4,
	Skeletal = 5,
	GeometryCollection = 6,
	DataTable = 7,
	Texture = 8,
	EHoudiniOutputType_MAX = 9
};

// Object: Enum HoudiniEngineRuntime.EHoudiniInputType
enum class EHoudiniInputType : uint8_t
{
	Invalid = 0,
	Geometry = 1,
	Curve = 2,
	Asset = 3,
	Landscape = 4,
	World = 5,
	Skeletal = 6,
	GeometryCollection = 7,
	Foliage = 8,
	WorldStaticMeshComponents = 9,
	PointCloud = 10,
	LandscapeSplines = 11,
	Texture = 12,
	EHoudiniInputType_MAX = 13
};

// Object: Enum HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
enum class EHoudiniLandscapeOutputBakeType : uint8_t
{
	Detachment = 0,
	BakeToImage = 1,
	BakeToWorld = 2,
	InValid = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniRampInterpolationType
enum class EHoudiniRampInterpolationType : uint8_t
{
	InValid = 0,
	CONSTANT = 1,
	LINEAR = 2,
	CATMULL_ROM = 3,
	MONOTONE_CUBIC = 4,
	BEZIER = 5,
	BSPLINE = 6,
	HERMITE = 7,
	EHoudiniRampInterpolationType_MAX = 8
};

// Object: Enum HoudiniEngineRuntime.EAttribOwner
enum class EAttribOwner : uint8_t
{
	Invalid = 0,
	Vertex = 1,
	Point = 2,
	Prim = 3,
	Detail = 4,
	EAttribOwner_MAX = 5
};

// Object: Enum HoudiniEngineRuntime.EAttribStorageType
enum class EAttribStorageType : uint8_t
{
	Invalid = 0,
	INT = 1,
	INT64 = 2,
	FLOAT = 3,
	FLOAT64 = 4,
	STRING = 5,
	EAttribStorageType_MAX = 6
};

// Object: Enum HoudiniEngineRuntime.EHoudiniInstancerType
enum class EHoudiniInstancerType : uint8_t
{
	Invalid = 0,
	ObjectInstancer = 1,
	PackedPrimitive = 2,
	AttributeInstancer = 3,
	OldSchoolAttributeInstancer = 4,
	GeometryCollection = 5,
	EHoudiniInstancerType_MAX = 6
};

// Object: Enum HoudiniEngineRuntime.EHoudiniPartType
enum class EHoudiniPartType : uint8_t
{
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Curve = 3,
	Volume = 4,
	DataTable = 5,
	Texture = 6,
	EHoudiniPartType_MAX = 7
};

// Object: Enum HoudiniEngineRuntime.EHoudiniGeoType
enum class EHoudiniGeoType : uint8_t
{
	Invalid = 0,
	Default = 1,
	Intermediate = 2,
	Input = 3,
	Curve = 4,
	EHoudiniGeoType_MAX = 5
};

// Object: Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
	Xform = 0,
	Bounder = 1,
	Unsupported = 2,
	EHoudiniHandleType_MAX = 3
};

// Object: Enum HoudiniEngineRuntime.EXformParameter
enum class EXformParameter : uint8_t
{
	TX = 0,
	TY = 1,
	TZ = 2,
	RX = 3,
	RY = 4,
	RZ = 5,
	SX = 6,
	SY = 7,
	SZ = 8,
	COUNT = 9,
	EXformParameter_MAX = 10
};

// Object: Enum HoudiniEngineRuntime.ETransferLayerMode
enum class ETransferLayerMode : uint8_t
{
	Default = 0,
	NoneLayer = 1,
	SpecifiedLayer = 2,
	UnderSpecifiedLayer = 3,
	ETransferLayerMode_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.ETransferHeightMode
enum class ETransferHeightMode : uint8_t
{
	Default = 0,
	AllLayer = 1,
	SpecifiedLayer = 2,
	UnderSpecifiedLayer = 3,
	ETransferHeightMode_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniInputObjectType
enum class EHoudiniInputObjectType : uint8_t
{
	Invalid = 0,
	Object = 1,
	StaticMesh = 2,
	SkeletalMesh = 3,
	SceneComponent = 4,
	StaticMeshComponent = 5,
	InstancedStaticMeshComponent = 6,
	SplineComponent = 7,
	HoudiniSplineComponent = 8,
	HoudiniAssetComponent = 9,
	Actor = 10,
	Landscape = 11,
	Brush = 12,
	CameraComponent = 13,
	DataTable = 14,
	HoudiniAssetActor = 15,
	FoliageType_InstancedStaticMesh = 16,
	GeometryCollection = 17,
	GeometryCollectionComponent = 18,
	GeometryCollectionActor_Deprecated = 19,
	SkeletalMeshComponent = 20,
	Blueprint = 21,
	InstancedFoliageActor = 22,
	LandscapeSplinesComponent = 23,
	Texture = 24,
	EHoudiniInputObjectType_MAX = 25
};

// Object: Enum HoudiniEngineRuntime.EHoudiniXformType
enum class EHoudiniXformType : uint8_t
{
	None = 0,
	IntoThisObject = 1,
	Auto = 2,
	EHoudiniXformType_MAX = 3
};

// Object: Enum HoudiniEngineRuntime.EHoudiniCurveOutputType
enum class EHoudiniCurveOutputType : uint8_t
{
	UnrealSpline = 0,
	HoudiniSpline = 1,
	EHoudiniCurveOutputType_MAX = 2
};

// Object: Enum HoudiniEngineRuntime.EHoudiniParameterType
enum class EHoudiniParameterType : uint8_t
{
	Invalid = 0,
	Button = 1,
	ButtonStrip = 2,
	Color = 3,
	ColorRamp = 4,
	File = 5,
	FileDir = 6,
	FileGeo = 7,
	FileImage = 8,
	Float = 9,
	FloatRamp = 10,
	Folder = 11,
	FolderList = 12,
	Input = 13,
	Int = 14,
	IntChoice = 15,
	Label = 16,
	MultiParm = 17,
	Separator = 18,
	String = 19,
	StringChoice = 20,
	StringAssetRef = 21,
	Toggle = 22,
	EHoudiniParameterType_MAX = 23
};

// Object: Enum HoudiniEngineRuntime.EHoudiniFolderParameterType
enum class EHoudiniFolderParameterType : uint8_t
{
	Invalid = 0,
	Collapsible = 1,
	Simple = 2,
	Tabs = 3,
	Radio = 4,
	Other = 5,
	EHoudiniFolderParameterType_MAX = 6
};

// Object: Enum HoudiniEngineRuntime.EHoudiniMultiParmModificationType
enum class EHoudiniMultiParmModificationType : uint8_t
{
	None = 0,
	Inserted = 1,
	Removed = 2,
	Modified = 3,
	EHoudiniMultiParmModificationType_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
enum class EHoudiniRampPointConstructStatus : uint8_t
{
	None = 0,
	INITIALIZED = 1,
	POSITION_INSERTED = 2,
	VALUE_INSERTED = 3,
	INTERPTYPE_INSERTED = 4,
	EHoudiniRampPointConstructStatus_MAX = 5
};

// Object: Enum HoudiniEngineRuntime.EPDGWorkResultState
enum class EPDGWorkResultState : uint8_t
{
	None = 0,
	ToLoad = 1,
	Loading = 2,
	Loaded = 3,
	ToDelete = 4,
	Deleting = 5,
	Deleted = 6,
	NotLoaded = 7,
	EPDGWorkResultState_MAX = 8
};

// Object: Enum HoudiniEngineRuntime.EPDGNodeState
enum class EPDGNodeState : uint8_t
{
	None = 0,
	Dirtied = 1,
	Dirtying = 2,
	Cooking = 3,
	Cook_Complete = 4,
	Cook_Failed = 5,
	EPDGNodeState_MAX = 6
};

// Object: Enum HoudiniEngineRuntime.EPDGLinkState
enum class EPDGLinkState : uint8_t
{
	Inactive = 0,
	Linking = 1,
	Linked = 2,
	Error_Not_Linked = 3,
	EPDGLinkState_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniExecutableType
enum class EHoudiniExecutableType : uint8_t
{
	HRSHE_Houdini = 0,
	HRSHE_HoudiniFX = 1,
	HRSHE_HoudiniCore = 2,
	HRSHE_HoudiniIndie = 3,
	HRSHE_MAX = 4
};

// Object: Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always = 0,
	HRSRF_OnlyIfMissing = 1,
	HRSRF_Never = 2,
	HRSRF_MAX = 3
};

// Object: Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess = 0,
	HRSST_Socket = 1,
	HRSST_NamedPipe = 2,
	HRSST_None = 3,
	HRSST_MAX = 4
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
// Size: 0x110 (Inherited: 0x58)
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData
{
	struct UHoudiniAsset* HoudiniAsset; // 0x58(0x8)
	int32_t AssetId; // 0x60(0x4)
	enum class EHoudiniAssetState AssetState; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	uint32_t SubAssetIndex; // 0x68(0x4)
	uint32_t AssetCookCount; // 0x6C(0x4)
	bool bHasBeenLoaded; // 0x70(0x1)
	bool bHasBeenDuplicated; // 0x71(0x1)
	bool bPendingDelete; // 0x72(0x1)
	bool bRecookRequested; // 0x73(0x1)
	bool bRebuildRequested; // 0x74(0x1)
	bool bEnableCooking; // 0x75(0x1)
	bool bForceNeedUpdate; // 0x76(0x1)
	bool bLastCookSuccess; // 0x77(0x1)
	struct FGuid ComponentGUID; // 0x78(0x10)
	struct FGuid HapiGUID; // 0x88(0x10)
	bool bRegisteredComponentTemplate; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FString SourceName; // 0xA0(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs; // 0xB0(0x50)
	struct TArray<struct UHoudiniInput*> Inputs; // 0x100(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
// Size: 0x40 (Inherited: 0x0)
struct FHoudiniOutputObjectIdentifier
{
	int32_t ObjectId; // 0x0(0x4)
	int32_t GeoId; // 0x4(0x4)
	int32_t PartID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString SplitIdentifier; // 0x10(0x10)
	struct FString PartName; // 0x20(0x10)
	int32_t PrimitiveIndex; // 0x30(0x4)
	int32_t PointIndex; // 0x34(0x4)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
// Size: 0x100 (Inherited: 0x0)
struct FHoudiniAssetBlueprintOutput
{
	int32_t OutputIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FHoudiniOutputObject OutputObject; // 0x8(0xF8)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
// Size: 0xF8 (Inherited: 0x0)
struct FHoudiniOutputObject
{
	struct UObject* OutputObject; // 0x0(0x8)
	struct UObject* OutputComponent; // 0x8(0x8)
	struct UObject* ProxyObject; // 0x10(0x8)
	struct UObject* ProxyComponent; // 0x18(0x8)
	bool bProxyIsCurrent; // 0x20(0x1)
	bool bIsImplicit; // 0x21(0x1)
	bool bIsGeometryCollectionPiece; // 0x22(0x1)
	uint8_t Pad_0x23[0x5]; // 0x23(0x5)
	struct FString GeometryCollectionPieceName; // 0x28(0x10)
	struct FString BakeName; // 0x38(0x10)
	struct FHoudiniCurveOutputProperties CurveOutputProperty; // 0x48(0xC)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TMap<struct FString, struct FString> CachedAttributes; // 0x58(0x50)
	struct TMap<struct FString, struct FString> CachedTokens; // 0xA8(0x50)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
// Size: 0xC (Inherited: 0x0)
struct FHoudiniCurveOutputProperties
{
	enum class EHoudiniCurveOutputType CurveOutputType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t NumPoints; // 0x4(0x4)
	bool bClosed; // 0x8(0x1)
	enum class EHoudiniCurveType CurveType; // 0x9(0x1)
	enum class EHoudiniCurveMethod CurveMethod; // 0xA(0x1)
	uint8_t Pad_0xB[0x1]; // 0xB(0x1)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
// Size: 0x50 (Inherited: 0x0)
struct FHoudiniGenericAttribute
{
	struct FString AttributeName; // 0x0(0x10)
	enum class EAttribStorageType AttributeType; // 0x10(0x1)
	enum class EAttribOwner AttributeOwner; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	int32_t AttributeCount; // 0x14(0x4)
	int32_t AttributeTupleSize; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<double> DoubleValues; // 0x20(0x10)
	struct TArray<int64_t> IntValues; // 0x30(0x10)
	struct TArray<struct FString> StringValues; // 0x40(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
// Size: 0x98 (Inherited: 0x0)
struct FHoudiniGenericAttributeChangedProperty
{
	struct UObject* Object; // 0x0(0x8)
	uint8_t Pad_0x8[0x90]; // 0x8(0x90)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
// Size: 0x230 (Inherited: 0x0)
struct FHoudiniGeoPartObject
{
	int32_t AssetId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString AssetName; // 0x8(0x10)
	int32_t ObjectId; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ObjectName; // 0x20(0x10)
	int32_t GeoId; // 0x30(0x4)
	int32_t PartID; // 0x34(0x4)
	struct FString PartName; // 0x38(0x10)
	bool bHasCustomPartName; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<struct FString> SplitGroups; // 0x50(0x10)
	struct FTransform TransformMatrix; // 0x60(0x30)
	struct FString NodePath; // 0x90(0x10)
	enum class EHoudiniPartType Type; // 0xA0(0x1)
	enum class EHoudiniInstancerType InstancerType; // 0xA1(0x1)
	uint8_t Pad_0xA2[0x6]; // 0xA2(0x6)
	struct FString VolumeName; // 0xA8(0x10)
	bool bHasEditLayers; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct FString VolumeLayerName; // 0xC0(0x10)
	int32_t VolumeTileIndex; // 0xD0(0x4)
	bool bIsVisible; // 0xD4(0x1)
	bool bIsEditable; // 0xD5(0x1)
	bool bIsTemplated; // 0xD6(0x1)
	bool bIsInstanced; // 0xD7(0x1)
	bool bHasGeoChanged; // 0xD8(0x1)
	bool bHasPartChanged; // 0xD9(0x1)
	bool bHasTransformChanged; // 0xDA(0x1)
	bool bHasMaterialsChanged; // 0xDB(0x1)
	uint8_t Pad_0xDC[0x144]; // 0xDC(0x144)
	struct TArray<struct FHoudiniMeshSocket> AllMeshSockets; // 0x220(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
// Size: 0x60 (Inherited: 0x0)
struct FHoudiniMeshSocket
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
// Size: 0x1C (Inherited: 0x0)
struct FHoudiniCurveInfo
{
	uint8_t Pad_0x0[0x1C]; // 0x0(0x1C)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
// Size: 0x80 (Inherited: 0x0)
struct FHoudiniVolumeInfo
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
// Size: 0x48 (Inherited: 0x0)
struct FHoudiniPartInfo
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
// Size: 0x30 (Inherited: 0x0)
struct FHoudiniGeoInfo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
// Size: 0x28 (Inherited: 0x0)
struct FHoudiniObjectInfo
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
// Size: 0x70 (Inherited: 0x0)
struct FHoudiniBrushInfo
{
	struct TWeakObjectPtr<struct ABrush> BrushActor; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform CachedTransform; // 0x10(0x30)
	struct FVector CachedOrigin; // 0x40(0xC)
	struct FVector CachedExtent; // 0x4C(0xC)
	uint8_t CachedBrushType; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	uint64_t CachedSurfaceHash; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniInputLandscapeTransferParams
// Size: 0xC8 (Inherited: 0x0)
struct FHoudiniInputLandscapeTransferParams
{
	enum class ETransferHeightMode TransferHeightMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSet<struct FName> HeightSpecifiedLayerNames; // 0x8(0x50)
	struct FName HeightUnderSpecifiedLayerName; // 0x58(0x8)
	enum class ETransferLayerMode TransferLayerMode; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct TSet<struct FName> LayerSpecifiedLayerNames; // 0x68(0x50)
	struct FName LayerUnderSpecifiedLayerName; // 0xB8(0x8)
	bool bTransferWeightmap; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
// Size: 0x50 (Inherited: 0x0)
struct FHoudiniBakedOutput
{
	struct TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects; // 0x0(0x50)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
// Size: 0x18 (Inherited: 0x0)
struct FHoudiniBakedOutputObjectIdentifier
{
	int32_t PartID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString SplitIdentifier; // 0x8(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
// Size: 0xB8 (Inherited: 0x0)
struct FHoudiniBakedOutputObject
{
	struct FString Actor; // 0x0(0x10)
	struct FString Blueprint; // 0x10(0x10)
	struct FName ActorBakeName; // 0x20(0x8)
	struct FString BakedObject; // 0x28(0x10)
	struct FString BakedComponent; // 0x38(0x10)
	struct TArray<struct FString> InstancedActors; // 0x48(0x10)
	struct TArray<struct FString> InstancedComponents; // 0x58(0x10)
	struct TMap<struct FName, struct FString> LandscapeLayers; // 0x68(0x50)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
// Size: 0x88 (Inherited: 0x0)
struct FHoudiniInstancedOutput
{
	struct TSoftObjectPtr<UObject> OriginalObject; // 0x0(0x28)
	int32_t OriginalObjectIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FTransform> OriginalTransforms; // 0x30(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> VariationObjects; // 0x40(0x10)
	struct TArray<struct FTransform> VariationTransformOffsets; // 0x50(0x10)
	struct TArray<int32_t> TransformVariationIndices; // 0x60(0x10)
	struct TArray<int32_t> OriginalInstanceIndices; // 0x70(0x10)
	bool bChanged; // 0x80(0x1)
	bool bStale; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
// Size: 0x10 (Inherited: 0x0)
struct FHoudiniPDGWorkResultObjectBakedOutput
{
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0x0(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
// Size: 0x8 (Inherited: 0x0)
struct FWorkItemTallyBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
// Size: 0x28 (Inherited: 0x8)
struct FAggregatedWorkItemTally : FWorkItemTallyBase
{
	int32_t TotalWorkItems; // 0x8(0x4)
	int32_t WaitingWorkItems; // 0xC(0x4)
	int32_t ScheduledWorkItems; // 0x10(0x4)
	int32_t CookingWorkItems; // 0x14(0x4)
	int32_t CookedWorkItems; // 0x18(0x4)
	int32_t ErroredWorkItems; // 0x1C(0x4)
	int32_t CookCancelledWorkItems; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct HoudiniEngineRuntime.WorkItemTally
// Size: 0x238 (Inherited: 0x8)
struct FWorkItemTally : FWorkItemTallyBase
{
	struct TSet<int32_t> AllWorkItems; // 0x8(0x50)
	struct TSet<int32_t> WaitingWorkItems; // 0x58(0x50)
	struct TSet<int32_t> ScheduledWorkItems; // 0xA8(0x50)
	struct TSet<int32_t> CookingWorkItems; // 0xF8(0x50)
	struct TSet<int32_t> CookedWorkItems; // 0x148(0x50)
	struct TSet<int32_t> ErroredWorkItems; // 0x198(0x50)
	struct TSet<int32_t> CookCancelledWorkItems; // 0x1E8(0x50)
};

// Object: ScriptStruct HoudiniEngineRuntime.TOPWorkResult
// Size: 0x18 (Inherited: 0x0)
struct FTOPWorkResult
{
	int32_t WorkItemIndex; // 0x0(0x4)
	int32_t WorkItemID; // 0x4(0x4)
	struct TArray<struct FTOPWorkResultObject> ResultObjects; // 0x8(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
// Size: 0x58 (Inherited: 0x0)
struct FTOPWorkResultObject
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FString Name; // 0x8(0x10)
	struct FString FilePath; // 0x18(0x10)
	enum class EPDGWorkResultState State; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t WorkItemResultInfoIndex; // 0x2C(0x4)
	struct TArray<struct UHoudiniOutput*> ResultOutputs; // 0x30(0x10)
	bool bAutoBakedSinceLastLoad; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FOutputActorOwner OutputActorOwner; // 0x48(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.OutputActorOwner
// Size: 0x10 (Inherited: 0x0)
struct FOutputActorOwner
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* OutputActor; // 0x8(0x8)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
// Size: 0x180 (Inherited: 0x0)
struct FHoudiniStaticMeshGenerationProperties
{
	uint8_t bGeneratedDoubleSidedGeometry : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x8(0x8)
	struct FBodyInstance DefaultBodyInstance; // 0x10(0x130)
	uint8_t GeneratedCollisionTraceFlag; // 0x140(0x1)
	uint8_t Pad_0x141[0x3]; // 0x141(0x3)
	int32_t GeneratedLightMapResolution; // 0x144(0x4)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x148(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x158(0x4)
	uint8_t bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x15C(0x1), Mask(0x1)
	uint8_t BitPad_0x15C_1 : 7; // 0x15C(0x1)
	uint8_t Pad_0x15D[0x3]; // 0x15D(0x3)
	float GeneratedStreamingDistanceMultiplier; // 0x160(0x4)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x168(0x8)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x170(0x10)
};

// Object: ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
// Size: 0x88 (Inherited: 0x58)
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData
{
	struct TArray<struct FTransform> CurvePoints; // 0x58(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x68(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x78(0x10)
};

} // namespace SDK
