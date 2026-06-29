// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AgoraWwiseCommHandler.AgoraWwiseCommHandlerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAgoraWwiseCommHandlerBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AgoraWwiseCommHandler.AgoraWwiseCommHandlerBlueprintLibrary.ReceivePlugin_SetTransferPlayoutData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35d1b64
	// Params: [ Num(1) Size(0x1) ]
	void ReceivePlugin_SetTransferPlayoutData(bool Val);

	// Object: Function AgoraWwiseCommHandler.AgoraWwiseCommHandlerBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithGameObjectID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35d1e50
	// Params: [ Num(4) Size(0x24) ]
	int32_t ReceivePlugin_SetReceiveOpenIDWithGameObjectID(struct AActor* Actor, struct FString ChannelId, int64_t UserId);

	// Object: Function AgoraWwiseCommHandler.AgoraWwiseCommHandlerBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithGameObjectID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35d1d08
	// Params: [ Num(3) Size(0x20) ]
	void ReceivePlugin_GetReceiveOpenIDWithGameObjectID(struct AActor* Actor, struct FString& ChannelId, int64_t& UserId);

	// Object: Function AgoraWwiseCommHandler.AgoraWwiseCommHandlerBlueprintLibrary.ReceivePlugin_ClearReceiveOpenID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35d1c04
	// Params: [ Num(3) Size(0x19) ]
	bool ReceivePlugin_ClearReceiveOpenID(struct FString ChannelId, int64_t& UserId);
};

} // namespace SDK
