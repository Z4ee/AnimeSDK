#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class NewExpression; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E589140)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E589190)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E5891B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1E5891D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1E5891F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E589210)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E589220)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5890A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_NewExpressionProxy_TypeDefinitionIndex = 4419;

	class Expression_NewExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::NewExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::NewExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::NewExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* get_Constructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_CONSTRUCTOR_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>* get_Members()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_MEMBERS_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
