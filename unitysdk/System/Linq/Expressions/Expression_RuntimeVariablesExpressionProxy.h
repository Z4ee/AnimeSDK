#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class RuntimeVariablesExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E258090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1E2580B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E2580D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E2580E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1E258120)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E257FF0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_RuntimeVariablesExpressionProxy_TypeDefinitionIndex = 4421;

	class Expression_RuntimeVariablesExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::RuntimeVariablesExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::RuntimeVariablesExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::RuntimeVariablesExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Variables()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RUNTIMEVARIABLESEXPRESSIONPROXY_GET_VARIABLES_OFFSET))(this);
		}
	};
}
