#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ConditionalExpression.h"

namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_GETFALSE_OFFSET UNITYSDK_OFFSET(0x17E64C80)
#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E32770)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullConditionalExpression_TypeDefinitionIndex = 3201;

	class FullConditionalExpression : public ::System::Linq::Expressions::ConditionalExpression
	{
	public:
		::System::Linq::Expressions::Expression* _false; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Linq::Expressions::Expression* GetFalse()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_GETFALSE_OFFSET))(this);
		}
	};
}
