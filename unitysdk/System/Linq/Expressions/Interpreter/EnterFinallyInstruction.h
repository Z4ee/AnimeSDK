#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1956CAB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x1956CAA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1956CA50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1956CA90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1956CBA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1956CC20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1956CA40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterFinallyInstruction_TypeDefinitionIndex = 3321;

	class EnterFinallyInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>**)Il2CppClass::FromTypeDefinitionIndex(EnterFinallyInstruction_TypeDefinitionIndex)->GetStaticField(0x32FD0);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ConsumedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* Create(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_CREATE_OFFSET))(a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
