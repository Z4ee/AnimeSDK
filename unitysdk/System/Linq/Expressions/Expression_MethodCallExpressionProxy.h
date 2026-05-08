#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1A3EC100)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1A3EC130)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1A3EC150)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1A3EC170)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A3EC190)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1A3EC1A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A3EC1D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3EC060)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_MethodCallExpressionProxy_TypeDefinitionIndex = 4418;

	class Expression_MethodCallExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::MethodCallExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::MethodCallExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::MethodCallExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_METHOD_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Object()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_OBJECT_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_METHODCALLEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
