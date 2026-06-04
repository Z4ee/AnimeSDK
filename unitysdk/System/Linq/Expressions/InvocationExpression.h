#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1ADB41D0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1ADB4130)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ADB4180)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1ADB4120)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1ADB4110)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ADB4100)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1ADB4200)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB4090)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression_TypeDefinitionIndex = 3213;

	class InvocationExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETARGUMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}
