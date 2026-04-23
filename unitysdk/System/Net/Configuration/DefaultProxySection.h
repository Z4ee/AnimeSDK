#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationElement; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A0F2700)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_RESET_OFFSET UNITYSDK_OFFSET(0x1A0F2740)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F26C0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int DefaultProxySection_TypeDefinitionIndex = 3066;

	class DefaultProxySection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_RESET_OFFSET))(this, parentElement);
		}
	};
}
