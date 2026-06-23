#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Configuration { class SettingsContext; }
namespace System::Configuration { class SettingsPropertyCollection; }
namespace System::Configuration { class SettingsPropertyValueCollection; }
namespace System::Configuration { class SettingsProviderCollection; }

#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1D5CD5F0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D5CD630)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D5CD670)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D5CD6F0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1D5CD730)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROVIDERS_OFFSET UNITYSDK_OFFSET(0x1D5CD770)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5CD7B0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_SAVE_OFFSET UNITYSDK_OFFSET(0x1D5CD7F0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D5CD6B0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D5CD830)
#define SYSTEM_CONFIGURATION_SETTINGSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CD5B0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsBase_TypeDefinitionIndex = 4071;

	class SettingsBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE__CTOR_OFFSET))(this);
		}

		::System::Configuration::SettingsContext* get_Context()
		{
			return ((::System::Configuration::SettingsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_CONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_Item(::System::String* propertyName)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ITEM_OFFSET))(this, propertyName);
		}

		::System::Void set_Item(::System::String* propertyName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_SET_ITEM_OFFSET))(this, propertyName, value);
		}

		::System::Configuration::SettingsPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::SettingsPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Configuration::SettingsPropertyValueCollection* get_PropertyValues()
		{
			return ((::System::Configuration::SettingsPropertyValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTYVALUES_OFFSET))(this);
		}

		::System::Configuration::SettingsProviderCollection* get_Providers()
		{
			return ((::System::Configuration::SettingsProviderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROVIDERS_OFFSET))(this);
		}

		::System::Void Initialize(::System::Configuration::SettingsContext* context, ::System::Configuration::SettingsPropertyCollection* properties, ::System::Configuration::SettingsProviderCollection* providers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*, ::System::Configuration::SettingsProviderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_INITIALIZE_OFFSET))(this, context, properties, providers);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_SAVE_OFFSET))(this);
		}

		static ::System::Configuration::SettingsBase* Synchronized(::System::Configuration::SettingsBase* settingsBase)
		{
			return ((::System::Configuration::SettingsBase*(*)(::System::Configuration::SettingsBase*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_SYNCHRONIZED_OFFSET))(settingsBase);
		}
	};
}
