#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::Http { class HttpContent; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3AC8190)
#define SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x12D0F40)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent__LoadIntoBufferAsync_d__17_TypeDefinitionIndex = 3758;

	struct alignas(8) HttpContent__LoadIntoBufferAsync_d__17
	{
		::System::Net::Http::HttpContent* __4__this; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x28
		::System::Int64 maxBufferSize; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
