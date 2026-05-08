#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Net/WebSockets/WebSocketMessageType.h"
#include "unitysdk/System/Net/WebSockets/WebSocketState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::WebSockets { class ClientWebSocketOptions; }
namespace System::Net::WebSockets { class WebSocket; }
namespace System::Net::WebSockets { class WebSocketReceiveResult; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_ABORT_OFFSET UNITYSDK_OFFSET(0x1AAAB340)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_BUILDREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1AAAB7A0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CHECKPLATFORMSUPPORT_OFFSET UNITYSDK_OFFSET(0x1AAAB310)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x1AAAB420)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CLOSEOUTPUTASYNC_OFFSET UNITYSDK_OFFSET(0x1AAAB450)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CONNECTASYNCCORE_OFFSET UNITYSDK_OFFSET(0x1AAAB480)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CONNECTSOCKETASYNC_OFFSET UNITYSDK_OFFSET(0x1AAAB670)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CREATESECKEYANDSECWEBSOCKETACCEPT_OFFSET UNITYSDK_OFFSET(0x1AAABEE0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1AAAB1A0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAAB320)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_CLOSESTATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AAAB2B0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_CLOSESTATUS_OFFSET UNITYSDK_OFFSET(0x1AAAB290)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1AAAB2D0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_SUBPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1AAAB2F0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AAAB280)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_PARSEANDVALIDATECONNECTRESPONSEASYNC_OFFSET UNITYSDK_OFFSET(0x1AAAC1E0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_READRESPONSEHEADERLINEASYNC_OFFSET UNITYSDK_OFFSET(0x1AAAC3E0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_RECEIVEASYNC_OFFSET UNITYSDK_OFFSET(0x1AAAB3E0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1AAAB390)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_VALIDATEANDTRACKHEADER_OFFSET UNITYSDK_OFFSET(0x1AAAC2D0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAAC4B0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAAB220)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle_TypeDefinitionIndex = 3892;

	class WebSocketHandle : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_s_defaultHttpEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(WebSocketHandle_TypeDefinitionIndex)->GetStaticField(0x3B30);
		}
		static ::System::Text::StringBuilder** StaticGet_t_cachedStringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(WebSocketHandle_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 DefaultReceiveBufferSize = 0x1000; // 0x0
		// static const ::System::String* WSServerGuid; // 0x0
		::System::Net::WebSockets::WebSocket* _webSocket; // 0x10
		::System::Threading::CancellationTokenSource* _abortSource; // 0x18
		::System::Net::WebSockets::WebSocketState _state; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CCTOR_OFFSET))();
		}

		static ::System::Net::WebSockets::WebSocketHandle* Create()
		{
			return ((::System::Net::WebSockets::WebSocketHandle*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CREATE_OFFSET))();
		}

		static ::System::Boolean IsValid(::System::Net::WebSockets::WebSocketHandle* handle)
		{
			return ((::System::Boolean(*)(::System::Net::WebSockets::WebSocketHandle*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_ISVALID_OFFSET))(handle);
		}

		::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus()
		{
			return ((::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_CLOSESTATUS_OFFSET))(this);
		}

		::System::String* get_CloseStatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_CLOSESTATUSDESCRIPTION_OFFSET))(this);
		}

		::System::Net::WebSockets::WebSocketState get_State()
		{
			return ((::System::Net::WebSockets::WebSocketState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_STATE_OFFSET))(this);
		}

		::System::String* get_SubProtocol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_GET_SUBPROTOCOL_OFFSET))(this);
		}

		static ::System::Void CheckPlatformSupport()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CHECKPLATFORMSUPPORT_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_ABORT_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, ::System::Boolean endOfMessage, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Net::WebSockets::WebSocketMessageType, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_SENDASYNC_OFFSET))(this, buffer, messageType, endOfMessage, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<::System::Byte> buffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_RECEIVEASYNC_OFFSET))(this, buffer, cancellationToken);
		}

		::System::Threading::Tasks::Task* CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CLOSEASYNC_OFFSET))(this, closeStatus, statusDescription, cancellationToken);
		}

		::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CLOSEOUTPUTASYNC_OFFSET))(this, closeStatus, statusDescription, cancellationToken);
		}

		::System::Threading::Tasks::Task* ConnectAsyncCore(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebSockets::ClientWebSocketOptions* options)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Uri*, ::System::Threading::CancellationToken, ::System::Net::WebSockets::ClientWebSocketOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CONNECTASYNCCORE_OFFSET))(this, uri, cancellationToken, options);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* ConnectSocketAsync(::System::String* host, ::System::Int32 port, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CONNECTSOCKETASYNC_OFFSET))(this, host, port, cancellationToken);
		}

		static ::Il2CppArray<::System::Byte>* BuildRequestHeader(::System::Uri* uri, ::System::Net::WebSockets::ClientWebSocketOptions* options, ::System::String* secKey)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Uri*, ::System::Net::WebSockets::ClientWebSocketOptions*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_BUILDREQUESTHEADER_OFFSET))(uri, options, secKey);
		}

		static ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> CreateSecKeyAndSecWebSocketAccept()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_CREATESECKEYANDSECWEBSOCKETACCEPT_OFFSET))();
		}

		::System::Threading::Tasks::Task_1<::System::String*>* ParseAndValidateConnectResponseAsync(::System::IO::Stream* stream, ::System::Net::WebSockets::ClientWebSocketOptions* options, ::System::String* expectedSecWebSocketAccept, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::IO::Stream*, ::System::Net::WebSockets::ClientWebSocketOptions*, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_PARSEANDVALIDATECONNECTRESPONSEASYNC_OFFSET))(this, stream, options, expectedSecWebSocketAccept, cancellationToken);
		}

		static ::System::Void ValidateAndTrackHeader(::System::String* targetHeaderName, ::System::String* targetHeaderValue, ::System::String* foundHeaderName, ::System::String* foundHeaderValue, ::System::Boolean& foundHeader)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_VALIDATEANDTRACKHEADER_OFFSET))(targetHeaderName, targetHeaderValue, foundHeaderName, foundHeaderValue, foundHeader);
		}

		static ::System::Threading::Tasks::Task_1<::System::String*>* ReadResponseHeaderLineAsync(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::System::IO::Stream*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE_READRESPONSEHEADERLINEASYNC_OFFSET))(stream, cancellationToken);
		}
	};
}
