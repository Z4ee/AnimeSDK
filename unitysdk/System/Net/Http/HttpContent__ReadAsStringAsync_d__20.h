#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net::Http { class HttpContent; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_HTTP_HTTPCONTENT__READASSTRINGASYNC_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22CEBB0)
#define SYSTEM_NET_HTTP_HTTPCONTENT__READASSTRINGASYNC_D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x22ABD20)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent__ReadAsStringAsync_d__20_TypeDefinitionIndex = 4788;

	struct alignas(8) HttpContent__ReadAsStringAsync_d__20
	{
		::System::Net::Http::HttpContent* __4__this; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__READASSTRINGASYNC_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__READASSTRINGASYNC_D__20_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
