#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/FullConditionalExpression.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17E64C90)
#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E326F0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullConditionalExpressionWithType_TypeDefinitionIndex = 3202;

	class FullConditionalExpressionWithType : public ::System::Linq::Expressions::FullConditionalExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_GET_TYPE_OFFSET))(this);
		}
	};
}
