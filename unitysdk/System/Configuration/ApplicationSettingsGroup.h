#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSectionGroup.h"

#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6170E0)

namespace System::Configuration
{
	inline static constexpr unsigned int ApplicationSettingsGroup_TypeDefinitionIndex = 4198;

	class ApplicationSettingsGroup : public ::System::Configuration::ConfigurationSectionGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSGROUP__CTOR_OFFSET))(this);
		}
	};
}
