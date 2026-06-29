// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum MDARuntime.EMDABlendMode
enum class EMDABlendMode : uint8_t
{
	Add = 0,
	Subtract = 1,
	CoDAdd = 2,
	EMDABlendMode_MAX = 3
};

// Object: ScriptStruct MDARuntime.AnimNode_MDA
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_MDA : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> Poses; // 0x20(0x10)
	struct TArray<float> BlendWeights; // 0x30(0x10)
	struct TArray<enum class EMDABlendMode> BlendModes; // 0x40(0x10)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x50(0x30)
	uint8_t CurveBlendOption; // 0x80(0x1)
	uint8_t Pad_0x81[0x17]; // 0x81(0x17)
};

} // namespace SDK
