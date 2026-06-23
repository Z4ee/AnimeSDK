#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/AwaitTaskContinuation.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x1C1B8E50)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B8DD0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerAwaitTaskContinuation_TypeDefinitionIndex = 926;

	class TaskSchedulerAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation
	{
	public:
		::System::Threading::Tasks::TaskScheduler* m_scheduler; // 0x20

		::System::Void _ctor(::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Action* action, ::System::Boolean flowExecutionContext, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskScheduler*, ::System::Action*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION__CTOR_OFFSET))(this, scheduler, action, flowExecutionContext, stackMark);
		}

		::System::Void Run(::System::Threading::Tasks::Task* ignored, ::System::Boolean canInlineContinuationTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_RUN_OFFSET))(this, ignored, canInlineContinuationTask);
		}
	};
}
