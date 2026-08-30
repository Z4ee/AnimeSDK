#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography { class Oid; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1E9E1E00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E9E1F70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E9E23E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E9E1EA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E9E23F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E9E2060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9E2000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1DB0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int OidCollection_TypeDefinitionIndex = 2676;

	class OidCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* m_list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 Add(::System::Security::Cryptography::Oid* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::Oid* get_Item(::System::Int32 a1)
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}
	};
}
