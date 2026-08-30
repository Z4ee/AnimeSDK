#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class EventHandler_1; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class UnobservedTaskExceptionEventArgs; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_ADDTOACTIVETASKSCHEDULERS_OFFSET UNITYSDK_OFFSET(0x1BC51330)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_FROMCURRENTSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BC514A0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BC4A920)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1BC51470)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BC514F0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_INTERNALCURRENT_OFFSET UNITYSDK_OFFSET(0x1BC49720)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x1BC51320)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_INTERNALQUEUETASK_OFFSET UNITYSDK_OFFSET(0x1BC46500)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BC51310)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BC4FD10)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x1BC51300)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYEXECUTETASK_OFFSET UNITYSDK_OFFSET(0x1BC443F0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYRUNINLINE_OFFSET UNITYSDK_OFFSET(0x1BC49C80)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC51560)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC44200)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskScheduler_TypeDefinitionIndex = 930;

	class TaskScheduler : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__unobservedTaskExceptionLockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0xDA10);
		}
		static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>** StaticGet__unobservedTaskException()
		{
			return (::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0xDA18);
		}
		static ::System::Threading::Tasks::TaskScheduler** StaticGet_s_defaultTaskScheduler()
		{
			return (::System::Threading::Tasks::TaskScheduler**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0xDA20);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>** StaticGet_s_activeTaskSchedulers()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0xDA28);
		}
		static ::System::Int32* StaticGet_s_taskSchedulerIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TaskScheduler_TypeDefinitionIndex)->GetStaticField(0x42F0);
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

		static ::System::Threading::Tasks::TaskScheduler* FromCurrentSynchronizationContext()
		{
			return ((::System::Threading::Tasks::TaskScheduler*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_FROMCURRENTSYNCHRONIZATIONCONTEXT_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_ID_OFFSET))(this);
		}

		::System::Boolean TryExecuteTask(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYEXECUTETASK_OFFSET))(this, a1);
		}

		static ::System::Void PublishUnobservedTaskException(::System::Object* a1, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(a1, a2);
		}
	};
}
