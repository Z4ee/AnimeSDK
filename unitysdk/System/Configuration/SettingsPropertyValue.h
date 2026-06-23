#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Configuration { class SettingsProperty; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_DESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C2E2AE0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1C2E2B60)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C2E2BE0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1C2E2C60)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1C2E2C20)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_SERIALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1C2E2CE0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_USINGDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1C2E2D60)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_DESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C2E2B20)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1C2E2BA0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_PROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1C2E2CA0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_SERIALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1C2E2D20)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E2AA0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyValue_TypeDefinitionIndex = 4077;

	class SettingsPropertyValue : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE__CTOR_OFFSET))(this, property);
		}

		::System::Boolean get_Deserialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_DESERIALIZED_OFFSET))(this);
		}

		::System::Void set_Deserialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_DESERIALIZED_OFFSET))(this, value);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_ISDIRTY_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_NAME_OFFSET))(this);
		}

		::System::Configuration::SettingsProperty* get_Property()
		{
			return ((::System::Configuration::SettingsProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTY_OFFSET))(this);
		}

		::System::Object* get_PropertyValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTYVALUE_OFFSET))(this);
		}

		::System::Void set_PropertyValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_PROPERTYVALUE_OFFSET))(this, value);
		}

		::System::Object* get_SerializedValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_SERIALIZEDVALUE_OFFSET))(this);
		}

		::System::Void set_SerializedValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_SERIALIZEDVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_UsingDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_USINGDEFAULTVALUE_OFFSET))(this);
		}
	};
}
