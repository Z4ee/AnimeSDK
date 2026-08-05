#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/SettingsBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class CancelEventArgs; }
namespace System::ComponentModel { class IComponent; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::Configuration { class SettingChangingEventArgs; }
namespace System::Configuration { class SettingChangingEventHandler; }
namespace System::Configuration { class SettingsContext; }
namespace System::Configuration { class SettingsLoadedEventArgs; }
namespace System::Configuration { class SettingsLoadedEventHandler; }
namespace System::Configuration { class SettingsPropertyCollection; }
namespace System::Configuration { class SettingsPropertyValueCollection; }
namespace System::Configuration { class SettingsProviderCollection; }
namespace System::Configuration { class SettingsSavingEventHandler; }

#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E284780)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGCHANGING_OFFSET UNITYSDK_OFFSET(0x1E284800)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSLOADED_OFFSET UNITYSDK_OFFSET(0x1E284880)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSSAVING_OFFSET UNITYSDK_OFFSET(0x1E284900)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GETPREVIOUSVERSION_OFFSET UNITYSDK_OFFSET(0x1E284980)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E284580)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E2845C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E284640)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1E284680)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROVIDERS_OFFSET UNITYSDK_OFFSET(0x1E2846C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_SETTINGSKEY_OFFSET UNITYSDK_OFFSET(0x1E284700)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E2849C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGCHANGING_OFFSET UNITYSDK_OFFSET(0x1E284A00)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSLOADED_OFFSET UNITYSDK_OFFSET(0x1E284A40)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSSAVING_OFFSET UNITYSDK_OFFSET(0x1E284A80)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RELOAD_OFFSET UNITYSDK_OFFSET(0x1E284AC0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E2847C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGCHANGING_OFFSET UNITYSDK_OFFSET(0x1E284840)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSLOADED_OFFSET UNITYSDK_OFFSET(0x1E2848C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSSAVING_OFFSET UNITYSDK_OFFSET(0x1E284940)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1E284B00)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SAVE_OFFSET UNITYSDK_OFFSET(0x1E284B40)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E284600)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_SETTINGSKEY_OFFSET UNITYSDK_OFFSET(0x1E284740)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_UPGRADE_OFFSET UNITYSDK_OFFSET(0x1E284B80)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2844C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E284500)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E284540)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E284480)

namespace System::Configuration
{
	inline static constexpr unsigned int ApplicationSettingsBase_TypeDefinitionIndex = 4192;

	class ApplicationSettingsBase : public ::System::Configuration::SettingsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::ComponentModel::IComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_1_OFFSET))(this, owner);
		}

		::System::Void _ctor_2(::System::ComponentModel::IComponent* owner, ::System::String* settingsKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_2_OFFSET))(this, owner, settingsKey);
		}

		::System::Void _ctor_3(::System::String* settingsKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE__CTOR_3_OFFSET))(this, settingsKey);
		}

		::System::Configuration::SettingsContext* get_Context()
		{
			return ((::System::Configuration::SettingsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_CONTEXT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::String* propertyName)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_ITEM_OFFSET))(this, propertyName);
		}

		::System::Void set_Item(::System::String* propertyName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_ITEM_OFFSET))(this, propertyName, value);
		}

		::System::Configuration::SettingsPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::SettingsPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Configuration::SettingsPropertyValueCollection* get_PropertyValues()
		{
			return ((::System::Configuration::SettingsPropertyValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTYVALUES_OFFSET))(this);
		}

		::System::Configuration::SettingsProviderCollection* get_Providers()
		{
			return ((::System::Configuration::SettingsProviderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROVIDERS_OFFSET))(this);
		}

		::System::String* get_SettingsKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_SETTINGSKEY_OFFSET))(this);
		}

		::System::Void set_SettingsKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_SETTINGSKEY_OFFSET))(this, value);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void add_SettingChanging(::System::Configuration::SettingChangingEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingChangingEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGCHANGING_OFFSET))(this, value);
		}

		::System::Void remove_SettingChanging(::System::Configuration::SettingChangingEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingChangingEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGCHANGING_OFFSET))(this, value);
		}

		::System::Void add_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsLoadedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSLOADED_OFFSET))(this, value);
		}

		::System::Void remove_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsLoadedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSLOADED_OFFSET))(this, value);
		}

		::System::Void add_SettingsSaving(::System::Configuration::SettingsSavingEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsSavingEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSSAVING_OFFSET))(this, value);
		}

		::System::Void remove_SettingsSaving(::System::Configuration::SettingsSavingEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsSavingEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSSAVING_OFFSET))(this, value);
		}

		::System::Object* GetPreviousVersion(::System::String* propertyName)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GETPREVIOUSVERSION_OFFSET))(this, propertyName);
		}

		::System::Void OnPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONPROPERTYCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void OnSettingChanging(::System::Object* sender, ::System::Configuration::SettingChangingEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Configuration::SettingChangingEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGCHANGING_OFFSET))(this, sender, e);
		}

		::System::Void OnSettingsLoaded(::System::Object* sender, ::System::Configuration::SettingsLoadedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSLOADED_OFFSET))(this, sender, e);
		}

		::System::Void OnSettingsSaving(::System::Object* sender, ::System::ComponentModel::CancelEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CancelEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSSAVING_OFFSET))(this, sender, e);
		}

		::System::Void Reload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RELOAD_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RESET_OFFSET))(this);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SAVE_OFFSET))(this);
		}

		::System::Void Upgrade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_UPGRADE_OFFSET))(this);
		}
	};
}
