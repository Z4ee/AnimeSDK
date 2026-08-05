#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ConditionalExpression.h"

namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_GETFALSE_OFFSET UNITYSDK_OFFSET(0x1E5892D0)
#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E589260)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullConditionalExpression_TypeDefinitionIndex = 4447;

	class FullConditionalExpression : public ::System::Linq::Expressions::ConditionalExpression
	{
	public:
		::System::Linq::Expressions::Expression* _false; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION__CTOR_OFFSET))(this, test, ifTrue, ifFalse);
		}

		::System::Linq::Expressions::Expression* GetFalse()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_GETFALSE_OFFSET))(this);
		}
	};
}
