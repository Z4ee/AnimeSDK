#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageHeader.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDPINGPONGASYNC_D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x984410)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDPINGPONGASYNC_D__62_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x34D440)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__HandleReceivedPingPongAsync_d__62_TypeDefinitionIndex = 3880;

	struct alignas(8) ManagedWebSocket__HandleReceivedPingPongAsync_d__62
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x38
		::System::Net::WebSockets::ManagedWebSocket_MessageHeader header; // 0x48
		::System::Int32 __1__state; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDPINGPONGASYNC_D__62_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__HANDLERECEIVEDPINGPONGASYNC_D__62_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
