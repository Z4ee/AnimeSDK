#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class TaskTreeTest;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define TASKTREETEST__START_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x917140)
#define TASKTREETEST__START_D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x55E040)

inline static constexpr unsigned int TaskTreeTest__Start_d__1_TypeDefinitionIndex = 65432;

struct alignas(8) TaskTreeTest__Start_d__1
{
	::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
	::TaskTreeTest* __4__this; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x20
	::System::Int32 __1__state; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__START_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + TASKTREETEST__START_D__1_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
