#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_SERVICEPOINTMANAGERELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E958E90)
#define SYSTEM_NET_CONFIGURATION_SERVICEPOINTMANAGERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E958E50)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ServicePointManagerElement_TypeDefinitionIndex = 3085;

	class ServicePointManagerElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SERVICEPOINTMANAGERELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SERVICEPOINTMANAGERELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
