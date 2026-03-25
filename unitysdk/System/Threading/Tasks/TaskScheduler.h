#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class EventHandler_1; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class UnobservedTaskExceptionEventArgs; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_ADDTOACTIVETASKSCHEDULERS_OFFSET UNITYSDK_OFFSET(0x1624AC40)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16244B00)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1624AD80)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1624ADB0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_INTERNALCURRENT_OFFSET UNITYSDK_OFFSET(0x162432D0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x1624AAA0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_INTERNALQUEUETASK_OFFSET UNITYSDK_OFFSET(0x162404C0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1624AA90)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16249840)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x1624AA80)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYRUNINLINE_OFFSET UNITYSDK_OFFSET(0x162437B0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1624AE20)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1624ABE0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskScheduler_TypeDefinitionIndex = 924;

	class TaskScheduler : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>** StaticGet_s_activeTaskSchedulers()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x5480);
		}
		static ::System::Object** StaticGet__unobservedTaskExceptionLockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x5488);
		}
		static ::System::Threading::Tasks::TaskScheduler** StaticGet_s_defaultTaskScheduler()
		{
			return (::System::Threading::Tasks::TaskScheduler**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x5490);
		}
		static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>** StaticGet__unobservedTaskException()
		{
			return (::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x5498);
		}
		static ::System::Int32* StaticGet_s_taskSchedulerIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x2C80);
		}
		::System::Int32 m_taskSchedulerId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER__CCTOR_OFFSET))();
		}

		::System::Boolean TryRunInline(::System::Threading::Tasks::Task* task, ::System::Boolean taskWasPreviouslyQueued)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYRUNINLINE_OFFSET))(this, task, taskWasPreviouslyQueued);
		}

		::System::Boolean TryDequeue(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYDEQUEUE_OFFSET))(this, task);
		}

		::System::Void NotifyWorkItemProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_RequiresAtomicStartTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET))(this);
		}

		::System::Void InternalQueueTask(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_INTERNALQUEUETASK_OFFSET))(this, task);
		}

		::System::Void AddToActiveTaskSchedulers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_ADDTOACTIVETASKSCHEDULERS_OFFSET))(this);
		}

		static ::System::Threading::Tasks::TaskScheduler* get_Default()
		{
			return ((::System::Threading::Tasks::TaskScheduler*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_DEFAULT_OFFSET))();
		}

		static ::System::Threading::Tasks::TaskScheduler* get_Current()
		{
			return ((::System::Threading::Tasks::TaskScheduler*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_CURRENT_OFFSET))();
		}

		static ::System::Threading::Tasks::TaskScheduler* get_InternalCurrent()
		{
			return ((::System::Threading::Tasks::TaskScheduler*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_INTERNALCURRENT_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_ID_OFFSET))(this);
		}

		static ::System::Void PublishUnobservedTaskException(::System::Object* sender, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(sender, ueea);
		}
	};
}
