#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AB42900)
#define SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB428C0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebProxyScriptElement_TypeDefinitionIndex = 3087;

	class WebProxyScriptElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBPROXYSCRIPTELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
