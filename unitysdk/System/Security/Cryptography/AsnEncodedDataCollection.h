#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class AsnEncodedDataEnumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19BC7360)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19BC7390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BC73F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19BC7240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19BC7270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19BC72A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19BC7330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19BC7490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19BC73C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BC7440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BC7190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC70F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsnEncodedDataCollection_TypeDefinitionIndex = 3167;

	class AsnEncodedDataCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION__CTOR_1_OFFSET))(this, asnEncodedData);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Security::Cryptography::AsnEncodedData* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::AsnEncodedData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_ADD_OFFSET))(this, asnEncodedData);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Security::Cryptography::AsnEncodedData*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::AsnEncodedData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Security::Cryptography::AsnEncodedDataEnumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::AsnEncodedDataEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATACOLLECTION_REMOVE_OFFSET))(this, asnEncodedData);
		}
	};
}
