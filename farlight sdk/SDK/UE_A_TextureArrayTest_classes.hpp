// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: BlueprintGeneratedClass A_TextureArrayTest.A_TextureArrayTest_C
// Size: 0x310 (Inherited: 0x2E0)
struct AA_TextureArrayTest_C : AActor
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x2E8(0x8)
	struct UStaticMeshComponent* StaticMesh; // 0x2F0(0x8)
	struct USceneComponent* DefaultSceneRoot; // 0x2F8(0x8)
	struct FString TextureArrayPixel; // 0x300(0x10)


	// Object: Function A_TextureArrayTest.A_TextureArrayTest_C.TextureArrayTestFunc
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void TextureArrayTestFunc();

	// Object: Function A_TextureArrayTest.A_TextureArrayTest_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveBeginPlay();

	// Object: Function A_TextureArrayTest.A_TextureArrayTest_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ReceiveTick(float DeltaSeconds);

	// Object: Function A_TextureArrayTest.A_TextureArrayTest_C.ExecuteUbergraph_A_TextureArrayTest
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_A_TextureArrayTest(int32_t EntryPoint);
};

} // namespace SDK
