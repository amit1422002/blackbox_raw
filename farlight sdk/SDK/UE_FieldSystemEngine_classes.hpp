// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class FieldSystemEngine.FieldSystemActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct AFieldSystemActor : AActor
{
	struct UFieldSystemComponent* FieldSystemComponent; // 0x2E0(0x8)
};

// Object: Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
};

// Object: Class FieldSystemEngine.FieldSystemComponent
// Size: 0x630 (Inherited: 0x5F0)
struct UFieldSystemComponent : UPrimitiveComponent
{
	struct UFieldSystem* FieldSystem; // 0x5F0(0x8)
	uint8_t Pad_0x5F8[0x10]; // 0x5F8(0x10)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x608(0x10)
	uint8_t Pad_0x618[0x18]; // 0x618(0x18)


	// Object: Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa92d8a0
	// Params: [ Num(0) Size(0x0) ]
	void ResetFieldSystem();

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa92dbcc
	// Params: [ Num(5) Size(0x24) ]
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa92da20
	// Params: [ Num(5) Size(0x1C) ]
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa92e014
	// Params: [ Num(3) Size(0x14) ]
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa92dd78
	// Params: [ Num(4) Size(0x18) ]
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa92dee4
	// Params: [ Num(3) Size(0x14) ]
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa92d8b4
	// Params: [ Num(4) Size(0x18) ]
	void ApplyPhysicsField(bool Enabled, uint8_t Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa92e144
	// Params: [ Num(3) Size(0x14) ]
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa92d734
	// Params: [ Num(4) Size(0x18) ]
	void AddFieldCommand(bool Enabled, uint8_t Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field);
};

// Object: Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xD8 (Inherited: 0xD8)
struct UFieldSystemMetaData : UActorComponent
{
};

// Object: Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xE0 (Inherited: 0xD8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData
{
	int32_t Iterations; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)


	// Object: Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa92ea1c
	// Params: [ Num(2) Size(0x10) ]
	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);
};

// Object: Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xE0 (Inherited: 0xD8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData
{
	uint8_t ResolutionType; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)


	// Object: Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa92edb0
	// Params: [ Num(2) Size(0x10) ]
	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(uint8_t ResolutionType);
};

// Object: Class FieldSystemEngine.FieldNodeBase
// Size: 0xD8 (Inherited: 0xD8)
struct UFieldNodeBase : UActorComponent
{
};

// Object: Class FieldSystemEngine.FieldNodeInt
// Size: 0xD8 (Inherited: 0xD8)
struct UFieldNodeInt : UFieldNodeBase
{
};

// Object: Class FieldSystemEngine.FieldNodeFloat
// Size: 0xD8 (Inherited: 0xD8)
struct UFieldNodeFloat : UFieldNodeBase
{
};

// Object: Class FieldSystemEngine.FieldNodeVector
// Size: 0xD8 (Inherited: 0xD8)
struct UFieldNodeVector : UFieldNodeBase
{
};

// Object: Class FieldSystemEngine.UniformInteger
// Size: 0xE0 (Inherited: 0xD8)
struct UUniformInteger : UFieldNodeInt
{
	int32_t Magnitude; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)


	// Object: Function FieldSystemEngine.UniformInteger.SetUniformInteger
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa92f784
	// Params: [ Num(2) Size(0x10) ]
	struct UUniformInteger* SetUniformInteger(int32_t Magnitude);
};

// Object: Class FieldSystemEngine.RadialIntMask
// Size: 0xF8 (Inherited: 0xD8)
struct URadialIntMask : UFieldNodeInt
{
	float Radius; // 0xD8(0x4)
	struct FVector Position; // 0xDC(0xC)
	int32_t InteriorValue; // 0xE8(0x4)
	int32_t ExteriorValue; // 0xEC(0x4)
	uint8_t SetMaskCondition; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)


	// Object: Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa92fb20
	// Params: [ Num(6) Size(0x28) ]
	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, uint8_t SetMaskConditionIn);
};

// Object: Class FieldSystemEngine.UniformScalar
// Size: 0xE0 (Inherited: 0xD8)
struct UUniformScalar : UFieldNodeFloat
{
	float Magnitude; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)


	// Object: Function FieldSystemEngine.UniformScalar.SetUniformScalar
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa92ffc8
	// Params: [ Num(2) Size(0x10) ]
	struct UUniformScalar* SetUniformScalar(float Magnitude);
};

// Object: Class FieldSystemEngine.RadialFalloff
// Size: 0x100 (Inherited: 0xD8)
struct URadialFalloff : UFieldNodeFloat
{
	float Magnitude; // 0xD8(0x4)
	float MinRange; // 0xDC(0x4)
	float MaxRange; // 0xE0(0x4)
	float Default; // 0xE4(0x4)
	float Radius; // 0xE8(0x4)
	struct FVector Position; // 0xEC(0xC)
	uint8_t Falloff; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)


	// Object: Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa930368
	// Params: [ Num(8) Size(0x30) ]
	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, uint8_t Falloff);
};

// Object: Class FieldSystemEngine.PlaneFalloff
// Size: 0x108 (Inherited: 0xD8)
struct UPlaneFalloff : UFieldNodeFloat
{
	float Magnitude; // 0xD8(0x4)
	float MinRange; // 0xDC(0x4)
	float MaxRange; // 0xE0(0x4)
	float Default; // 0xE4(0x4)
	float Distance; // 0xE8(0x4)
	struct FVector Position; // 0xEC(0xC)
	struct FVector Normal; // 0xF8(0xC)
	uint8_t Falloff; // 0x104(0x1)
	uint8_t Pad_0x105[0x3]; // 0x105(0x3)


	// Object: Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa9308a0
	// Params: [ Num(9) Size(0x38) ]
	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, uint8_t Falloff);
};

// Object: Class FieldSystemEngine.BoxFalloff
// Size: 0x130 (Inherited: 0xD8)
struct UBoxFalloff : UFieldNodeFloat
{
	float Magnitude; // 0xD8(0x4)
	float MinRange; // 0xDC(0x4)
	float MaxRange; // 0xE0(0x4)
	float Default; // 0xE4(0x4)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)
	struct FTransform Transform; // 0xF0(0x30)
	uint8_t Falloff; // 0x120(0x1)
	uint8_t Pad_0x121[0xF]; // 0x121(0xF)


	// Object: Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa930e28
	// Params: [ Num(7) Size(0x50) ]
	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, uint8_t Falloff);
};

// Object: Class FieldSystemEngine.NoiseField
// Size: 0x110 (Inherited: 0xD8)
struct UNoiseField : UFieldNodeFloat
{
	float MinRange; // 0xD8(0x4)
	float MaxRange; // 0xDC(0x4)
	struct FTransform Transform; // 0xE0(0x30)


	// Object: Function FieldSystemEngine.NoiseField.SetNoiseField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa93135c
	// Params: [ Num(4) Size(0x48) ]
	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform);
};

// Object: Class FieldSystemEngine.UniformVector
// Size: 0xE8 (Inherited: 0xD8)
struct UUniformVector : UFieldNodeVector
{
	float Magnitude; // 0xD8(0x4)
	struct FVector Direction; // 0xDC(0xC)


	// Object: Function FieldSystemEngine.UniformVector.SetUniformVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa9317d4
	// Params: [ Num(3) Size(0x18) ]
	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction);
};

// Object: Class FieldSystemEngine.RadialVector
// Size: 0xE8 (Inherited: 0xD8)
struct URadialVector : UFieldNodeVector
{
	float Magnitude; // 0xD8(0x4)
	struct FVector Position; // 0xDC(0xC)


	// Object: Function FieldSystemEngine.RadialVector.SetRadialVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa931bb8
	// Params: [ Num(3) Size(0x18) ]
	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position);
};

// Object: Class FieldSystemEngine.RandomVector
// Size: 0xE0 (Inherited: 0xD8)
struct URandomVector : UFieldNodeVector
{
	float Magnitude; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)


	// Object: Function FieldSystemEngine.RandomVector.SetRandomVector
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa931f9c
	// Params: [ Num(2) Size(0x10) ]
	struct URandomVector* SetRandomVector(float Magnitude);
};

// Object: Class FieldSystemEngine.OperatorField
// Size: 0xF8 (Inherited: 0xD8)
struct UOperatorField : UFieldNodeBase
{
	float Magnitude; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct UFieldNodeBase* RightField; // 0xE0(0x8)
	struct UFieldNodeBase* LeftField; // 0xE8(0x8)
	uint8_t Operation; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)


	// Object: Function FieldSystemEngine.OperatorField.SetOperatorField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa93233c
	// Params: [ Num(5) Size(0x28) ]
	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, uint8_t Operation);
};

// Object: Class FieldSystemEngine.ToIntegerField
// Size: 0xE0 (Inherited: 0xD8)
struct UToIntegerField : UFieldNodeInt
{
	struct UFieldNodeFloat* FloatField; // 0xD8(0x8)


	// Object: Function FieldSystemEngine.ToIntegerField.SetToIntegerField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa9327a0
	// Params: [ Num(2) Size(0x10) ]
	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField);
};

// Object: Class FieldSystemEngine.ToFloatField
// Size: 0xE0 (Inherited: 0xD8)
struct UToFloatField : UFieldNodeFloat
{
	struct UFieldNodeInt* IntField; // 0xD8(0x8)


	// Object: Function FieldSystemEngine.ToFloatField.SetToFloatField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa932b3c
	// Params: [ Num(2) Size(0x10) ]
	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField);
};

// Object: Class FieldSystemEngine.CullingField
// Size: 0xF0 (Inherited: 0xD8)
struct UCullingField : UFieldNodeBase
{
	struct UFieldNodeBase* Culling; // 0xD8(0x8)
	struct UFieldNodeBase* Field; // 0xE0(0x8)
	uint8_t Operation; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)


	// Object: Function FieldSystemEngine.CullingField.SetCullingField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa932ed8
	// Params: [ Num(4) Size(0x20) ]
	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, uint8_t Operation);
};

// Object: Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xD8 (Inherited: 0xD8)
struct UReturnResultsTerminal : UFieldNodeBase
{

	// Object: Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa9332f4
	// Params: [ Num(1) Size(0x8) ]
	struct UReturnResultsTerminal* SetReturnResultsTerminal();
};

} // namespace SDK
