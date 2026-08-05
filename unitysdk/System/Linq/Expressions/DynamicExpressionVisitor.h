#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionVisitor.h"

namespace System::Linq::Expressions { class DynamicExpression; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONVISITOR_VISITDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1F90A6F0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90A740)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpressionVisitor_TypeDefinitionIndex = 4469;

	class DynamicExpressionVisitor : public ::System::Linq::Expressions::ExpressionVisitor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONVISITOR__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* VisitDynamic(::System::Linq::Expressions::DynamicExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::DynamicExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONVISITOR_VISITDYNAMIC_OFFSET))(this, node);
		}
	};
}
