#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Uri; }
namespace System::Net::WebSockets { class ClientWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET__CONNECTASYNCCORE_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96FDA0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET__CONNECTASYNCCORE_D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3891F0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ClientWebSocket__ConnectAsyncCore_d__16_TypeDefinitionIndex = 3889;

	struct alignas(8) ClientWebSocket__ConnectAsyncCore_d__16
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::Net::WebSockets::ClientWebSocket* __4__this; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x38
		::System::Uri* uri; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET__CONNECTASYNCCORE_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKET__CONNECTASYNCCORE_D__16_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
