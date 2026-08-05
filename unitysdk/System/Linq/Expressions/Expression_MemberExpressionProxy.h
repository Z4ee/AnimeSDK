#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class MemberExpression; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F757E50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F757E70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1F757E90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1F757EB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F757EE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F757EF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F757DB0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_MemberExpressionProxy_TypeDefinitionIndex = 4415;

	class Expression_MemberExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::MemberExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::MemberExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::MemberExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* get_Member()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_MEMBER_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBEREXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
