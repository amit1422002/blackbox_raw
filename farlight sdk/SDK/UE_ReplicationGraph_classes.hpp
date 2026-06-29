// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ReplicationGraph.ReplicationGraph
// Size: 0x620 (Inherited: 0x28)
struct UReplicationGraph : UReplicationDriver
{
	struct UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28(0x8)
	struct UNetDriver* NetDriver; // 0x30(0x8)
	struct TArray<struct UNetReplicationGraphConnection*> Connections; // 0x38(0x10)
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections; // 0x48(0x10)
	struct TMap<struct UNetConnection*, struct UNetReplicationGraphConnection*> ConnectionToConnectionManager; // 0x58(0x50)
	uint8_t Pad_0xA8[0x40]; // 0xA8(0x40)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes; // 0xE8(0x10)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes; // 0xF8(0x10)
	struct TArray<struct UReplicationGraphNode*> PostReplicateNodes; // 0x108(0x10)
	uint8_t Pad_0x118[0x480]; // 0x118(0x480)
	struct TMap<struct UNetConnection*, struct FClassExtraReplicatedInfo> ConnectionInfos; // 0x598(0x50)
	uint8_t Pad_0x5E8[0x38]; // 0x5E8(0x38)
};

// Object: Class ReplicationGraph.BasicReplicationGraph
// Size: 0x650 (Inherited: 0x620)
struct UBasicReplicationGraph : UReplicationGraph
{
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x618(0x8)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x620(0x8)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x628(0x10)
	struct TArray<struct AActor*> ActorsWithoutNetConnection; // 0x638(0x10)
};

// Object: Class ReplicationGraph.ReplicationGraphNode
// Size: 0x50 (Inherited: 0x28)
struct UReplicationGraphNode : UObject
{
	struct TArray<struct UReplicationGraphNode*> AllChildNodes; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0xD0 (Inherited: 0x50)
struct UReplicationGraphNode_ActorList : UReplicationGraphNode
{
	uint8_t Pad_0x50[0x80]; // 0x50(0x80)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x108 (Inherited: 0x50)
struct UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode
{
	uint8_t Pad_0x50[0xB8]; // 0x50(0xB8)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x100 (Inherited: 0xD0)
struct UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList
{
	uint8_t Pad_0xD0[0x30]; // 0xD0(0x30)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x150 (Inherited: 0xD0)
struct UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList
{
	uint8_t Pad_0xD0[0x80]; // 0xD0(0x80)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0xE0 (Inherited: 0xD0)
struct UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList
{
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x130 (Inherited: 0xD0)
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList
{
	uint8_t Pad_0xD0[0x40]; // 0xD0(0x40)
	struct UReplicationGraphNode* DynamicNode; // 0x110(0x8)
	struct UReplicationGraphNode_DormancyNode* DormancyNode; // 0x118(0x8)
	struct UReplicationGraphNode_ActorListFrequencyBuckets* LowFrequencyNode; // 0x120(0x8)
	uint8_t Pad_0x128[0x8]; // 0x128(0x8)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x2E0 (Inherited: 0x50)
struct UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode
{
	uint8_t Pad_0x50[0x290]; // 0x50(0x290)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x68 (Inherited: 0x50)
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode
{
	struct UReplicationGraphNode* ChildNode; // 0x50(0x8)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0xF0 (Inherited: 0xD0)
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList
{
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0xE0(0x10)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x70 (Inherited: 0x50)
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode
{
	struct TArray<struct FTearOffActorInfo> TearOffActors; // 0x50(0x10)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
};

// Object: Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x3D0 (Inherited: 0x28)
struct UNetReplicationGraphConnection : UReplicationConnectionDriver
{
	struct UNetConnection* NetConnection; // 0x28(0x8)
	uint8_t Pad_0x30[0x230]; // 0x30(0x230)
	struct AReplicationGraphDebugActor* DebugActor; // 0x260(0x8)
	uint8_t Pad_0x268[0x10]; // 0x268(0x10)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x278(0x10)
	uint8_t Pad_0x288[0x58]; // 0x288(0x58)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes; // 0x2E0(0x10)
	struct UReplicationGraphNode* PrepareNode; // 0x2F0(0x8)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x2F8(0x8)
	uint8_t Pad_0x300[0xD0]; // 0x300(0xD0)
};

// Object: Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x2F0 (Inherited: 0x2E0)
struct AReplicationGraphDebugActor : AActor
{
	struct UReplicationGraph* ReplicationGraph; // 0x2E0(0x8)
	struct UNetReplicationGraphConnection* ConnectionManager; // 0x2E8(0x8)


	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x3169468
	// Params: [ Num(0) Size(0x0) ]
	void ServerStopDebugging();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x3169484
	// Params: [ Num(0) Size(0x0) ]
	void ServerStartDebugging();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x31691b0
	// Params: [ Num(2) Size(0xC) ]
	void ServerSetPeriodFrameForClass(struct UObject* Class, int32_t PeriodFrame);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x31692a0
	// Params: [ Num(2) Size(0xC) ]
	void ServerSetCullDistanceForClass(struct UObject* Class, float CullDistance);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x3169100
	// Params: [ Num(1) Size(0x8) ]
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x31690e4
	// Params: [ Num(0) Size(0x0) ]
	void ServerPrintCullDistances();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x3169390
	// Params: [ Num(1) Size(0x10) ]
	void ServerPrintAllActorInfo(struct FString str);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x316944c
	// Params: [ Num(0) Size(0x0) ]
	void ServerCellInfo();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x3168fa8
	// Params: [ Num(3) Size(0x28) ]
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors);
};

} // namespace SDK
