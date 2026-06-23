#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::WebSockets { class WebSocketHandle; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9703E0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9703F0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle__ConnectSocketAsync_d__25_TypeDefinitionIndex = 3894;

	struct alignas(8) WebSocketHandle__ConnectSocketAsync_d__25
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::System::Net::Sockets::Socket* _socket_5__1; // 0x28
		::System::Threading::CancellationTokenRegistration __7__wrap3; // 0x30
		::System::String* host; // 0x48
		::System::Net::WebSockets::WebSocketHandle* __4__this; // 0x50
		::System::Threading::CancellationTokenRegistration __7__wrap4; // 0x58
		::Il2CppArray<::System::Net::IPAddress*>* __7__wrap1; // 0x70
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Sockets::Socket*> __t__builder; // 0x78
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _lastException_5__2; // 0x90
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Il2CppArray<::System::Net::IPAddress*>*> __u__1; // 0x98
		::System::Int32 port; // 0xA8
		::System::Int32 __1__state; // 0xAC
		::System::Int32 __7__wrap2; // 0xB0

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
