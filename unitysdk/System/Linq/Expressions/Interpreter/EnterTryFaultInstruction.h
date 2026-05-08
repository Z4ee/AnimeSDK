#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class TryFaultHandler; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x1BDCE200)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1BDCE1B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x1BDCE1F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1BDCE220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_SETTRYHANDLER_OFFSET UNITYSDK_OFFSET(0x1BDCE210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCE1A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterTryFaultInstruction_TypeDefinitionIndex = 4596;

	class EnterTryFaultInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		::System::Linq::Expressions::Interpreter::TryFaultHandler* _tryHandler; // 0x18

		::System::Void _ctor(::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION__CTOR_OFFSET))(this, targetIndex);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ProducedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::TryFaultHandler* get_Handler()
		{
			return ((::System::Linq::Expressions::Interpreter::TryFaultHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_HANDLER_OFFSET))(this);
		}

		::System::Void SetTryHandler(::System::Linq::Expressions::Interpreter::TryFaultHandler* tryHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::TryFaultHandler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_SETTRYHANDLER_OFFSET))(this, tryHandler);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
