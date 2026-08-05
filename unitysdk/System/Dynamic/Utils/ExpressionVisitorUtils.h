#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class IArgumentProvider; }
namespace System::Linq::Expressions { class IParameterProvider; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1DC18F90)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITBLOCKEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1DC18730)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DC18A10)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ExpressionVisitorUtils_TypeDefinitionIndex = 5016;

	class ExpressionVisitorUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Expression*>* VisitBlockExpressions(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::BlockExpression* block)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Expression*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITBLOCKEXPRESSIONS_OFFSET))(visitor, block);
		}

		static ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>* VisitParameters(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::IParameterProvider* nodes, ::System::String* callerName)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IParameterProvider*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITPARAMETERS_OFFSET))(visitor, nodes, callerName);
		}

		static ::Il2CppArray<::System::Linq::Expressions::Expression*>* VisitArguments(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::IArgumentProvider* nodes)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Expression*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IArgumentProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITARGUMENTS_OFFSET))(visitor, nodes);
		}
	};
}
