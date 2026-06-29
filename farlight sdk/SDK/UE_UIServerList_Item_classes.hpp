// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UIServerList_Item.UIServerList_Item_C
// Size: 0x620 (Inherited: 0x600)
struct UUIServerList_Item_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UButton* Btn_Selected; // 0x608(0x8)
	struct UImage* Img_Selected; // 0x610(0x8)
	struct USolarTextBlock* Txt_ServerName; // 0x618(0x8)


	// Object: Function UIServerList_Item.UIServerList_Item_C.BP_IsNotSelectableOrNavigable
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	bool BP_IsNotSelectableOrNavigable();

	// Object: Function UIServerList_Item.UIServerList_Item_C.GetModuleName
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();

	// Object: Function UIServerList_Item.UIServerList_Item_C.BP_OnEntryReleased
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnEntryReleased();

	// Object: Function UIServerList_Item.UIServerList_Item_C.BP_OnItemExpansionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemExpansionChanged(bool bIsExpanded);

	// Object: Function UIServerList_Item.UIServerList_Item_C.BP_OnItemSelectionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemSelectionChanged(bool bIsSelected);

	// Object: Function UIServerList_Item.UIServerList_Item_C.OnListItemObjectSet
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnListItemObjectSet(struct UObject* ListItemObject);

	// Object: Function UIServerList_Item.UIServerList_Item_C.ExecuteUbergraph_UIServerList_Item
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UIServerList_Item(int32_t EntryPoint);
};

} // namespace SDK
