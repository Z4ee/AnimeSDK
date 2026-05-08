#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C55D090)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C55CFD0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C55D010)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C55D050)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C55D0D0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55CF90)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationPropertyCollection_TypeDefinitionIndex = 2514;

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
