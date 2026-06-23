#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/SettingAttribute.h"

#define SYSTEM_CONFIGURATION_APPLICATIONSCOPEDSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64EB60)

namespace System::Configuration
{
	inline static constexpr unsigned int ApplicationScopedSettingAttribute_TypeDefinitionIndex = 4190;

	class ApplicationScopedSettingAttribute : public ::System::Configuration::SettingAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSCOPEDSETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
