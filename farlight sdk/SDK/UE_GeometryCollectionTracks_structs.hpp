// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneGeometryCollectionParams
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FSoftObjectPath GeometryCollectionCache; // 0x8(0x18)
	struct FFrameNumber StartFrameOffset; // 0x20(0x4)
	struct FFrameNumber EndFrameOffset; // 0x24(0x4)
	float PlayRate; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// Size: 0x50 (Inherited: 0x18)
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x18(0x38)
};

// Object: ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// Size: 0x38 (Inherited: 0x30)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{
	struct FFrameNumber SectionStartTime; // 0x2C(0x4)
	struct FFrameNumber SectionEndTime; // 0x30(0x4)
};

} // namespace SDK
