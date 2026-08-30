#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebConnection_NtlmAuthState.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net::Security { class MonoTlsStream; }
namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Queue; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class IWebConnectionState; }
namespace System::Net { class MonoChunkStream; }
namespace System::Net { class NetworkCredential; }
namespace System::Net { class ServicePoint; }
namespace System::Net { class WebConnectionData; }
namespace System::Net { class WebConnection_AbortHelper; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_WEBCONNECTION_ABORT_OFFSET UNITYSDK_OFFSET(0x1E9CF060)
#define SYSTEM_NET_WEBCONNECTION_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1E9CD0B0)
#define SYSTEM_NET_WEBCONNECTION_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1E9CDF10)
#define SYSTEM_NET_WEBCONNECTION_CANREUSE_OFFSET UNITYSDK_OFFSET(0x1E9C6BE0)
#define SYSTEM_NET_WEBCONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E9C9DE0)
#define SYSTEM_NET_WEBCONNECTION_COMPLETECHUNKEDREAD_OFFSET UNITYSDK_OFFSET(0x1E9C7220)
#define SYSTEM_NET_WEBCONNECTION_CONNECT_OFFSET UNITYSDK_OFFSET(0x1E9C6C10)
#define SYSTEM_NET_WEBCONNECTION_CREATESTREAM_OFFSET UNITYSDK_OFFSET(0x1E9C9A80)
#define SYSTEM_NET_WEBCONNECTION_CREATETUNNEL_OFFSET UNITYSDK_OFFSET(0x1E9C7380)
#define SYSTEM_NET_WEBCONNECTION_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1E9CD530)
#define SYSTEM_NET_WEBCONNECTION_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1E9CE3E0)
#define SYSTEM_NET_WEBCONNECTION_ENSUREREAD_OFFSET UNITYSDK_OFFSET(0x1E9CDD70)
#define SYSTEM_NET_WEBCONNECTION_EXPECTCONTENT_OFFSET UNITYSDK_OFFSET(0x1E9CBC10)
#define SYSTEM_NET_WEBCONNECTION_FLUSHCONTENTS_OFFSET UNITYSDK_OFFSET(0x1E9C9370)
#define SYSTEM_NET_WEBCONNECTION_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E9CA950)
#define SYSTEM_NET_WEBCONNECTION_GET_NTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1E9CF8A0)
#define SYSTEM_NET_WEBCONNECTION_GET_NTLMCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9CF8C0)
#define SYSTEM_NET_WEBCONNECTION_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x1E9CF8E0)
#define SYSTEM_NET_WEBCONNECTION_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x1E9C9120)
#define SYSTEM_NET_WEBCONNECTION_INITCONNECTION_OFFSET UNITYSDK_OFFSET(0x1E9CC130)
#define SYSTEM_NET_WEBCONNECTION_INITREAD_OFFSET UNITYSDK_OFFSET(0x1E9CB6C0)
#define SYSTEM_NET_WEBCONNECTION_NEXTREAD_OFFSET UNITYSDK_OFFSET(0x1E9CCA40)
#define SYSTEM_NET_WEBCONNECTION_READDONE_OFFSET UNITYSDK_OFFSET(0x1E9CA290)
#define SYSTEM_NET_WEBCONNECTION_READHEADERS_OFFSET UNITYSDK_OFFSET(0x1E9C82C0)
#define SYSTEM_NET_WEBCONNECTION_READLINE_OFFSET UNITYSDK_OFFSET(0x1E9C9760)
#define SYSTEM_NET_WEBCONNECTION_READ_OFFSET UNITYSDK_OFFSET(0x1E9CE770)
#define SYSTEM_NET_WEBCONNECTION_RESETNTLM_OFFSET UNITYSDK_OFFSET(0x1E9CF040)
#define SYSTEM_NET_WEBCONNECTION_SENDNEXT_OFFSET UNITYSDK_OFFSET(0x1E9CC820)
#define SYSTEM_NET_WEBCONNECTION_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1E9AFF40)
#define SYSTEM_NET_WEBCONNECTION_SET_NTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1E9CF8B0)
#define SYSTEM_NET_WEBCONNECTION_SET_NTLMCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9CF8D0)
#define SYSTEM_NET_WEBCONNECTION_SET_PRIORITYREQUEST_OFFSET UNITYSDK_OFFSET(0x1E9CF890)
#define SYSTEM_NET_WEBCONNECTION_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x1E9CF8F0)
#define SYSTEM_NET_WEBCONNECTION_WRITE_OFFSET UNITYSDK_OFFSET(0x1E9CECC0)
#define SYSTEM_NET_WEBCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6AE0)
#define SYSTEM_NET_WEBCONNECTION__SENDREQUEST_B__41_0_OFFSET UNITYSDK_OFFSET(0x1E9CF900)

namespace System::Net
{
	inline static constexpr unsigned int WebConnection_TypeDefinitionIndex = 2882;

	class WebConnection : public ::System::Object
	{
	public:
		::System::EventHandler* abortHandler; // 0x10
		::System::Net::Sockets::Socket* socket; // 0x18
		::Mono::Net::Security::MonoTlsStream* tlsStream; // 0x20
		::System::Net::IWebConnectionState* state; // 0x28
		::System::Net::NetworkCredential* ntlm_credentials; // 0x30
		::Il2CppArray<::System::Byte>* buffer; // 0x38
		::System::Collections::Queue* queue; // 0x40
		::System::Object* socketLock; // 0x48
		::System::IO::Stream* nstream; // 0x50
		::System::Net::HttpWebRequest* connect_request; // 0x58
		::System::Net::WebConnectionData* Data; // 0x60
		::System::Net::HttpWebRequest* priority_request; // 0x68
		::System::Net::ServicePoint* sPoint; // 0x70
		::System::Net::WebConnection_AbortHelper* abortHelper; // 0x78
		::System::Exception* connect_exception; // 0x80
		::System::Net::MonoChunkStream* chunkStream; // 0x88
		::System::Net::WebExceptionStatus status; // 0x90
		::System::Net::WebConnection_NtlmAuthState connect_ntlm_auth_state; // 0x94
		::System::Boolean keepAlive; // 0x98
		::System::Boolean chunkedRead; // 0x99
		::System::Boolean ntlm_authenticated; // 0x9A
		::System::Int32 position; // 0x9C
		::System::Boolean reused; // 0xA0
		::System::Boolean unsafe_sharing; // 0xA1

		::System::Void _ctor(::System::Net::IWebConnectionState* a1, ::System::Net::ServicePoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebConnectionState*, ::System::Net::ServicePoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanReuse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CANREUSE_OFFSET))(this);
		}

		::System::Void Connect(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CONNECT_OFFSET))(this, a1);
		}

		::System::Boolean CreateTunnel(::System::Net::HttpWebRequest* a1, ::System::Uri* a2, ::System::IO::Stream* a3, ::Il2CppArray<::System::Byte>*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Uri*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CREATETUNNEL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Net::WebHeaderCollection* ReadHeaders(::System::IO::Stream* a1, ::Il2CppArray<::System::Byte>*& a2, ::System::Int32& a3)
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READHEADERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FlushContents(::System::IO::Stream* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_FLUSHCONTENTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean CreateStream(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CREATESTREAM_OFFSET))(this, a1);
		}

		::System::Void HandleError(::System::Net::WebExceptionStatus a1, ::System::Exception* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebExceptionStatus, ::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_HANDLEERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReadDone(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READDONE_OFFSET))(this, a1);
		}

		static ::System::Boolean ExpectContent(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_EXPECTCONTENT_OFFSET))(a1, a2);
		}

		::System::Void InitRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_INITREAD_OFFSET))(this);
		}

		static ::System::Int32 GetResponse(::System::Net::WebConnectionData* a1, ::System::Net::ServicePoint* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Net::WebConnectionData*, ::System::Net::ServicePoint*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GETRESPONSE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void InitConnection(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_INITCONNECTION_OFFSET))(this, a1);
		}

		::System::EventHandler* SendRequest(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::EventHandler*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SENDREQUEST_OFFSET))(this, a1);
		}

		::System::Void SendNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SENDNEXT_OFFSET))(this);
		}

		::System::Void NextRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_NEXTREAD_OFFSET))(this);
		}

		static ::System::Boolean ReadLine(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::String*& a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READLINE_OFFSET))(a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginRead(::System::Net::HttpWebRequest* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndRead(::System::Net::HttpWebRequest* a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ENDREAD_OFFSET))(this, a1, a2);
		}

		::System::Int32 EnsureRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ENSUREREAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CompleteChunkedRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_COMPLETECHUNKEDREAD_OFFSET))(this);
		}

		::System::IAsyncResult* BeginWrite(::System::Net::HttpWebRequest* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndWrite(::System::Net::HttpWebRequest* a1, ::System::Boolean a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Boolean, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ENDWRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Read(::System::Net::HttpWebRequest* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Write(::System::Net::HttpWebRequest* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String*& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_WRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Close(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CLOSE_OFFSET))(this, a1);
		}

		::System::Void Abort(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ABORT_OFFSET))(this, a1, a2);
		}

		::System::Void ResetNtlm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_RESETNTLM_OFFSET))(this);
		}

		::System::Void set_PriorityRequest(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_PRIORITYREQUEST_OFFSET))(this, a1);
		}

		::System::Boolean get_NtlmAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_NTLMAUTHENTICATED_OFFSET))(this);
		}

		::System::Void set_NtlmAuthenticated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_NTLMAUTHENTICATED_OFFSET))(this, a1);
		}

		::System::Net::NetworkCredential* get_NtlmCredential()
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_NTLMCREDENTIAL_OFFSET))(this);
		}

		::System::Void set_NtlmCredential(::System::Net::NetworkCredential* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_NTLMCREDENTIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_UnsafeAuthenticatedConnectionSharing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this);
		}

		::System::Void set_UnsafeAuthenticatedConnectionSharing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this, a1);
		}

		::System::Void _SendRequest_b__41_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION__SENDREQUEST_B__41_0_OFFSET))(this, a1);
		}
	};
}
