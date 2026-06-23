#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Linq::Expressions { class ListInitExpression; }
namespace System::Linq::Expressions { class NewExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E115170)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1E115180)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x1E1151A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E1151C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E1151E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E1151F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1150D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_ListInitExpressionProxy_TypeDefinitionIndex = 4413;

	class Expression_ListInitExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::ListInitExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::ListInitExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ListInitExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_INITIALIZERS_OFFSET))(this);
		}

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_NEWEXPRESSION_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LISTINITEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
