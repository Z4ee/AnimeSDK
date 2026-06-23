#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_REFLECTION_EMIT_OPCODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B7860)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B77D0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8B78C0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8B78D0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE4B0E0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE4B0F0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B78C0)
#define SYSTEM_REFLECTION_EMIT_OPCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8B77A0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCode_TypeDefinitionIndex = 621;

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

		::System::Void _ctor(::System::Int32 p, ::System::Int32 q)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE__CTOR_OFFSET))(this, p, q);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_EQUALS_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_TOSTRING_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GET_NAME_OFFSET))(this);
		}

		::System::Int16 get_Value()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GET_VALUE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::Emit::OpCode a, ::System::Reflection::Emit::OpCode b)
		{
			return ((::System::Boolean(*)(::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::OpCode))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::Emit::OpCode a, ::System::Reflection::Emit::OpCode b)
		{
			return ((::System::Boolean(*)(::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::OpCode))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_OP_INEQUALITY_OFFSET))(a, b);
		}
	};
}
