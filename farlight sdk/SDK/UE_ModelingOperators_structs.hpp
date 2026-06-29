// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum ModelingOperators.ECSGOperation
enum class ECSGOperation : uint8_t
{
	DifferenceAB = 0,
	DifferenceBA = 1,
	Intersect = 2,
	Union = 3,
	ECSGOperation_MAX = 4
};

// Object: Enum ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8_t
{
	UseExistingTopology = 0,
	FaceNormalThreshold = 1,
	FaceGroupID = 2,
	ESplitNormalMethod_MAX = 3
};

// Object: Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8_t
{
	AreaWeighted = 0,
	AngleWeighted = 1,
	AreaAngleWeighting = 2,
	ENormalCalculationMethod_MAX = 3
};

// Object: Enum ModelingOperators.EHoleFillOpFillType
enum class EHoleFillOpFillType : uint8_t
{
	TriangleFan = 0,
	PolygonEarClipping = 1,
	Planar = 2,
	Minimal = 3,
	EHoleFillOpFillType_MAX = 4
};

// Object: Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8_t
{
	Uniform = 0,
	Cotangent = 1,
	MeanValue = 2,
	ERemeshSmoothingType_MAX = 3
};

// Object: Enum ModelingOperators.ERemeshType
enum class ERemeshType : uint8_t
{
	Standard = 0,
	FullPass = 1,
	NormalFlow = 2,
	ERemeshType_MAX = 3
};

// Object: Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8_t
{
	Cube = 0,
	Cylinder = 1,
	Plane = 2,
	EUVProjectionMethod_MAX = 3
};

} // namespace SDK
