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

#define SYSTEM_NET_HTTPCONNECTION_BEGINREADREQUEST_OFFSET UNITYSDK_OFFSET(0x1D402AF0)
#define SYSTEM_NET_HTTPCONNECTION_CLOSESOCKET_OFFSET UNITYSDK_OFFSET(0x1D4029B0)
#define SYSTEM_NET_HTTPCONNECTION_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1D4037D0)
#define SYSTEM_NET_HTTPCONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D404680)
#define SYSTEM_NET_HTTPCONNECTION_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D402CA0)
#define SYSTEM_NET_HTTPCONNECTION_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1D402F10)
#define SYSTEM_NET_HTTPCONNECTION_GET_CLIENTCERTIFICATEERRORS_OFFSET UNITYSDK_OFFSET(0x1D402790)
#define SYSTEM_NET_HTTPCONNECTION_GET_CLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D4027A0)
#define SYSTEM_NET_HTTPCONNECTION_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x1D4027B0)
#define SYSTEM_NET_HTTPCONNECTION_GET_ISSECURE_OFFSET UNITYSDK_OFFSET(0x1D402920)
#define SYSTEM_NET_HTTPCONNECTION_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1D4027D0)
#define SYSTEM_NET_HTTPCONNECTION_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1D402930)
#define SYSTEM_NET_HTTPCONNECTION_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1D4028A0)
#define SYSTEM_NET_HTTPCONNECTION_GET_REUSES_OFFSET UNITYSDK_OFFSET(0x1D4027C0)
#define SYSTEM_NET_HTTPCONNECTION_GET_SSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1D402780)
#define SYSTEM_NET_HTTPCONNECTION_INIT_OFFSET UNITYSDK_OFFSET(0x1D402600)
#define SYSTEM_NET_HTTPCONNECTION_ONREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D403160)
#define SYSTEM_NET_HTTPCONNECTION_ONREAD_OFFSET UNITYSDK_OFFSET(0x1D403070)
#define SYSTEM_NET_HTTPCONNECTION_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D402950)
#define SYSTEM_NET_HTTPCONNECTION_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0x1D403DA0)
#define SYSTEM_NET_HTTPCONNECTION_READLINE_OFFSET UNITYSDK_OFFSET(0x1D4040F0)
#define SYSTEM_NET_HTTPCONNECTION_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1D4040A0)
#define SYSTEM_NET_HTTPCONNECTION_SENDERROR_1_OFFSET UNITYSDK_OFFSET(0x1D403D70)
#define SYSTEM_NET_HTTPCONNECTION_SENDERROR_OFFSET UNITYSDK_OFFSET(0x1D403590)
#define SYSTEM_NET_HTTPCONNECTION_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1D402940)
#define SYSTEM_NET_HTTPCONNECTION_UNBIND_OFFSET UNITYSDK_OFFSET(0x1D402AA0)
#define SYSTEM_NET_HTTPCONNECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D404690)
#define SYSTEM_NET_HTTPCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4022B0)
#define SYSTEM_NET_HTTPCONNECTION___CTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x1D4046F0)

namespace System::Net
{
	inline static constexpr unsigned int HttpConnection_TypeDefinitionIndex = 3519;

	class HttpConnection : public ::System::Object
	{
	public:
		static ::System::AsyncCallback** StaticGet_onread_cb()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(HttpConnection_TypeDefinitionIndex)->GetStaticField(0x2E80);
		}
		// static const ::System::Int32 BufferSize = 0x2000; // 0x0
		::System::Net::HttpListener* last_listener; // 0x10
		::System::Net::RequestStream* i_stream; // 0x18
		::Il2CppArray<::System::Byte>* buffer; // 0x20
		::System::Net::IPEndPoint* local_ep; // 0x28
		::Il2CppArray<::System::Int32>* client_cert_errors; // 0x30
		::System::Text::StringBuilder* current_line; // 0x38
		::System::Net::ResponseStream* o_stream; // 0x40
		::System::Security::Cryptography::X509Certificates::X509Certificate2* client_cert; // 0x48
		::System::Security::Cryptography::X509Certificates::X509Certificate* cert; // 0x50
		::System::Net::ListenerPrefix* prefix; // 0x58
		::System::Net::HttpListenerContext* context; // 0x60
		::System::IO::MemoryStream* ms; // 0x68
		::System::Threading::Timer* timer; // 0x70
		::System::Net::EndPointListener* epl; // 0x78
		::System::Net::Security::SslStream* ssl_stream; // 0x80
		::System::Net::Sockets::Socket* sock; // 0x88
		::System::IO::Stream* stream; // 0x90
		::System::Int32 reuses; // 0x98
		::System::Boolean context_bound; // 0x9C
		::System::Boolean secure; // 0x9D
		::System::Boolean chunked; // 0x9E
		::System::Net::HttpConnection_LineState line_state; // 0xA0
		::System::Net::HttpConnection_InputState input_state; // 0xA4
		::System::Int32 position; // 0xA8
		::System::Int32 s_timeout; // 0xAC

		::System::Void _ctor(::System::Net::Sockets::Socket* sock, ::System::Net::EndPointListener* epl, ::System::Boolean secure, ::System::Security::Cryptography::X509Certificates::X509Certificate* cert)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Net::EndPointListener*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION__CTOR_OFFSET))(this, sock, epl, secure, cert);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION__CCTOR_OFFSET))();
		}

		::System::Net::Security::SslStream* get_SslStream()
		{
			return ((::System::Net::Security::SslStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_SSLSTREAM_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_ClientCertificateErrors()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_CLIENTCERTIFICATEERRORS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_ClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_CLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_INIT_OFFSET))(this);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_ISCLOSED_OFFSET))(this);
		}

		::System::Int32 get_Reuses()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_REUSES_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Boolean get_IsSecure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_ISSECURE_OFFSET))(this);
		}

		::System::Net::ListenerPrefix* get_Prefix()
		{
			return ((::System::Net::ListenerPrefix*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GET_PREFIX_OFFSET))(this);
		}

		::System::Void set_Prefix(::System::Net::ListenerPrefix* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ListenerPrefix*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_SET_PREFIX_OFFSET))(this, value);
		}

		::System::Void OnTimeout(::System::Object* unused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_ONTIMEOUT_OFFSET))(this, unused);
		}

		::System::Void BeginReadRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_BEGINREADREQUEST_OFFSET))(this);
		}

		::System::Net::RequestStream* GetRequestStream(::System::Boolean chunked, ::System::Int64 contentlength)
		{
			return ((::System::Net::RequestStream*(*)(::PVOID, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GETREQUESTSTREAM_OFFSET))(this, chunked, contentlength);
		}

		::System::Net::ResponseStream* GetResponseStream()
		{
			return ((::System::Net::ResponseStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_GETRESPONSESTREAM_OFFSET))(this);
		}

		static ::System::Void OnRead(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_ONREAD_OFFSET))(ares);
		}

		::System::Void OnReadInternal(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_ONREADINTERNAL_OFFSET))(this, ares);
		}

		::System::Void RemoveConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_REMOVECONNECTION_OFFSET))(this);
		}

		::System::Boolean ProcessInput(::System::IO::MemoryStream* ms)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_PROCESSINPUT_OFFSET))(this, ms);
		}

		::System::String* ReadLine(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 len, ::System::Int32& used)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_READLINE_OFFSET))(this, buffer, offset, len, used);
		}

		::System::Void SendError(::System::String* msg, ::System::Int32 status)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_SENDERROR_OFFSET))(this, msg, status);
		}

		::System::Void SendError_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_SENDERROR_1_OFFSET))(this);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_UNBIND_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_CLOSE_OFFSET))(this);
		}

		::System::Void CloseSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_CLOSESOCKET_OFFSET))(this);
		}

		::System::Void Close_1(::System::Boolean force_close)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION_CLOSE_1_OFFSET))(this, force_close);
		}

		::System::Boolean __ctor_b__24_0(::System::Object* t, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::System::Net::Security::SslPolicyErrors e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONNECTION___CTOR_B__24_0_OFFSET))(this, t, c, ch, e);
		}
	};
}
