#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Threading/Tasks/Task_1.h"
#include "unitysdk/System/Threading/Tasks/VoidTaskResult.h"

namespace System::Threading { class Timer; }

#define SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x17874C60)
#define SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x17874310)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_DelayPromise_TypeDefinitionIndex = 900;

	class Task_DelayPromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>
	{
	public:
		::System::Threading::CancellationToken Token; // 0x50
		::System::Threading::CancellationTokenRegistration Registration; // 0x58
		::System::Threading::Timer* Timer; // 0x70

		::System::Void _ctor(::System::Threading::CancellationToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE__CTOR_OFFSET))(this, token);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_COMPLETE_OFFSET))(this);
		}
	};
}
