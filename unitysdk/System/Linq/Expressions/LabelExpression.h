#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LabelTarget; }

#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E7643C0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1E7643B0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E764390)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E7643A0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E764370)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E764450)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E764300)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LabelExpression_TypeDefinitionIndex = 3227;

	class LabelExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _DefaultValue_k__BackingField; // 0x10
		::System::Linq::Expressions::LabelTarget* _Target_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION__CTOR_OFFSET))(this, a1, a2);
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

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::LabelExpression* Update(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::LabelExpression*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_UPDATE_OFFSET))(this, a1, a2);
		}
	};
}
