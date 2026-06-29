// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class OnlineSubsystem.NamedInterfaces
// Size: 0x60 (Inherited: 0x28)
struct UNamedInterfaces : UObject
{
	struct TArray<struct FNamedInterface> NamedInterfaces; // 0x28(0x10)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)
};

// Object: Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28 (Inherited: 0x28)
struct ITurnBasedMatchInterface : IInterface
{

	// Object: Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x11) ]
	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive);

	// Object: Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnMatchEnded(struct FString Match);
};

} // namespace SDK
