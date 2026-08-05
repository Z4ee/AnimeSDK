#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class NewArrayExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F90AD30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F90AD50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F90AD70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F90AD90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F90ADC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90AC90)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_NewArrayExpressionProxy_TypeDefinitionIndex = 4418;

	class Expression_NewArrayExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::NewArrayExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::NewArrayExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::NewArrayExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Expressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_EXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
