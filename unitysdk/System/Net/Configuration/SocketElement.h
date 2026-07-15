#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19183C80)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19183C40)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SocketElement_TypeDefinitionIndex = 3078;

	class SocketElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
