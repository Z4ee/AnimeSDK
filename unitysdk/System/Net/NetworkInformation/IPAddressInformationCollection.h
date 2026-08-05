#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class Collection_1; }
namespace System::Net::NetworkInformation { class IPAddressInformation; }

#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1E28BA70)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E28BCB0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E28BB30)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E28B9B0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E28BBA0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E28BA10)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1E28BA60)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E28BBF0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x1E28BAD0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E28BC50)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E28BB90)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E28B960)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPAddressInformationCollection_TypeDefinitionIndex = 3708;

	class IPAddressInformationCollection : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::IPAddressInformation*>* addresses; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Net::NetworkInformation::IPAddressInformation*>* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::NetworkInformation::IPAddressInformation*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET))(this, array, offset);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add(::System::Net::NetworkInformation::IPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::IPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET))(this, address);
		}

		::System::Void InternalAdd(::System::Net::NetworkInformation::IPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::IPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET))(this, address);
		}

		::System::Boolean Contains(::System::Net::NetworkInformation::IPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::IPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET))(this, address);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::IPAddressInformation*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::IPAddressInformation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressInformation* get_Item(::System::Int32 index)
		{
			return ((::System::Net::NetworkInformation::IPAddressInformation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean Remove(::System::Net::NetworkInformation::IPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::IPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET))(this, address);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET))(this);
		}
	};
}
