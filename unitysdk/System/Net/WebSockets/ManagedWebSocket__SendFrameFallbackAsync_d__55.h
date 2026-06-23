#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageOpcode.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x985660)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x954A80)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__SendFrameFallbackAsync_d__55_TypeDefinitionIndex = 3877;

	struct alignas(8) ManagedWebSocket__SendFrameFallbackAsync_d__55
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x18
		::System::ArraySegment_1<::System::Byte> payloadBuffer; // 0x20
		::System::Threading::CancellationTokenRegistration __7__wrap1; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x48
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x58
		::System::Boolean endOfMessage; // 0x70
		::System::Net::WebSockets::ManagedWebSocket_MessageOpcode opcode; // 0x71
		::System::Int32 __1__state; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
