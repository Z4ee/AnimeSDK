#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/AwaitTaskContinuation.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x1C6670E0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65F230)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerAwaitTaskContinuation_TypeDefinitionIndex = 923;

	class TaskSchedulerAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation
	{
	public:
		::System::Threading::Tasks::TaskScheduler* m_scheduler; // 0x20

		::System::Void _ctor(::System::Threading::Tasks::TaskScheduler* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskScheduler*, ::System::Action*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Run(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_RUN_OFFSET))(this, a1, a2);
		}
	};
}
