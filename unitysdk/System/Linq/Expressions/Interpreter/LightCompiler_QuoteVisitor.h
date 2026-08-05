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

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_POPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F90D2A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_PUSHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F90CE50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x1F90CDF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1F90D650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F90CD30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90D830)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightCompiler_QuoteVisitor_TypeDefinitionIndex = 4755;

	class LightCompiler_QuoteVisitor : public ::System::Linq::Expressions::ExpressionVisitor
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>* _hoistedParameters; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Int32>* _definedParameters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITPARAMETER_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_VISITCATCHBLOCK_OFFSET))(this, node);
		}

		::System::Void PushParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_PUSHPARAMETERS_OFFSET))(this, parameters);
		}

		::System::Void PopParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_QUOTEVISITOR_POPPARAMETERS_OFFSET))(this, parameters);
		}
	};
}
