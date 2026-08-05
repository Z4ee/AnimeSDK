#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageHeader.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Net::WebSockets { class WebSocketReceiveResult; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDCLOSEASYNC_D__61_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9BCE60)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDCLOSEASYNC_D__61_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x34D440)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__HandleReceivedCloseAsync_d__61_TypeDefinitionIndex = 3879;

	struct alignas(8) ManagedWebSocket__HandleReceivedCloseAsync_d__61
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebSockets::WebSocketReceiveResult*> __t__builder; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::String* _closeStatusDescription_5__2; // 0x30
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x38
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x40
		::System::Net::WebSockets::ManagedWebSocket_MessageHeader header; // 0x50
		::System::Net::WebSockets::WebSocketCloseStatus _closeStatus_5__1; // 0x60
		::System::Int32 __1__state; // 0x64

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDCLOSEASYNC_D__61_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDCLOSEASYNC_D__61_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
