#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Configuration { class SettingsPropertyValue; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D232960)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2329A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D2329E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D232A20)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D232A60)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D232860)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D2328A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2328E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D232920)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D232AA0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION_SETREADONLY_OFFSET UNITYSDK_OFFSET(0x1D232AE0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D232820)

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
