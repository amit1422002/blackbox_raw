// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class UIExtension.UIExtensionPointWidget
// Size: 0x2A0 (Inherited: 0x200)
struct UUIExtensionPointWidget : UDynamicEntryBoxBase
{
	struct FGameplayTag ExtensionPointTag; // 0x200(0x8)
	enum class EUIExtensionPointMatch ExtensionPointTagMatch; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)
	struct TArray<struct UObject*> DataClasses; // 0x210(0x10)
	struct FDelegate GetWidgetClassForData; // 0x220(0x10)
	struct FDelegate ConfigureWidgetForData; // 0x230(0x10)
	uint8_t Pad_0x240[0x10]; // 0x240(0x10)
	struct TMap<struct FUIExtensionHandle, struct UUserWidget*> ExtensionMapping; // 0x250(0x50)
};

// Object: Class UIExtension.UIExtensionSubsystem
// Size: 0xD0 (Inherited: 0x30)
struct UUIExtensionSubsystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0xA0]; // 0x30(0xA0)


	// Object: Function UIExtension.UIExtensionSubsystem.UnregisterExtensionPoint
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3967d6c
	// Params: [ Num(1) Size(0x18) ]
	void UnregisterExtensionPoint(struct FUIExtensionPointHandle& ExtensionPointHandle);

	// Object: Function UIExtension.UIExtensionSubsystem.UnregisterExtension
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3967e88
	// Params: [ Num(1) Size(0x18) ]
	void UnregisterExtension(struct FUIExtensionHandle& ExtensionHandle);

	// Object: Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionPoint
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x3967ae4
	// Params: [ Num(5) Size(0x48) ]
	struct FUIExtensionPointHandle K2_RegisterExtensionPoint(struct FGameplayTag ExtensionPointTag, enum class EUIExtensionPointMatch ExtensionPointTagMatchType, struct TArray<struct UObject*>& AllowedDataClasses, struct FDelegate ExtensionCallback);

	// Object: Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsWidgetForContext
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Protected|BlueprintCallable]
	// Offset: 0x3967684
	// Params: [ Num(5) Size(0x38) ]
	struct FUIExtensionHandle K2_RegisterExtensionAsWidgetForContext(struct FGameplayTag ExtensionPointTag, struct UUserWidget* WidgetClass, struct UObject* ContextObject, int32_t Priority);

	// Object: Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsWidget
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Protected|BlueprintCallable]
	// Offset: 0x39678d4
	// Params: [ Num(4) Size(0x30) ]
	struct FUIExtensionHandle K2_RegisterExtensionAsWidget(struct FGameplayTag ExtensionPointTag, struct UUserWidget* WidgetClass, int32_t Priority);

	// Object: Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsDataForContext
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Protected|BlueprintCallable]
	// Offset: 0x3967224
	// Params: [ Num(5) Size(0x38) ]
	struct FUIExtensionHandle K2_RegisterExtensionAsDataForContext(struct FGameplayTag ExtensionPointTag, struct UObject* ContextObject, struct UObject* Data, int32_t Priority);

	// Object: Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsData
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Protected|BlueprintCallable]
	// Offset: 0x3967474
	// Params: [ Num(4) Size(0x30) ]
	struct FUIExtensionHandle K2_RegisterExtensionAsData(struct FGameplayTag ExtensionPointTag, struct UObject* Data, int32_t Priority);
};

// Object: Class UIExtension.UIExtensionHandleFunctions
// Size: 0x28 (Inherited: 0x28)
struct UUIExtensionHandleFunctions : UBlueprintFunctionLibrary
{

	// Object: Function UIExtension.UIExtensionHandleFunctions.Unregister
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3968548
	// Params: [ Num(1) Size(0x18) ]
	void Unregister(struct FUIExtensionHandle& Handle);

	// Object: Function UIExtension.UIExtensionHandleFunctions.IsValid
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3968428
	// Params: [ Num(2) Size(0x19) ]
	bool IsValid(struct FUIExtensionHandle& Handle);
};

// Object: Class UIExtension.UIExtensionPointHandleFunctions
// Size: 0x28 (Inherited: 0x28)
struct UUIExtensionPointHandleFunctions : UBlueprintFunctionLibrary
{

	// Object: Function UIExtension.UIExtensionPointHandleFunctions.Unregister
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x39689ec
	// Params: [ Num(1) Size(0x18) ]
	void Unregister(struct FUIExtensionPointHandle& Handle);

	// Object: Function UIExtension.UIExtensionPointHandleFunctions.IsValid
	// Flags: [Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x39688cc
	// Params: [ Num(2) Size(0x19) ]
	bool IsValid(struct FUIExtensionPointHandle& Handle);
};

} // namespace SDK
