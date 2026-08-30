#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionVisitor.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_POPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E74B450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_PUSHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E74AEB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x1E74AD90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1E74B9C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E74ACD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E749B90)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightCompiler_QuoteVisitor_TypeDefinitionIndex = 3485;

	class LightCompiler_QuoteVisitor : public ::System::Linq::Expressions::ExpressionVisitor
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Int32>* _definedParameters; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>* _hoistedParameters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITPARAMETER_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITBLOCK_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* a1)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITCATCHBLOCK_OFFSET))(this, a1);
		}

		::System::Void PushParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_PUSHPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void PopParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_POPPARAMETERS_OFFSET))(this, a1);
		}
	};
}
