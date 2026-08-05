#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/GotoExpressionKind.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LabelTarget; }

#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1DC432C0)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_KIND_OFFSET UNITYSDK_OFFSET(0x1DC432B0)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DC43280)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1DC432A0)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC43270)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DC43290)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DC432F0)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC43380)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2AE50)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int GotoExpression_TypeDefinitionIndex = 4476;

	class GotoExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Value_k__BackingField; // 0x18
		::System::Linq::Expressions::LabelTarget* _Target_k__BackingField; // 0x20
		::System::Linq::Expressions::GotoExpressionKind _Kind_k__BackingField; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::GotoExpressionKind kind, ::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::GotoExpressionKind, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION__CTOR_OFFSET))(this, kind, target, value, type);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Value()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_VALUE_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_Target()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TARGET_OFFSET))(this);
		}

		::System::Linq::Expressions::GotoExpressionKind get_Kind()
		{
			return ((::System::Linq::Expressions::GotoExpressionKind(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_KIND_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::GotoExpression* Update(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value)
		{
			return ((::System::Linq::Expressions::GotoExpression*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_UPDATE_OFFSET))(this, target, value);
		}
	};
}
