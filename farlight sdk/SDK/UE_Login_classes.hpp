// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: BlueprintGeneratedClass Login.Login_C
// Size: 0x2E8 (Inherited: 0x2E8)
struct ALogin_C : ALevelScriptActor
{

	// Object: Function Login.Login_C.ReceiveEndPlay
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x1) ]
	void ReceiveEndPlay(uint8_t EndPlayReason);

	// Object: Function Login.Login_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveBeginPlay();

	// Object: Function Login.Login_C.GetModuleName
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();
};

} // namespace SDK
