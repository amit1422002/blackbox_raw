// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2B0 (Inherited: 0x160)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent
{
	uint8_t Pad_0x160[0x8]; // 0x160(0x8)
	uint8_t bDeprecatedSpringOffsetMode : 1; // 0x168(0x1), Mask(0x1)
	uint8_t bReverseAsBrake : 1; // 0x168(0x1), Mask(0x2)
	uint8_t bUseRVOAvoidance : 1; // 0x168(0x1), Mask(0x4)
	uint8_t bRawHandbrakeInput : 1; // 0x168(0x1), Mask(0x8)
	uint8_t bRawGearUpInput : 1; // 0x168(0x1), Mask(0x10)
	uint8_t bRawGearDownInput : 1; // 0x168(0x1), Mask(0x20)
	uint8_t bWasAvoidanceUpdated : 1; // 0x168(0x1), Mask(0x40)
	uint8_t BitPad_0x168_7 : 1; // 0x168(0x1)
	uint8_t Pad_0x169[0x3]; // 0x169(0x3)
	float Mass; // 0x16C(0x4)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x170(0x10)
	float DragCoefficient; // 0x180(0x4)
	float ChassisWidth; // 0x184(0x4)
	float ChassisHeight; // 0x188(0x4)
	float DragArea; // 0x18C(0x4)
	float EstimatedMaxEngineSpeed; // 0x190(0x4)
	float MaxEngineRPM; // 0x194(0x4)
	float DebugDragMagnitude; // 0x198(0x4)
	struct FVector InertiaTensorScale; // 0x19C(0xC)
	float MinNormalizedTireLoad; // 0x1A8(0x4)
	float MinNormalizedTireLoadFiltered; // 0x1AC(0x4)
	float MaxNormalizedTireLoad; // 0x1B0(0x4)
	float MaxNormalizedTireLoadFiltered; // 0x1B4(0x4)
	float ThresholdLongitudinalSpeed; // 0x1B8(0x4)
	int32_t LowForwardSpeedSubStepCount; // 0x1BC(0x4)
	int32_t HighForwardSpeedSubStepCount; // 0x1C0(0x4)
	uint8_t Pad_0x1C4[0x4]; // 0x1C4(0x4)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1C8(0x10)
	uint8_t Pad_0x1D8[0x18]; // 0x1D8(0x18)
	float RVOAvoidanceRadius; // 0x1F0(0x4)
	float RVOAvoidanceHeight; // 0x1F4(0x4)
	float AvoidanceConsiderationRadius; // 0x1F8(0x4)
	float RVOSteeringStep; // 0x1FC(0x4)
	float RVOThrottleStep; // 0x200(0x4)
	int32_t AvoidanceUID; // 0x204(0x4)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x208(0x4)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x20C(0x4)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x210(0x4)
	float AvoidanceWeight; // 0x214(0x4)
	struct FVector PendingLaunchVelocity; // 0x218(0xC)
	struct FReplicatedVehicleState ReplicatedState; // 0x224(0x14)
	uint8_t Pad_0x238[0x4]; // 0x238(0x4)
	float RawSteeringInput; // 0x23C(0x4)
	float RawThrottleInput; // 0x240(0x4)
	float RawBrakeInput; // 0x244(0x4)
	float SteeringInput; // 0x248(0x4)
	float ThrottleInput; // 0x24C(0x4)
	float BrakeInput; // 0x250(0x4)
	float HandbrakeInput; // 0x254(0x4)
	float IdleBrakeInput; // 0x258(0x4)
	float StopThreshold; // 0x25C(0x4)
	float WrongDirectionThreshold; // 0x260(0x4)
	struct FVehicleInputRate ThrottleInputRate; // 0x264(0x8)
	struct FVehicleInputRate BrakeInputRate; // 0x26C(0x8)
	struct FVehicleInputRate HandbrakeInputRate; // 0x274(0x8)
	struct FVehicleInputRate SteeringInputRate; // 0x27C(0x8)
	uint8_t Pad_0x284[0x24]; // 0x284(0x24)
	struct AController* OverrideController; // 0x2A8(0x8)


	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3b04
	// Params: [ Num(1) Size(0x1) ]
	void SetUseAutoGears(bool bUseAuto);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad4000
	// Params: [ Num(1) Size(0x4) ]
	void SetThrottleInput(float Throttle);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3bb4
	// Params: [ Num(2) Size(0x5) ]
	void SetTargetGear(int32_t GearNum, bool bImmediate);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3eb0
	// Params: [ Num(1) Size(0x4) ]
	void SetSteeringInput(float Steering);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3e00
	// Params: [ Num(1) Size(0x1) ]
	void SetHandbrakeInput(bool bNewHandbrake);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaad35c0
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3670
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToIgnore(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaad3718
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad37c8
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToAvoid(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3d50
	// Params: [ Num(1) Size(0x1) ]
	void SetGearUp(bool bNewGearUp);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3ca0
	// Params: [ Num(1) Size(0x1) ]
	void SetGearDown(bool bNewGearDown);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3f58
	// Params: [ Num(1) Size(0x4) ]
	void SetBrakeInput(float Brake);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaad3870
	// Params: [ Num(1) Size(0x4) ]
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3920
	// Params: [ Num(1) Size(0x4) ]
	void SetAvoidanceGroup(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad3510
	// Params: [ Num(1) Size(0x1) ]
	void SetAvoidanceEnabled(bool bEnable);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xaad3330
	// Params: [ Num(5) Size(0x14) ]
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad39c8
	// Params: [ Num(1) Size(0x1) ]
	bool GetUseAutoGears();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad3a00
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTargetGear();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad3ad0
	// Params: [ Num(1) Size(0x4) ]
	float GetForwardSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad3a9c
	// Params: [ Num(1) Size(0x4) ]
	float GetEngineRotationSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad3a68
	// Params: [ Num(1) Size(0x4) ]
	float GetEngineMaxRotationSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad3a34
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentGear();
};

// Object: Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2B0 (Inherited: 0x2B0)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent
{

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad1a74
	// Params: [ Num(2) Size(0x8) ]
	void SetSteerAngle(float SteerAngle, int32_t WheelIndex);

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad1b5c
	// Params: [ Num(2) Size(0x8) ]
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex);

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad1c44
	// Params: [ Num(2) Size(0x8) ]
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);
};

// Object: Class PhysXVehicles.TireConfig
// Size: 0x50 (Inherited: 0x30)
struct UTireConfig : UDataAsset
{
	float FrictionScale; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

// Object: Class PhysXVehicles.VehicleAnimInstance
// Size: 0xB00 (Inherited: 0x330)
struct UVehicleAnimInstance : UAnimInstance
{
	uint8_t Pad_0x330[0x7C0]; // 0x330(0x7C0)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xAF0(0x8)
	uint8_t Pad_0xAF8[0x8]; // 0xAF8(0x8)


	// Object: Function PhysXVehicles.VehicleAnimInstance.GetVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaad24f0
	// Params: [ Num(1) Size(0x8) ]
	struct AWheeledVehicle* GetVehicle();
};

// Object: Class PhysXVehicles.VehicleWheel
// Size: 0xF0 (Inherited: 0x28)
struct UVehicleWheel : UObject
{
	struct UStaticMesh* CollisionMesh; // 0x28(0x8)
	bool bDontCreateShape; // 0x30(0x1)
	bool bAutoAdjustCollisionSize; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	struct FVector Offset; // 0x34(0xC)
	float ShapeRadius; // 0x40(0x4)
	float ShapeWidth; // 0x44(0x4)
	float Mass; // 0x48(0x4)
	float DampingRate; // 0x4C(0x4)
	float SteerAngle; // 0x50(0x4)
	bool bAffectedByHandbrake; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
	struct UTireType* TireType; // 0x58(0x8)
	struct UTireConfig* TireConfig; // 0x60(0x8)
	float LatStiffMaxLoad; // 0x68(0x4)
	float LatStiffValue; // 0x6C(0x4)
	float LongStiffValue; // 0x70(0x4)
	float SuspensionForceOffset; // 0x74(0x4)
	float SuspensionMaxRaise; // 0x78(0x4)
	float SuspensionMaxDrop; // 0x7C(0x4)
	float SuspensionNaturalFrequency; // 0x80(0x4)
	float SuspensionDampingRatio; // 0x84(0x4)
	uint8_t SweepType; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	float MaxBrakeTorque; // 0x8C(0x4)
	float MaxHandBrakeTorque; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x98(0x8)
	int32_t WheelIndex; // 0xA0(0x4)
	float DebugLongSlip; // 0xA4(0x4)
	float DebugLatSlip; // 0xA8(0x4)
	float DebugNormalizedTireLoad; // 0xAC(0x4)
	uint8_t Pad_0xB0[0x4]; // 0xB0(0x4)
	float DebugWheelTorque; // 0xB4(0x4)
	float DebugLongForce; // 0xB8(0x4)
	float DebugLatForce; // 0xBC(0x4)
	struct FVector Location; // 0xC0(0xC)
	struct FVector OldLocation; // 0xCC(0xC)
	struct FVector Velocity; // 0xD8(0xC)
	uint8_t Pad_0xE4[0xC]; // 0xE4(0xC)


	// Object: Function PhysXVehicles.VehicleWheel.IsInAir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad29d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsInAir();

	// Object: Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad2a10
	// Params: [ Num(1) Size(0x4) ]
	float GetSuspensionOffset();

	// Object: Function PhysXVehicles.VehicleWheel.GetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad2a78
	// Params: [ Num(1) Size(0x4) ]
	float GetSteerAngle();

	// Object: Function PhysXVehicles.VehicleWheel.GetRotationAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaad2a44
	// Params: [ Num(1) Size(0x4) ]
	float GetRotationAngle();
};

// Object: Class PhysXVehicles.WheeledVehicle
// Size: 0x350 (Inherited: 0x340)
struct AWheeledVehicle : APawn
{
	struct USkeletalMeshComponent* Mesh; // 0x340(0x8)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x348(0x8)
};

// Object: Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x428 (Inherited: 0x2B0)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent
{
	struct FVehicleEngineData EngineSetup; // 0x2B0(0xA0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x350(0x1C)
	float AckermannAccuracy; // 0x36C(0x4)
	struct FVehicleTransmissionData TransmissionSetup; // 0x370(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x3A0(0x88)
};

} // namespace SDK
