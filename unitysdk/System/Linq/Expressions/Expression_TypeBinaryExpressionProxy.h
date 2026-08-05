#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class TypeBinaryExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1DC42F70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1DC42F90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DC42FB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DC42FD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_TYPEOPERAND_OFFSET UNITYSDK_OFFSET(0x1DC43030)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC42FF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC42ED0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_TypeBinaryExpressionProxy_TypeDefinitionIndex = 4425;

	class Expression_TypeBinaryExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::TypeBinaryExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::TypeBinaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::TypeBinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}

		::System::Type* get_TypeOperand()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEBINARYEXPRESSIONPROXY_GET_TYPEOPERAND_OFFSET))(this);
		}
	};
}
