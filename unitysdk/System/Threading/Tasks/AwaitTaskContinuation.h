#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuation.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ThreadAbortException; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_CREATETASK_OFFSET UNITYSDK_OFFSET(0x1DD086D0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_EXECUTEWORKITEMHELPER_OFFSET UNITYSDK_OFFSET(0x1DD08C30)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GETINVOKEACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD08EC0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GET_ISVALIDLOCATIONFORINLINING_OFFSET UNITYSDK_OFFSET(0x1DD089A0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_INVOKEACTION_OFFSET UNITYSDK_OFFSET(0x1DD08E60)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD08A80)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNORSCHEDULEACTION_OFFSET UNITYSDK_OFFSET(0x1DD09090)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x1DD08830)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1DD08E20)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1DD08E50)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_THROWASYNCIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1DD08F50)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_UNSAFESCHEDULEACTION_OFFSET UNITYSDK_OFFSET(0x1DD091E0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD08660)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD085E0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AwaitTaskContinuation_TypeDefinitionIndex = 928;

	class AwaitTaskContinuation : public ::System::Threading::Tasks::TaskContinuation
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_invokeActionCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(AwaitTaskContinuation_TypeDefinitionIndex)->GetStaticField(0xAF0);
		}
		::System::Action* m_action; // 0x10
		::System::Threading::ExecutionContext* m_capturedContext; // 0x18

		::System::Void _ctor(::System::Action* action, ::System::Boolean flowExecutionContext, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_OFFSET))(this, action, flowExecutionContext, stackMark);
		}

		::System::Void _ctor_1(::System::Action* action, ::System::Boolean flowExecutionContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_1_OFFSET))(this, action, flowExecutionContext);
		}

		::System::Threading::Tasks::Task* CreateTask(::System::Action_1<::System::Object*>* action, ::System::Object* state, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_CREATETASK_OFFSET))(this, action, state, scheduler);
		}

		::System::Void Run(::System::Threading::Tasks::Task* task, ::System::Boolean canInlineContinuationTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUN_OFFSET))(this, task, canInlineContinuationTask);
		}

		static ::System::Boolean get_IsValidLocationForInlining()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GET_ISVALIDLOCATIONFORINLINING_OFFSET))();
		}

		::System::Void ExecuteWorkItemHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_EXECUTEWORKITEMHELPER_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, tae);
		}

		static ::System::Void InvokeAction(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_INVOKEACTION_OFFSET))(state);
		}

		static ::System::Threading::ContextCallback* GetInvokeActionCallback()
		{
			return ((::System::Threading::ContextCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GETINVOKEACTIONCALLBACK_OFFSET))();
		}

		::System::Void RunCallback(::System::Threading::ContextCallback* callback, ::System::Object* state, ::System::Threading::Tasks::Task*& currentTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Threading::Tasks::Task*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNCALLBACK_OFFSET))(this, callback, state, currentTask);
		}

		static ::System::Void RunOrScheduleAction(::System::Action* action, ::System::Boolean allowInlining, ::System::Threading::Tasks::Task*& currentTask)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Boolean, ::System::Threading::Tasks::Task*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNORSCHEDULEACTION_OFFSET))(action, allowInlining, currentTask);
		}

		static ::System::Void UnsafeScheduleAction(::System::Action* action, ::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_UNSAFESCHEDULEACTION_OFFSET))(action, task);
		}

		static ::System::Void ThrowAsyncIfNecessary(::System::Exception* exc)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_THROWASYNCIFNECESSARY_OFFSET))(exc);
		}
	};
}
