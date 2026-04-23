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

#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1A120B20)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A120B00)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORSTATUS_OFFSET UNITYSDK_OFFSET(0x1A120AE0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_HAVEERROR_OFFSET UNITYSDK_OFFSET(0x1A11AB20)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1A120B30)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1A120B40)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1A120680)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEBASICAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1A120B50)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A120B10)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORSTATUS_OFFSET UNITYSDK_OFFSET(0x1A120AF0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A119870)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerContext_TypeDefinitionIndex = 2840;

	class HttpListenerContext : public ::System::Object
	{
	public:
		::System::Net::HttpListener* Listener; // 0x10
		::System::Net::HttpListenerResponse* response; // 0x18
		::System::String* error; // 0x20
		::System::Security::Principal::IPrincipal* user; // 0x28
		::System::Net::HttpListenerRequest* request; // 0x30
		::System::Net::HttpConnection* cnc; // 0x38
		::System::Int32 err_status; // 0x40

		::System::Void _ctor(::System::Net::HttpConnection* cnc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_OFFSET))(this, cnc);
		}

		::System::Int32 get_ErrorStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORSTATUS_OFFSET))(this);
		}

		::System::Void set_ErrorStatus(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORSTATUS_OFFSET))(this, value);
		}

		::System::String* get_ErrorMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORMESSAGE_OFFSET))(this);
		}

		::System::Void set_ErrorMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORMESSAGE_OFFSET))(this, value);
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

		::System::Void ParseAuthentication(::System::Net::AuthenticationSchemes expectedSchemes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::AuthenticationSchemes))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEAUTHENTICATION_OFFSET))(this, expectedSchemes);
		}

		::System::Security::Principal::IPrincipal* ParseBasicAuthentication(::System::String* authData)
		{
			return ((::System::Security::Principal::IPrincipal*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEBASICAUTHENTICATION_OFFSET))(this, authData);
		}
	};
}
