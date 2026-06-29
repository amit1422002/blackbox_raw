// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6
};

// Object: ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Size: 0x70 (Inherited: 0x0)
struct FChaosPhysicsCollisionInfo
{
	struct UPrimitiveComponent* Component; // 0x0(0x8)
	struct UPrimitiveComponent* OtherComponent; // 0x8(0x8)
	struct FVector Location; // 0x10(0xC)
	struct FVector Normal; // 0x1C(0xC)
	struct FVector AccumulatedImpulse; // 0x28(0xC)
	struct FVector Velocity; // 0x34(0xC)
	struct FVector OtherVelocity; // 0x40(0xC)
	struct FVector AngularVelocity; // 0x4C(0xC)
	struct FVector OtherAngularVelocity; // 0x58(0xC)
	float Mass; // 0x64(0x4)
	float OtherMass; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// Size: 0x30 (Inherited: 0x0)
struct FChaosBreakEvent
{
	struct UPrimitiveComponent* Component; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
	struct FVector Velocity; // 0x14(0xC)
	struct FVector AngularVelocity; // 0x20(0xC)
	float Mass; // 0x2C(0x4)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// Size: 0x58 (Inherited: 0x0)
struct FChaosHandlerSet
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TSet<struct UObject*> ChaosHandlers; // 0x8(0x50)
};

// Object: ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// Size: 0x40 (Inherited: 0x0)
struct FBreakEventCallbackWrapper
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// Size: 0x3 (Inherited: 0x0)
struct FChaosDebugSubstepControl
{
	bool bPause; // 0x0(0x1)
	bool bSubstep; // 0x1(0x1)
	bool bStep; // 0x2(0x1)
};

} // namespace SDK
