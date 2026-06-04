#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AF58E80)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF58E40)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSection_TypeDefinitionIndex = 3071;

	class SettingsSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
