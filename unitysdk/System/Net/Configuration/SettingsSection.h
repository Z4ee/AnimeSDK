#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class HttpListenerElement; }
namespace System::Net::Configuration { class HttpWebRequestElement; }
namespace System::Net::Configuration { class Ipv6Element; }
namespace System::Net::Configuration { class PerformanceCountersElement; }
namespace System::Net::Configuration { class ServicePointManagerElement; }
namespace System::Net::Configuration { class SocketElement; }
namespace System::Net::Configuration { class WebProxyScriptElement; }
namespace System::Net::Configuration { class WebUtilityElement; }

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPLISTENER_OFFSET UNITYSDK_OFFSET(0x19EEA300)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x19EEA340)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_IPV6_OFFSET UNITYSDK_OFFSET(0x19EEA380)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PERFORMANCECOUNTERS_OFFSET UNITYSDK_OFFSET(0x19EEA3C0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19EEA400)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SERVICEPOINTMANAGER_OFFSET UNITYSDK_OFFSET(0x19EEA440)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x19EEA480)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBPROXYSCRIPT_OFFSET UNITYSDK_OFFSET(0x19EEA4C0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBUTILITY_OFFSET UNITYSDK_OFFSET(0x19EEA500)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EEA2C0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSection_TypeDefinitionIndex = 4141;

	class SettingsSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::HttpListenerElement* get_HttpListener()
		{
			return ((::System::Net::Configuration::HttpListenerElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPLISTENER_OFFSET))(this);
		}

		::System::Net::Configuration::HttpWebRequestElement* get_HttpWebRequest()
		{
			return ((::System::Net::Configuration::HttpWebRequestElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPWEBREQUEST_OFFSET))(this);
		}

		::System::Net::Configuration::Ipv6Element* get_Ipv6()
		{
			return ((::System::Net::Configuration::Ipv6Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_IPV6_OFFSET))(this);
		}

		::System::Net::Configuration::PerformanceCountersElement* get_PerformanceCounters()
		{
			return ((::System::Net::Configuration::PerformanceCountersElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PERFORMANCECOUNTERS_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Net::Configuration::ServicePointManagerElement* get_ServicePointManager()
		{
			return ((::System::Net::Configuration::ServicePointManagerElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SERVICEPOINTMANAGER_OFFSET))(this);
		}

		::System::Net::Configuration::SocketElement* get_Socket()
		{
			return ((::System::Net::Configuration::SocketElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SOCKET_OFFSET))(this);
		}

		::System::Net::Configuration::WebProxyScriptElement* get_WebProxyScript()
		{
			return ((::System::Net::Configuration::WebProxyScriptElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBPROXYSCRIPT_OFFSET))(this);
		}

		::System::Net::Configuration::WebUtilityElement* get_WebUtility()
		{
			return ((::System::Net::Configuration::WebUtilityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBUTILITY_OFFSET))(this);
		}
	};
}
