#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x19ECC7B0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GETFALSE_OFFSET UNITYSDK_OFFSET(0x19ECC750)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFFALSE_OFFSET UNITYSDK_OFFSET(0x19ECC740)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFTRUE_OFFSET UNITYSDK_OFFSET(0x19ECC730)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19ECC6D0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TEST_OFFSET UNITYSDK_OFFSET(0x19ECC720)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19ECC6E0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x19ECC390)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x19ECC7E0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECC320)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConditionalExpression_TypeDefinitionIndex = 3195;

	class ConditionalExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Test_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _IfTrue_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION__CTOR_OFFSET))(this, test, ifTrue);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Make(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_MAKE_OFFSET))(test, ifTrue, ifFalse, type);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Test()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TEST_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_IfTrue()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFTRUE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_IfFalse()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFFALSE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetFalse()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GETFALSE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::ConditionalExpression* Update(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_UPDATE_OFFSET))(this, test, ifTrue, ifFalse);
		}
	};
}
