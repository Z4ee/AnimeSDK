#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/UriIdnScope.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_CONFIGURATION_IDNELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x19AE5290)
#define SYSTEM_CONFIGURATION_IDNELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19AE5310)
#define SYSTEM_CONFIGURATION_IDNELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x19AE52D0)
#define SYSTEM_CONFIGURATION_IDNELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE5250)

namespace System::Configuration
{
	inline static constexpr unsigned int IdnElement_TypeDefinitionIndex = 4210;

	class IdnElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT__CTOR_OFFSET))(this);
		}

		::System::UriIdnScope get_Enabled()
		{
			return ((::System::UriIdnScope(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::UriIdnScope value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UriIdnScope))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
