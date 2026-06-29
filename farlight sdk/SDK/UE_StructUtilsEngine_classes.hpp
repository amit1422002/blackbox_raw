// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class StructUtilsEngine.StructUtilsFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStructUtilsFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x395e798
	// Params: [ Num(2) Size(0x14) ]
	void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int32_t& Value);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.Reset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x395f564
	// Params: [ Num(2) Size(0x18) ]
	void Reset(struct FInstancedStruct& InstancedStruct, struct UScriptStruct* StructType);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x395f23c
	// Params: [ Num(3) Size(0x21) ]
	bool NotEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x395e598
	// Params: [ Num(2) Size(0x18) ]
	struct FInstancedStruct MakeInstancedStruct(int32_t& Value);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x395f158
	// Params: [ Num(2) Size(0x11) ]
	bool IsValid_InstancedStruct(struct FInstancedStruct& InstancedStruct);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x395f480
	// Params: [ Num(2) Size(0x11) ]
	enum class EStructUtilsResult IsInstancedStructValid(struct FInstancedStruct& InstancedStruct);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x395e9ec
	// Params: [ Num(3) Size(0x1C) ]
	void GetInstancedStructValue(enum class EStructUtilsResult& ExecResult, struct FInstancedStruct& InstancedStruct, int32_t& Value);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x395f360
	// Params: [ Num(3) Size(0x21) ]
	bool EqualEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B);
};

} // namespace SDK
