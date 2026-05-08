#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_DIGESTCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x19BB5A40)
#define SYSTEM_NET_DIGESTCLIENT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x19BB50D0)
#define SYSTEM_NET_DIGESTCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x19BB5E80)
#define SYSTEM_NET_DIGESTCLIENT_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x19BB4F30)
#define SYSTEM_NET_DIGESTCLIENT_GET_CANPREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x19BB5EC0)
#define SYSTEM_NET_DIGESTCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x19BB5D10)
#define SYSTEM_NET_DIGESTCLIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BB5EE0)
#define SYSTEM_NET_DIGESTCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB5ED0)

namespace System::Net
{
	inline static constexpr unsigned int DigestClient_TypeDefinitionIndex = 3501;

	class DigestClient : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_cache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DigestClient_TypeDefinitionIndex)->GetStaticField(0x3A30);
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

		static ::System::Void CheckExpired(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_CHECKEXPIRED_OFFSET))(count);
		}

		::System::Net::Authorization* Authenticate(::System::String* challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_AUTHENTICATE_OFFSET))(this, challenge, webRequest, credentials);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_PREAUTHENTICATE_OFFSET))(this, webRequest, credentials);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_CanPreAuthenticate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_GET_CANPREAUTHENTICATE_OFFSET))(this);
		}
	};
}
