// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class UnLua.UnLuaInterface
// Size: 0x28 (Inherited: 0x28)
struct IUnLuaInterface : IInterface
{

	// Object: Function UnLua.UnLuaInterface.GetModuleName
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x3431a2c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();
};

// Object: Class UnLua.UnLuaManager
// Size: 0x5B8 (Inherited: 0x28)
struct UUnLuaManager : UObject
{
	uint8_t Pad_0x28[0x590]; // 0x28(0x590)


	// Object: Function UnLua.UnLuaManager.TriggerAnimNotify
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void TriggerAnimNotify();

	// Object: Function UnLua.UnLuaManager.OnLatentActionCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x3431e58
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentActionCompleted(int32_t LinkID);

	// Object: Function UnLua.UnLuaManager.OnActorDestroyed
	// Flags: [Final|Native|Public]
	// Offset: 0x3431f00
	// Params: [ Num(1) Size(0x8) ]
	void OnActorDestroyed(struct AActor* Actor);

	// Object: Function UnLua.UnLuaManager.InputVectorAxis
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0xC) ]
	void InputVectorAxis(struct FVector& AxisValue);

	// Object: Function UnLua.UnLuaManager.InputTouch
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void InputTouch(uint8_t FingerIndex, struct FVector& Location);

	// Object: Function UnLua.UnLuaManager.InputGesture
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void InputGesture(float Value);

	// Object: Function UnLua.UnLuaManager.InputAxis
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void InputAxis(float AxisValue);

	// Object: Function UnLua.UnLuaManager.InputAction
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	void InputAction(struct FKey Key);
};

// Object: Class UnLua.UnLuaPerformanceTestProxy
// Size: 0x340 (Inherited: 0x2E0)
struct AUnLuaPerformanceTestProxy : AActor
{
	uint8_t Pad_0x2E0[0x8]; // 0x2E0(0x8)
	int32_t MeshId; // 0x2E8(0x4)
	uint8_t Pad_0x2EC[0x4]; // 0x2EC(0x4)
	struct FString MeshName; // 0x2F0(0x10)
	struct FVector COM; // 0x300(0xC)
	uint8_t Pad_0x30C[0x4]; // 0x30C(0x4)
	struct TArray<int32_t> Indices; // 0x310(0x10)
	struct TArray<struct FVector> Positions; // 0x320(0x10)
	struct TArray<struct FVector> PredictedPositions; // 0x330(0x10)


	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3432704
	// Params: [ Num(1) Size(0x10) ]
	void UpdatePositions(struct TArray<struct FVector>& NewPositions);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3432b10
	// Params: [ Num(2) Size(0x20) ]
	struct FString UpdateMeshName(struct FString NewName);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3432c04
	// Params: [ Num(2) Size(0x8) ]
	int32_t UpdateMeshID(int32_t NewID);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3432884
	// Params: [ Num(1) Size(0x10) ]
	void UpdateIndices(struct TArray<int32_t>& NewIndices);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.Simulate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3432da4
	// Params: [ Num(1) Size(0x4) ]
	void Simulate(float DeltaTime);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.Raycast
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3432a04
	// Params: [ Num(3) Size(0x19) ]
	bool Raycast(struct FVector& Origin, struct FVector& Direction);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.NOP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3432e4c
	// Params: [ Num(0) Size(0x0) ]
	void NOP();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3432684
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetPredictedPositions();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetPositions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x34327c4
	// Params: [ Num(1) Size(0x10) ]
	void GetPositions(struct TArray<struct FVector>& OutPositions);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetMeshName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3432cf4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMeshName();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x34323f0
	// Params: [ Num(7) Size(0x59) ]
	bool GetMeshInfo(int32_t& OutMeshID, struct FString& OutMeshName, struct FVector& OutCOM, struct TArray<int32_t>& OutIndices, struct TArray<struct FVector>& OutPositions, struct TArray<struct FVector>& OutPredictedPositions);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetMeshID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3432d70
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMeshID();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetIndices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3432944
	// Params: [ Num(1) Size(0x10) ]
	void GetIndices(struct TArray<int32_t>& OutIndices);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetCOM
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3432cb4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCOM();
};

} // namespace SDK
