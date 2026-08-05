#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ConditionalExpression; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F7C16B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F7C16D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_IFFALSE_OFFSET UNITYSDK_OFFSET(0x1F7C16F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_IFTRUE_OFFSET UNITYSDK_OFFSET(0x1F7C1720)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F7C1740)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_TEST_OFFSET UNITYSDK_OFFSET(0x1F7C1750)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F7C1770)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C1610)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_ConditionalExpressionProxy_TypeDefinitionIndex = 4404;

	class Expression_ConditionalExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::ConditionalExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::ConditionalExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ConditionalExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_IfFalse()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_IFFALSE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_IfTrue()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_IFTRUE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Test()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_TEST_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITIONALEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
