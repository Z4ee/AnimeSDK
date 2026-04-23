#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYTITLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17997140)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyTitleAttribute_TypeDefinitionIndex = 543;

	class AssemblyTitleAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_title; // 0x10

		::System::Void _ctor(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYTITLEATTRIBUTE__CTOR_OFFSET))(this, title);
		}
	};
}
