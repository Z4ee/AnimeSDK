#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x19EFDA80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x19EFDA70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19EFDA20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x19EFDA60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x19EFDB90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EFDC80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFDA10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterFinallyInstruction_TypeDefinitionIndex = 3316;

	class EnterFinallyInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>**)Il2CppClass::FromTypeDefinitionIndex(EnterFinallyInstruction_TypeDefinitionIndex)->GetStaticField(0x12880);
		}

		::System::Void _ctor(::System::Int32 labelIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION__CTOR_OFFSET))(this, labelIndex);
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

		static ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* Create(::System::Int32 labelIndex)
		{
			return ((::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_CREATE_OFFSET))(labelIndex);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
