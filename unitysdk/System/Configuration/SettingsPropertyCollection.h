#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Configuration { class SettingsProperty; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x193A5BD0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x193A5C10)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x193A5C50)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x193A5C90)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193A5CD0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x193A5AD0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x193A5B10)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x193A5B50)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x193A5B90)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADDCOMPLETE_OFFSET UNITYSDK_OFFSET(0x193A5D50)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADD_OFFSET UNITYSDK_OFFSET(0x193A5D10)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEARCOMPLETE_OFFSET UNITYSDK_OFFSET(0x193A5DD0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x193A5D90)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x193A5E50)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x193A5E10)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x193A5E90)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_SETREADONLY_OFFSET UNITYSDK_OFFSET(0x193A5ED0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x193A5A90)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyCollection_TypeDefinitionIndex = 4074;

	class SettingsPropertyCollection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Configuration::SettingsProperty* get_Item(::System::String* name)
		{
			return ((::System::Configuration::SettingsProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ITEM_OFFSET))(this, name);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Add(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ADD_OFFSET))(this, property);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLONE_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void OnAdd(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADD_OFFSET))(this, property);
		}

		::System::Void OnAddComplete(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADDCOMPLETE_OFFSET))(this, property);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnClearComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEARCOMPLETE_OFFSET))(this);
		}

		::System::Void OnRemove(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVE_OFFSET))(this, property);
		}

		::System::Void OnRemoveComplete(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVECOMPLETE_OFFSET))(this, property);
		}

		::System::Void Remove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_REMOVE_OFFSET))(this, name);
		}

		::System::Void SetReadOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_SETREADONLY_OFFSET))(this);
		}
	};
}
