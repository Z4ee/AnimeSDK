#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/SettingsProvider.h"

namespace System { class String; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Configuration { class SettingsContext; }
namespace System::Configuration { class SettingsProperty; }
namespace System::Configuration { class SettingsPropertyCollection; }
namespace System::Configuration { class SettingsPropertyValue; }
namespace System::Configuration { class SettingsPropertyValueCollection; }

#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPREVIOUSVERSION_OFFSET UNITYSDK_OFFSET(0x1CEC8340)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1CEC8380)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x1CEC82C0)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEC83C0)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x1CEC8400)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SETPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1CEC8440)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x1CEC8300)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_UPGRADE_OFFSET UNITYSDK_OFFSET(0x1CEC8480)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC8280)

namespace System::Configuration
{
	inline static constexpr unsigned int LocalFileSettingsProvider_TypeDefinitionIndex = 4214;

	class LocalFileSettingsProvider : public ::System::Configuration::SettingsProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_ApplicationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GET_APPLICATIONNAME_OFFSET))(this);
		}

		::System::Void set_ApplicationName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SET_APPLICATIONNAME_OFFSET))(this, value);
		}

		::System::Configuration::SettingsPropertyValue* GetPreviousVersion(::System::Configuration::SettingsContext* context, ::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Configuration::SettingsPropertyValue*(*)(::PVOID, ::System::Configuration::SettingsContext*, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPREVIOUSVERSION_OFFSET))(this, context, property);
		}

		::System::Configuration::SettingsPropertyValueCollection* GetPropertyValues(::System::Configuration::SettingsContext* context, ::System::Configuration::SettingsPropertyCollection* properties)
		{
			return ((::System::Configuration::SettingsPropertyValueCollection*(*)(::PVOID, ::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPROPERTYVALUES_OFFSET))(this, context, properties);
		}

		::System::Void Initialize(::System::String* name, ::System::Collections::Specialized::NameValueCollection* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_INITIALIZE_OFFSET))(this, name, values);
		}

		::System::Void Reset(::System::Configuration::SettingsContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsContext*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_RESET_OFFSET))(this, context);
		}

		::System::Void SetPropertyValues(::System::Configuration::SettingsContext* context, ::System::Configuration::SettingsPropertyValueCollection* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SETPROPERTYVALUES_OFFSET))(this, context, values);
		}

		::System::Void Upgrade(::System::Configuration::SettingsContext* context, ::System::Configuration::SettingsPropertyCollection* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_UPGRADE_OFFSET))(this, context, properties);
		}
	};
}
