// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class RichtapTools.RichtapController
// Size: 0x90 (Inherited: 0x28)
struct URichtapController : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	struct TMap<struct FString, struct TWeakObjectPtr<struct URichtapClip>> HeDataMap; // 0x40(0x50)


	// Object: Function RichtapTools.RichtapController.SetRichtapEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x35d6868
	// Params: [ Num(1) Size(0x1) ]
	void SetRichtapEnable(bool On);

	// Object: Function RichtapTools.RichtapController.SetEnableWinRichtap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35d6728
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableWinRichtap(bool bIsEnableWinRichtap);

	// Object: Function RichtapTools.RichtapController.SetEnableRichtap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35d67c8
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableRichtap(bool bIsEnableRichtap);
};

} // namespace SDK
