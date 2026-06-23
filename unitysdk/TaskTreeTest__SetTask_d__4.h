#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define TASKTREETEST__SETTASK_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA2ABA0)
#define TASKTREETEST__SETTASK_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

inline static constexpr unsigned int TaskTreeTest__SetTask_d__4_TypeDefinitionIndex = 76078;

struct alignas(8) TaskTreeTest__SetTask_d__4
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Int32> __u__1; // 0x30
	::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* taskCompletionSource; // 0x38
	::System::Int32 __1__state; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__SETTASK_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + TASKTREETEST__SETTASK_D__4_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
