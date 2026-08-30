#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E958D90)
#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E958D50)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int PerformanceCountersElement_TypeDefinitionIndex = 3084;

	class PerformanceCountersElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
