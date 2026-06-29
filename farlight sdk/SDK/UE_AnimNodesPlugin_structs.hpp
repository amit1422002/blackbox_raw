// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct AnimNodesPlugin.AnimNode_CorrectionIKBones
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_CorrectionIKBones : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	struct TArray<struct FCorrectionBoneInfo> CorrectionInfos; // 0x20(0x10)
	int32_t LODThreshold; // 0x30(0x4)
	uint8_t Pad_0x34[0x24]; // 0x34(0x24)
};

// Object: ScriptStruct AnimNodesPlugin.CorrectionBoneInfo
// Size: 0x20 (Inherited: 0x0)
struct FCorrectionBoneInfo
{
	struct FBoneReference ModifyBone; // 0x0(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
};

// Object: ScriptStruct AnimNodesPlugin.AnimNode_OrnamentAttachAlign
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_OrnamentAttachAlign : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x4)
	uint8_t Pad_0x24[0x24]; // 0x24(0x24)
	struct TMap<struct FName, struct FBoneReference> BonesToModify; // 0x48(0x50)
};

// Object: ScriptStruct AnimNodesPlugin.AttachBoneInfo
// Size: 0x1C (Inherited: 0x0)
struct FAttachBoneInfo
{
	struct FName AttachBoneName; // 0x0(0x8)
	struct FName ParentMeshBoneName; // 0x8(0x8)
	struct FName ParentBoneMappingName; // 0x10(0x8)
	bool bUsingCSSpace; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct AnimNodesPlugin.AnimNode_ReplacePoseFromMesh
// Size: 0x100 (Inherited: 0x10)
struct FAnimNode_ReplacePoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x8)
	bool bUseAttachedParent; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct UDataTable* ReplaceMap; // 0x20(0x8)
	struct TSoftObjectPtr<UAnimSequenceBase> DefaultAnimation; // 0x28(0x28)
	struct FName FilterMontageSlotName; // 0x50(0x8)
	float MaxWeightThreshold; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TMap<struct UAnimSequenceBase*, struct FAnimationMappingRuntime> ReplaceMapInternal; // 0x60(0x50)
	struct UAnimSequenceBase* LoadedDefaultAnimation; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x48]; // 0xB8(0x48)
};

// Object: ScriptStruct AnimNodesPlugin.AnimationMappingRuntime
// Size: 0x10 (Inherited: 0x0)
struct FAnimationMappingRuntime
{
	struct FName MontageSlotName; // 0x0(0x8)
	struct UAnimSequenceBase* Animation; // 0x8(0x8)
};

// Object: ScriptStruct AnimNodesPlugin.AnimationMappingEntry
// Size: 0x60 (Inherited: 0x8)
struct FAnimationMappingEntry : FTableRowBase
{
	struct FName MontageSlotName; // 0x8(0x8)
	struct TSoftObjectPtr<UAnimSequenceBase> SourceAnim; // 0x10(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> TargetAnim; // 0x38(0x28)
};

} // namespace SDK
