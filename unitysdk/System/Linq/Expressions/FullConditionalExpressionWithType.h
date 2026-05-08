#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/FullConditionalExpression.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BF37D20)
#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF37CA0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullConditionalExpressionWithType_TypeDefinitionIndex = 4449;

	class FullConditionalExpressionWithType : public ::System::Linq::Expressions::FullConditionalExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE__CTOR_OFFSET))(this, test, ifTrue, ifFalse, type);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_GET_TYPE_OFFSET))(this);
		}
	};
}
