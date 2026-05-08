#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class IAuthenticationModule; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_NTLMCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1B1EF310)
#define SYSTEM_NET_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B1EF420)
#define SYSTEM_NET_NTLMCLIENT_GET_CANPREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1B1EF460)
#define SYSTEM_NET_NTLMCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1B1EF410)
#define SYSTEM_NET_NTLMCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EF2D0)

namespace System::Net
{
	inline static constexpr unsigned int NtlmClient_TypeDefinitionIndex = 3551;

	class NtlmClient : public ::System::Object
	{
	public:
		::System::Net::IAuthenticationModule* authObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT__CTOR_OFFSET))(this);
		}

		::System::Net::Authorization* Authenticate(::System::String* challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_AUTHENTICATE_OFFSET))(this, challenge, webRequest, credentials);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_PREAUTHENTICATE_OFFSET))(this, webRequest, credentials);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_CanPreAuthenticate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_GET_CANPREAUTHENTICATE_OFFSET))(this);
		}
	};
}
