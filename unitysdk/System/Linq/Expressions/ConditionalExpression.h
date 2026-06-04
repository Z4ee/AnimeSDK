#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1AD43050)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GETFALSE_OFFSET UNITYSDK_OFFSET(0x1AD42FF0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFFALSE_OFFSET UNITYSDK_OFFSET(0x1AD42FE0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFTRUE_OFFSET UNITYSDK_OFFSET(0x1AD42FD0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AD42F70)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TEST_OFFSET UNITYSDK_OFFSET(0x1AD42FC0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AD42F80)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x1AD42C40)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD43080)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD42BD0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConditionalExpression_TypeDefinitionIndex = 3196;

	class ConditionalExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _IfTrue_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Test_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Make(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_MAKE_OFFSET))(a1, a2, a3, a4);
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

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::ConditionalExpression* Update(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_UPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
