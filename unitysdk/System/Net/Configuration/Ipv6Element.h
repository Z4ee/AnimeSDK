#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1CAF76E0)
#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CAF7760)
#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1CAF7720)
#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF76A0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int Ipv6Element_TypeDefinitionIndex = 4133;

	class Ipv6Element : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
