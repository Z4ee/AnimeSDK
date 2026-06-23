#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_GET_DOWNLOADTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B1C1470)
#define SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B1C14F0)
#define SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B1C1530)
#define SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_SET_DOWNLOADTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B1C14B0)
#define SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C1430)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebProxyScriptElement_TypeDefinitionIndex = 4144;

	class WebProxyScriptElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT__CTOR_OFFSET))(this);
		}

		::System::TimeSpan get_DownloadTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_GET_DOWNLOADTIMEOUT_OFFSET))(this);
		}

		::System::Void set_DownloadTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_SET_DOWNLOADTIMEOUT_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_POSTDESERIALIZE_OFFSET))(this);
		}
	};
}
