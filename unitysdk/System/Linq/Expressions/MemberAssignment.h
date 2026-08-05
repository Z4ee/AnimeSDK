#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBinding.h"

namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E5A0570)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E5A0580)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_VALIDATEASDEFINEDHERE_OFFSET UNITYSDK_OFFSET(0x1E5A05F0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A0600)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0560)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberAssignment_TypeDefinitionIndex = 4502;

	class MemberAssignment : public ::System::Linq::Expressions::MemberBinding
	{
	public:
		::System::Linq::Expressions::Expression* _expression; // 0x20

		::System::Void _ctor(::System::Reflection::MemberInfo* member, ::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT__CTOR_OFFSET))(this, member, expression);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT__CTOR_1_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Linq::Expressions::MemberAssignment* Update(::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Linq::Expressions::MemberAssignment*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_UPDATE_OFFSET))(this, expression);
		}

		::System::Void ValidateAsDefinedHere(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_VALIDATEASDEFINEDHERE_OFFSET))(this, index);
		}
	};
}
