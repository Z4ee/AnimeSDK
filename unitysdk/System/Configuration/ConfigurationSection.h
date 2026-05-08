#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C55D150)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C55D190)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55D110)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSection_TypeDefinitionIndex = 2508;

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
