#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class WebResponse; }
namespace System::Net::Http { class HttpClientHandler; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20FBF60)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x20DAF30)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClientHandler__SendAsync_d__64_TypeDefinitionIndex = 4775;

	struct alignas(8) HttpClientHandler__SendAsync_d__64
	{
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__4; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x20
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2; // 0x30
		::System::Net::HttpWebResponse* _wresponse_5__4; // 0x40
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__3; // 0x48
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder; // 0x58
		::System::Net::HttpWebRequest* _wrequest_5__1; // 0x70
		::System::IO::Stream* _stream_5__3; // 0x78
		::System::Threading::CancellationTokenRegistration __7__wrap1; // 0x80
		::System::Net::Http::HttpClientHandler* __4__this; // 0x98
		::System::Net::Http::HttpContent* _content_5__2; // 0xA0
		::System::Net::Http::HttpRequestMessage* request; // 0xA8
		::System::Int32 __1__state; // 0xB0

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
