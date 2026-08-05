#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/HttpCompletionOption.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA3EB10)
#define SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B600)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClient__SendAsyncWorker_d__47_TypeDefinitionIndex = 26680;

	struct alignas(8) HttpClient__SendAsyncWorker_d__47
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x40
		::System::Net::Http::HttpClient* __4__this; // 0x50
		::System::Net::Http::HttpRequestMessage* request; // 0x58
		::System::Threading::CancellationTokenSource* _lcts_5__2; // 0x60
		::System::Net::Http::HttpResponseMessage* _response_5__1; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Net::Http::HttpCompletionOption completionOption; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
