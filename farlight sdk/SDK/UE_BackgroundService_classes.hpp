// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class BackgroundService.BackgroundServiceMisc
// Size: 0x28 (Inherited: 0x28)
struct UBackgroundServiceMisc : UObject
{

	// Object: Function BackgroundService.BackgroundServiceMisc.StopBackgroundDownloadService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x380dd64
	// Params: [ Num(0) Size(0x0) ]
	void StopBackgroundDownloadService();

	// Object: Function BackgroundService.BackgroundServiceMisc.StartBackgroundDownloadService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x380ddb4
	// Params: [ Num(0) Size(0x0) ]
	void StartBackgroundDownloadService();

	// Object: Function BackgroundService.BackgroundServiceMisc.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x380de54
	// Params: [ Num(1) Size(0x8) ]
	struct UBackgroundServiceMisc* GetInstance();

	// Object: Function BackgroundService.BackgroundServiceMisc.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x380de04
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();
};

} // namespace SDK
