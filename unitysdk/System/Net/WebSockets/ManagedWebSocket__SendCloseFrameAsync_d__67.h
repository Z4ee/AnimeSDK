#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDCLOSEFRAMEASYNC_D__67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8B8940)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDCLOSEFRAMEASYNC_D__67_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__SendCloseFrameAsync_d__67_TypeDefinitionIndex = 3884;

	struct alignas(8) ManagedWebSocket__SendCloseFrameAsync_d__67
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Il2CppArray<::System::Byte>* _buffer_5__1; // 0x18
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x20
		::System::String* closeStatusDescription; // 0x28
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x48
		::System::Int32 __1__state; // 0x58
		::System::Net::WebSockets::WebSocketCloseStatus closeStatus; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDCLOSEFRAMEASYNC_D__67_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDCLOSEFRAMEASYNC_D__67_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
