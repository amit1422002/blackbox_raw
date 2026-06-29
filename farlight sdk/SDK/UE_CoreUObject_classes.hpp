// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class CoreUObject.Object
// Size: 0x28 (Inherited: 0x0)
struct UObject
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)


	// Object: Function CoreUObject.Object.ExecuteUbergraph
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph(int32_t EntryPoint);
};

// Object: Class CoreUObject.Interface
// Size: 0x28 (Inherited: 0x28)
struct IInterface : UObject
{
};

// Object: Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class CoreUObject.Struct
// Size: 0xB0 (Inherited: 0x30)
struct UStruct : UField
{
	uint8_t Pad_0x30[0x80]; // 0x30(0x80)
};

// Object: Class CoreUObject.Package
// Size: 0x98 (Inherited: 0x28)
struct UPackage : UObject
{
	uint8_t Pad_0x28[0x70]; // 0x28(0x70)
};

// Object: Class CoreUObject.Class
// Size: 0x260 (Inherited: 0xB0)
struct UClass : UStruct
{
	uint8_t Pad_0xB0[0x1B0]; // 0xB0(0x1B0)
};

// Object: Class CoreUObject.ScriptStruct
// Size: 0xC0 (Inherited: 0xB0)
struct UScriptStruct : UStruct
{
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)
};

// Object: Class CoreUObject.GCObjectReferencer
// Size: 0x70 (Inherited: 0x28)
struct UGCObjectReferencer : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
};

// Object: Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
};

// Object: Class CoreUObject.Function
// Size: 0xE0 (Inherited: 0xB0)
struct UFunction : UStruct
{
	uint8_t Pad_0xB0[0x30]; // 0xB0(0x30)
};

// Object: Class CoreUObject.DelegateFunction
// Size: 0xE0 (Inherited: 0xE0)
struct UDelegateFunction : UFunction
{
};

// Object: Class CoreUObject.SparseDelegateFunction
// Size: 0xF0 (Inherited: 0xE0)
struct USparseDelegateFunction : UDelegateFunction
{
	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)
};

// Object: Class CoreUObject.DynamicClass
// Size: 0x2E0 (Inherited: 0x260)
struct UDynamicClass : UClass
{
	uint8_t Pad_0x260[0x80]; // 0x260(0x80)
};

// Object: Class CoreUObject.PackageMap
// Size: 0xE0 (Inherited: 0x28)
struct UPackageMap : UObject
{
	uint8_t Pad_0x28[0xB8]; // 0x28(0xB8)
};

// Object: Class CoreUObject.Enum
// Size: 0x60 (Inherited: 0x30)
struct UEnum : UField
{
	uint8_t Pad_0x30[0x30]; // 0x30(0x30)
};

// Object: Class CoreUObject.LinkerPlaceholderClass
// Size: 0x418 (Inherited: 0x260)
struct ULinkerPlaceholderClass : UClass
{
	uint8_t Pad_0x260[0x1B8]; // 0x260(0x1B8)
};

// Object: Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xF0 (Inherited: 0x28)
struct ULinkerPlaceholderExportObject : UObject
{
	uint8_t Pad_0x28[0xC8]; // 0x28(0xC8)
};

// Object: Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x298 (Inherited: 0xE0)
struct ULinkerPlaceholderFunction : UFunction
{
	uint8_t Pad_0xE0[0x1B8]; // 0xE0(0x1B8)
};

// Object: Class CoreUObject.MetaData
// Size: 0xC8 (Inherited: 0x28)
struct UMetaData : UObject
{
	uint8_t Pad_0x28[0xA0]; // 0x28(0xA0)
};

// Object: Class CoreUObject.ObjectRedirector
// Size: 0x30 (Inherited: 0x28)
struct UObjectRedirector : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class CoreUObject.Property
// Size: 0x70 (Inherited: 0x30)
struct UProperty : UField
{
	uint8_t Pad_0x30[0x40]; // 0x30(0x40)
};

// Object: Class CoreUObject.EnumProperty
// Size: 0x80 (Inherited: 0x70)
struct UEnumProperty : UProperty
{
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
};

// Object: Class CoreUObject.ArrayProperty
// Size: 0x78 (Inherited: 0x70)
struct UArrayProperty : UProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.ObjectPropertyBase
// Size: 0x78 (Inherited: 0x70)
struct UObjectPropertyBase : UProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.BoolProperty
// Size: 0x78 (Inherited: 0x70)
struct UBoolProperty : UProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.NumericProperty
// Size: 0x70 (Inherited: 0x70)
struct UNumericProperty : UProperty
{
};

// Object: Class CoreUObject.ByteProperty
// Size: 0x78 (Inherited: 0x70)
struct UByteProperty : UNumericProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.ObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UObjectProperty : UObjectPropertyBase
{
};

// Object: Class CoreUObject.ClassProperty
// Size: 0x80 (Inherited: 0x78)
struct UClassProperty : UObjectProperty
{
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.DelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UDelegateProperty : UProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.DoubleProperty
// Size: 0x70 (Inherited: 0x70)
struct UDoubleProperty : UNumericProperty
{
};

// Object: Class CoreUObject.FloatProperty
// Size: 0x70 (Inherited: 0x70)
struct UFloatProperty : UNumericProperty
{
};

// Object: Class CoreUObject.IntProperty
// Size: 0x70 (Inherited: 0x70)
struct UIntProperty : UNumericProperty
{
};

// Object: Class CoreUObject.Int8Property
// Size: 0x70 (Inherited: 0x70)
struct UInt8Property : UNumericProperty
{
};

// Object: Class CoreUObject.Int16Property
// Size: 0x70 (Inherited: 0x70)
struct UInt16Property : UNumericProperty
{
};

// Object: Class CoreUObject.Int64Property
// Size: 0x70 (Inherited: 0x70)
struct UInt64Property : UNumericProperty
{
};

// Object: Class CoreUObject.InterfaceProperty
// Size: 0x78 (Inherited: 0x70)
struct UInterfaceProperty : UProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.LazyObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct ULazyObjectProperty : UObjectPropertyBase
{
};

// Object: Class CoreUObject.MapProperty
// Size: 0x98 (Inherited: 0x70)
struct UMapProperty : UProperty
{
	uint8_t Pad_0x70[0x28]; // 0x70(0x28)
};

// Object: Class CoreUObject.MulticastDelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UMulticastDelegateProperty : UProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x78 (Inherited: 0x78)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty
{
};

// Object: Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x78 (Inherited: 0x78)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty
{
};

// Object: Class CoreUObject.NameProperty
// Size: 0x70 (Inherited: 0x70)
struct UNameProperty : UProperty
{
};

// Object: Class CoreUObject.SetProperty
// Size: 0x90 (Inherited: 0x70)
struct USetProperty : UProperty
{
	uint8_t Pad_0x70[0x20]; // 0x70(0x20)
};

// Object: Class CoreUObject.SoftObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct USoftObjectProperty : UObjectPropertyBase
{
};

// Object: Class CoreUObject.SoftClassProperty
// Size: 0x80 (Inherited: 0x78)
struct USoftClassProperty : USoftObjectProperty
{
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.StrProperty
// Size: 0x70 (Inherited: 0x70)
struct UStrProperty : UProperty
{
};

// Object: Class CoreUObject.StructProperty
// Size: 0x78 (Inherited: 0x70)
struct UStructProperty : UProperty
{
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class CoreUObject.UInt16Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt16Property : UNumericProperty
{
};

// Object: Class CoreUObject.UInt32Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt32Property : UNumericProperty
{
};

// Object: Class CoreUObject.UInt64Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt64Property : UNumericProperty
{
};

// Object: Class CoreUObject.WeakObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UWeakObjectProperty : UObjectPropertyBase
{
};

// Object: Class CoreUObject.TextProperty
// Size: 0x70 (Inherited: 0x70)
struct UTextProperty : UProperty
{
};

// Object: Class CoreUObject.PropertyWrapper
// Size: 0x30 (Inherited: 0x28)
struct UPropertyWrapper : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper
{
};

// Object: Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper
{
};

// Object: Class CoreUObject.Default__Class
// Size: 0x0 (Inherited: 0x0)
struct Default__Class
{
};

// Object: DynamicClass CoreUObject.Default__DynamicClass
// Size: 0x0 (Inherited: 0x0)
struct Default__DynamicClass
{
};

// Object: LinkerPlaceholderClass CoreUObject.Default__LinkerPlaceholderClass
// Size: 0x0 (Inherited: 0x0)
struct Default__LinkerPlaceholderClass
{
};

} // namespace SDK
