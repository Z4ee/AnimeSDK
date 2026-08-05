#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class IndexExpression; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F334020)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1F334070)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1F334090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_INDEXER_OFFSET UNITYSDK_OFFSET(0x1F3340B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F3340D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1F3340E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F334100)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F333F80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_IndexExpressionProxy_TypeDefinitionIndex = 4409;

	class Expression_IndexExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::IndexExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::IndexExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::IndexExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* get_Indexer()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_INDEXER_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Object()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_OBJECT_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INDEXEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
