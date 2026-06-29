// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x570 (Inherited: 0x350)
struct UChaosDestructionListener : USceneComponent
{
	uint8_t bIsCollisionEventListeningEnabled : 1; // 0x344(0x1), Mask(0x1)
	uint8_t bIsBreakingEventListeningEnabled : 1; // 0x344(0x1), Mask(0x2)
	uint8_t bIsTrailingEventListeningEnabled : 1; // 0x344(0x1), Mask(0x4)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x348(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x360(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x378(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x390(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x3E0(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x430(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x440(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x450(0x10)
	uint8_t BitPad_0x468_3 : 5; // 0x468(0x1)
	uint8_t Pad_0x469[0x107]; // 0x469(0x107)


	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa951bf0
	// Params: [ Num(2) Size(0x11) ]
	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa951df8
	// Params: [ Num(2) Size(0x11) ]
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa951cf4
	// Params: [ Num(2) Size(0x11) ]
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa952144
	// Params: [ Num(1) Size(0x18) ]
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa951f34
	// Params: [ Num(1) Size(0x1) ]
	void SetTrailingEventEnabled(bool bIsEnabled);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9522c4
	// Params: [ Num(1) Size(0x18) ]
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa952094
	// Params: [ Num(1) Size(0x1) ]
	void SetCollisionEventEnabled(bool bIsEnabled);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa952204
	// Params: [ Num(1) Size(0x18) ]
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa951fe4
	// Params: [ Num(1) Size(0x1) ]
	void SetBreakingEventEnabled(bool bIsEnabled);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa952384
	// Params: [ Num(1) Size(0x8) ]
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9524d4
	// Params: [ Num(1) Size(0x8) ]
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa951efc
	// Params: [ Num(1) Size(0x1) ]
	bool IsEventListening();

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa95242c
	// Params: [ Num(1) Size(0x8) ]
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa95257c
	// Params: [ Num(1) Size(0x8) ]
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor);
};

// Object: Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x2F0 (Inherited: 0x2E0)
struct AGeometryCollectionActor : AActor
{
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x2E0(0x8)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x2E8(0x8)


	// Object: Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa9532e0
	// Params: [ Num(4) Size(0xA1) ]
	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit);
};

// Object: Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject
{
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x8)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Object: Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xB50 (Inherited: 0x700)
struct UGeometryCollectionComponent : UMeshComponent
{
	uint8_t Pad_0x700[0x8]; // 0x700(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0x708(0x8)
	uint8_t Pad_0x710[0xE0]; // 0x710(0xE0)
	struct UGeometryCollection* RestCollection; // 0x7F0(0x8)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x7F8(0x10)
	bool Simulating; // 0x808(0x1)
	uint8_t Pad_0x809[0x7]; // 0x809(0x7)
	enum class EObjectStateTypeEnum ObjectType; // 0x810(0x1)
	bool EnableClustering; // 0x811(0x1)
	uint8_t Pad_0x812[0x2]; // 0x812(0x2)
	int32_t ClusterGroupIndex; // 0x814(0x4)
	int32_t MaxClusterLevel; // 0x818(0x4)
	uint8_t Pad_0x81C[0x4]; // 0x81C(0x4)
	struct TArray<float> DamageThreshold; // 0x820(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x830(0x1)
	uint8_t Pad_0x831[0x3]; // 0x831(0x3)
	int32_t CollisionGroup; // 0x834(0x4)
	float CollisionSampleFraction; // 0x838(0x4)
	float LinearEtherDrag; // 0x83C(0x4)
	float AngularEtherDrag; // 0x840(0x4)
	uint8_t Pad_0x844[0x4]; // 0x844(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x848(0x8)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x850(0x1)
	uint8_t Pad_0x851[0x3]; // 0x851(0x3)
	struct FVector InitialLinearVelocity; // 0x854(0xC)
	struct FVector InitialAngularVelocity; // 0x860(0xC)
	uint8_t Pad_0x86C[0x4]; // 0x86C(0x4)
	struct FGeomComponentCacheParameters CacheParameters; // 0x870(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x8C0(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8D0(0x10)
	uint8_t Pad_0x8E0[0x18]; // 0x8E0(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x8F8(0x10)
	float DesiredCacheTime; // 0x908(0x4)
	bool CachePlayback; // 0x90C(0x1)
	uint8_t Pad_0x90D[0x3]; // 0x90D(0x3)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x910(0x10)
	bool bNotifyBreaks; // 0x920(0x1)
	bool bNotifyCollisions; // 0x921(0x1)
	uint8_t Pad_0x922[0x1FE]; // 0x922(0x1FE)
	struct UBodySetup* DummyBodySetup; // 0xB20(0x8)
	uint8_t Pad_0xB28[0x28]; // 0xB28(0x28)


	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa953cfc
	// Params: [ Num(1) Size(0x1) ]
	void SetNotifyBreaks(bool bNewNotifyBreaks);

	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x70) ]
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);

	// Object: DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent);

	// Object: DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent);

	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa953dac
	// Params: [ Num(4) Size(0x18) ]
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field);

	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa953f18
	// Params: [ Num(2) Size(0x10) ]
	void ApplyKinematicField(float Radius, struct FVector Position);
};

// Object: Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x3C8 (Inherited: 0x2E0)
struct AGeometryCollectionDebugDrawActor : AActor
{
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x2E0(0x1)
	uint8_t Pad_0x2E1[0x7]; // 0x2E1(0x7)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x2E8(0x18)
	bool bDebugDrawWholeCollection; // 0x300(0x1)
	bool bDebugDrawHierarchy; // 0x301(0x1)
	bool bDebugDrawClustering; // 0x302(0x1)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x303(0x1)
	bool bShowRigidBodyId; // 0x304(0x1)
	bool bShowRigidBodyCollision; // 0x305(0x1)
	bool bCollisionAtOrigin; // 0x306(0x1)
	bool bShowRigidBodyTransform; // 0x307(0x1)
	bool bShowRigidBodyInertia; // 0x308(0x1)
	bool bShowRigidBodyVelocity; // 0x309(0x1)
	bool bShowRigidBodyForce; // 0x30A(0x1)
	bool bShowRigidBodyInfos; // 0x30B(0x1)
	bool bShowTransformIndex; // 0x30C(0x1)
	bool bShowTransform; // 0x30D(0x1)
	bool bShowParent; // 0x30E(0x1)
	bool bShowLevel; // 0x30F(0x1)
	bool bShowConnectivityEdges; // 0x310(0x1)
	bool bShowGeometryIndex; // 0x311(0x1)
	bool bShowGeometryTransform; // 0x312(0x1)
	bool bShowBoundingBox; // 0x313(0x1)
	bool bShowFaces; // 0x314(0x1)
	bool bShowFaceIndices; // 0x315(0x1)
	bool bShowFaceNormals; // 0x316(0x1)
	bool bShowSingleFace; // 0x317(0x1)
	int32_t SingleFaceIndex; // 0x318(0x4)
	bool bShowVertices; // 0x31C(0x1)
	bool bShowVertexIndices; // 0x31D(0x1)
	bool bShowVertexNormals; // 0x31E(0x1)
	bool bUseActiveVisualization; // 0x31F(0x1)
	float PointThickness; // 0x320(0x4)
	float LineThickness; // 0x324(0x4)
	bool bTextShadow; // 0x328(0x1)
	uint8_t Pad_0x329[0x3]; // 0x329(0x3)
	float TextScale; // 0x32C(0x4)
	float NormalScale; // 0x330(0x4)
	float AxisScale; // 0x334(0x4)
	float ArrowScale; // 0x338(0x4)
	struct FColor RigidBodyIdColor; // 0x33C(0x4)
	float RigidBodyTransformScale; // 0x340(0x4)
	struct FColor RigidBodyCollisionColor; // 0x344(0x4)
	struct FColor RigidBodyInertiaColor; // 0x348(0x4)
	struct FColor RigidBodyVelocityColor; // 0x34C(0x4)
	struct FColor RigidBodyForceColor; // 0x350(0x4)
	struct FColor RigidBodyInfoColor; // 0x354(0x4)
	struct FColor TransformIndexColor; // 0x358(0x4)
	float TransformScale; // 0x35C(0x4)
	struct FColor LevelColor; // 0x360(0x4)
	struct FColor ParentColor; // 0x364(0x4)
	float ConnectivityEdgeThickness; // 0x368(0x4)
	struct FColor GeometryIndexColor; // 0x36C(0x4)
	float GeometryTransformScale; // 0x370(0x4)
	struct FColor BoundingBoxColor; // 0x374(0x4)
	struct FColor FaceColor; // 0x378(0x4)
	struct FColor FaceIndexColor; // 0x37C(0x4)
	struct FColor FaceNormalColor; // 0x380(0x4)
	struct FColor SingleFaceColor; // 0x384(0x4)
	struct FColor VertexColor; // 0x388(0x4)
	struct FColor VertexIndexColor; // 0x38C(0x4)
	struct FColor VertexNormalColor; // 0x390(0x4)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	struct UBillboardComponent* SpriteComponent; // 0x398(0x8)
	uint8_t Pad_0x3A0[0x28]; // 0x3A0(0x28)
};

// Object: Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xF0 (Inherited: 0xD8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent
{
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xD8(0x8)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)
};

// Object: Class GeometryCollectionEngine.GeometryCollection
// Size: 0xD0 (Inherited: 0x28)
struct UGeometryCollection : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x40(0x1)
	enum class EImplicitTypeEnum ImplicitType; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
	int32_t MinLevelSetResolution; // 0x44(0x4)
	int32_t MaxLevelSetResolution; // 0x48(0x4)
	int32_t MinClusterLevelSetResolution; // 0x4C(0x4)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x4)
	float CollisionObjectReductionPercentage; // 0x54(0x4)
	bool bMassAsDensity; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float Mass; // 0x5C(0x4)
	float MinimumMassClamp; // 0x60(0x4)
	float CollisionParticlesFraction; // 0x64(0x4)
	int32_t MaximumCollisionParticles; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	bool EnableRemovePiecesOnFracture; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xA8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x14]; // 0xBC(0x14)
};

// Object: Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x380 (Inherited: 0x2E0)
struct AGeometryCollectionRenderLevelSetActor : AActor
{
	struct UVolumeTexture* TargetVolumeTexture; // 0x2E0(0x8)
	struct UMaterial* RayMarchMaterial; // 0x2E8(0x8)
	float SurfaceTolerance; // 0x2F0(0x4)
	float Isovalue; // 0x2F4(0x4)
	bool Enabled; // 0x2F8(0x1)
	bool RenderVolumeBoundingBox; // 0x2F9(0x1)
	uint8_t Pad_0x2FA[0x86]; // 0x2FA(0x86)
};

// Object: Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x160 (Inherited: 0xD8)
struct USkeletalMeshSimulationComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xE0(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0xE8(0x8)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xF0(0x8)
	bool bSimulating; // 0xF8(0x1)
	bool bNotifyCollisions; // 0xF9(0x1)
	enum class EObjectStateTypeEnum ObjectType; // 0xFA(0x1)
	uint8_t Pad_0xFB[0x1]; // 0xFB(0x1)
	float Density; // 0xFC(0x4)
	float MinMass; // 0x100(0x4)
	float MaxMass; // 0x104(0x4)
	enum class ECollisionTypeEnum CollisionType; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	float ImplicitShapeParticlesPerUnitArea; // 0x10C(0x4)
	int32_t ImplicitShapeMinNumParticles; // 0x110(0x4)
	int32_t ImplicitShapeMaxNumParticles; // 0x114(0x4)
	int32_t MinLevelSetResolution; // 0x118(0x4)
	int32_t MaxLevelSetResolution; // 0x11C(0x4)
	int32_t CollisionGroup; // 0x120(0x4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x124(0x1)
	uint8_t Pad_0x125[0x3]; // 0x125(0x3)
	struct FVector InitialLinearVelocity; // 0x128(0xC)
	struct FVector InitialAngularVelocity; // 0x134(0xC)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x140(0x10)
	uint8_t Pad_0x150[0x10]; // 0x150(0x10)


	// Object: Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x70) ]
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
};

// Object: Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x160 (Inherited: 0xD8)
struct UStaticMeshSimulationComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
	bool Simulating; // 0xE0(0x1)
	bool bNotifyCollisions; // 0xE1(0x1)
	enum class EObjectStateTypeEnum ObjectType; // 0xE2(0x1)
	uint8_t Pad_0xE3[0x1]; // 0xE3(0x1)
	float Mass; // 0xE4(0x4)
	enum class ECollisionTypeEnum CollisionType; // 0xE8(0x1)
	enum class EImplicitTypeEnum ImplicitType; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x2]; // 0xEA(0x2)
	int32_t MinLevelSetResolution; // 0xEC(0x4)
	int32_t MaxLevelSetResolution; // 0xF0(0x4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xF4(0x1)
	uint8_t Pad_0xF5[0x3]; // 0xF5(0x3)
	struct FVector InitialLinearVelocity; // 0xF8(0xC)
	struct FVector InitialAngularVelocity; // 0x104(0xC)
	float DamageThreshold; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x118(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0x120(0x8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x128(0x10)
	uint8_t Pad_0x138[0x10]; // 0x138(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x148(0x10)
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)


	// Object: Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x70) ]
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);

	// Object: Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa955200
	// Params: [ Num(0) Size(0x0) ]
	void ForceRecreatePhysicsState();
};

} // namespace SDK
