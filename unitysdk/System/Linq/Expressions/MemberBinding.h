#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBindingType.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_BINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1ADB4A00)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1ADB4A10)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberBinding_TypeDefinitionIndex = 3230;

	class MemberBinding : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* _Member_k__BackingField; // 0x10
		::System::Linq::Expressions::MemberBindingType _BindingType_k__BackingField; // 0x18

		::System::Linq::Expressions::MemberBindingType get_BindingType()
		{
			return ((::System::Linq::Expressions::MemberBindingType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_BINDINGTYPE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* get_Member()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_MEMBER_OFFSET))(this);
		}
	};
}
