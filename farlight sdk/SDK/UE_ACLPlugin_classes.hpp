// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ACLPlugin.AnimationCompressionLibraryDatabase
// Size: 0x158 (Inherited: 0x28)
struct UAnimationCompressionLibraryDatabase : UObject
{
	struct TArray<uint8_t> CookedCompressedBytes; // 0x28(0x10)
	struct TArray<uint64_t> CookedAnimSequenceMappings; // 0x38(0x10)
	uint8_t Pad_0x48[0x108]; // 0x48(0x108)
	uint32_t MaxStreamRequestSizeKB; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)


	// Object: Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5cb6850
	// Params: [ Num(5) Size(0x2A) ]
	void SetVisualFidelity(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class EACLVisualFidelityChangeResult& Result, enum class EACLVisualFidelity VisualFidelity);

	// Object: Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cb67a8
	// Params: [ Num(2) Size(0x9) ]
	enum class EACLVisualFidelity GetVisualFidelity(struct UAnimationCompressionLibraryDatabase* DatabaseAsset);
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLBase : UAnimBoneCompressionCodec
{
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACL
// Size: 0x40 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACL : UAnimBoneCompressionCodec_ACLBase
{
	struct UAnimBoneCompressionCodec* SafetyFallbackCodec; // 0x38(0x8)
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLCustom : UAnimBoneCompressionCodec_ACLBase
{
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// Size: 0x40 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLDatabase : UAnimBoneCompressionCodec_ACLBase
{
	struct UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x38(0x8)
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLSafe : UAnimBoneCompressionCodec_ACLBase
{
};

// Object: Class ACLPlugin.AnimCurveCompressionCodec_ACL
// Size: 0x28 (Inherited: 0x28)
struct UAnimCurveCompressionCodec_ACL : UAnimCurveCompressionCodec
{
};

} // namespace SDK
