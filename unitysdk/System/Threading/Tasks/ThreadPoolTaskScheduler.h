#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/TaskScheduler.h"

namespace System { class Object; }
namespace System::Threading { class ParameterizedThreadStart; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x1A0BFB80)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_LONGRUNNINGTHREADWORK_OFFSET UNITYSDK_OFFSET(0x1A0BF820)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A0BFB60)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_QUEUETASK_OFFSET UNITYSDK_OFFSET(0x1A0BF890)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x1A0BFB70)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET UNITYSDK_OFFSET(0x1A0BFAA0)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0BFB90)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF730)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ThreadPoolTaskScheduler_TypeDefinitionIndex = 940;

	class ThreadPoolTaskScheduler : public ::System::Threading::Tasks::TaskScheduler
	{
	public:
		static ::System::Threading::ParameterizedThreadStart** StaticGet_s_longRunningThreadWork()
		{
			return (::System::Threading::ParameterizedThreadStart**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolTaskScheduler_TypeDefinitionIndex)->GetStaticField(0xDA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CCTOR_OFFSET))();
		}

		static ::System::Void LongRunningThreadWork(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_LONGRUNNINGTHREADWORK_OFFSET))(obj);
		}

		::System::Void QueueTask(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_QUEUETASK_OFFSET))(this, task);
		}

		::System::Boolean TryExecuteTaskInline(::System::Threading::Tasks::Task* task, ::System::Boolean taskWasPreviouslyQueued)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET))(this, task, taskWasPreviouslyQueued);
		}

		::System::Boolean TryDequeue(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYDEQUEUE_OFFSET))(this, task);
		}

		::System::Void NotifyWorkItemProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_RequiresAtomicStartTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET))(this);
		}
	};
}
