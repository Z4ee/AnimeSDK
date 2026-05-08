#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class MemberBinding; }
namespace System::Linq::Expressions { class MemberInitExpression; }
namespace System::Linq::Expressions { class NewExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1BF37A80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1BF37AA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1BF37AB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1BF37AD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BF37AF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BF37B00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF379E0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_MemberInitExpressionProxy_TypeDefinitionIndex = 4417;

	class Expression_MemberInitExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::MemberInitExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::MemberInitExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::MemberInitExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_BINDINGS_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_NEWEXPRESSION_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MEMBERINITEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
