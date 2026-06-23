#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Configuration::Provider { class ProviderBase; }

#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1E88CCB0)
#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E88CCF0)
#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E88CBF0)
#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E88CC30)
#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E88CC70)
#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E88CD30)
#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88CBB0)

namespace System::Configuration::Provider
{
	inline static constexpr unsigned int ProviderCollection_TypeDefinitionIndex = 2516;

	class ProviderCollection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Add(::System::Configuration::Provider::ProviderBase* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::Provider::ProviderBase*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_ADD_OFFSET))(this, provider);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
