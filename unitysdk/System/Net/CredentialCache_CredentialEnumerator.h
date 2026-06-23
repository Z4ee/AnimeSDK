#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Net { class CredentialCache; }
namespace System::Net { class ICredentials; }

#define SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4042F0)
#define SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B4043D0)
#define SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B404470)
#define SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4040C0)

namespace System::Net
{
	inline static constexpr unsigned int CredentialCache_CredentialEnumerator_TypeDefinitionIndex = 3266;

	class CredentialCache_CredentialEnumerator : public ::System::Object
	{
	public:
		::System::Net::CredentialCache* m_cache; // 0x10
		::Il2CppArray<::System::Net::ICredentials*>* m_array; // 0x18
		::System::Int32 m_index; // 0x20
		::System::Int32 m_version; // 0x24

		::System::Void _ctor(::System::Net::CredentialCache* cache, ::System::Collections::Hashtable* table, ::System::Collections::Hashtable* hostTable, ::System::Int32 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CredentialCache*, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR__CTOR_OFFSET))(this, cache, table, hostTable, version);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_CREDENTIALENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
