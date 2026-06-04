#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD7B960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AD7B8F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AD7B910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AD7B900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7B950)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GreaterThanOrEqualInstruction_TypeDefinitionIndex = 3400;

	class GreaterThanOrEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A930);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A938);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A940);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A948);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A950);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A958);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A960);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A968);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A970);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A978);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A980);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullChar()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A988);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSingle()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A990);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A998);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9A0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9A8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9B0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullDouble()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9B8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9C0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9C8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9D0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x2A9D8);
		}
		::System::Object* _nullValue; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_CREATE_OFFSET))(a1, a2);
		}
	};
}
