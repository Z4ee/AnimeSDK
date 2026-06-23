#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Net::WebSockets { class WebSocketReceiveResult; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x952800)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x61A480)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__CloseAsyncPrivate_d__66_TypeDefinitionIndex = 3882;

	struct alignas(8) ManagedWebSocket__CloseAsyncPrivate_d__66
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x20
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebSockets::WebSocketReceiveResult*> __u__2; // 0x38
		::Il2CppArray<::System::Byte>* _closeBuffer_5__1; // 0x48
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x50
		::System::Threading::CancellationToken cancellationToken; // 0x58
		::System::String* statusDescription; // 0x60
		::System::Net::WebSockets::WebSocketCloseStatus closeStatus; // 0x68
		::System::Int32 __1__state; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
