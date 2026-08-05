#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ConstantExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F51E2C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F51E2E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F51E300)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F51E310)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F51E350)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F51E220)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_ConstantExpressionProxy_TypeDefinitionIndex = 4405;

	class Expression_ConstantExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::ConstantExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::ConstantExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ConstantExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANTEXPRESSIONPROXY_GET_VALUE_OFFSET))(this);
		}
	};
}
