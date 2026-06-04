#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpConnection_InputState.h"
#include "unitysdk/System/Net/HttpConnection_LineState.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::IO { class MemoryStream; }
namespace System::IO { class Stream; }
namespace System::Net { class EndPointListener; }
namespace System::Net { class HttpListener; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ListenerPrefix; }
namespace System::Net { class RequestStream; }
namespace System::Net { class ResponseStream; }
namespace System::Net::Security { class SslStream; }
namespace System::Net::Sockets { class Socket; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }
namespace System::Text { class StringBuilder; }
namespace System::Threading { class Timer; }

#define SYSTEM_NET_HTTPCONNECTION_BEGINREADREQUEST_OFFSET UNITYSDK_OFFSET(0x1AF6B1E0)
#define SYSTEM_NET_HTTPCONNECTION_CLOSESOCKET_OFFSET UNITYSDK_OFFSET(0x1AF7E320)
#define SYSTEM_NET_HTTPCONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF6CCD0)
#define SYSTEM_NET_HTTPCONNECTION_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1AF7E4E0)
#define SYSTEM_NET_HTTPCONNECTION_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1AF7E7C0)
#define SYSTEM_NET_HTTPCONNECTION_GET_ISSECURE_OFFSET UNITYSDK_OFFSET(0x1AF7E2A0)
#define SYSTEM_NET_HTTPCONNECTION_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1AF7E230)
#define SYSTEM_NET_HTTPCONNECTION_GET_REUSES_OFFSET UNITYSDK_OFFSET(0x1AF7E220)
#define SYSTEM_NET_HTTPCONNECTION_INIT_OFFSET UNITYSDK_OFFSET(0x1AF7E000)
#define SYSTEM_NET_HTTPCONNECTION_ONREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF7E9F0)
#define SYSTEM_NET_HTTPCONNECTION_ONREAD_OFFSET UNITYSDK_OFFSET(0x1AF7E8F0)
#define SYSTEM_NET_HTTPCONNECTION_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AF7E2C0)
#define SYSTEM_NET_HTTPCONNECTION_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0x1AF7F0B0)
#define SYSTEM_NET_HTTPCONNECTION_READLINE_OFFSET UNITYSDK_OFFSET(0x1AF80370)
#define SYSTEM_NET_HTTPCONNECTION_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1AF7FEA0)
#define SYSTEM_NET_HTTPCONNECTION_SENDERROR_1_OFFSET UNITYSDK_OFFSET(0x1AF7F080)
#define SYSTEM_NET_HTTPCONNECTION_SENDERROR_OFFSET UNITYSDK_OFFSET(0x1AF7EE70)
#define SYSTEM_NET_HTTPCONNECTION_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1AF7E2B0)
#define SYSTEM_NET_HTTPCONNECTION_UNBIND_OFFSET UNITYSDK_OFFSET(0x1AF7E480)
#define SYSTEM_NET_HTTPCONNECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF82480)
#define SYSTEM_NET_HTTPCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6ADF0)
#define SYSTEM_NET_HTTPCONNECTION___CTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x1AF82500)

namespace System::Net
{
	inline static constexpr unsigned int HttpConnection_TypeDefinitionIndex = 2835;

	class HttpConnection : public ::System::Object
	{
	public:
		static ::System::AsyncCallback** StaticGet_onread_cb()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(HttpConnection_TypeDefinitionIndex)->GetStaticField(0x24D60);
		}
		::System::Threading::Timer* timer; // 0x10
		::System::Net::Security::SslStream* ssl_stream; // 0x18
		::System::Net::RequestStream* i_stream; // 0x20
		::System::IO::MemoryStream* ms; // 0x28
		::System::Net::ListenerPrefix* prefix; // 0x30
		::System::Security::Cryptography::X509Certificates::X509Certificate2* client_cert; // 0x38
		::System::Net::HttpListener* last_listener; // 0x40
		::System::Net::Sockets::Socket* sock; // 0x48
		::System::IO::Stream* stream; // 0x50
		::System::Net::IPEndPoint* local_ep; // 0x58
		::System::Net::EndPointListener* epl; // 0x60
		::Il2CppArray<::System::Byte>* buffer; // 0x68
		::Il2CppArray<::System::Int32>* client_cert_errors; // 0x70
		::System::Net::ResponseStream* o_stream; // 0x78
		::System::Security::Cryptography::X509Certificates::X509Certificate* cert; // 0x80
		::System::Net::HttpListenerContext* context; // 0x88
		::System::Text::StringBuilder* current_line; // 0x90
		::System::Net::HttpConnection_InputState input_state; // 0x98
		::System::Int32 reuses; // 0x9C
		::System::Boolean context_bound; // 0xA0
		::System::Boolean chunked; // 0xA1
		::System::Boolean secure; // 0xA2
		::System::Net::HttpConnection_LineState line_state; // 0xA4
		::System::Int32 position; // 0xA8
		::System::Int32 s_timeout; // 0xAC

		::System::Void _ctor(::System::Net::Sockets::Socket* a1, ::System::Net::EndPointListener* a2, ::System::Boolean a3, ::System::Security::Cryptography::X509Certificates::X509Certificate* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Net::EndPointListener*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_INIT_OFFSET))(this);
		}

		::System::Int32 get_Reuses()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_REUSES_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Boolean get_IsSecure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_ISSECURE_OFFSET))(this);
		}

		::System::Void set_Prefix(::System::Net::ListenerPrefix* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ListenerPrefix*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_SET_PREFIX_OFFSET))(this, a1);
		}

		::System::Void OnTimeout(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_ONTIMEOUT_OFFSET))(this, a1);
		}

		::System::Void BeginReadRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_BEGINREADREQUEST_OFFSET))(this);
		}

		::System::Net::RequestStream* GetRequestStream(::System::Boolean a1, ::System::Int64 a2)
		{
			return ((::System::Net::RequestStream*(*)(::PVOID, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GETREQUESTSTREAM_OFFSET))(this, a1, a2);
		}

		::System::Net::ResponseStream* GetResponseStream()
		{
			return ((::System::Net::ResponseStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GETRESPONSESTREAM_OFFSET))(this);
		}

		static ::System::Void OnRead(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_ONREAD_OFFSET))(a1);
		}

		::System::Void OnReadInternal(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_ONREADINTERNAL_OFFSET))(this, a1);
		}

		::System::Void RemoveConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_REMOVECONNECTION_OFFSET))(this);
		}

		::System::Boolean ProcessInput(::System::IO::MemoryStream* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_PROCESSINPUT_OFFSET))(this, a1);
		}

		::System::String* ReadLine(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_READLINE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SendError(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_SENDERROR_OFFSET))(this, a1, a2);
		}

		::System::Void SendError_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_SENDERROR_1_OFFSET))(this);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_UNBIND_OFFSET))(this);
		}

		::System::Void CloseSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_CLOSESOCKET_OFFSET))(this);
		}

		::System::Void Close(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_CLOSE_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__24_0(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION___CTOR_B__24_0_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
