#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::Http { class HttpContent; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_HTTP_HTTPCONTENT__READASBYTEARRAYASYNC_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94C8E0)
#define SYSTEM_NET_HTTP_HTTPCONTENT__READASBYTEARRAYASYNC_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x390820)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent__ReadAsByteArrayAsync_d__19_TypeDefinitionIndex = 24715;

	struct alignas(8) HttpContent__ReadAsByteArrayAsync_d__19
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::System::Byte>*> __t__builder; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x28
		::System::Net::Http::HttpContent* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__READASBYTEARRAYASYNC_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__READASBYTEARRAYASYNC_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
