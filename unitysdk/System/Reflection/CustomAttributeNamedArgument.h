#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/CustomAttributeTypedArgument.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x383B1C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x383B1D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x14410)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x2BC6740)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x383B150)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x383B0A0)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeNamedArgument_TypeDefinitionIndex = 599;

	struct alignas(8) CustomAttributeNamedArgument
	{
		::System::Reflection::CustomAttributeTypedArgument typedArgument; // 0x10
		::System::Reflection::MemberInfo* memberInfo; // 0x20

		::System::Void _ctor(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Reflection::MemberInfo* get_MemberInfo()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Reflection::CustomAttributeTypedArgument get_TypedValue()
		{
			return ((::System::Reflection::CustomAttributeTypedArgument(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_TYPEDVALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GETHASHCODE_OFFSET))(this);
		}
	};
}
