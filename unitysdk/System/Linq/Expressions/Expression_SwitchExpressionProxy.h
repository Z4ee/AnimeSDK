#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class SwitchCase; }
namespace System::Linq::Expressions { class SwitchExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1EEF20A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_CASES_OFFSET UNITYSDK_OFFSET(0x1EEF20C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_COMPARISON_OFFSET UNITYSDK_OFFSET(0x1EEF20E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1EEF2100)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_DEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1EEF2120)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1EEF2140)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_SWITCHVALUE_OFFSET UNITYSDK_OFFSET(0x1EEF2150)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EEF2170)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF2000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_SwitchExpressionProxy_TypeDefinitionIndex = 4423;

	class Expression_SwitchExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::SwitchExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::SwitchExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::SwitchExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* get_Cases()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_CASES_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Comparison()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_COMPARISON_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_DefaultBody()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_DEFAULTBODY_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_SwitchValue()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_SWITCHVALUE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
