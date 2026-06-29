// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UAndroidPermissionCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

// Object: Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3435a20
	// Params: [ Num(2) Size(0x11) ]
	bool CheckPermission(struct FString Permission);

	// Object: Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3435938
	// Params: [ Num(2) Size(0x18) ]
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions);
};

} // namespace SDK
