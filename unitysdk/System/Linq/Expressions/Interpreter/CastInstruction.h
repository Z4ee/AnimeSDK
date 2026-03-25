#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x184BDF80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184BDF20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184BDF40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184BDF30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184BE5E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastInstruction_TypeDefinitionIndex = 3636;

	class CastInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF3F0);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_DateTime()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF3F8);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF400);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF408);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_String()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF410);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF418);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF420);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Decimal()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF428);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF430);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF438);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF440);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF448);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF450);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF458);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0xF460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* t)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET))(t);
		}
	};
}
