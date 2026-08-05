#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Configuration/SettingsSerializeAs.h"

#define SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE_GET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x1E285250)
#define SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E285240)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsSerializeAsAttribute_TypeDefinitionIndex = 4229;

	class SettingsSerializeAsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Configuration::SettingsSerializeAs serializeAs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsSerializeAs))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE__CTOR_OFFSET))(this, serializeAs);
		}

		::System::Configuration::SettingsSerializeAs get_SerializeAs()
		{
			return ((::System::Configuration::SettingsSerializeAs(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE_GET_SERIALIZEAS_OFFSET))(this);
		}
	};
}
