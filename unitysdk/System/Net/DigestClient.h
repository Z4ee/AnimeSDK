#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_DIGESTCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1E96A890)
#define SYSTEM_NET_DIGESTCLIENT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x1E969A10)
#define SYSTEM_NET_DIGESTCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E96B7D0)
#define SYSTEM_NET_DIGESTCLIENT_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1E969790)
#define SYSTEM_NET_DIGESTCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1E96B580)
#define SYSTEM_NET_DIGESTCLIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96B820)
#define SYSTEM_NET_DIGESTCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96B810)

namespace System::Net
{
	inline static constexpr unsigned int DigestClient_TypeDefinitionIndex = 2831;

	class DigestClient : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_cache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DigestClient_TypeDefinitionIndex)->GetStaticField(0x1A6C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT__CCTOR_OFFSET))();
		}

		static ::System::Collections::Hashtable* get_Cache()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_GET_CACHE_OFFSET))();
		}

		static ::System::Void CheckExpired(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_CHECKEXPIRED_OFFSET))(a1);
		}

		::System::Net::Authorization* Authenticate(::System::String* a1, ::System::Net::WebRequest* a2, ::System::Net::ICredentials* a3)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_AUTHENTICATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* a1, ::System::Net::ICredentials* a2)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_PREAUTHENTICATE_OFFSET))(this, a1, a2);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}
	};
}
