#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageHeader.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Net::WebSockets { class WebSocketReceiveResult; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__RECEIVEASYNCPRIVATE_D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA459F0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__RECEIVEASYNCPRIVATE_D__60_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA374C0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__ReceiveAsyncPrivate_d__60_TypeDefinitionIndex = 3878;

	struct alignas(8) ManagedWebSocket__ReceiveAsyncPrivate_d__60
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebSockets::WebSocketReceiveResult*> __u__2; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::System::ArraySegment_1<::System::Byte> payloadBuffer; // 0x28
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x38
		::System::Threading::CancellationTokenRegistration _registration_5__4; // 0x40
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebSockets::WebSocketReceiveResult*> __t__builder; // 0x58
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x70
		::System::Int32 __1__state; // 0x80
		::System::Net::WebSockets::ManagedWebSocket_MessageHeader _header_5__1; // 0x88
		::System::Int32 _bytesToRead_5__2; // 0x98
		::System::Int32 _bytesToCopy_5__3; // 0x9C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__RECEIVEASYNCPRIVATE_D__60_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__RECEIVEASYNCPRIVATE_D__60_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
