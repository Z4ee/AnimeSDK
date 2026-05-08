#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::WebSockets { class ClientWebSocketOptions; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8A6CB0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle__ParseAndValidateConnectResponseAsync_d__28_TypeDefinitionIndex = 3897;

	struct alignas(8) WebSocketHandle__ParseAndValidateConnectResponseAsync_d__28
	{
		::System::String* _line_5__1; // 0x10
		::System::String* _subprotocol_5__5; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__1; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x30
		::System::IO::Stream* stream; // 0x48
		::System::Threading::CancellationToken cancellationToken; // 0x50
		::System::String* expectedSecWebSocketAccept; // 0x58
		::System::Net::WebSockets::ClientWebSocketOptions* options; // 0x60
		::System::Boolean _foundSecWebSocketAccept_5__4; // 0x68
		::System::Boolean _foundConnection_5__2; // 0x69
		::System::Boolean _foundUpgrade_5__3; // 0x6A
		::System::Int32 __1__state; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
