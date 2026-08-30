#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/AuthenticationSchemes.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class HttpConnection; }
namespace System::Net { class HttpListener; }
namespace System::Net { class HttpListenerRequest; }
namespace System::Net { class HttpListenerResponse; }
namespace System::Security::Principal { class IPrincipal; }

#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1B031870)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B031850)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORSTATUS_OFFSET UNITYSDK_OFFSET(0x1B031830)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_HAVEERROR_OFFSET UNITYSDK_OFFSET(0x1B02A9E0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1B031880)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1B031890)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1B031390)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEBASICAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1B0318A0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B031860)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORSTATUS_OFFSET UNITYSDK_OFFSET(0x1B031840)
#define SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B029370)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerContext_TypeDefinitionIndex = 2851;

	class HttpListenerContext : public ::System::Object
	{
	public:
		::System::Net::HttpConnection* cnc; // 0x10
		::System::String* error; // 0x18
		::System::Net::HttpListenerResponse* response; // 0x20
		::System::Net::HttpListener* Listener; // 0x28
		::System::Security::Principal::IPrincipal* user; // 0x30
		::System::Net::HttpListenerRequest* request; // 0x38
		::System::Int32 err_status; // 0x40

		::System::Void _ctor(::System::Net::HttpConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ErrorStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORSTATUS_OFFSET))(this);
		}

		::System::Void set_ErrorStatus(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORSTATUS_OFFSET))(this, a1);
		}

		::System::String* get_ErrorMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORMESSAGE_OFFSET))(this);
		}

		::System::Void set_ErrorMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HaveError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_HAVEERROR_OFFSET))(this);
		}

		::System::Net::HttpConnection* get_Connection()
		{
			return ((::System::Net::HttpConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_CONNECTION_OFFSET))(this);
		}

		::System::Net::HttpListenerRequest* get_Request()
		{
			return ((::System::Net::HttpListenerRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_REQUEST_OFFSET))(this);
		}

		::System::Net::HttpListenerResponse* get_Response()
		{
			return ((::System::Net::HttpListenerResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_RESPONSE_OFFSET))(this);
		}

		::System::Void ParseAuthentication(::System::Net::AuthenticationSchemes a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::AuthenticationSchemes))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEAUTHENTICATION_OFFSET))(this, a1);
		}

		::System::Security::Principal::IPrincipal* ParseBasicAuthentication(::System::String* a1)
		{
			return ((::System::Security::Principal::IPrincipal*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEBASICAUTHENTICATION_OFFSET))(this, a1);
		}
	};
}
