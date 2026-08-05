#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class DefaultExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F688E70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F688E90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F688EB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F688EC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F688DD0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_DefaultExpressionProxy_TypeDefinitionIndex = 4407;

	class Expression_DefaultExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::DefaultExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::DefaultExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::DefaultExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DEFAULTEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
