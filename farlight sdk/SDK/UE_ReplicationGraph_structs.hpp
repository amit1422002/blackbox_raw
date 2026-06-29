// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// Size: 0x10 (Inherited: 0x0)
struct FConnectionAlwaysRelevantNodePair
{
	struct UNetConnection* NetConnection; // 0x0(0x8)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8(0x8)
};

// Object: ScriptStruct ReplicationGraph.LastLocationGatherInfo
// Size: 0x20 (Inherited: 0x0)
struct FLastLocationGatherInfo
{
	struct UNetConnection* Connection; // 0x0(0x8)
	struct FVector LastLocation; // 0x8(0xC)
	struct FVector LastOutOfRangeLocationCheck; // 0x14(0xC)
};

// Object: ScriptStruct ReplicationGraph.TearOffActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FTearOffActorInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* Actor; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct ReplicationGraph.ClassExtraReplicatedInfo
// Size: 0x50 (Inherited: 0x0)
struct FClassExtraReplicatedInfo
{
	struct TMap<struct UObject*, int32_t> ClassActorsMaxReplicatedNum; // 0x0(0x50)
};

// Object: ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FAlwaysRelevantActorInfo
{
	struct UNetConnection* Connection; // 0x0(0x8)
	struct AActor* LastViewer; // 0x8(0x8)
	struct AActor* LastViewTarget; // 0x10(0x8)
};

// Object: ScriptStruct ReplicationGraph.ClassReplicationInfo
// Size: 0x80 (Inherited: 0x0)
struct FClassReplicationInfo
{
	float DistancePriorityScale; // 0x0(0x4)
	float StarvationPriorityScale; // 0x4(0x4)
	float AccumulatedNetPriorityBias; // 0x8(0x4)
	uint16_t ReplicationPeriodFrame; // 0xC(0x2)
	uint16_t FastPath_ReplicationPeriodFrame; // 0xE(0x2)
	uint16_t ActorChannelFrameTimeout; // 0x10(0x2)
	uint8_t Pad_0x12[0x56]; // 0x12(0x56)
	float CullDistance; // 0x68(0x4)
	float CullDistanceSquared; // 0x6C(0x4)
	float CullDistanceRaw; // 0x70(0x4)
	float CullHeight; // 0x74(0x4)
	float CullHeightOnSkydiving; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

} // namespace SDK
