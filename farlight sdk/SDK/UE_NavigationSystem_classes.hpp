// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject
{
};

// Object: Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase
{
	float DefaultCost; // 0x2C(0x4)
	float FixedAreaEnteringCost; // 0x30(0x4)
	struct FColor DrawColor; // 0x34(0x4)
	struct FNavAgentSelector SupportedAgents; // 0x38(0x4)
	uint8_t bSupportsAgent0 : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t bSupportsAgent1 : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t bSupportsAgent2 : 1; // 0x3C(0x1), Mask(0x4)
	uint8_t bSupportsAgent3 : 1; // 0x3C(0x1), Mask(0x8)
	uint8_t bSupportsAgent4 : 1; // 0x3C(0x1), Mask(0x10)
	uint8_t bSupportsAgent5 : 1; // 0x3C(0x1), Mask(0x20)
	uint8_t bSupportsAgent6 : 1; // 0x3C(0x1), Mask(0x40)
	uint8_t bSupportsAgent7 : 1; // 0x3C(0x1), Mask(0x80)
	uint8_t bSupportsAgent8 : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t bSupportsAgent9 : 1; // 0x3D(0x1), Mask(0x2)
	uint8_t bSupportsAgent10 : 1; // 0x3D(0x1), Mask(0x4)
	uint8_t bSupportsAgent11 : 1; // 0x3D(0x1), Mask(0x8)
	uint8_t bSupportsAgent12 : 1; // 0x3D(0x1), Mask(0x10)
	uint8_t bSupportsAgent13 : 1; // 0x3D(0x1), Mask(0x20)
	uint8_t bSupportsAgent14 : 1; // 0x3D(0x1), Mask(0x40)
	uint8_t bSupportsAgent15 : 1; // 0x3D(0x1), Mask(0x80)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
};

// Object: Class NavigationSystem.NavigationSystemV1
// Size: 0x540 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase
{
	struct ANavigationData* MainNavData; // 0x28(0x8)
	struct ANavigationData* AbstractNavData; // 0x30(0x8)
	struct FName DefaultAgentName; // 0x38(0x8)
	struct TSoftClassPtr<struct UCrowdManagerBase*> CrowdManagerClass; // 0x40(0x28)
	uint8_t bAutoCreateNavigationData : 1; // 0x68(0x1), Mask(0x1)
	uint8_t bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x1), Mask(0x2)
	uint8_t bAllowClientSideNavigation : 1; // 0x68(0x1), Mask(0x4)
	uint8_t bShouldDiscardSubLevelNavData : 1; // 0x68(0x1), Mask(0x8)
	uint8_t bTickWhilePaused : 1; // 0x68(0x1), Mask(0x10)
	uint8_t bSupportRebuilding : 1; // 0x68(0x1), Mask(0x20)
	uint8_t bInitialBuildingLocked : 1; // 0x68(0x1), Mask(0x40)
	uint8_t BitPad_0x68_7 : 1; // 0x68(0x1)
	uint8_t bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x1), Mask(0x1)
	uint8_t BitPad_0x69_1 : 7; // 0x69(0x1)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x6A(0x1)
	uint8_t bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x6B(0x1), Mask(0x1)
	uint8_t BitPad_0x6B_1 : 7; // 0x6B(0x1)
	float ActiveTilesUpdateInterval; // 0x6C(0x4)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x70(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x88(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0x98(0x10)
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xC8(0x10)
	uint8_t Pad_0xD8[0xEC]; // 0xD8(0xEC)
	enum class EFNavigationSystemRunMode OperationMode; // 0x1C4(0x1)
	uint8_t Pad_0x1C5[0x357]; // 0x1C5(0x357)
	float DirtyAreasUpdateFreq; // 0x51C(0x4)
	uint8_t Pad_0x520[0x20]; // 0x520(0x20)


	// Object: Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa916870
	// Params: [ Num(1) Size(0x8) ]
	void UnregisterNavigationInvoker(struct AActor* Invoker);

	// Object: Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa915f2c
	// Params: [ Num(2) Size(0x14) ]
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal);

	// Object: Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa91600c
	// Params: [ Num(2) Size(0x10) ]
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal);

	// Object: Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa916a50
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);

	// Object: Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9167c8
	// Params: [ Num(1) Size(0x1) ]
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);

	// Object: Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa916a3c
	// Params: [ Num(0) Size(0x0) ]
	void ResetMaxSimultaneousTileGenerationJobsCount();

	// Object: Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa916918
	// Params: [ Num(3) Size(0x10) ]
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);

	// Object: Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa916440
	// Params: [ Num(6) Size(0x40) ]
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent);

	// Object: Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9165f0
	// Params: [ Num(1) Size(0x8) ]
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume);

	// Object: Function NavigationSystem.NavigationSystemV1.NavigationRaycast
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa916af8
	// Params: [ Num(7) Size(0x41) ]
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa916698
	// Params: [ Num(4) Size(0x19) ]
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa917a10
	// Params: [ Num(7) Size(0x3D) ]
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa917810
	// Params: [ Num(7) Size(0x39) ]
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa915d2c
	// Params: [ Num(7) Size(0x39) ]
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa917610
	// Params: [ Num(7) Size(0x39) ]
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa9170a8
	// Params: [ Num(2) Size(0x9) ]
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject);

	// Object: Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa917154
	// Params: [ Num(2) Size(0x9) ]
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject);

	// Object: Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa916290
	// Params: [ Num(6) Size(0x34) ]
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa9160e0
	// Params: [ Num(6) Size(0x34) ]
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetPathLength
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa917200
	// Params: [ Num(7) Size(0x39) ]
	uint8_t GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetPathCost
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa917408
	// Params: [ Num(7) Size(0x39) ]
	uint8_t GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa917c10
	// Params: [ Num(2) Size(0x10) ]
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject);

	// Object: Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa916eec
	// Params: [ Num(6) Size(0x38) ]
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa916d00
	// Params: [ Num(7) Size(0x40) ]
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass);
};

// Object: Class NavigationSystem.NavRelevantComponent
// Size: 0x108 (Inherited: 0xD8)
struct UNavRelevantComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x24]; // 0xD8(0x24)
	uint8_t bAttachToOwnersRoot : 1; // 0xFC(0x1), Mask(0x1)
	uint8_t BitPad_0xFC_1 : 7; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	struct UObject* CachedNavParent; // 0x100(0x8)


	// Object: Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa91cf90
	// Params: [ Num(1) Size(0x1) ]
	void SetNavigationRelevancy(bool bRelevant);
};

// Object: Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1B0 (Inherited: 0x108)
struct UNavLinkCustomComponent : UNavRelevantComponent
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	uint32_t NavLinkUserId; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct UNavArea* EnabledAreaClass; // 0x118(0x8)
	struct UNavArea* DisabledAreaClass; // 0x120(0x8)
	struct FNavAgentSelector SupportedAgents; // 0x128(0x4)
	struct FVector LinkRelativeStart; // 0x12C(0xC)
	struct FVector LinkRelativeEnd; // 0x138(0xC)
	uint8_t LinkDirection; // 0x144(0x1)
	uint8_t bLinkEnabled : 1; // 0x145(0x1), Mask(0x1)
	uint8_t bNotifyWhenEnabled : 1; // 0x145(0x1), Mask(0x2)
	uint8_t bNotifyWhenDisabled : 1; // 0x145(0x1), Mask(0x4)
	uint8_t bCreateBoxObstacle : 1; // 0x145(0x1), Mask(0x8)
	uint8_t BitPad_0x145_4 : 4; // 0x145(0x1)
	uint8_t Pad_0x146[0x2]; // 0x146(0x2)
	struct FVector ObstacleOffset; // 0x148(0xC)
	struct FVector ObstacleExtent; // 0x154(0xC)
	struct UNavArea* ObstacleAreaClass; // 0x160(0x8)
	float BroadcastRadius; // 0x168(0x4)
	float BroadcastInterval; // 0x16C(0x4)
	uint8_t BroadcastChannel; // 0x170(0x1)
	uint8_t Pad_0x171[0x3F]; // 0x171(0x3F)
};

// Object: Class NavigationSystem.NavModifierComponent
// Size: 0x170 (Inherited: 0x108)
struct UNavModifierComponent : UNavRelevantComponent
{
	struct UNavArea* AreaClass; // 0x108(0x8)
	struct FVector FailsafeExtent; // 0x110(0xC)
	uint8_t bIncludeAgentHeight : 1; // 0x11C(0x1), Mask(0x1)
	uint8_t BitPad_0x11C_1 : 7; // 0x11C(0x1)
	uint8_t Pad_0x11D[0x53]; // 0x11D(0x53)


	// Object: Function NavigationSystem.NavModifierComponent.SetAreaClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa91c928
	// Params: [ Num(1) Size(0x8) ]
	void SetAreaClass(struct UNavArea* NewAreaClass);
};

// Object: Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject
{
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x4)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3C(0x4)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class NavigationSystem.NavigationData
// Size: 0x4C0 (Inherited: 0x2E0)
struct ANavigationData : AActor
{
	uint8_t Pad_0x2E0[0x8]; // 0x2E0(0x8)
	struct UPrimitiveComponent* RenderingComp; // 0x2E8(0x8)
	struct FNavDataConfig NavDataConfig; // 0x2F0(0x78)
	uint8_t bEnableDrawing : 1; // 0x368(0x1), Mask(0x1)
	uint8_t bForceRebuildOnLoad : 1; // 0x368(0x1), Mask(0x2)
	uint8_t bAutoDestroyWhenNoNavigation : 1; // 0x368(0x1), Mask(0x4)
	uint8_t bCanBeMainNavData : 1; // 0x368(0x1), Mask(0x8)
	uint8_t bCanSpawnOnRebuild : 1; // 0x368(0x1), Mask(0x10)
	uint8_t bRebuildAtRuntime : 1; // 0x368(0x1), Mask(0x20)
	uint8_t BitPad_0x368_6 : 2; // 0x368(0x1)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x369(0x1)
	uint8_t Pad_0x36A[0x2]; // 0x36A(0x2)
	float ObservedPathsTickInterval; // 0x36C(0x4)
	uint32_t DataVersion; // 0x370(0x4)
	uint8_t Pad_0x374[0xE4]; // 0x374(0xE4)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x458(0x10)
	uint8_t Pad_0x468[0x58]; // 0x468(0x58)
};

// Object: Class NavigationSystem.AbstractNavData
// Size: 0x4C0 (Inherited: 0x4C0)
struct AAbstractNavData : ANavigationData
{
};

// Object: Class NavigationSystem.BaseGeneratedNavLinksProxy
// Size: 0x40 (Inherited: 0x28)
struct UBaseGeneratedNavLinksProxy : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint32_t LinkProxyId; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UObject* Owner; // 0x38(0x8)
};

// Object: Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea
{
};

// Object: Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea
{
};

// Object: Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea
{
};

// Object: Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea
{
};

// Object: Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea
{
};

// Object: Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xC8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta
{
	struct UNavArea* Agent0Area; // 0x48(0x8)
	struct UNavArea* Agent1Area; // 0x50(0x8)
	struct UNavArea* Agent2Area; // 0x58(0x8)
	struct UNavArea* Agent3Area; // 0x60(0x8)
	struct UNavArea* Agent4Area; // 0x68(0x8)
	struct UNavArea* Agent5Area; // 0x70(0x8)
	struct UNavArea* Agent6Area; // 0x78(0x8)
	struct UNavArea* Agent7Area; // 0x80(0x8)
	struct UNavArea* Agent8Area; // 0x88(0x8)
	struct UNavArea* Agent9Area; // 0x90(0x8)
	struct UNavArea* Agent10Area; // 0x98(0x8)
	struct UNavArea* Agent11Area; // 0xA0(0x8)
	struct UNavArea* Agent12Area; // 0xA8(0x8)
	struct UNavArea* Agent13Area; // 0xB0(0x8)
	struct UNavArea* Agent14Area; // 0xB8(0x8)
	struct UNavArea* Agent15Area; // 0xC0(0x8)
};

// Object: Class NavigationSystem.NavCollision
// Size: 0xD8 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase
{
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	struct UNavArea* AreaClass; // 0xA0(0x8)
	uint8_t bGatherConvexGeometry : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t bCreateOnClient : 1; // 0xA8(0x1), Mask(0x2)
	uint8_t BitPad_0xA8_2 : 6; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x2F]; // 0xA9(0x2F)
};

// Object: Class NavigationSystem.NavigationGraph
// Size: 0x4C0 (Inherited: 0x4C0)
struct ANavigationGraph : ANavigationData
{
};

// Object: Class NavigationSystem.NavigationGraphNode
// Size: 0x2E0 (Inherited: 0x2E0)
struct ANavigationGraphNode : AActor
{
};

// Object: Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x370 (Inherited: 0x350)
struct UNavigationGraphNodeComponent : USceneComponent
{
	struct FNavGraphNode Node; // 0x348(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x360(0x8)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x368(0x8)
};

// Object: Class NavigationSystem.NavigationInvokerComponent
// Size: 0xE0 (Inherited: 0xD8)
struct UNavigationInvokerComponent : UActorComponent
{
	float TileGenerationRadius; // 0xD8(0x4)
	float TileRemovalRadius; // 0xDC(0x4)
};

// Object: Class NavigationSystem.NavigationPath
// Size: 0x80 (Inherited: 0x28)
struct UNavigationPath : UObject
{
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	uint8_t RecalculateOnInvalidation; // 0x48(0x1)
	uint8_t Pad_0x49[0x37]; // 0x49(0x37)


	// Object: Function NavigationSystem.NavigationPath.IsValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa915008
	// Params: [ Num(1) Size(0x1) ]
	bool IsValid();

	// Object: Function NavigationSystem.NavigationPath.IsStringPulled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa914fd0
	// Params: [ Num(1) Size(0x1) ]
	bool IsStringPulled();

	// Object: Function NavigationSystem.NavigationPath.IsPartial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa915040
	// Params: [ Num(1) Size(0x1) ]
	bool IsPartial();

	// Object: Function NavigationSystem.NavigationPath.GetPathLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa9150ac
	// Params: [ Num(1) Size(0x4) ]
	float GetPathLength();

	// Object: Function NavigationSystem.NavigationPath.GetPathCost
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa915078
	// Params: [ Num(1) Size(0x4) ]
	float GetPathCost();

	// Object: Function NavigationSystem.NavigationPath.GetDebugString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa915278
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDebugString();

	// Object: Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9150e0
	// Params: [ Num(1) Size(0x1) ]
	void EnableRecalculationOnInvalidation(uint8_t DoRecalculation);

	// Object: Function NavigationSystem.NavigationPath.EnableDebugDrawing
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa915188
	// Params: [ Num(2) Size(0x14) ]
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor);
};

// Object: Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct INavigationPathGenerator : IInterface
{
};

// Object: Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x50 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig
{
	uint8_t bStrictlyStatic : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t bCreateOnClient : 1; // 0x4D(0x1), Mask(0x2)
	uint8_t bAutoSpawnMissingNavData : 1; // 0x4D(0x1), Mask(0x4)
	uint8_t bSpawnNavDataInNavBoundsLevel : 1; // 0x4D(0x1), Mask(0x8)
};

// Object: Class NavigationSystem.NavigationTestingActor
// Size: 0x3D0 (Inherited: 0x2E0)
struct ANavigationTestingActor : AActor
{
	uint8_t Pad_0x2E0[0x10]; // 0x2E0(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x2F0(0x8)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x2F8(0x8)
	uint8_t bActAsNavigationInvoker : 1; // 0x300(0x1), Mask(0x1)
	uint8_t BitPad_0x300_1 : 7; // 0x300(0x1)
	uint8_t Pad_0x301[0x7]; // 0x301(0x7)
	struct FNavAgentProperties NavAgentProps; // 0x308(0x30)
	struct FVector QueryingExtent; // 0x338(0xC)
	uint8_t Pad_0x344[0x4]; // 0x344(0x4)
	struct ANavigationData* MyNavData; // 0x348(0x8)
	struct FVector ProjectedLocation; // 0x350(0xC)
	uint8_t bProjectedLocationValid : 1; // 0x35C(0x1), Mask(0x1)
	uint8_t bSearchStart : 1; // 0x35C(0x1), Mask(0x2)
	uint8_t BitPad_0x35C_2 : 6; // 0x35C(0x1)
	uint8_t Pad_0x35D[0x3]; // 0x35D(0x3)
	float CostLimitFactor; // 0x360(0x4)
	float MinimumCostLimit; // 0x364(0x4)
	uint8_t bBacktracking : 1; // 0x368(0x1), Mask(0x1)
	uint8_t bUseHierarchicalPathfinding : 1; // 0x368(0x1), Mask(0x2)
	uint8_t bGatherDetailedInfo : 1; // 0x368(0x1), Mask(0x4)
	uint8_t bDrawDistanceToWall : 1; // 0x368(0x1), Mask(0x8)
	uint8_t bShowNodePool : 1; // 0x368(0x1), Mask(0x10)
	uint8_t bShowBestPath : 1; // 0x368(0x1), Mask(0x20)
	uint8_t bShowDiffWithPreviousStep : 1; // 0x368(0x1), Mask(0x40)
	uint8_t bShouldBeVisibleInGame : 1; // 0x368(0x1), Mask(0x80)
	uint8_t CostDisplayMode; // 0x369(0x1)
	uint8_t Pad_0x36A[0x2]; // 0x36A(0x2)
	struct FVector2D TextCanvasOffset; // 0x36C(0x8)
	uint8_t bPathExist : 1; // 0x374(0x1), Mask(0x1)
	uint8_t bPathIsPartial : 1; // 0x374(0x1), Mask(0x2)
	uint8_t bPathSearchOutOfNodes : 1; // 0x374(0x1), Mask(0x4)
	uint8_t BitPad_0x374_3 : 5; // 0x374(0x1)
	uint8_t Pad_0x375[0x3]; // 0x375(0x3)
	float PathfindingTime; // 0x378(0x4)
	float PathCost; // 0x37C(0x4)
	int32_t PathfindingSteps; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct ANavigationTestingActor* OtherActor; // 0x388(0x8)
	struct UNavigationQueryFilter* FilterClass; // 0x390(0x8)
	int32_t ShowStepIndex; // 0x398(0x4)
	float OffsetFromCornersDistance; // 0x39C(0x4)
	uint8_t Pad_0x3A0[0x30]; // 0x3A0(0x30)
};

// Object: Class NavigationSystem.NavLinkComponent
// Size: 0x610 (Inherited: 0x5F0)
struct UNavLinkComponent : UPrimitiveComponent
{
	uint8_t Pad_0x5F0[0x8]; // 0x5F0(0x8)
	struct TArray<struct FNavigationLink> Links; // 0x5F8(0x10)
	uint8_t Pad_0x608[0x8]; // 0x608(0x8)
};

// Object: Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct INavLinkCustomInterface : IInterface
{
};

// Object: Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct INavLinkHostInterface : IInterface
{
};

// Object: Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x5F0 (Inherited: 0x5F0)
struct UNavLinkRenderingComponent : UPrimitiveComponent
{
};

// Object: Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition
{
};

// Object: Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x320 (Inherited: 0x318)
struct ANavMeshBoundsVolume : AVolume
{
	struct FNavAgentSelector SupportedAgents; // 0x318(0x4)
	uint8_t Pad_0x31C[0x4]; // 0x31C(0x4)
};

// Object: Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x600 (Inherited: 0x5F0)
struct UNavMeshRenderingComponent : UPrimitiveComponent
{
	uint8_t Pad_0x5F0[0x10]; // 0x5F0(0x10)
};

// Object: Class NavigationSystem.NavModifierVolume
// Size: 0x328 (Inherited: 0x318)
struct ANavModifierVolume : AVolume
{
	uint8_t Pad_0x318[0x8]; // 0x318(0x8)
	struct UNavArea* AreaClass; // 0x320(0x8)


	// Object: Function NavigationSystem.NavModifierVolume.SetAreaClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa91cbe0
	// Params: [ Num(1) Size(0x8) ]
	void SetAreaClass(struct UNavArea* NewAreaClass);
};

// Object: Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct INavNodeInterface : IInterface
{
};

// Object: Class NavigationSystem.NavSystemConfigOverride
// Size: 0x2F0 (Inherited: 0x2E0)
struct ANavSystemConfigOverride : AActor
{
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x2E0(0x8)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x2E8(0x1)
	uint8_t bLoadOnClient : 1; // 0x2E9(0x1), Mask(0x1)
	uint8_t BitPad_0x2E9_1 : 7; // 0x2E9(0x1)
	uint8_t Pad_0x2EA[0x6]; // 0x2EA(0x6)
};

// Object: Class NavigationSystem.NavTestRenderingComponent
// Size: 0x5F0 (Inherited: 0x5F0)
struct UNavTestRenderingComponent : UPrimitiveComponent
{
};

// Object: Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter
{
};

// Object: Class NavigationSystem.RecastNavMesh
// Size: 0x5D0 (Inherited: 0x4C0)
struct ARecastNavMesh : ANavigationData
{
	uint8_t bDrawTriangleEdges : 1; // 0x4BC(0x1), Mask(0x1)
	uint8_t bDrawPolyEdges : 1; // 0x4BC(0x1), Mask(0x2)
	uint8_t bDrawFilledPolys : 1; // 0x4BC(0x1), Mask(0x4)
	uint8_t bDrawNavMeshEdges : 1; // 0x4BC(0x1), Mask(0x8)
	uint8_t bDrawTileBounds : 1; // 0x4BC(0x1), Mask(0x10)
	uint8_t bDrawPathCollidingGeometry : 1; // 0x4BC(0x1), Mask(0x20)
	uint8_t bDrawTileLabels : 1; // 0x4BC(0x1), Mask(0x40)
	uint8_t bDrawPolygonLabels : 1; // 0x4BC(0x1), Mask(0x80)
	uint8_t bDrawDefaultPolygonCost : 1; // 0x4BD(0x1), Mask(0x1)
	uint8_t bDrawLabelsOnPathNodes : 1; // 0x4BD(0x1), Mask(0x2)
	uint8_t bDrawNavLinks : 1; // 0x4BD(0x1), Mask(0x4)
	uint8_t bDrawFailedNavLinks : 1; // 0x4BD(0x1), Mask(0x8)
	uint8_t bDrawClusters : 1; // 0x4BD(0x1), Mask(0x10)
	uint8_t bDrawOctree : 1; // 0x4BD(0x1), Mask(0x20)
	uint8_t bDrawOctreeDetails : 1; // 0x4BD(0x1), Mask(0x40)
	uint8_t bDrawMarkedForbiddenPolys : 1; // 0x4BD(0x1), Mask(0x80)
	uint8_t bDistinctlyDrawTilesBeingBuilt : 1; // 0x4BE(0x1), Mask(0x1)
	uint8_t bDrawNavMesh : 1; // 0x4BE(0x1), Mask(0x2)
	float DrawOffset; // 0x4C0(0x4)
	uint8_t bFixedTilePoolSize : 1; // 0x4C4(0x1), Mask(0x1)
	uint8_t BitPad_0x4C6_3 : 5; // 0x4C6(0x1)
	uint8_t Pad_0x4C7[0x1]; // 0x4C7(0x1)
	int32_t TilePoolSize; // 0x4C8(0x4)
	float TileSizeUU; // 0x4CC(0x4)
	float CellSize; // 0x4D0(0x4)
	float CellHeight; // 0x4D4(0x4)
	float AgentRadius; // 0x4D8(0x4)
	float AgentHeight; // 0x4DC(0x4)
	float AgentMaxHeight; // 0x4E0(0x4)
	float AgentMaxSlope; // 0x4E4(0x4)
	float AgentMaxStepHeight; // 0x4E8(0x4)
	float MinRegionArea; // 0x4EC(0x4)
	float MergeRegionSize; // 0x4F0(0x4)
	float MaxSimplificationError; // 0x4F4(0x4)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x4F8(0x4)
	int32_t TileNumberHardLimit; // 0x4FC(0x4)
	int32_t PolyRefTileBits; // 0x500(0x4)
	int32_t PolyRefNavPolyBits; // 0x504(0x4)
	int32_t PolyRefSaltBits; // 0x508(0x4)
	struct FVector NavMeshOriginOffset; // 0x50C(0xC)
	float DefaultDrawDistance; // 0x518(0x4)
	float DefaultMaxSearchNodes; // 0x51C(0x4)
	float DefaultMaxHierarchicalSearchNodes; // 0x520(0x4)
	uint8_t RegionPartitioning; // 0x524(0x1)
	uint8_t LayerPartitioning; // 0x525(0x1)
	uint8_t Pad_0x526[0x2]; // 0x526(0x2)
	int32_t RegionChunkSplits; // 0x528(0x4)
	int32_t LayerChunkSplits; // 0x52C(0x4)
	uint8_t bSortNavigationAreasByCost : 1; // 0x530(0x1), Mask(0x1)
	uint8_t bGenerateNavLinks : 1; // 0x530(0x1), Mask(0x2)
	uint8_t bPerformVoxelFiltering : 1; // 0x530(0x1), Mask(0x4)
	uint8_t bMarkLowHeightAreas : 1; // 0x530(0x1), Mask(0x8)
	uint8_t bFilterLowSpanSequences : 1; // 0x530(0x1), Mask(0x10)
	uint8_t bFilterLowSpanFromTileCache : 1; // 0x530(0x1), Mask(0x20)
	uint8_t bDoFullyAsyncNavDataGathering : 1; // 0x530(0x1), Mask(0x40)
	uint8_t bUseBetterOffsetsFromCorners : 1; // 0x530(0x1), Mask(0x80)
	uint8_t bStoreEmptyTileLayers : 1; // 0x531(0x1), Mask(0x1)
	uint8_t bUseVirtualFilters : 1; // 0x531(0x1), Mask(0x2)
	uint8_t bAllowNavLinkAsPathEnd : 1; // 0x531(0x1), Mask(0x4)
	uint8_t BitPad_0x531_3 : 5; // 0x531(0x1)
	uint8_t Pad_0x532[0x6]; // 0x532(0x6)
	struct FNavLinkGenerationJumpDownConfig NavLinkJumpDownConfig; // 0x538(0x50)
	uint8_t bUseVoxelCache : 1; // 0x588(0x1), Mask(0x1)
	uint8_t BitPad_0x588_1 : 7; // 0x588(0x1)
	uint8_t Pad_0x589[0x3]; // 0x589(0x3)
	float TileSetUpdateInterval; // 0x58C(0x4)
	float HeuristicScale; // 0x590(0x4)
	float VerticalDeviationFromGroundCompensation; // 0x594(0x4)
	uint8_t Pad_0x598[0x38]; // 0x598(0x38)


	// Object: Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa91d718
	// Params: [ Num(5) Size(0x32) ]
	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks);
};

// Object: Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

} // namespace SDK
