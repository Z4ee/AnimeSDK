#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuation.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"

namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x1786A5D0)
#define SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1786A370)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int StandardTaskContinuation_TypeDefinitionIndex = 916;

	class StandardTaskContinuation : public ::System::Threading::Tasks::TaskContinuation
	{
	public:
		::System::Threading::Tasks::TaskScheduler* m_taskScheduler; // 0x10
		::System::Threading::Tasks::Task* m_task; // 0x18
		::System::Threading::Tasks::TaskContinuationOptions m_options; // 0x20

		::System::Void _ctor(::System::Threading::Tasks::Task* task, ::System::Threading::Tasks::TaskContinuationOptions options, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION__CTOR_OFFSET))(this, task, options, scheduler);
		}

		::System::Void Run(::System::Threading::Tasks::Task* completedTask, ::System::Boolean bCanInlineContinuationTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_RUN_OFFSET))(this, completedTask, bCanInlineContinuationTask);
		}
	};
}
