#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography { class OidEnumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A5889E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A589250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A588E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A588E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A589310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1A588A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A588A10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A589320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A588F30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A588EE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A588940)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int OidCollection_TypeDefinitionIndex = 3162;

	class OidCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* m_list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 Add(::System::Security::Cryptography::Oid* oid)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET))(this, oid);
		}

		::System::Security::Cryptography::Oid* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Security::Cryptography::Oid* get_Item_1(::System::String* oid)
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_1_OFFSET))(this, oid);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Security::Cryptography::OidEnumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::OidEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Security::Cryptography::Oid*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::Oid*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_COPYTO_OFFSET))(this, array, index);
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
