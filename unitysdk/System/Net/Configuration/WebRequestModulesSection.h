#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class WebRequestModuleElementCollection; }

#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C87F7C0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_WEBREQUESTMODULES_OFFSET UNITYSDK_OFFSET(0x1C87F800)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_INITIALIZEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C87F840)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C87F880)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87F780)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebRequestModulesSection_TypeDefinitionIndex = 4146;

	class WebRequestModulesSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Net::Configuration::WebRequestModuleElementCollection* get_WebRequestModules()
		{
			return ((::System::Net::Configuration::WebRequestModuleElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_WEBREQUESTMODULES_OFFSET))(this);
		}

		::System::Void InitializeDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_INITIALIZEDEFAULT_OFFSET))(this);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_POSTDESERIALIZE_OFFSET))(this);
		}
	};
}
