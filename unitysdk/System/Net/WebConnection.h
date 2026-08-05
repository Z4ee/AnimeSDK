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

#define SYSTEM_NET_WEBCONNECTION_ABORT_OFFSET UNITYSDK_OFFSET(0x1CC22EB0)
#define SYSTEM_NET_WEBCONNECTION_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1CC21120)
#define SYSTEM_NET_WEBCONNECTION_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1CC21E50)
#define SYSTEM_NET_WEBCONNECTION_CANREUSE_OFFSET UNITYSDK_OFFSET(0x1CC1C680)
#define SYSTEM_NET_WEBCONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x1CC1EA30)
#define SYSTEM_NET_WEBCONNECTION_COMPLETECHUNKEDREAD_OFFSET UNITYSDK_OFFSET(0x1CC1CD60)
#define SYSTEM_NET_WEBCONNECTION_CONNECT_OFFSET UNITYSDK_OFFSET(0x1CC1C6B0)
#define SYSTEM_NET_WEBCONNECTION_CREATESTREAM_OFFSET UNITYSDK_OFFSET(0x1CC1E780)
#define SYSTEM_NET_WEBCONNECTION_CREATETUNNEL_OFFSET UNITYSDK_OFFSET(0x1CC1CE20)
#define SYSTEM_NET_WEBCONNECTION_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1CC215A0)
#define SYSTEM_NET_WEBCONNECTION_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1CC222C0)
#define SYSTEM_NET_WEBCONNECTION_ENSUREREAD_OFFSET UNITYSDK_OFFSET(0x1CC21D00)
#define SYSTEM_NET_WEBCONNECTION_EXPECTCONTENT_OFFSET UNITYSDK_OFFSET(0x1CC201E0)
#define SYSTEM_NET_WEBCONNECTION_FLUSHCONTENTS_OFFSET UNITYSDK_OFFSET(0x1CC1E4F0)
#define SYSTEM_NET_WEBCONNECTION_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1CC1F3F0)
#define SYSTEM_NET_WEBCONNECTION_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1CC23350)
#define SYSTEM_NET_WEBCONNECTION_GET_MONOCHUNKSTREAM_OFFSET UNITYSDK_OFFSET(0x1CC1C580)
#define SYSTEM_NET_WEBCONNECTION_GET_NTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1CC23430)
#define SYSTEM_NET_WEBCONNECTION_GET_NTLMCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1CC23450)
#define SYSTEM_NET_WEBCONNECTION_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x1CC23470)
#define SYSTEM_NET_WEBCONNECTION_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x1CC1E2F0)
#define SYSTEM_NET_WEBCONNECTION_INITCONNECTION_OFFSET UNITYSDK_OFFSET(0x1CC20310)
#define SYSTEM_NET_WEBCONNECTION_INITREAD_OFFSET UNITYSDK_OFFSET(0x1CC1FDB0)
#define SYSTEM_NET_WEBCONNECTION_NEXTREAD_OFFSET UNITYSDK_OFFSET(0x1CC20C80)
#define SYSTEM_NET_WEBCONNECTION_READDONE_OFFSET UNITYSDK_OFFSET(0x1CC1ED60)
#define SYSTEM_NET_WEBCONNECTION_READHEADERS_OFFSET UNITYSDK_OFFSET(0x1CC1DB70)
#define SYSTEM_NET_WEBCONNECTION_READLINE_OFFSET UNITYSDK_OFFSET(0x1CC1E580)
#define SYSTEM_NET_WEBCONNECTION_READ_OFFSET UNITYSDK_OFFSET(0x1CC22650)
#define SYSTEM_NET_WEBCONNECTION_RESETNTLM_OFFSET UNITYSDK_OFFSET(0x1CC22E90)
#define SYSTEM_NET_WEBCONNECTION_SENDNEXT_OFFSET UNITYSDK_OFFSET(0x1CC20B30)
#define SYSTEM_NET_WEBCONNECTION_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC20910)
#define SYSTEM_NET_WEBCONNECTION_SET_NTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1CC23440)
#define SYSTEM_NET_WEBCONNECTION_SET_NTLMCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1CC23460)
#define SYSTEM_NET_WEBCONNECTION_SET_PRIORITYREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC23420)
#define SYSTEM_NET_WEBCONNECTION_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x1CC23480)
#define SYSTEM_NET_WEBCONNECTION_WRITE_OFFSET UNITYSDK_OFFSET(0x1CC22B50)
#define SYSTEM_NET_WEBCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1C590)
#define SYSTEM_NET_WEBCONNECTION__SENDREQUEST_B__41_0_OFFSET UNITYSDK_OFFSET(0x1CC23490)

namespace System::Net
{
	inline static constexpr unsigned int WebConnection_TypeDefinitionIndex = 3564;

	class WebConnection : public ::System::Object
	{
	public:
		::System::Net::ServicePoint* sPoint; // 0x10
		::System::Net::HttpWebRequest* priority_request; // 0x18
		::System::Net::WebConnectionData* Data; // 0x20
		::System::Net::NetworkCredential* ntlm_credentials; // 0x28
		::System::Object* socketLock; // 0x30
		::Mono::Net::Security::MonoTlsStream* tlsStream; // 0x38
		::System::Net::MonoChunkStream* chunkStream; // 0x40
		::System::Net::IWebConnectionState* state; // 0x48
		::System::Exception* connect_exception; // 0x50
		::System::Collections::Queue* queue; // 0x58
		::System::Net::WebConnection_AbortHelper* abortHelper; // 0x60
		::System::EventHandler* abortHandler; // 0x68
		::Il2CppArray<::System::Byte>* buffer; // 0x70
		::System::Net::HttpWebRequest* connect_request; // 0x78
		::System::Net::Sockets::Socket* socket; // 0x80
		::System::IO::Stream* nstream; // 0x88
		::System::Int32 position; // 0x90
		::System::Boolean chunkedRead; // 0x94
		::System::Boolean keepAlive; // 0x95
		::System::Boolean reused; // 0x96
		::System::Net::WebExceptionStatus status; // 0x98
		::System::Boolean unsafe_sharing; // 0x9C
		::System::Boolean ntlm_authenticated; // 0x9D
		::System::Net::WebConnection_NtlmAuthState connect_ntlm_auth_state; // 0xA0

		::System::Void _ctor(::System::Net::IWebConnectionState* wcs, ::System::Net::ServicePoint* sPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebConnectionState*, ::System::Net::ServicePoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION__CTOR_OFFSET))(this, wcs, sPoint);
		}

		::System::Net::MonoChunkStream* get_MonoChunkStream()
		{
			return ((::System::Net::MonoChunkStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_MONOCHUNKSTREAM_OFFSET))(this);
		}

		::System::Boolean CanReuse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CANREUSE_OFFSET))(this);
		}

		::System::Void Connect(::System::Net::HttpWebRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CONNECT_OFFSET))(this, request);
		}

		::System::Boolean CreateTunnel(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri, ::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>*& buffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Uri*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CREATETUNNEL_OFFSET))(this, request, connectUri, stream, buffer);
		}

		::System::Net::WebHeaderCollection* ReadHeaders(::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>*& retBuffer, ::System::Int32& status)
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READHEADERS_OFFSET))(this, stream, retBuffer, status);
		}

		::System::Void FlushContents(::System::IO::Stream* stream, ::System::Int32 contentLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_FLUSHCONTENTS_OFFSET))(this, stream, contentLength);
		}

		::System::Boolean CreateStream(::System::Net::HttpWebRequest* request)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CREATESTREAM_OFFSET))(this, request);
		}

		::System::Void HandleError(::System::Net::WebExceptionStatus st, ::System::Exception* e, ::System::String* where)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebExceptionStatus, ::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_HANDLEERROR_OFFSET))(this, st, e, where);
		}

		::System::Void ReadDone(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READDONE_OFFSET))(this, result);
		}

		static ::System::Boolean ExpectContent(::System::Int32 statusCode, ::System::String* method)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_EXPECTCONTENT_OFFSET))(statusCode, method);
		}

		::System::Void InitRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_INITREAD_OFFSET))(this);
		}

		static ::System::Int32 GetResponse(::System::Net::WebConnectionData* data, ::System::Net::ServicePoint* sPoint, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Net::WebConnectionData*, ::System::Net::ServicePoint*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GETRESPONSE_OFFSET))(data, sPoint, buffer, max);
		}

		::System::Void InitConnection(::System::Net::HttpWebRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_INITCONNECTION_OFFSET))(this, request);
		}

		::System::EventHandler* SendRequest(::System::Net::HttpWebRequest* request)
		{
			return ((::System::EventHandler*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SENDREQUEST_OFFSET))(this, request);
		}

		::System::Void SendNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SENDNEXT_OFFSET))(this);
		}

		::System::Void NextRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_NEXTREAD_OFFSET))(this);
		}

		static ::System::Boolean ReadLine(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& start, ::System::Int32 max, ::System::String*& output)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READLINE_OFFSET))(buffer, start, max, output);
		}

		::System::IAsyncResult* BeginRead(::System::Net::HttpWebRequest* request, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_BEGINREAD_OFFSET))(this, request, buffer, offset, size, cb, state);
		}

		::System::Int32 EndRead(::System::Net::HttpWebRequest* request, ::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ENDREAD_OFFSET))(this, request, result);
		}

		::System::Int32 EnsureRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ENSUREREAD_OFFSET))(this, buffer, offset, size);
		}

		::System::Boolean CompleteChunkedRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_COMPLETECHUNKEDREAD_OFFSET))(this);
		}

		::System::IAsyncResult* BeginWrite(::System::Net::HttpWebRequest* request, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_BEGINWRITE_OFFSET))(this, request, buffer, offset, size, cb, state);
		}

		::System::Boolean EndWrite(::System::Net::HttpWebRequest* request, ::System::Boolean throwOnError, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Boolean, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ENDWRITE_OFFSET))(this, request, throwOnError, result);
		}

		::System::Int32 Read(::System::Net::HttpWebRequest* request, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READ_OFFSET))(this, request, buffer, offset, size);
		}

		::System::Boolean Write(::System::Net::HttpWebRequest* request, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::String*& err_msg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_WRITE_OFFSET))(this, request, buffer, offset, size, err_msg);
		}

		::System::Void Close(::System::Boolean sendNext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CLOSE_OFFSET))(this, sendNext);
		}

		::System::Void Abort(::System::Object* sender, ::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ABORT_OFFSET))(this, sender, args);
		}

		::System::Void ResetNtlm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_RESETNTLM_OFFSET))(this);
		}

		::System::Boolean get_Connected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_CONNECTED_OFFSET))(this);
		}

		::System::Void set_PriorityRequest(::System::Net::HttpWebRequest* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_PRIORITYREQUEST_OFFSET))(this, value);
		}

		::System::Boolean get_NtlmAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_NTLMAUTHENTICATED_OFFSET))(this);
		}

		::System::Void set_NtlmAuthenticated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_NTLMAUTHENTICATED_OFFSET))(this, value);
		}

		::System::Net::NetworkCredential* get_NtlmCredential()
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_NTLMCREDENTIAL_OFFSET))(this);
		}

		::System::Void set_NtlmCredential(::System::Net::NetworkCredential* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_NTLMCREDENTIAL_OFFSET))(this, value);
		}

		::System::Boolean get_UnsafeAuthenticatedConnectionSharing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this);
		}

		::System::Void set_UnsafeAuthenticatedConnectionSharing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this, value);
		}

		::System::Void _SendRequest_b__41_0(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION__SENDREQUEST_B__41_0_OFFSET))(this, o);
		}
	};
}
