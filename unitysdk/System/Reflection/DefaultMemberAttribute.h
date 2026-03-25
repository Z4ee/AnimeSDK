#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1636CBD0)
#define SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1636CBC0)

namespace System::Reflection
{
	inline static constexpr unsigned int DefaultMemberAttribute_TypeDefinitionIndex = 557;

	class DefaultMemberAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_memberName; // 0x10

		::System::Void _ctor(::System::String* memberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE__CTOR_OFFSET))(this, memberName);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}
	};
}
