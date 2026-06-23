#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_CONFIGURATION_SETTINGSGROUPDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D456E60)
#define SYSTEM_CONFIGURATION_SETTINGSGROUPDESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D456E50)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsGroupDescriptionAttribute_TypeDefinitionIndex = 4221;

	class SettingsGroupDescriptionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSGROUPDESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, description);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSGROUPDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}
	};
}
