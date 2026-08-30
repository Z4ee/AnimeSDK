#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBinding.h"

namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DF4A9A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberAssignment_TypeDefinitionIndex = 3240;

	class MemberAssignment : public ::System::Linq::Expressions::MemberBinding
	{
	public:
		::System::Linq::Expressions::Expression* _expression; // 0x20

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_GET_EXPRESSION_OFFSET))(this);
		}
	};
}
