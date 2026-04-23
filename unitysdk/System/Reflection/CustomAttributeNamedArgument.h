#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/CustomAttributeTypedArgument.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x22AB3B0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22AB3C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x13C30)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AB340)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x22AB290)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeNamedArgument_TypeDefinitionIndex = 600;

	struct alignas(8) CustomAttributeNamedArgument
	{
		::System::Reflection::CustomAttributeTypedArgument typedArgument; // 0x10
		::System::Reflection::MemberInfo* memberInfo; // 0x20

		::System::Void _ctor(::System::Reflection::MemberInfo* memberInfo, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT__CTOR_OFFSET))(this, memberInfo, value);
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

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GETHASHCODE_OFFSET))(this);
		}
	};
}
