#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E88C9B0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E88C8F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E88C930)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E88C970)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E88C9F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88C8B0)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationPropertyCollection_TypeDefinitionIndex = 2513;

	class ConfigurationPropertyCollection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
