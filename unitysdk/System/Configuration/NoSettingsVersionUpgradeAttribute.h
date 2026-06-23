#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CONFIGURATION_NOSETTINGSVERSIONUPGRADEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C1A60)

namespace System::Configuration
{
	inline static constexpr unsigned int NoSettingsVersionUpgradeAttribute_TypeDefinitionIndex = 4217;

	class NoSettingsVersionUpgradeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NOSETTINGSVERSIONUPGRADEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
