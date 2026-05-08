#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class InvocationExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BFE6D20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1BFE6D50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1BFE6D70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1BFE6D90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BFE6DB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BFE6DC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE6C80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_InvocationExpressionProxy_TypeDefinitionIndex = 4411;

	class Expression_InvocationExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::InvocationExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::InvocationExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::InvocationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOCATIONEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
