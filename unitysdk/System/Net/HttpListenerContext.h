#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/AuthenticationSchemes.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Net { class HttpConnection; }
namespace System::Net { class HttpListener; }
namespace System::Net { class HttpListenerRequest; }
namespace System::Net { class HttpListenerResponse; }
namespace System::Net::WebSockets { class HttpListenerWebSocketContext; }
namespace System::Security::Principal { class IPrincipal; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_1_OFFSET UNITYSDK_OFFSET(0x1DD1B190)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_2_OFFSET UNITYSDK_OFFSET(0x1DD1B1E0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_3_OFFSET UNITYSDK_OFFSET(0x1DD1B230)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_OFFSET UNITYSDK_OFFSET(0x1DD1B140)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1DD1AD10)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DD1ACE0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_ERRORSTATUS_OFFSET UNITYSDK_OFFSET(0x1DD1ACC0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_HAVEERROR_OFFSET UNITYSDK_OFFSET(0x1DD1AD00)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1DD1AD20)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1DD1AD30)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_GET_USER_OFFSET UNITYSDK_OFFSET(0x1DD1AD40)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1DD1AD50)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEBASICAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1DD1AEF0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DD1ACF0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT_SET_ERRORSTATUS_OFFSET UNITYSDK_OFFSET(0x1DD1ACD0)
#define SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD1B280)
#define SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1AC40)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerContext_TypeDefinitionIndex = 3525;

	class HttpListenerContext : public ::System::Object
	{
	public:
		::System::Net::HttpConnection* cnc; // 0x10
		::System::String* error; // 0x18
		::System::Net::HttpListenerResponse* response; // 0x20
		::System::Net::HttpListenerRequest* request; // 0x28
		::System::Net::HttpListener* Listener; // 0x30
		::System::Security::Principal::IPrincipal* user; // 0x38
		::System::Int32 err_status; // 0x40

		::System::Void _ctor(::System::Net::HttpConnection* cnc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_OFFSET))(this, cnc);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT__CTOR_1_OFFSET))(this);
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

		::System::Security::Principal::IPrincipal* get_User()
		{
			return ((::System::Security::Principal::IPrincipal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_GET_USER_OFFSET))(this);
		}

		::System::Void ParseAuthentication(::System::Net::AuthenticationSchemes expectedSchemes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::AuthenticationSchemes))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEAUTHENTICATION_OFFSET))(this, expectedSchemes);
		}

		::System::Security::Principal::IPrincipal* ParseBasicAuthentication(::System::String* authData)
		{
			return ((::System::Security::Principal::IPrincipal*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_PARSEBASICAUTHENTICATION_OFFSET))(this, authData);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>* AcceptWebSocketAsync(::System::String* subProtocol)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_OFFSET))(this, subProtocol);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>* AcceptWebSocketAsync_1(::System::String* subProtocol, ::System::TimeSpan keepAliveInterval)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>*(*)(::PVOID, ::System::String*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_1_OFFSET))(this, subProtocol, keepAliveInterval);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>* AcceptWebSocketAsync_2(::System::String* subProtocol, ::System::Int32 receiveBufferSize, ::System::TimeSpan keepAliveInterval)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_2_OFFSET))(this, subProtocol, receiveBufferSize, keepAliveInterval);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>* AcceptWebSocketAsync_3(::System::String* subProtocol, ::System::Int32 receiveBufferSize, ::System::TimeSpan keepAliveInterval, ::System::ArraySegment_1<::System::Byte> internalBuffer)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::HttpListenerWebSocketContext*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::TimeSpan, ::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERCONTEXT_ACCEPTWEBSOCKETASYNC_3_OFFSET))(this, subProtocol, receiveBufferSize, keepAliveInterval, internalBuffer);
		}
	};
}
