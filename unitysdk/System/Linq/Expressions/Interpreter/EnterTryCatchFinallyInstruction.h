#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class TryCatchFinallyHandler; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYCATCH_OFFSET UNITYSDK_OFFSET(0x19EFDD40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYFINALLY_OFFSET UNITYSDK_OFFSET(0x19EFDD00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19EFE540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x19EFDCE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x19EFDD80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_SETTRYHANDLER_OFFSET UNITYSDK_OFFSET(0x19EFDCD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19EFE580)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFDCF0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterTryCatchFinallyInstruction_TypeDefinitionIndex = 3314;

	class EnterTryCatchFinallyInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* _tryHandler; // 0x18
		::System::Boolean _hasFinally; // 0x20

		::System::Void _ctor(::System::Int32 targetIndex, ::System::Boolean hasFinally)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION__CTOR_OFFSET))(this, targetIndex, hasFinally);
		}

		::System::Void SetTryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* tryHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_SETTRYHANDLER_OFFSET))(this, tryHandler);
		}

		::System::Int32 get_ProducedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* CreateTryFinally(::System::Int32 labelIndex)
		{
			return ((::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYFINALLY_OFFSET))(labelIndex);
		}

		static ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* CreateTryCatch()
		{
			return ((::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYCATCH_OFFSET))();
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
