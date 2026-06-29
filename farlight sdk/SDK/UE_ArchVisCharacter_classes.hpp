// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ArchVisCharacter.ArchVisCharacter
// Size: 0x5F0 (Inherited: 0x590)
struct AArchVisCharacter : ACharacter
{
	struct FString LookUpAxisName; // 0x588(0x10)
	struct FString LookUpAtRateAxisName; // 0x598(0x10)
	struct FString TurnAxisName; // 0x5A8(0x10)
	struct FString TurnAtRateAxisName; // 0x5B8(0x10)
	struct FString MoveForwardAxisName; // 0x5C8(0x10)
	struct FString MoveRightAxisName; // 0x5D8(0x10)
	float MouseSensitivityScale_Pitch; // 0x5E8(0x4)
	float MouseSensitivityScale_Yaw; // 0x5EC(0x4)
};

// Object: Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0x6C0 (Inherited: 0x670)
struct UArchVisCharMovementComponent : UCharacterMovementComponent
{
	struct FRotator RotationalAcceleration; // 0x668(0xC)
	struct FRotator RotationalDeceleration; // 0x674(0xC)
	struct FRotator MaxRotationalVelocity; // 0x680(0xC)
	float MinPitch; // 0x68C(0x4)
	float MaxPitch; // 0x690(0x4)
	float WalkingFriction; // 0x694(0x4)
	float WalkingSpeed; // 0x698(0x4)
	float WalkingAcceleration; // 0x69C(0x4)
	uint8_t Pad_0x6A8[0x18]; // 0x6A8(0x18)
};

} // namespace SDK
