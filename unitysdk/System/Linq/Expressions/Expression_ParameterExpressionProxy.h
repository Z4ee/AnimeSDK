#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F07A9A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F07A9C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x1F07A9E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F07AA10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F07AA30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F07AA40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F07A900)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_ParameterExpressionProxy_TypeDefinitionIndex = 4420;

	class Expression_ParameterExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::ParameterExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::ParameterExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Boolean get_IsByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_ISBYREF_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_NAME_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETEREXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
