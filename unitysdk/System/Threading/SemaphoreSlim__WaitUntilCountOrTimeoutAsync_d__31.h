#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading { class SemaphoreSlim_TaskNode; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x977E30)
#define SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x977E40)

namespace System::Threading
{
	inline static constexpr unsigned int SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__31_TypeDefinitionIndex = 797;

	struct alignas(8) SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__31
	{
		::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter; // 0x10
		::System::Threading::CancellationTokenSource* _cts_5__1; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Boolean> __u__2; // 0x38
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x48
		::System::Object* __7__wrap1; // 0x60
		::System::Threading::SemaphoreSlim* __4__this; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Int32 millisecondsTimeout; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
