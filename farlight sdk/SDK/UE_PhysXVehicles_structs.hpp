// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// Object: Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6
};

// Object: ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0xE8 (Inherited: 0xD0)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x18]; // 0xD0(0x18)
};

// Object: ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// Size: 0x10 (Inherited: 0x0)
struct FTireConfigMaterialFriction
{
	struct UPhysicalMaterial* PhysicalMaterial; // 0x0(0x8)
	float FrictionScale; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x7B0 (Inherited: 0x7A0)
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x7A0[0x10]; // 0x7A0(0x10)
};

// Object: ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x8 (Inherited: 0x0)
struct FVehicleInputRate
{
	float RiseRate; // 0x0(0x4)
	float FallRate; // 0x4(0x4)
};

// Object: ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x14 (Inherited: 0x0)
struct FReplicatedVehicleState
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float BrakeInput; // 0x8(0x4)
	float HandbrakeInput; // 0xC(0x4)
	int32_t CurrentGear; // 0x10(0x4)
};

// Object: ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x20 (Inherited: 0x0)
struct FWheelSetup
{
	struct UVehicleWheel* WheelClass; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
	struct FVector AdditionalOffset; // 0x10(0xC)
	bool bDisableSteering; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x0)
struct FVehicleTransmissionData
{
	bool bUseGearAutoBox; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float GearSwitchTime; // 0x4(0x4)
	float GearAutoBoxLatency; // 0x8(0x4)
	float FinalRatio; // 0xC(0x4)
	struct TArray<struct FVehicleGearData> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x4)
	float NeutralGearUpRatio; // 0x24(0x4)
	float ClutchStrength; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0xC (Inherited: 0x0)
struct FVehicleGearData
{
	float Ratio; // 0x0(0x4)
	float DownRatio; // 0x4(0x4)
	float UpRatio; // 0x8(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0xA0 (Inherited: 0x0)
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve TorqueCurve; // 0x0(0x88)
	float MaxRpm; // 0x88(0x4)
	float MOI; // 0x8C(0x4)
	float DampingRateFullThrottle; // 0x90(0x4)
	float DampingRateZeroThrottleClutchEngaged; // 0x94(0x4)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x1C (Inherited: 0x0)
struct FVehicleDifferential4WData
{
	uint8_t DifferentialType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FrontRearSplit; // 0x4(0x4)
	float FrontLeftRightSplit; // 0x8(0x4)
	float RearLeftRightSplit; // 0xC(0x4)
	float CentreBias; // 0x10(0x4)
	float FrontBias; // 0x14(0x4)
	float RearBias; // 0x18(0x4)
};

} // namespace SDK
