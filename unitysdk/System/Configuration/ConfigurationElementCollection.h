#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollectionType.h"
#include "unitysdk/System/Configuration/ConfigurationSaveMode.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E88C730)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E88C5B0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E88C5F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1E88C630)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E88C670)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E88C6B0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET UNITYSDK_OFFSET(0x1E88C6F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E88C770)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E88C7F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_RESET_OFFSET UNITYSDK_OFFSET(0x1E88C7B0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E88C830)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_UNMERGE_OFFSET UNITYSDK_OFFSET(0x1E88C870)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88C570)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationElementCollection_TypeDefinitionIndex = 2510;

	class ConfigurationElementCollection : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElementCollectionType get_CollectionType()
		{
			return ((::System::Configuration::ConfigurationElementCollectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean get_ThrowOnDuplicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_ISMODIFIED_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_RESET_OFFSET))(this, parentElement);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_RESETMODIFIED_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* arr, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, arr, index);
		}

		::System::Void Unmerge(::System::Configuration::ConfigurationElement* sourceElement, ::System::Configuration::ConfigurationElement* parentElement, ::System::Configuration::ConfigurationSaveMode saveMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationSaveMode))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_UNMERGE_OFFSET))(this, sourceElement, parentElement, saveMode);
		}
	};
}
