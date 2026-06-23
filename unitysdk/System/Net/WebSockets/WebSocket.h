#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Net/WebSockets/WebSocketMessageType.h"
#include "unitysdk/System/Net/WebSockets/WebSocketState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::WebSockets { class WebSocketReceiveResult; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_CREATECLIENTBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8A7080)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_CREATECLIENTWEBSOCKET_OFFSET UNITYSDK_OFFSET(0x1C8A73E0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_CREATESERVERBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8A7240)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_GET_DEFAULTKEEPALIVEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C8A6F40)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_ISAPPLICATIONTARGETING45_OFFSET UNITYSDK_OFFSET(0x1C8A7380)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_ISSTATETERMINAL_OFFSET UNITYSDK_OFFSET(0x1C8A7070)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_REGISTERPREFIXES_OFFSET UNITYSDK_OFFSET(0x1C8A7390)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET_THROWONINVALIDSTATE_OFFSET UNITYSDK_OFFSET(0x1C8A6F80)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A7700)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocket_TypeDefinitionIndex = 3898;

	class WebSocket : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET__CTOR_OFFSET))(this);
		}

		static ::System::TimeSpan get_DefaultKeepAliveInterval()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_GET_DEFAULTKEEPALIVEINTERVAL_OFFSET))();
		}

		static ::System::Void ThrowOnInvalidState(::System::Net::WebSockets::WebSocketState state, ::Il2CppArray<::System::Net::WebSockets::WebSocketState>* validStates)
		{
			return ((::System::Void(*)(::System::Net::WebSockets::WebSocketState, ::Il2CppArray<::System::Net::WebSockets::WebSocketState>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_THROWONINVALIDSTATE_OFFSET))(state, validStates);
		}

		static ::System::Boolean IsStateTerminal(::System::Net::WebSockets::WebSocketState state)
		{
			return ((::System::Boolean(*)(::System::Net::WebSockets::WebSocketState))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_ISSTATETERMINAL_OFFSET))(state);
		}

		static ::System::ArraySegment_1<::System::Byte> CreateClientBuffer(::System::Int32 receiveBufferSize, ::System::Int32 sendBufferSize)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_CREATECLIENTBUFFER_OFFSET))(receiveBufferSize, sendBufferSize);
		}

		static ::System::ArraySegment_1<::System::Byte> CreateServerBuffer(::System::Int32 receiveBufferSize)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_CREATESERVERBUFFER_OFFSET))(receiveBufferSize);
		}

		static ::System::Boolean IsApplicationTargeting45()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_ISAPPLICATIONTARGETING45_OFFSET))();
		}

		static ::System::Void RegisterPrefixes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_REGISTERPREFIXES_OFFSET))();
		}

		static ::System::Net::WebSockets::WebSocket* CreateClientWebSocket(::System::IO::Stream* innerStream, ::System::String* subProtocol, ::System::Int32 receiveBufferSize, ::System::Int32 sendBufferSize, ::System::TimeSpan keepAliveInterval, ::System::Boolean useZeroMaskingKey, ::System::ArraySegment_1<::System::Byte> internalBuffer)
		{
			return ((::System::Net::WebSockets::WebSocket*(*)(::System::IO::Stream*, ::System::String*, ::System::Int32, ::System::Int32, ::System::TimeSpan, ::System::Boolean, ::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKET_CREATECLIENTWEBSOCKET_OFFSET))(innerStream, subProtocol, receiveBufferSize, sendBufferSize, keepAliveInterval, useZeroMaskingKey, internalBuffer);
		}
	};
}
