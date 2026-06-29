// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

#include <cstdint>


namespace UEOffsets
{

namespace Config
{
    constexpr bool isUsingCasePreservingName = false;
    constexpr bool IsUsingFNamePool = true;
    constexpr bool isUsingOutlineNumberName = false;
}

namespace FName
{
    constexpr uintptr_t ComparisonIndex = 0x0;
    constexpr uintptr_t Number = 0x4;
    constexpr uintptr_t DisplayIndex = 0x0;
    constexpr uintptr_t Size = 0x8;
}

namespace FNameEntry
{
    constexpr uintptr_t Index = 0x0;
    constexpr uintptr_t Name = 0x0;
}

namespace FNamePool
{
    constexpr int32_t Stride = 2;
    constexpr int32_t BlocksBit = 16;
    constexpr uintptr_t BlocksOff = 0x40;
}

namespace FNamePoolEntry
{
    constexpr uintptr_t Header = 0x0;
}

namespace FUObjectArray
{
    constexpr uintptr_t ObjObjects = 0x18;
}

namespace TUObjectArray
{
    constexpr uintptr_t Objects = 0x0;
    constexpr uintptr_t NumElements = 0x14;
    constexpr uintptr_t NumElementsPerChunk = 0x10000;
}

namespace FUObjectItem
{
    constexpr uintptr_t Object = 0x0;
    constexpr uintptr_t Size = 0x18;
}

namespace UObject
{
    constexpr uintptr_t ObjectFlags = 0x8;
    constexpr uintptr_t InternalIndex = 0xc;
    constexpr uintptr_t ClassPrivate = 0x10;
    constexpr uintptr_t NamePrivate = 0x18;
    constexpr uintptr_t OuterPrivate = 0x20;
}

namespace UField
{
    constexpr uintptr_t Next = 0x28;
}

namespace UEnum
{
    constexpr uintptr_t Names = 0x40;
}

namespace UStruct
{
    constexpr uintptr_t SuperStruct = 0x40;
    constexpr uintptr_t Children = 0x48;
    constexpr uintptr_t ChildProperties = 0x50;
    constexpr uintptr_t PropertiesSize = 0x58;
}

namespace UFunction
{
    constexpr uintptr_t EFunctionFlags = 0xb0;
    constexpr uintptr_t NumParams = 0xb4;
    constexpr uintptr_t ParamSize = 0xb6;
    constexpr uintptr_t Func = 0xd8;
}

namespace UProperty
{
    constexpr uintptr_t ArrayDim = 0x0;
    constexpr uintptr_t ElementSize = 0x0;
    constexpr uintptr_t PropertyFlags = 0x0;
    constexpr uintptr_t Offset_Internal = 0x0;
    constexpr uintptr_t Size = 0x0;
}

namespace FField
{
    constexpr uintptr_t ClassPrivate = 0x8;
    constexpr uintptr_t Next = 0x20;
    constexpr uintptr_t NamePrivate = 0x28;
    constexpr uintptr_t FlagsPrivate = 0x30;
}

namespace FProperty
{
    constexpr uintptr_t ArrayDim = 0x34;
    constexpr uintptr_t ElementSize = 0x38;
    constexpr uintptr_t PropertyFlags = 0x40;
    constexpr uintptr_t Offset_Internal = 0x4c;
    constexpr uintptr_t Size = 0x78;
}


}

namespace UEPointers
{
    constexpr uintptr_t Names = 0xcee0b48;
    constexpr uintptr_t UObjectArray = 0xceeca58;
    constexpr uintptr_t ObjObjects = 0xceeca70;
    constexpr uintptr_t Engine = 0xd078610;
    constexpr uintptr_t World = 0xd078858;
    constexpr uintptr_t ProcessEvent = 0x88281b0;
    constexpr int32_t ProcessEventIndex = 68;
}

namespace UEExternalPointers
{
    constexpr uintptr_t NamesExternal = 0xcee0b48;
    constexpr uintptr_t EngineExternal = 0xd078610;
    constexpr uintptr_t WorldExternal = 0xcb74470;
}

namespace UEPatternPointers
{
    constexpr uintptr_t GNamesBL = 0x0;
    constexpr uintptr_t GUObjectPattern = 0xceeca58;
    constexpr uintptr_t GetActorArray = 0x0;
    constexpr uintptr_t GnativeApp = 0x0;
}