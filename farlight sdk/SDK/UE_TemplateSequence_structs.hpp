// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// Size: 0xC (Inherited: 0x0)
struct FTemplateSequenceBindingOverrideData
{
	struct TWeakObjectPtr<struct UObject> Object; // 0x0(0x8)
	bool bOverridesDefault; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// Size: 0x20 (Inherited: 0x8)
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData
{
	struct FMovieSceneEvaluationOperand Operand; // 0x8(0x14)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate
{
	struct FFrameNumber SectionStartTime; // 0x14(0x4)
	struct FGuid OuterBindingId; // 0x18(0x10)
	struct FMovieSceneEvaluationOperand InnerOperand; // 0x28(0x14)
};

} // namespace SDK
