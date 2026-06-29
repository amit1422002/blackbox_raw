// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class StructUtils.PropertyBagMissingObject
// Size: 0x28 (Inherited: 0x28)
struct UPropertyBagMissingObject : UObject
{
};

// Object: Class StructUtils.PropertyBag
// Size: 0xD8 (Inherited: 0xC0)
struct UPropertyBag : UScriptStruct
{
	struct TArray<struct FPropertyBagPropertyDesc> PropertyDescs; // 0xC0(0x10)
	uint8_t Pad_0xD0[0x8]; // 0xD0(0x8)
};

} // namespace SDK
