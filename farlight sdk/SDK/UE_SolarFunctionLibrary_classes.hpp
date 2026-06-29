// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: BlueprintGeneratedClass SolarFunctionLibrary.SolarFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct USolarFunctionLibrary_C : UBlueprintFunctionLibrary
{

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.FormatMinuteTime
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x20) ]
	void FormatMinuteTime(int32_t Seconds, struct UObject* __WorldContext, struct FString& FTime);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsMobilePlatform
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	void IsMobilePlatform(struct UObject* __WorldContext, bool& IsMobilePlatform);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsPCPlatform
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	void IsPCPlatform(struct UObject* __WorldContext, bool& IsPCPlatform);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalSeconds
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void GetLocalNowTotalSeconds(struct UObject* __WorldContext, int32_t& TotalSeconds);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalSeconds
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void GetUtcNowTotalSeconds(struct UObject* __WorldContext, int32_t& TotalSeconds);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalMilliseconds
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void GetLocalNowTotalMilliseconds(struct UObject* __WorldContext, int32_t& Total Milliseconds);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalMilliseconds
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void GetUtcNowTotalMilliseconds(struct UObject* __WorldContext, int32_t& Total Milliseconds);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.DoNothing
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void DoNothing(struct UObject* __WorldContext);

	// Object: Function SolarFunctionLibrary.SolarFunctionLibrary_C.SolarFunctionLibraryTest
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void SolarFunctionLibraryTest(struct UObject* __WorldContext);
};

} // namespace SDK
