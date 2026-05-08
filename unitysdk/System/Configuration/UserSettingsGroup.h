#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSectionGroup.h"

#define SYSTEM_CONFIGURATION_USERSETTINGSGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A318A20)

namespace System::Configuration
{
	inline static constexpr unsigned int UserSettingsGroup_TypeDefinitionIndex = 4236;

	class UserSettingsGroup : public ::System::Configuration::ConfigurationSectionGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_USERSETTINGSGROUP__CTOR_OFFSET))(this);
		}
	};
}
