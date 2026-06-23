#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/GotoExpressionKind.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class GotoExpression; }
namespace System::Linq::Expressions { class LabelTarget; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E323450)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1E323470)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_KIND_OFFSET UNITYSDK_OFFSET(0x1E323490)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E3234B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E3234C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E3234E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E323500)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3233B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_GotoExpressionProxy_TypeDefinitionIndex = 4408;

	class Expression_GotoExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::GotoExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::GotoExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::GotoExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::GotoExpressionKind get_Kind()
		{
			return ((::System::Linq::Expressions::GotoExpressionKind(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_KIND_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_Target()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_TARGET_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Value()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTOEXPRESSIONPROXY_GET_VALUE_OFFSET))(this);
		}
	};
}
