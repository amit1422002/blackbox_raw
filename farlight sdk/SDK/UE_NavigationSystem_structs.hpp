// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum NavigationSystem.ENavLinkBuilderFlags
enum class ENavLinkBuilderFlags : uint8_t
{
	CreateCenterPointLink = 1,
	CreateExtremityLink = 2,
	ENavLinkBuilderFlags_MAX = 3
};

// Object: Enum NavigationSystem.ELinkGenerationDebugFlags
enum class ELinkGenerationDebugFlags : uint8_t
{
	WalkableSurface = 1,
	WalkableBorders = 2,
	SelectedEdge = 4,
	SelectedEdgeTrajectory = 8,
	SelectedEdgeLandingSamples = 16,
	SelectedEdgeCollisions = 32,
	Links = 64,
	FilteredLinks = 128,
	ELinkGenerationDebugFlags_MAX = 129
};

// Object: Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Object: Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Object: Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3
};

// Object: Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// Object: ScriptStruct NavigationSystem.NavLinkGenerationJumpDownConfig
// Size: 0x50 (Inherited: 0x0)
struct FNavLinkGenerationJumpDownConfig
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float JumpLength; // 0x4(0x4)
	float JumpDistanceFromEdge; // 0x8(0x4)
	float JumpMaxDepth; // 0xC(0x4)
	float JumpHeight; // 0x10(0x4)
	float JumpEndsHeightTolerance; // 0x14(0x4)
	float SamplingSeparationFactor; // 0x18(0x4)
	float FilterDistanceThreshold; // 0x1C(0x4)
	uint16_t LinkBuilderFlags; // 0x20(0x2)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
	struct UNavAreaBase* AreaClass; // 0x28(0x8)
	struct UBaseGeneratedNavLinksProxy* LinkProxyClass; // 0x30(0x8)
	uint32_t LinkProxyId; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct UBaseGeneratedNavLinksProxy* LinkProxy; // 0x40(0x8)
	bool bLinkProxyRegistered; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct NavigationSystem.NavCollisionBox
// Size: 0x18 (Inherited: 0x0)
struct FNavCollisionBox
{
	struct FVector Offset; // 0x0(0xC)
	struct FVector Extent; // 0xC(0xC)
};

// Object: ScriptStruct NavigationSystem.NavCollisionCylinder
// Size: 0x14 (Inherited: 0x0)
struct FNavCollisionCylinder
{
	struct FVector Offset; // 0x0(0xC)
	float Radius; // 0xC(0x4)
	float Height; // 0x10(0x4)
};

// Object: ScriptStruct NavigationSystem.SupportedAreaData
// Size: 0x20 (Inherited: 0x0)
struct FSupportedAreaData
{
	struct FString AreaClassName; // 0x0(0x10)
	int32_t AreaID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct UObject* AreaClass; // 0x18(0x8)
};

// Object: ScriptStruct NavigationSystem.NavGraphNode
// Size: 0x18 (Inherited: 0x0)
struct FNavGraphNode
{
	struct UObject* Owner; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct NavigationSystem.NavGraphEdge
// Size: 0x18 (Inherited: 0x0)
struct FNavGraphEdge
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct NavigationSystem.NavigationFilterFlags
// Size: 0x4 (Inherited: 0x0)
struct FNavigationFilterFlags
{
	uint8_t bNavFlag0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bNavFlag1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bNavFlag2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bNavFlag3 : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bNavFlag4 : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bNavFlag5 : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bNavFlag6 : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bNavFlag7 : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bNavFlag8 : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bNavFlag9 : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bNavFlag10 : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bNavFlag11 : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bNavFlag12 : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bNavFlag13 : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bNavFlag14 : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bNavFlag15 : 1; // 0x1(0x1), Mask(0x80)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
};

// Object: ScriptStruct NavigationSystem.NavigationFilterArea
// Size: 0x18 (Inherited: 0x0)
struct FNavigationFilterArea
{
	struct UNavArea* AreaClass; // 0x0(0x8)
	float TravelCostOverride; // 0x8(0x4)
	float EnteringCostOverride; // 0xC(0x4)
	uint8_t bIsExcluded : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bOverrideTravelCost : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bOverrideEnteringCost : 1; // 0x10(0x1), Mask(0x4)
	uint8_t BitPad_0x10_3 : 5; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size: 0x60 (Inherited: 0x58)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{
	uint32_t NavLinkUserId; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// Size: 0x40 (Inherited: 0x0)
struct FRecastNavMeshGenerationProperties
{
	int32_t TilePoolSize; // 0x0(0x4)
	float TileSizeUU; // 0x4(0x4)
	float CellSize; // 0x8(0x4)
	float CellHeight; // 0xC(0x4)
	float AgentRadius; // 0x10(0x4)
	float AgentHeight; // 0x14(0x4)
	float AgentMaxSlope; // 0x18(0x4)
	float AgentMaxStepHeight; // 0x1C(0x4)
	float MinRegionArea; // 0x20(0x4)
	float MergeRegionSize; // 0x24(0x4)
	float MaxSimplificationError; // 0x28(0x4)
	int32_t TileNumberHardLimit; // 0x2C(0x4)
	uint8_t RegionPartitioning; // 0x30(0x1)
	uint8_t LayerPartitioning; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	int32_t RegionChunkSplits; // 0x34(0x4)
	int32_t LayerChunkSplits; // 0x38(0x4)
	uint8_t bSortNavigationAreasByCost : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t bPerformVoxelFiltering : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t bMarkLowHeightAreas : 1; // 0x3C(0x1), Mask(0x4)
	uint8_t bFilterLowSpanSequences : 1; // 0x3C(0x1), Mask(0x8)
	uint8_t bFilterLowSpanFromTileCache : 1; // 0x3C(0x1), Mask(0x10)
	uint8_t bFixedTilePoolSize : 1; // 0x3C(0x1), Mask(0x20)
	uint8_t BitPad_0x3C_6 : 2; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

} // namespace SDK
