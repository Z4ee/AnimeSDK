#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Configuration/SettingsSerializeAs.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Configuration { class SettingValueElement; }

#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C2E2760)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C2E27E0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x1C2E2820)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C2E28A0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C2E27A0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x1C2E2860)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C2E28E0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2E2720)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E26E0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingElement_TypeDefinitionIndex = 4202;

	class SettingElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Configuration::SettingsSerializeAs serializeAs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Configuration::SettingsSerializeAs))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT__CTOR_1_OFFSET))(this, name, serializeAs);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_NAME_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Configuration::SettingsSerializeAs get_SerializeAs()
		{
			return ((::System::Configuration::SettingsSerializeAs(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_SERIALIZEAS_OFFSET))(this);
		}

		::System::Void set_SerializeAs(::System::Configuration::SettingsSerializeAs value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsSerializeAs))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_SERIALIZEAS_OFFSET))(this, value);
		}

		::System::Configuration::SettingValueElement* get_Value()
		{
			return ((::System::Configuration::SettingValueElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Configuration::SettingValueElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingValueElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_VALUE_OFFSET))(this, value);
		}
	};
}
