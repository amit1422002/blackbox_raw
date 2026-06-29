// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0xFD0 (Inherited: 0x8)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush HighlightBrush; // 0x10(0x120)
	struct FButtonStyle LeftButtonStyle; // 0x130(0x4E0)
	struct FButtonStyle CenterButtonStyle; // 0x610(0x4E0)
	struct FButtonStyle RightButtonStyle; // 0xAF0(0x4E0)
};

// Object: ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x730 (Inherited: 0x8)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FButtonStyle InnerButtonStyle; // 0x10(0x4E0)
	struct FSlateBrush NavigationButtonLeftImage; // 0x4F0(0x120)
	struct FSlateBrush NavigationButtonRightImage; // 0x610(0x120)
};

} // namespace SDK
