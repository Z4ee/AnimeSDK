#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATEGETVALUE_OFFSET UNITYSDK_OFFSET(0x1E3099A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1E3096A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E309630)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E309650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E309640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E309690)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullableMethodCallInstruction_TypeDefinitionIndex = 4914;

	class NullableMethodCallInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_equals()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)Il2CppClass::FromTypeDefinitionIndex(NullableMethodCallInstruction_TypeDefinitionIndex)->GetStaticField(0x4110);
		}
		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_hasValue()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)Il2CppClass::FromTypeDefinitionIndex(NullableMethodCallInstruction_TypeDefinitionIndex)->GetStaticField(0x4118);
		}
		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_value()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)Il2CppClass::FromTypeDefinitionIndex(NullableMethodCallInstruction_TypeDefinitionIndex)->GetStaticField(0x4120);
		}
		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_toString()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)Il2CppClass::FromTypeDefinitionIndex(NullableMethodCallInstruction_TypeDefinitionIndex)->GetStaticField(0x4128);
		}
		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_getHashCode()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)Il2CppClass::FromTypeDefinitionIndex(NullableMethodCallInstruction_TypeDefinitionIndex)->GetStaticField(0x4130);
		}
		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_getValueOrDefault1()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)Il2CppClass::FromTypeDefinitionIndex(NullableMethodCallInstruction_TypeDefinitionIndex)->GetStaticField(0x4138);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::String* method, ::System::Int32 argCount, ::System::Reflection::MethodInfo* mi)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::String*, ::System::Int32, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATE_OFFSET))(method, argCount, mi);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* CreateGetValue()
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATEGETVALUE_OFFSET))();
		}
	};
}
