// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SlateCore.FontBulkData
// Size: 0x70 (Inherited: 0x28)
struct UFontBulkData : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
};

// Object: Class SlateCore.FontFaceInterface
// Size: 0x28 (Inherited: 0x28)
struct IFontFaceInterface : IInterface
{
};

// Object: Class SlateCore.FontProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct IFontProviderInterface : IInterface
{
};

// Object: Class SlateCore.SlateTypes
// Size: 0x28 (Inherited: 0x28)
struct USlateTypes : UObject
{
};

// Object: Class SlateCore.SlateWidgetStyleAsset
// Size: 0x30 (Inherited: 0x28)
struct USlateWidgetStyleAsset : UObject
{
	struct USlateWidgetStyleContainerBase* CustomStyle; // 0x28(0x8)
};

// Object: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x30 (Inherited: 0x28)
struct USlateWidgetStyleContainerBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct ISlateWidgetStyleContainerInterface : IInterface
{
};

// Object: Class SlateCore.StaticFontCacheObject
// Size: 0x38 (Inherited: 0x28)
struct UStaticFontCacheObject : UObject
{
	struct TArray<struct FStaticFontCacheInfo> StaticFontCache; // 0x28(0x10)
};

} // namespace SDK
