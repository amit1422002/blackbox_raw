// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class LocationServicesBPLibrary.LocationServices
// Size: 0x28 (Inherited: 0x28)
struct ULocationServices : UBlueprintFunctionLibrary
{

	// Object: Function LocationServicesBPLibrary.LocationServices.StopLocationServices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f495c0
	// Params: [ Num(1) Size(0x1) ]
	bool StopLocationServices();

	// Object: Function LocationServicesBPLibrary.LocationServices.StartLocationServices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f495f8
	// Params: [ Num(1) Size(0x1) ]
	bool StartLocationServices();

	// Object: Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f49470
	// Params: [ Num(2) Size(0x2) ]
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy);

	// Object: Function LocationServicesBPLibrary.LocationServices.InitLocationServices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f49630
	// Params: [ Num(4) Size(0xD) ]
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);

	// Object: Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f4944c
	// Params: [ Num(1) Size(0x8) ]
	struct ULocationServicesImpl* GetLocationServicesImpl();

	// Object: Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f49554
	// Params: [ Num(1) Size(0x18) ]
	struct FLocationServicesData GetLastKnownLocation();

	// Object: Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f4951c
	// Params: [ Num(1) Size(0x1) ]
	bool AreLocationServicesEnabled();
};

// Object: Class LocationServicesBPLibrary.LocationServicesImpl
// Size: 0x38 (Inherited: 0x28)
struct ULocationServicesImpl : UObject
{
	struct FMulticastInlineDelegate OnLocationChanged; // 0x28(0x10)
};

} // namespace SDK
