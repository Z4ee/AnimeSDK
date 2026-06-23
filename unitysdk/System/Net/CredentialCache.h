#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }
namespace System::Net { class ICredentials; }
namespace System::Net { class NetworkCredential; }

#define SYSTEM_NET_CREDENTIALCACHE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1B7620D0)
#define SYSTEM_NET_CREDENTIALCACHE_ADD_OFFSET UNITYSDK_OFFSET(0x1B761EB0)
#define SYSTEM_NET_CREDENTIALCACHE_GETCREDENTIAL_1_OFFSET UNITYSDK_OFFSET(0x1B762990)
#define SYSTEM_NET_CREDENTIALCACHE_GETCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1B7625A0)
#define SYSTEM_NET_CREDENTIALCACHE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B762DC0)
#define SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B762E30)
#define SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTNETWORKCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B762E90)
#define SYSTEM_NET_CREDENTIALCACHE_GET_ISDEFAULTINCACHE_OFFSET UNITYSDK_OFFSET(0x1B761D90)
#define SYSTEM_NET_CREDENTIALCACHE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1B7624A0)
#define SYSTEM_NET_CREDENTIALCACHE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B762360)
#define SYSTEM_NET_CREDENTIALCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B761DA0)

namespace System::Net
{
	inline static constexpr unsigned int CredentialCache_TypeDefinitionIndex = 3265;

	class CredentialCache : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* cacheForHosts; // 0x10
		::System::Collections::Hashtable* cache; // 0x18
		::System::Int32 m_version; // 0x20
		::System::Int32 m_NumbDefaultCredInCache; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultInCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GET_ISDEFAULTINCACHE_OFFSET))(this);
		}

		::System::Void Add(::System::Uri* uriPrefix, ::System::String* authType, ::System::Net::NetworkCredential* cred)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Net::NetworkCredential*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_ADD_OFFSET))(this, uriPrefix, authType, cred);
		}

		::System::Void Add_1(::System::String* host, ::System::Int32 port, ::System::String* authenticationType, ::System::Net::NetworkCredential* credential)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Net::NetworkCredential*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_ADD_1_OFFSET))(this, host, port, authenticationType, credential);
		}

		::System::Void Remove(::System::Uri* uriPrefix, ::System::String* authType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_REMOVE_OFFSET))(this, uriPrefix, authType);
		}

		::System::Void Remove_1(::System::String* host, ::System::Int32 port, ::System::String* authenticationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_REMOVE_1_OFFSET))(this, host, port, authenticationType);
		}

		::System::Net::NetworkCredential* GetCredential(::System::Uri* uriPrefix, ::System::String* authType)
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GETCREDENTIAL_OFFSET))(this, uriPrefix, authType);
		}

		::System::Net::NetworkCredential* GetCredential_1(::System::String* host, ::System::Int32 port, ::System::String* authenticationType)
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GETCREDENTIAL_1_OFFSET))(this, host, port, authenticationType);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GETENUMERATOR_OFFSET))(this);
		}

		static ::System::Net::ICredentials* get_DefaultCredentials()
		{
			return ((::System::Net::ICredentials*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTCREDENTIALS_OFFSET))();
		}

		static ::System::Net::NetworkCredential* get_DefaultNetworkCredentials()
		{
			return ((::System::Net::NetworkCredential*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTNETWORKCREDENTIALS_OFFSET))();
		}
	};
}
