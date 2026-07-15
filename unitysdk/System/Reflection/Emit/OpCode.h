#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Emit/OperandType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_REFLECTION_EMIT_OPCODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A1A170)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A1A0E0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3A1A1D0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GET_OPERANDTYPE_OFFSET UNITYSDK_OFFSET(0x3A1A1E0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x38F15A0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AFCBA70)
#define SYSTEM_REFLECTION_EMIT_OPCODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A1A1D0)
#define SYSTEM_REFLECTION_EMIT_OPCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1A0B0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCode_TypeDefinitionIndex = 649;

	struct alignas(1) OpCode
	{
		::System::Byte op1; // 0x10
		::System::Byte op2; // 0x11
		::System::Byte push; // 0x12
		::System::Byte pop; // 0x13
		::System::Byte size; // 0x14
		::System::Byte type; // 0x15
		::System::Byte args; // 0x16
		::System::Byte flow; // 0x17

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_TOSTRING_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GET_SIZE_OFFSET))(this);
		}

		::System::Reflection::Emit::OperandType get_OperandType()
		{
			return ((::System::Reflection::Emit::OperandType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GET_OPERANDTYPE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::Emit::OpCode a1, ::System::Reflection::Emit::OpCode a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::OpCode))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_OP_EQUALITY_OFFSET))(a1, a2);
		}
	};
}
