#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class Collection_1; }
namespace System::Net::NetworkInformation { class UnicastIPAddressInformation; }

#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D897B50)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D897D90)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D897C10)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D897A90)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D897C80)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D897AF0)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D897B40)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D897CD0)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x1D897BB0)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D897D30)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D897C70)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D897A40)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnicastIPAddressInformationCollection_TypeDefinitionIndex = 3749;

	class UnicastIPAddressInformationCollection : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* addresses; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_COPYTO_OFFSET))(this, array, offset);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add(::System::Net::NetworkInformation::UnicastIPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::UnicastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_ADD_OFFSET))(this, address);
		}

		::System::Void InternalAdd(::System::Net::NetworkInformation::UnicastIPAddressInformation* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::UnicastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_INTERNALADD_OFFSET))(this, address);
		}

		::System::Boolean Contains(::System::Net::NetworkInformation::UnicastIPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::UnicastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_CONTAINS_OFFSET))(this, address);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UnicastIPAddressInformation* get_Item(::System::Int32 index)
		{
			return ((::System::Net::NetworkInformation::UnicastIPAddressInformation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean Remove(::System::Net::NetworkInformation::UnicastIPAddressInformation* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::UnicastIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_REMOVE_OFFSET))(this, address);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATIONCOLLECTION_CLEAR_OFFSET))(this);
		}
	};
}
