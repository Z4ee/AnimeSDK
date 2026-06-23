#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LabelTarget; }

#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1C7940D0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1C7940C0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C7940A0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1C7940B0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C78EF20)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C794100)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C794180)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C77B190)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LabelExpression_TypeDefinitionIndex = 4489;

	class LabelExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _DefaultValue_k__BackingField; // 0x10
		::System::Linq::Expressions::LabelTarget* _Target_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::LabelTarget* label, ::System::Linq::Expressions::Expression* defaultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION__CTOR_OFFSET))(this, label, defaultValue);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_Target()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TARGET_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_DefaultValue()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::LabelExpression* Update(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* defaultValue)
		{
			return ((::System::Linq::Expressions::LabelExpression*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_UPDATE_OFFSET))(this, target, defaultValue);
		}
	};
}
