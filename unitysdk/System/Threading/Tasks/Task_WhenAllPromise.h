#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/Task_1.h"
#include "unitysdk/System/Threading/Tasks/VoidTaskResult.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASK_WHENALLPROMISE_GET_SHOULDNOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1A0BF3A0)
#define SYSTEM_THREADING_TASKS_TASK_WHENALLPROMISE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0BEF20)
#define SYSTEM_THREADING_TASKS_TASK_WHENALLPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BED20)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_WhenAllPromise_TypeDefinitionIndex = 905;

	class Task_WhenAllPromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>
	{
	public:
		::Il2CppArray<::System::Threading::Tasks::Task*>* m_tasks; // 0x50
		::System::Int32 m_count; // 0x58

		::System::Void _ctor(::Il2CppArray<::System::Threading::Tasks::Task*>* tasks)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WHENALLPROMISE__CTOR_OFFSET))(this, tasks);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* completedTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WHENALLPROMISE_INVOKE_OFFSET))(this, completedTask);
		}

		::System::Boolean get_ShouldNotifyDebuggerOfWaitCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WHENALLPROMISE_GET_SHOULDNOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET))(this);
		}
	};
}
