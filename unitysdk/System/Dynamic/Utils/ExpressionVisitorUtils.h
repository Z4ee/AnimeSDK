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

#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E6C8300)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITBLOCKEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1E6C7980)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E6C7E20)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ExpressionVisitorUtils_TypeDefinitionIndex = 3688;

	class ExpressionVisitorUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Expression*>* VisitBlockExpressions(::System::Linq::Expressions::ExpressionVisitor* a1, ::System::Linq::Expressions::BlockExpression* a2)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Expression*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITBLOCKEXPRESSIONS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>* VisitParameters(::System::Linq::Expressions::ExpressionVisitor* a1, ::System::Linq::Expressions::IParameterProvider* a2, ::System::String* a3)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IParameterProvider*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITPARAMETERS_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Linq::Expressions::Expression*>* VisitArguments(::System::Linq::Expressions::ExpressionVisitor* a1, ::System::Linq::Expressions::IArgumentProvider* a2)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Expression*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IArgumentProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITARGUMENTS_OFFSET))(a1, a2);
		}
	};
}
