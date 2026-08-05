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

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F90A7F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_CONVERSION_OFFSET UNITYSDK_OFFSET(0x1F90A820)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F90A850)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x1F90A890)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x1F90A870)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1F90A940)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1F90A960)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F90A990)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1F90A9C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F90A9E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BINARYEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90A750)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_BinaryExpressionProxy_TypeDefinitionIndex = 4401;

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
