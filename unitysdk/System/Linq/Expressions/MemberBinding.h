#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBindingType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_BINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BE36CF0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1BE36D00)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE36D10)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_VALIDATEASDEFINEDHERE_OFFSET UNITYSDK_OFFSET(0x1BE36D20)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE36CE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberBinding_TypeDefinitionIndex = 4505;

	class MemberBinding : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* _Member_k__BackingField; // 0x10
		::System::Linq::Expressions::MemberBindingType _BindingType_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::MemberBindingType type, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::MemberBindingType, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING__CTOR_OFFSET))(this, type, member);
		}

		::System::Linq::Expressions::MemberBindingType get_BindingType()
		{
			return ((::System::Linq::Expressions::MemberBindingType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_BINDINGTYPE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* get_Member()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_MEMBER_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_TOSTRING_OFFSET))(this);
		}

		::System::Void ValidateAsDefinedHere(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_VALIDATEASDEFINEDHERE_OFFSET))(this, index);
		}
	};
}
