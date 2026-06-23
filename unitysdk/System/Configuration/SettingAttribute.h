#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CONFIGURATION_SETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C1A70)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingAttribute_TypeDefinitionIndex = 4191;

	class SettingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
