#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__ENSUREBUFFERCONTAINSASYNC_D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A3820)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__ENSUREBUFFERCONTAINSASYNC_D__69_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B5E0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__EnsureBufferContainsAsync_d__69_TypeDefinitionIndex = 3884;

	struct alignas(8) ManagedWebSocket__EnsureBufferContainsAsync_d__69
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Int32> __u__1; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x28
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean throwOnPrematureClosure; // 0x4C
		::System::Int32 minimumRequiredBytes; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__ENSUREBUFFERCONTAINSASYNC_D__69_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__ENSUREBUFFERCONTAINSASYNC_D__69_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
