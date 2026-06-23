#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/UriIdnScope.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_CONFIGURATION_IDNELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1C0126E0)
#define SYSTEM_CONFIGURATION_IDNELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C012760)
#define SYSTEM_CONFIGURATION_IDNELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1C012720)
#define SYSTEM_CONFIGURATION_IDNELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0126A0)

namespace System::Configuration
{
	inline static constexpr unsigned int IdnElement_TypeDefinitionIndex = 4209;

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
