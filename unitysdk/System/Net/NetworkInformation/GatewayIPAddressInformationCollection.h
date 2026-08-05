#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class Collection_1; }
namespace System::Net::NetworkInformation { class GatewayIPAddressInformation; }

#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1CC19290)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CC19470)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CC19350)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CC19170)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CC193B0)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CC191D0)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1CC19220)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CC19230)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x1CC192F0)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CC19410)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CC19400)
#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC19120)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int GatewayIPAddressInformationCollection_TypeDefinitionIndex = 3705;

	class GatewayIPAddressInformationCollection : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* addresses; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET))(this, array, offset);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Net::NetworkInformation::GatewayIPAddressInformation* get_Item(::System::Int32 index)
		{
			return ((::System::Net::NetworkInformation::GatewayIPAddressInformation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Add(::System::Net::NetworkInformation::GatewayIPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::GatewayIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET))(this, address);
		}

		::System::Void InternalAdd(::System::Net::NetworkInformation::GatewayIPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::GatewayIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET))(this, address);
		}

		::System::Boolean Contains(::System::Net::NetworkInformation::GatewayIPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::GatewayIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET))(this, address);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Remove(::System::Net::NetworkInformation::GatewayIPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::GatewayIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET))(this, address);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET))(this);
		}
	};
}
