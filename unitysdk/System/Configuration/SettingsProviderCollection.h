#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/Provider/ProviderCollection.h"

namespace System { class String; }
namespace System::Configuration { class SettingsProvider; }
namespace System::Configuration::Provider { class ProviderBase; }

#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C012BE0)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C012BA0)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C012B60)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProviderCollection_TypeDefinitionIndex = 4080;

	class SettingsProviderCollection : public ::System::Configuration::Provider::ProviderCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::SettingsProvider* get_Item(::System::String* name)
		{
			return ((::System::Configuration::SettingsProvider*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_GET_ITEM_OFFSET))(this, name);
		}

		::System::Void Add(::System::Configuration::Provider::ProviderBase* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::Provider::ProviderBase*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_ADD_OFFSET))(this, provider);
		}
	};
}
