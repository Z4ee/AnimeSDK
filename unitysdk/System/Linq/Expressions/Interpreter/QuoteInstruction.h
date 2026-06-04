#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADAE320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADAE310)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1ADAE330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAE300)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int QuoteInstruction_TypeDefinitionIndex = 3646;

	class QuoteInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* _hoistedVariables; // 0x10
		::System::Linq::Expressions::Expression* _operand; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
