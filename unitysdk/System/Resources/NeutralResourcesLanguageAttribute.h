#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Resources/UltimateResourceFallbackLocation.h"

namespace System { class String; }

#define SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E122E10)

namespace System::Resources
{
	inline static constexpr unsigned int NeutralResourcesLanguageAttribute_TypeDefinitionIndex = 508;

	class NeutralResourcesLanguageAttribute : public ::System::Attribute
	{
	public:
		::System::String* _culture; // 0x10
		::System::Resources::UltimateResourceFallbackLocation _fallbackLoc; // 0x18

		::System::Void _ctor(::System::String* cultureName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE__CTOR_OFFSET))(this, cultureName);
		}
	};
}
