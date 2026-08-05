#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1E58ABB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E58AB40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E58AB60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E58AB50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E58ABA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanOrEqualInstruction_TypeDefinitionIndex = 4734;

	class LessThanOrEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x41E0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x41E8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x41F0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x41F8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSingle()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4200);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4208);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4210);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4218);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4220);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4228);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullChar()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4230);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4238);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4240);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4248);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4250);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4258);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullDouble()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4260);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4268);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4270);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4278);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4280);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x4288);
		}
		::System::Object* _nullValue; // 0x10

		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET))(type, liftedToNull);
		}
	};
}
