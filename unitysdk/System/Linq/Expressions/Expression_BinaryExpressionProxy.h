#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1C1C4B80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_CONVERSION_OFFSET UNITYSDK_OFFSET(0x1C1C4BB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1C1C4BE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x1C1C4C20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x1C1C4C00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1C1C4CD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1C1C4CF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C1C4D20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1C1C4D50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C1C4D70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C4AE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_BinaryExpressionProxy_TypeDefinitionIndex = 4402;

	class Expression_BinaryExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::BinaryExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::BinaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::LambdaExpression* get_Conversion()
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_CONVERSION_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Boolean get_IsLifted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_ISLIFTED_OFFSET))(this);
		}

		::System::Boolean get_IsLiftedToNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_ISLIFTEDTONULL_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Left()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_LEFT_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_METHOD_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Right()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_RIGHT_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
