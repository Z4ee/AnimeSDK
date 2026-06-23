#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__READRESPONSEHEADERLINEASYNC_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9F7BC0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__READRESPONSEHEADERLINEASYNC_D__30_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6CBFE0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle__ReadResponseHeaderLineAsync_d__30_TypeDefinitionIndex = 3897;

	struct alignas(8) WebSocketHandle__ReadResponseHeaderLineAsync_d__30
	{
		::System::IO::Stream* stream; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Int32> __u__1; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::Text::StringBuilder* _sb_5__3; // 0x30
		::Il2CppArray<::System::Byte>* _arr_5__1; // 0x38
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x40
		::System::Int32 __1__state; // 0x58
		::System::Char _prevChar_5__2; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__READRESPONSEHEADERLINEASYNC_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__READRESPONSEHEADERLINEASYNC_D__30_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
