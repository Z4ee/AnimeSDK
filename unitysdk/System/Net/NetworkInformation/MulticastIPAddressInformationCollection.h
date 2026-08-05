#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class Collection_1; }
namespace System::Net::NetworkInformation { class MulticastIPAddressInformation; }

#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1E7E88A0)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E7E8AE0)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E7E8960)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E7E87E0)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7E89D0)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E7E8840)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1E7E8890)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E7E8A20)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x1E7E8900)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E7E8A80)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7E89C0)
#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8790)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MulticastIPAddressInformationCollection_TypeDefinitionIndex = 3722;

	class MulticastIPAddressInformationCollection : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::MulticastIPAddressInformation*>* addresses; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Net::NetworkInformation::MulticastIPAddressInformation*>* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::NetworkInformation::MulticastIPAddressInformation*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET))(this, array, offset);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add(::System::Net::NetworkInformation::MulticastIPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::MulticastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET))(this, address);
		}

		::System::Void InternalAdd(::System::Net::NetworkInformation::MulticastIPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::MulticastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET))(this, address);
		}

		::System::Boolean Contains(::System::Net::NetworkInformation::MulticastIPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::MulticastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET))(this, address);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::MulticastIPAddressInformation*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::MulticastIPAddressInformation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Net::NetworkInformation::MulticastIPAddressInformation* get_Item(::System::Int32 index)
		{
			return ((::System::Net::NetworkInformation::MulticastIPAddressInformation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean Remove(::System::Net::NetworkInformation::MulticastIPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::MulticastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET))(this, address);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET))(this);
		}
	};
}
