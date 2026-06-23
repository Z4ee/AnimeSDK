#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Configuration { class SettingsPropertyValue; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1BEC1000)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BEC1040)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEC1080)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1BEC10C0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BEC1100)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BEC0F00)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1BEC0F40)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BEC0F80)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1BEC0FC0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BEC1140)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_SETREADONLY_OFFSET UNITYSDK_OFFSET(0x1BEC1180)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC0EC0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyValueCollection_TypeDefinitionIndex = 4076;

	class SettingsPropertyValueCollection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Configuration::SettingsPropertyValue* get_Item(::System::String* name)
		{
			return ((::System::Configuration::SettingsPropertyValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_ITEM_OFFSET))(this, name);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Add(::System::Configuration::SettingsPropertyValue* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsPropertyValue*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_ADD_OFFSET))(this, property);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_CLONE_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_REMOVE_OFFSET))(this, name);
		}

		::System::Void SetReadOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_SETREADONLY_OFFSET))(this);
		}
	};
}
