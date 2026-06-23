#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E88CA70)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E88CAB0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88CA30)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSection_TypeDefinitionIndex = 2507;

	class ConfigurationSection : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET))(this);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET))(this);
		}
	};
}
