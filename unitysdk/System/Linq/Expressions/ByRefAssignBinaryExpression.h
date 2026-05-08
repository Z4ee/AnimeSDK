#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/AssignBinaryExpression.h"

namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_BYREFASSIGNBINARYEXPRESSION_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x1BDCB5C0)
#define SYSTEM_LINQ_EXPRESSIONS_BYREFASSIGNBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCB550)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ByRefAssignBinaryExpression_TypeDefinitionIndex = 4396;

	class ByRefAssignBinaryExpression : public ::System::Linq::Expressions::AssignBinaryExpression
	{
	public:
		::System::Void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BYREFASSIGNBINARYEXPRESSION__CTOR_OFFSET))(this, left, right);
		}

		::System::Boolean get_IsByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BYREFASSIGNBINARYEXPRESSION_GET_ISBYREF_OFFSET))(this);
		}
	};
}
