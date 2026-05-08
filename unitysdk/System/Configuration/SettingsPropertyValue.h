#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Configuration { class SettingsProperty; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_DESERIALIZED_OFFSET UNITYSDK_OFFSET(0x19EE8EB0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x19EE8F30)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19EE8FB0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19EE9030)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x19EE8FF0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_SERIALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x19EE90B0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_USINGDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x19EE9130)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_DESERIALIZED_OFFSET UNITYSDK_OFFSET(0x19EE8EF0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x19EE8F70)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_PROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19EE9070)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_SERIALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x19EE90F0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE8E70)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyValue_TypeDefinitionIndex = 4078;

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
