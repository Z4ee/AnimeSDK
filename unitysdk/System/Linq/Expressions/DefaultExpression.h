#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1DAE2100)
#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DAE20F0)
#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DAE20E0)
#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAE2130)
#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2080)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DefaultExpression_TypeDefinitionIndex = 4456;

	class DefaultExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}
	};
}
