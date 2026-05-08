#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationElement; }
namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class BypassElementCollection; }
namespace System::Net::Configuration { class ModuleElement; }
namespace System::Net::Configuration { class ProxyElement; }

#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_BYPASSLIST_OFFSET UNITYSDK_OFFSET(0x1AA9B370)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1AA9B3B0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1AA9B430)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AA9B470)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1AA9B4B0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1AA9B4F0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AA9B570)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_RESET_OFFSET UNITYSDK_OFFSET(0x1AA9B5B0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1AA9B3F0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1AA9B530)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9B330)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int DefaultProxySection_TypeDefinitionIndex = 4123;

	class DefaultProxySection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::BypassElementCollection* get_BypassList()
		{
			return ((::System::Net::Configuration::BypassElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_BYPASSLIST_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Net::Configuration::ModuleElement* get_Module()
		{
			return ((::System::Net::Configuration::ModuleElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_MODULE_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Net::Configuration::ProxyElement* get_Proxy()
		{
			return ((::System::Net::Configuration::ProxyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROXY_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_POSTDESERIALIZE_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_RESET_OFFSET))(this, parentElement);
		}
	};
}
