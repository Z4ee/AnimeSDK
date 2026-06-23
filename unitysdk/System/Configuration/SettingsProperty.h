#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/SettingsSerializeAs.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Configuration { class SettingsAttributeDictionary; }
namespace System::Configuration { class SettingsProvider; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CAF1360)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1CAF13A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1CAF1420)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CAF14A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1CAF1520)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CAF15A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x1CAF1620)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1CAF16A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1CAF1720)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1CAF13E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1CAF1460)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CAF14E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1CAF1560)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CAF15E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x1CAF1660)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1CAF16E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1CAF1760)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAF12E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CAF1320)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF12A0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProperty_TypeDefinitionIndex = 4074;

	class SettingsProperty : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Configuration::SettingsProperty* propertyToCopy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY__CTOR_OFFSET))(this, propertyToCopy);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Type* propertyType, ::System::Configuration::SettingsProvider* provider, ::System::Boolean isReadOnly, ::System::Object* defaultValue, ::System::Configuration::SettingsSerializeAs serializeAs, ::System::Configuration::SettingsAttributeDictionary* attributes, ::System::Boolean throwOnErrorDeserializing, ::System::Boolean throwOnErrorSerializing)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Configuration::SettingsProvider*, ::System::Boolean, ::System::Object*, ::System::Configuration::SettingsSerializeAs, ::System::Configuration::SettingsAttributeDictionary*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY__CTOR_2_OFFSET))(this, name, propertyType, provider, isReadOnly, defaultValue, serializeAs, attributes, throwOnErrorDeserializing, throwOnErrorSerializing);
		}

		::System::Configuration::SettingsAttributeDictionary* get_Attributes()
		{
			return ((::System::Configuration::SettingsAttributeDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_DEFAULTVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void set_IsReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_ISREADONLY_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_NAME_OFFSET))(this, value);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::System::Configuration::SettingsProvider* get_Provider()
		{
			return ((::System::Configuration::SettingsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROVIDER_OFFSET))(this);
		}

		::System::Void set_Provider(::System::Configuration::SettingsProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROVIDER_OFFSET))(this, value);
		}

		::System::Configuration::SettingsSerializeAs get_SerializeAs()
		{
			return ((::System::Configuration::SettingsSerializeAs(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_SERIALIZEAS_OFFSET))(this);
		}

		::System::Void set_SerializeAs(::System::Configuration::SettingsSerializeAs value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsSerializeAs))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_SERIALIZEAS_OFFSET))(this, value);
		}

		::System::Boolean get_ThrowOnErrorDeserializing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORDESERIALIZING_OFFSET))(this);
		}

		::System::Void set_ThrowOnErrorDeserializing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORDESERIALIZING_OFFSET))(this, value);
		}

		::System::Boolean get_ThrowOnErrorSerializing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORSERIALIZING_OFFSET))(this);
		}

		::System::Void set_ThrowOnErrorSerializing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORSERIALIZING_OFFSET))(this, value);
		}
	};
}
