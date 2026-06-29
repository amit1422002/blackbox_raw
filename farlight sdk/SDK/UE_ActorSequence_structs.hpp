// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x0)
struct FActorSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds; // 0x0(0x10)
	struct TArray<struct FActorSequenceObjectReferences> References; // 0x10(0x10)
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10 (Inherited: 0x0)
struct FActorSequenceObjectReferences
{
	struct TArray<struct FActorSequenceObjectReference> Array; // 0x0(0x10)
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28 (Inherited: 0x0)
struct FActorSequenceObjectReference
{
	enum class EActorSequenceObjectReferenceType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FGuid ActorId; // 0x4(0x10)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString PathToComponent; // 0x18(0x10)
};

} // namespace SDK
