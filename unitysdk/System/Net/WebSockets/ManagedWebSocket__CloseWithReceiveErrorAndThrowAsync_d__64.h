#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Net/WebSockets/WebSocketError.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEWITHRECEIVEERRORANDTHROWASYNC_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x984400)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEWITHRECEIVEERRORANDTHROWASYNC_D__64_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6D9240)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__64_TypeDefinitionIndex = 3881;

	struct alignas(8) ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__64
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x18
		::System::Exception* innerException; // 0x28
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x30
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x38
		::System::Net::WebSockets::WebSocketError error; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Net::WebSockets::WebSocketCloseStatus closeStatus; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEWITHRECEIVEERRORANDTHROWASYNC_D__64_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEWITHRECEIVEERRORANDTHROWASYNC_D__64_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
