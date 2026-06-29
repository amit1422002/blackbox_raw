// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class RigVM.RigVM
// Size: 0x240 (Inherited: 0x28)
struct URigVM : UObject
{
	struct FRigVMMemoryContainer WorkMemory; // 0x28(0xA0)
	struct FRigVMMemoryContainer LiteralMemory; // 0xC8(0xA0)
	struct FRigVMByteCode ByteCode; // 0x168(0x10)
	struct FRigVMInstructionArray Instructions; // 0x178(0x10)
	struct TArray<struct FName> FunctionNames; // 0x188(0x10)
	uint8_t Pad_0x198[0x10]; // 0x198(0x10)
	struct TArray<struct FRigVMParameter> Parameters; // 0x1A8(0x10)
	struct TMap<struct FName, int32_t> ParametersNameMap; // 0x1B8(0x50)
	uint8_t Pad_0x208[0x38]; // 0x208(0x38)


	// Object: Function RigVM.RigVM.SetParameterValueVector2D
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b4928
	// Params: [ Num(3) Size(0x14) ]
	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b4700
	// Params: [ Num(3) Size(0x18) ]
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b4294
	// Params: [ Num(3) Size(0x44) ]
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b4b28
	// Params: [ Num(3) Size(0x1C) ]
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueQuat
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b44e8
	// Params: [ Num(3) Size(0x24) ]
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b4d88
	// Params: [ Num(3) Size(0x14) ]
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b4f8c
	// Params: [ Num(3) Size(0x10) ]
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b5180
	// Params: [ Num(3) Size(0x10) ]
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.SetParameterValueBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b537c
	// Params: [ Num(3) Size(0x10) ]
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetRigVMFunctionName
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xa9b671c
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex);

	// Object: Function RigVM.RigVM.GetParameterValueVector2D
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b5b6c
	// Params: [ Num(3) Size(0x14) ]
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b5984
	// Params: [ Num(3) Size(0x18) ]
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b5578
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b5d3c
	// Params: [ Num(3) Size(0x20) ]
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueQuat
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa9b57ac
	// Params: [ Num(3) Size(0x20) ]
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b5e90
	// Params: [ Num(3) Size(0x14) ]
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b6054
	// Params: [ Num(3) Size(0x10) ]
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b6218
	// Params: [ Num(3) Size(0x10) ]
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterValueBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa9b63dc
	// Params: [ Num(3) Size(0xD) ]
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex);

	// Object: Function RigVM.RigVM.GetParameterArraySize
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa9b65a8
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetParameterArraySize(struct FName& InParameterName);

	// Object: Function RigVM.RigVM.Execute
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa9b6900
	// Params: [ Num(1) Size(0x1) ]
	bool Execute();

	// Object: Function RigVM.RigVM.AddRigVMFunction
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xa9b6804
	// Params: [ Num(3) Size(0x14) ]
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName);
};

} // namespace SDK
