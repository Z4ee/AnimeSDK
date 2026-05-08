#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class HttpListenerTimeoutsElement; }

#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19AE8830)
#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_TIMEOUTS_OFFSET UNITYSDK_OFFSET(0x19AE8870)
#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_UNESCAPEREQUESTURL_OFFSET UNITYSDK_OFFSET(0x19AE88B0)
#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE87F0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int HttpListenerElement_TypeDefinitionIndex = 4131;

	class HttpListenerElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Net::Configuration::HttpListenerTimeoutsElement* get_Timeouts()
		{
			return ((::System::Net::Configuration::HttpListenerTimeoutsElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_TIMEOUTS_OFFSET))(this);
		}

		::System::Boolean get_UnescapeRequestUrl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_UNESCAPEREQUESTURL_OFFSET))(this);
		}
	};
}
