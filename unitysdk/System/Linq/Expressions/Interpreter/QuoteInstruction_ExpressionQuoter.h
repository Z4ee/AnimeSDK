#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionVisitor.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class RuntimeVariablesExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }
namespace System::Runtime::CompilerServices { class IRuntimeVariables; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_GETBOX_OFFSET UNITYSDK_OFFSET(0x1AE1E010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_MERGERUNTIMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AE1E1A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x1AE1D630)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1AE1D830)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AE1E1F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITRUNTIMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AE1DA80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1D590)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int QuoteInstruction_ExpressionQuoter_TypeDefinitionIndex = 4931;

	class QuoteInstruction_ExpressionQuoter : public ::System::Linq::Expressions::ExpressionVisitor
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* _shadowedVars; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* _variables; // 0x18
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _frame; // 0x20

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables, ::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER__CTOR_OFFSET))(this, hoistedVariables, frame);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITCATCHBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitRuntimeVariables(::System::Linq::Expressions::RuntimeVariablesExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::RuntimeVariablesExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITRUNTIMEVARIABLES_OFFSET))(this, node);
		}

		static ::System::Runtime::CompilerServices::IRuntimeVariables* MergeRuntimeVariables(::System::Runtime::CompilerServices::IRuntimeVariables* first, ::System::Runtime::CompilerServices::IRuntimeVariables* second, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::System::Runtime::CompilerServices::IRuntimeVariables*(*)(::System::Runtime::CompilerServices::IRuntimeVariables*, ::System::Runtime::CompilerServices::IRuntimeVariables*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_MERGERUNTIMEVARIABLES_OFFSET))(first, second, indexes);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITPARAMETER_OFFSET))(this, node);
		}

		::System::Runtime::CompilerServices::IStrongBox* GetBox(::System::Linq::Expressions::ParameterExpression* variable)
		{
			return ((::System::Runtime::CompilerServices::IStrongBox*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_GETBOX_OFFSET))(this, variable);
		}
	};
}
