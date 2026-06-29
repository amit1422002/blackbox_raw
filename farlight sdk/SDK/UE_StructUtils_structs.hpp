// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum StructUtils.EPropertyBagMissingEnum
enum class EPropertyBagMissingEnum : uint8_t
{
	Missing = 0,
	EPropertyBagMissingEnum_MAX = 1
};

// Object: Enum StructUtils.EPropertyBagResult
enum class EPropertyBagResult : uint8_t
{
	Success = 0,
	TypeMismatch = 1,
	OutOfBounds = 2,
	PropertyNotFound = 3,
	EPropertyBagResult_MAX = 4
};

// Object: Enum StructUtils.EPropertyBagContainerType
enum class EPropertyBagContainerType : uint8_t
{
	None = 0,
	Array = 1,
	Count = 2,
	EPropertyBagContainerType_MAX = 3
};

// Object: Enum StructUtils.EPropertyBagPropertyType
enum class EPropertyBagPropertyType : uint8_t
{
	None = 0,
	Bool = 1,
	Byte = 2,
	Int32 = 3,
	Int64 = 4,
	Float = 5,
	Double = 6,
	Name = 7,
	String = 8,
	Text = 9,
	Enum = 10,
	Struct = 11,
	Object = 12,
	SoftObject = 13,
	Class = 14,
	SoftClass = 15,
	UInt32 = 16,
	UInt64 = 17,
	Count = 18,
	EPropertyBagPropertyType_MAX = 19
};

// Object: ScriptStruct StructUtils.InstancedStruct
// Size: 0x10 (Inherited: 0x0)
struct FInstancedStruct
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct StructUtils.InstancedStructContainer
// Size: 0x10 (Inherited: 0x0)
struct FInstancedStructContainer
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct StructUtils.PropertyBagMissingStruct
// Size: 0x1 (Inherited: 0x0)
struct FPropertyBagMissingStruct
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct StructUtils.InstancedPropertyBag
// Size: 0x10 (Inherited: 0x0)
struct FInstancedPropertyBag
{
	struct FInstancedStruct Value; // 0x0(0x10)
};

// Object: ScriptStruct StructUtils.PropertyBagPropertyDesc
// Size: 0x30 (Inherited: 0x0)
struct FPropertyBagPropertyDesc
{
	struct UObject* ValueTypeObject; // 0x0(0x8)
	struct FGuid ID; // 0x8(0x10)
	struct FName Name; // 0x18(0x8)
	enum class EPropertyBagPropertyType ValueType; // 0x20(0x1)
	struct FPropertyBagContainerTypes ContainerTypes; // 0x21(0x3)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
};

// Object: ScriptStruct StructUtils.PropertyBagContainerTypes
// Size: 0x3 (Inherited: 0x0)
struct FPropertyBagContainerTypes
{
	uint8_t Pad_0x0[0x3]; // 0x0(0x3)
};

// Object: ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
// Size: 0x18 (Inherited: 0x0)
struct FPropertyBagPropertyDescMetaData
{
	struct FName Key; // 0x0(0x8)
	struct FString Value; // 0x8(0x10)
};

// Object: ScriptStruct StructUtils.ConstSharedStruct
// Size: 0x10 (Inherited: 0x0)
struct FConstSharedStruct
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct StructUtils.SharedStruct
// Size: 0x10 (Inherited: 0x0)
struct FSharedStruct
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: PropertyBag StructUtils.Default__PropertyBag
// Size: 0x0 (Inherited: 0x0)
struct FDefault__PropertyBag
{
};

} // namespace SDK
