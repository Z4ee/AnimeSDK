#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/TaskScheduler.h"

namespace System { class Object; }
namespace System::Threading { class ParameterizedThreadStart; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x1A736E40)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_LONGRUNNINGTHREADWORK_OFFSET UNITYSDK_OFFSET(0x1A7368E0)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A736C50)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_QUEUETASK_OFFSET UNITYSDK_OFFSET(0x1A735AC0)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x1A736D40)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET UNITYSDK_OFFSET(0x1A7358F0)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A736E50)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A735E60)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ThreadPoolTaskScheduler_TypeDefinitionIndex = 931;

	class ThreadPoolTaskScheduler : public ::System::Threading::Tasks::TaskScheduler
	{
	public:
		static ::System::Threading::ParameterizedThreadStart** StaticGet_s_longRunningThreadWork()
		{
			return (::System::Threading::ParameterizedThreadStart**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x21970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER__CCTOR_OFFSET))();
		}

		static ::System::Void LongRunningThreadWork(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_LONGRUNNINGTHREADWORK_OFFSET))(a1);
		}

		::System::Void QueueTask(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_QUEUETASK_OFFSET))(this, a1);
		}

		::System::Boolean TryExecuteTaskInline(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDequeue(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYDEQUEUE_OFFSET))(this, a1);
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
