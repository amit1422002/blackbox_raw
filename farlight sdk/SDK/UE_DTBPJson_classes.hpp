// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class DTBPJson.DTBPJsonBPLib
// Size: 0x28 (Inherited: 0x28)
struct UDTBPJsonBPLib : UBlueprintFunctionLibrary
{

	// Object: Function DTBPJson.DTBPJsonBPLib.StructToJson
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38362d0
	// Params: [ Num(3) Size(0x19) ]
	void StructToJson(struct FDTStruct& Struct, struct FString& Json, bool PrettyPrint);

	// Object: Function DTBPJson.DTBPJsonBPLib.JsonToStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38361c0
	// Params: [ Num(2) Size(0x18) ]
	void JsonToStruct(struct FDTStruct& Struct, struct FString Json);
};

} // namespace SDK
