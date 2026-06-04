#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class EventHandler_1; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class UnobservedTaskExceptionEventArgs; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_ADDTOACTIVETASKSCHEDULERS_OFFSET UNITYSDK_OFFSET(0x18630550)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1862A0E0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x18630690)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_ID_OFFSET UNITYSDK_OFFSET(0x186306C0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_INTERNALCURRENT_OFFSET UNITYSDK_OFFSET(0x18628F60)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x186303D0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_INTERNALQUEUETASK_OFFSET UNITYSDK_OFFSET(0x18625E80)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x186303C0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1862EFB0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x186303B0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYRUNINLINE_OFFSET UNITYSDK_OFFSET(0x18629440)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18630730)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x186304F0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskScheduler_TypeDefinitionIndex = 925;

	class TaskScheduler : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__unobservedTaskExceptionLockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x8720);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>** StaticGet_s_activeTaskSchedulers()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x8728);
		}
		static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>** StaticGet__unobservedTaskException()
		{
			return (::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x8730);
		}
		static ::System::Threading::Tasks::TaskScheduler** StaticGet_s_defaultTaskScheduler()
		{
			return (::System::Threading::Tasks::TaskScheduler**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x8738);
		}
		static ::System::Int32* StaticGet_s_taskSchedulerIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x3910);
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

		::System::Boolean TryRunInline(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYRUNINLINE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDequeue(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYDEQUEUE_OFFSET))(this, a1);
		}

		::System::Void NotifyWorkItemProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_RequiresAtomicStartTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET))(this);
		}

		::System::Void InternalQueueTask(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_INTERNALQUEUETASK_OFFSET))(this, a1);
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

		static ::System::Void PublishUnobservedTaskException(::System::Object* a1, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(a1, a2);
		}
	};
}
