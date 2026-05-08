#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x19E32EC0)
#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19E32F40)
#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x19E32F00)
#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32E80)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int PerformanceCountersElement_TypeDefinitionIndex = 4142;

	class PerformanceCountersElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
