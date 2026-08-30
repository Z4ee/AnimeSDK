#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Resources/UltimateResourceFallbackLocation.h"

namespace System { class String; }

#define SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x1C446BB0)
#define SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1C446BC0)
#define SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C446B40)

namespace System::Resources
{
	inline static constexpr unsigned int NeutralResourcesLanguageAttribute_TypeDefinitionIndex = 523;

	class NeutralResourcesLanguageAttribute : public ::System::Attribute
	{
	public:
		::System::String* _culture; // 0x10
		::System::Resources::UltimateResourceFallbackLocation _fallbackLoc; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_CultureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_CULTURENAME_OFFSET))(this);
		}

		::System::Resources::UltimateResourceFallbackLocation get_Location()
		{
			return ((::System::Resources::UltimateResourceFallbackLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_LOCATION_OFFSET))(this);
		}
	};
}
