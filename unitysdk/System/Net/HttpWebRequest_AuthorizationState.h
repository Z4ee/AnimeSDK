#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/HttpWebRequest_NtlmAuthState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_CHECKAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x39D39F0)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x39D39A0)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_ISNTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x39D39B0)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_NTLMAUTHSTATE_OFFSET UNITYSDK_OFFSET(0x7A7E30)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x39D3A00)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39D3AF0)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x39D39D0)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest_AuthorizationState_TypeDefinitionIndex = 2852;

	struct alignas(8) HttpWebRequest_AuthorizationState
	{
		::System::Net::HttpWebRequest* request; // 0x10
		::System::Boolean isProxy; // 0x18
		::System::Boolean isCompleted; // 0x19
		::System::Net::HttpWebRequest_NtlmAuthState ntlm_auth_state; // 0x1C

		::System::Void _ctor(::System::Net::HttpWebRequest* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Net::HttpWebRequest_NtlmAuthState get_NtlmAuthState()
		{
			return ((::System::Net::HttpWebRequest_NtlmAuthState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_NTLMAUTHSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsNtlmAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_ISNTLMAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean CheckAuthorization(::System::Net::WebResponse* a1, ::System::Net::HttpStatusCode a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebResponse*, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_CHECKAUTHORIZATION_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_TOSTRING_OFFSET))(this);
		}
	};
}
