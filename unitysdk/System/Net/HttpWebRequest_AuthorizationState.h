#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/HttpWebRequest_NtlmAuthState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_CHECKAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x21018D0)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x20CF690)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_ISNTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x2101890)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_GET_NTLMAUTHSTATE_OFFSET UNITYSDK_OFFSET(0x793A0)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x21018E0)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2101970)
#define SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x21018B0)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest_AuthorizationState_TypeDefinitionIndex = 2847;

	struct alignas(8) HttpWebRequest_AuthorizationState
	{
		::System::Net::HttpWebRequest* request; // 0x10
		::System::Boolean isProxy; // 0x18
		::System::Boolean isCompleted; // 0x19
		::System::Net::HttpWebRequest_NtlmAuthState ntlm_auth_state; // 0x1C

		::System::Void _ctor(::System::Net::HttpWebRequest* request, ::System::Boolean isProxy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE__CTOR_OFFSET))(this, request, isProxy);
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

		::System::Boolean CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebResponse*, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_AUTHORIZATIONSTATE_CHECKAUTHORIZATION_OFFSET))(this, response, code);
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
