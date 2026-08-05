#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Configuration/SettingsManageability.h"

#define SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE_GET_MANAGEABILITY_OFFSET UNITYSDK_OFFSET(0x1D886260)
#define SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D886250)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsManageabilityAttribute_TypeDefinitionIndex = 4224;

	class SettingsManageabilityAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Configuration::SettingsManageability manageability)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsManageability))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE__CTOR_OFFSET))(this, manageability);
		}

		::System::Configuration::SettingsManageability get_Manageability()
		{
			return ((::System::Configuration::SettingsManageability(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE_GET_MANAGEABILITY_OFFSET))(this);
		}
	};
}
