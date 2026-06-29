// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
	Input = 0,
	Output = 1,
	Invalid = 2,
	ERigVMParameterType_MAX = 3
};

// Object: Enum RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
	Execute_0_Operands = 0,
	Execute_1_Operands = 1,
	Execute_2_Operands = 2,
	Execute_3_Operands = 3,
	Execute_4_Operands = 4,
	Execute_5_Operands = 5,
	Execute_6_Operands = 6,
	Execute_7_Operands = 7,
	Execute_8_Operands = 8,
	Execute_9_Operands = 9,
	Execute_10_Operands = 10,
	Execute_11_Operands = 11,
	Execute_12_Operands = 12,
	Execute_13_Operands = 13,
	Execute_14_Operands = 14,
	Execute_15_Operands = 15,
	Execute_16_Operands = 16,
	Execute_17_Operands = 17,
	Execute_18_Operands = 18,
	Execute_19_Operands = 19,
	Execute_20_Operands = 20,
	Execute_21_Operands = 21,
	Execute_22_Operands = 22,
	Execute_23_Operands = 23,
	Execute_24_Operands = 24,
	Execute_25_Operands = 25,
	Execute_26_Operands = 26,
	Execute_27_Operands = 27,
	Execute_28_Operands = 28,
	Execute_29_Operands = 29,
	Execute_30_Operands = 30,
	Execute_31_Operands = 31,
	Execute_32_Operands = 32,
	Execute_33_Operands = 33,
	Execute_34_Operands = 34,
	Execute_35_Operands = 35,
	Execute_36_Operands = 36,
	Execute_37_Operands = 37,
	Execute_38_Operands = 38,
	Execute_39_Operands = 39,
	Execute_40_Operands = 40,
	Execute_41_Operands = 41,
	Execute_42_Operands = 42,
	Execute_43_Operands = 43,
	Execute_44_Operands = 44,
	Execute_45_Operands = 45,
	Execute_46_Operands = 46,
	Execute_47_Operands = 47,
	Execute_48_Operands = 48,
	Execute_49_Operands = 49,
	Execute_50_Operands = 50,
	Execute_51_Operands = 51,
	Execute_52_Operands = 52,
	Execute_53_Operands = 53,
	Execute_54_Operands = 54,
	Execute_55_Operands = 55,
	Execute_56_Operands = 56,
	Execute_57_Operands = 57,
	Execute_58_Operands = 58,
	Execute_59_Operands = 59,
	Execute_60_Operands = 60,
	Execute_61_Operands = 61,
	Execute_62_Operands = 62,
	Execute_63_Operands = 63,
	Execute_64_Operands = 64,
	Zero = 65,
	BoolFalse = 66,
	BoolTrue = 67,
	Copy = 68,
	Increment = 69,
	Decrement = 70,
	Equals = 71,
	NotEquals = 72,
	JumpAbsolute = 73,
	JumpForward = 74,
	JumpBackward = 75,
	JumpAbsoluteIf = 76,
	JumpForwardIf = 77,
	JumpBackwardIf = 78,
	ChangeType = 79,
	Exit = 80,
	Invalid = 81,
	ERigVMOpCode_MAX = 82
};

// Object: Enum RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
	Plain = 0,
	String = 1,
	Name = 2,
	Struct = 3,
	Invalid = 4,
	ERigVMRegisterType_MAX = 5
};

// Object: Enum RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
	Work = 0,
	Literal = 1,
	Invalid = 2,
	ERigVMMemoryType_MAX = 3
};

// Object: ScriptStruct RigVM.RigVMExecuteContext
// Size: 0x10 (Inherited: 0x0)
struct FRigVMExecuteContext
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct RigVM.RigVMStruct
// Size: 0x8 (Inherited: 0x0)
struct FRigVMStruct
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct RigVM.RigVMParameter
// Size: 0x30 (Inherited: 0x0)
struct FRigVMParameter
{
	enum class ERigVMParameterType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName Name; // 0x4(0x8)
	int32_t RegisterIndex; // 0xC(0x4)
	struct FString CPPType; // 0x10(0x10)
	struct UScriptStruct* ScriptStruct; // 0x20(0x8)
	struct FName ScriptStructPath; // 0x28(0x8)
};

// Object: ScriptStruct RigVM.RigVMByteCode
// Size: 0x10 (Inherited: 0x0)
struct FRigVMByteCode
{
	struct TArray<uint8_t> ByteCode; // 0x0(0x10)
};

// Object: ScriptStruct RigVM.RigVMInstructionArray
// Size: 0x10 (Inherited: 0x0)
struct FRigVMInstructionArray
{
	struct TArray<struct FRigVMInstruction> Instructions; // 0x0(0x10)
};

// Object: ScriptStruct RigVM.RigVMInstruction
// Size: 0x10 (Inherited: 0x0)
struct FRigVMInstruction
{
	enum class ERigVMOpCode OpCode; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t ByteCodeIndex; // 0x8(0x8)
};

// Object: ScriptStruct RigVM.RigVMMemoryContainer
// Size: 0xA0 (Inherited: 0x0)
struct FRigVMMemoryContainer
{
	bool bUseNameMap; // 0x0(0x1)
	enum class ERigVMMemoryType MemoryType; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<struct FRigVMRegister> Registers; // 0x8(0x10)
	struct TArray<struct FRigVMRegisterOffset> RegisterOffsets; // 0x18(0x10)
	struct TArray<uint8_t> Data; // 0x28(0x10)
	struct TArray<struct UScriptStruct*> ScriptStructs; // 0x38(0x10)
	struct TMap<struct FName, int32_t> NameMap; // 0x48(0x50)
	bool bEncounteredErrorDuringLoad; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
};

// Object: ScriptStruct RigVM.RigVMRegisterOffset
// Size: 0x38 (Inherited: 0x0)
struct FRigVMRegisterOffset
{
	struct TArray<int32_t> Segments; // 0x0(0x10)
	enum class ERigVMRegisterType Type; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FName CPPType; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UScriptStruct* ScriptStruct; // 0x20(0x8)
	struct FName ScriptStructPath; // 0x28(0x8)
	uint16_t ElementSize; // 0x30(0x2)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
};

// Object: ScriptStruct RigVM.RigVMRegister
// Size: 0x24 (Inherited: 0x0)
struct FRigVMRegister
{
	enum class ERigVMRegisterType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	uint32_t ByteIndex; // 0x4(0x4)
	uint16_t ElementSize; // 0x8(0x2)
	uint16_t ElementCount; // 0xA(0x2)
	uint16_t SliceIndex; // 0xC(0x2)
	uint16_t SliceCount; // 0xE(0x2)
	uint8_t AlignmentBytes; // 0x10(0x1)
	uint8_t Pad_0x11[0x1]; // 0x11(0x1)
	uint16_t TrailingBytes; // 0x12(0x2)
	struct FName Name; // 0x14(0x8)
	int32_t ScriptStructIndex; // 0x1C(0x4)
	bool bIsArray; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct RigVM.RigVMOperand
// Size: 0x6 (Inherited: 0x0)
struct FRigVMOperand
{
	enum class ERigVMMemoryType MemoryType; // 0x0(0x1)
	uint8_t Pad_0x1[0x1]; // 0x1(0x1)
	uint16_t RegisterIndex; // 0x2(0x2)
	uint16_t RegisterOffset; // 0x4(0x2)
};

// Object: ScriptStruct RigVM.RigVMStatistics
// Size: 0x2C (Inherited: 0x0)
struct FRigVMStatistics
{
	uint32_t BytesForCDO; // 0x0(0x4)
	uint32_t BytesPerInstance; // 0x4(0x4)
	struct FRigVMMemoryStatistics LiteralMemory; // 0x8(0xC)
	struct FRigVMMemoryStatistics WorkMemory; // 0x14(0xC)
	uint32_t BytesForCaching; // 0x20(0x4)
	struct FRigVMByteCodeStatistics ByteCode; // 0x24(0x8)
};

// Object: ScriptStruct RigVM.RigVMByteCodeStatistics
// Size: 0x8 (Inherited: 0x0)
struct FRigVMByteCodeStatistics
{
	uint32_t InstructionCount; // 0x0(0x4)
	uint32_t DataBytes; // 0x4(0x4)
};

// Object: ScriptStruct RigVM.RigVMMemoryStatistics
// Size: 0xC (Inherited: 0x0)
struct FRigVMMemoryStatistics
{
	uint32_t RegisterCount; // 0x0(0x4)
	uint32_t DataBytes; // 0x4(0x4)
	uint32_t TotalBytes; // 0x8(0x4)
};

} // namespace SDK
