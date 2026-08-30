#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DF51830)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPEOPERAND_OFFSET UNITYSDK_OFFSET(0x1DF51840)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypeBinaryExpression_TypeDefinitionIndex = 3279;

	class TypeBinaryExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Type* _TypeOperand_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x18

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Type* get_TypeOperand()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPEOPERAND_OFFSET))(this);
		}
	};
}
