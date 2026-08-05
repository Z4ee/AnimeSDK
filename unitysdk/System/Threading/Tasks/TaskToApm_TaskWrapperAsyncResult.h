#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitHandle; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1DD09260)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1DD092E0)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1DD09270)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DD09280)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD09250)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskToApm_TaskWrapperAsyncResult_TypeDefinitionIndex = 937;

	class TaskToApm_TaskWrapperAsyncResult : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task* Task; // 0x10
		::System::Object* m_state; // 0x18
		::System::Boolean m_completedSynchronously; // 0x20

		::System::Void _ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, ::System::Boolean completedSynchronously)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT__CTOR_OFFSET))(this, task, state, completedSynchronously);
		}

		::System::Object* System_IAsyncResult_get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Boolean System_IAsyncResult_get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean System_IAsyncResult_get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_TASKWRAPPERASYNCRESULT_SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}
	};
}
