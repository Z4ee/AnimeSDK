#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class TryExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1E70B3C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E70B3E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1E70B400)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_FAULT_OFFSET UNITYSDK_OFFSET(0x1E70B420)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_FINALLY_OFFSET UNITYSDK_OFFSET(0x1E70B440)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0x1E70B460)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E70B480)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E70B490)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E70B320)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_TryExpressionProxy_TypeDefinitionIndex = 4424;

	class Expression_TryExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::TryExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::TryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::TryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_BODY_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Fault()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_FAULT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Finally()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_FINALLY_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* get_Handlers()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_HANDLERS_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
