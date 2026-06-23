#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class IAuthenticationModule; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_NTLMCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D5D6DF0)
#define SYSTEM_NET_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D5D6F00)
#define SYSTEM_NET_NTLMCLIENT_GET_CANPREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D5D6F40)
#define SYSTEM_NET_NTLMCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D5D6EF0)
#define SYSTEM_NET_NTLMCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6DB0)

namespace System::Net
{
	inline static constexpr unsigned int NtlmClient_TypeDefinitionIndex = 3550;

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
