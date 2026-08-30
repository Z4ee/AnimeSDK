#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1DF4B0F0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1DF4B1D0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DF4AFB0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF4B220)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1DF4B060)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DF4AFC0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1DF4B070)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF4AFD0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1DF4B180)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4AF50)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression_TypeDefinitionIndex = 3249;

	class MethodCallExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Reflection::MethodInfo* _Method_k__BackingField; // 0x10

		::System::Void _ctor(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION__CTOR_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* GetInstance()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETINSTANCE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_METHOD_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Object()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_OBJECT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_REWRITE_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETARGUMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}
	};
}
