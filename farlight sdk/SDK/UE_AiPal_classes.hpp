// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AiPal.AiPalComponent
// Size: 0xD8 (Inherited: 0xD8)
struct UAiPalComponent : UActorComponent
{

	// Object: Function AiPal.AiPalComponent.SetThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbd58
	// Params: [ Num(1) Size(0x4) ]
	void SetThreshold(float ThresholdPer);

	// Object: Function AiPal.AiPalComponent.SetServerIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbb58
	// Params: [ Num(1) Size(0x1) ]
	void SetServerIndex(bool IsDomestic);

	// Object: Function AiPal.AiPalComponent.SetPlayerID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbe00
	// Params: [ Num(1) Size(0x10) ]
	void SetPlayerID(struct FString PlayerID);

	// Object: Function AiPal.AiPalComponent.SetMaxDetectTimes
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbc08
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDetectTimes(int32_t DetectGap_ms);

	// Object: Function AiPal.AiPalComponent.SetDetectGap_ms
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbcb0
	// Params: [ Num(1) Size(0x4) ]
	void SetDetectGap_ms(int32_t DetectGap_ms);

	// Object: Function AiPal.AiPalComponent.SetClientEnv
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbf68
	// Params: [ Num(1) Size(0x10) ]
	void SetClientEnv(struct FString ClientEnv);

	// Object: Function AiPal.AiPalComponent.SetBattleID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbeb4
	// Params: [ Num(1) Size(0x10) ]
	void SetBattleID(struct FString BattleID);

	// Object: Function AiPal.AiPalComponent.EndDetect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbb30
	// Params: [ Num(0) Size(0x0) ]
	void EndDetect();

	// Object: Function AiPal.AiPalComponent.Capture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbb1c
	// Params: [ Num(0) Size(0x0) ]
	void Capture();

	// Object: Function AiPal.AiPalComponent.BeginDetect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37bbb44
	// Params: [ Num(0) Size(0x0) ]
	void BeginDetect();
};

} // namespace SDK
