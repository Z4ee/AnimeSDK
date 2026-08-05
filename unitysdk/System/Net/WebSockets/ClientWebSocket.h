#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/WebSockets/WebSocket.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Net/WebSockets/WebSocketMessageType.h"
#include "unitysdk/System/Net/WebSockets/WebSocketState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Net::WebSockets { class ClientWebSocketOptions; }
namespace System::Net::WebSockets { class WebSocketHandle; }
namespace System::Net::WebSockets { class WebSocketReceiveResult; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_ABORT_OFFSET UNITYSDK_OFFSET(0x1D47FCF0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x1D47FC30)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CLOSEOUTPUTASYNC_OFFSET UNITYSDK_OFFSET(0x1D47FC90)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CONNECTASYNCCORE_OFFSET UNITYSDK_OFFSET(0x1D47F930)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x1D47F4E0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D47FE60)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_CLOSESTATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D47F310)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_CLOSESTATUS_OFFSET UNITYSDK_OFFSET(0x1D47F280)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1D47F270)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1D47F430)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_SUBPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D47F3A0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_RECEIVEASYNC_OFFSET UNITYSDK_OFFSET(0x1D47FBD0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1D47FA90)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_THROWIFNOTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1D47FB10)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D47F030)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ClientWebSocket_TypeDefinitionIndex = 3887;

	class ClientWebSocket : public ::System::Net::WebSockets::WebSocket
	{
	public:
		::System::Net::WebSockets::ClientWebSocketOptions* _options; // 0x10
		::System::Net::WebSockets::WebSocketHandle* _innerWebSocket; // 0x18
		::System::Int32 _state; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET__CTOR_OFFSET))(this);
		}

		::System::Net::WebSockets::ClientWebSocketOptions* get_Options()
		{
			return ((::System::Net::WebSockets::ClientWebSocketOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_OPTIONS_OFFSET))(this);
		}

		::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus()
		{
			return ((::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_CLOSESTATUS_OFFSET))(this);
		}

		::System::String* get_CloseStatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_CLOSESTATUSDESCRIPTION_OFFSET))(this);
		}

		::System::String* get_SubProtocol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_SUBPROTOCOL_OFFSET))(this);
		}

		::System::Net::WebSockets::WebSocketState get_State()
		{
			return ((::System::Net::WebSockets::WebSocketState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_GET_STATE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* ConnectAsync(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Uri*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CONNECTASYNC_OFFSET))(this, uri, cancellationToken);
		}

		::System::Threading::Tasks::Task* ConnectAsyncCore(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Uri*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CONNECTASYNCCORE_OFFSET))(this, uri, cancellationToken);
		}

		::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, ::System::Boolean endOfMessage, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Net::WebSockets::WebSocketMessageType, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_SENDASYNC_OFFSET))(this, buffer, messageType, endOfMessage, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<::System::Byte> buffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_RECEIVEASYNC_OFFSET))(this, buffer, cancellationToken);
		}

		::System::Threading::Tasks::Task* CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CLOSEASYNC_OFFSET))(this, closeStatus, statusDescription, cancellationToken);
		}

		::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_CLOSEOUTPUTASYNC_OFFSET))(this, closeStatus, statusDescription, cancellationToken);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_ABORT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_DISPOSE_OFFSET))(this);
		}

		::System::Void ThrowIfNotConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET_THROWIFNOTCONNECTED_OFFSET))(this);
		}
	};
}
