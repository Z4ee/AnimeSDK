#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1BF377A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1BF377C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1BF377E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BF37810)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1BF37820)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BF37860)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1BF378A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF37700)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_BlockExpressionProxy_TypeDefinitionIndex = 4403;

	class Expression_BlockExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::BlockExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::BlockExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Expressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_EXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Result()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_RESULT_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Variables()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKEXPRESSIONPROXY_GET_VARIABLES_OFFSET))(this);
		}
	};
}
