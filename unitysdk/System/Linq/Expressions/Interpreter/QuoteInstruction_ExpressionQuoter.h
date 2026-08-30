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
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_GETBOX_OFFSET UNITYSDK_OFFSET(0x1DF44380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x1DF43A40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1DF43E50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x1DF44170)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF439A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int QuoteInstruction_ExpressionQuoter_TypeDefinitionIndex = 3659;

	class QuoteInstruction_ExpressionQuoter : public ::System::Linq::Expressions::ExpressionVisitor
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* _shadowedVars; // 0x10
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _frame; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* _variables; // 0x20

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* a1, ::System::Linq::Expressions::Interpreter::InterpretedFrame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITBLOCK_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* a1)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITCATCHBLOCK_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_VISITPARAMETER_OFFSET))(this, a1);
		}

		::System::Runtime::CompilerServices::IStrongBox* GetBox(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Runtime::CompilerServices::IStrongBox*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_EXPRESSIONQUOTER_GETBOX_OFFSET))(this, a1);
		}
	};
}
