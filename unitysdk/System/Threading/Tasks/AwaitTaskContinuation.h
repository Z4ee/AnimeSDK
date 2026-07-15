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

#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_CREATETASK_OFFSET UNITYSDK_OFFSET(0x19989BD0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_EXECUTEWORKITEMHELPER_OFFSET UNITYSDK_OFFSET(0x1998A060)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GETINVOKEACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1998A250)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GET_ISVALIDLOCATIONFORINLINING_OFFSET UNITYSDK_OFFSET(0x19989DD0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_INVOKEACTION_OFFSET UNITYSDK_OFFSET(0x1998A210)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNCALLBACK_OFFSET UNITYSDK_OFFSET(0x19989F30)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNORSCHEDULEACTION_OFFSET UNITYSDK_OFFSET(0x1998A470)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x19989CC0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1998A1C0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1998A200)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_THROWASYNCIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1998A2C0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_UNSAFESCHEDULEACTION_OFFSET UNITYSDK_OFFSET(0x1998A580)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19989B90)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19989B50)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AwaitTaskContinuation_TypeDefinitionIndex = 920;

	class AwaitTaskContinuation : public ::System::Threading::Tasks::TaskContinuation
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_invokeActionCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(AwaitTaskContinuation_TypeDefinitionIndex)->GetStaticField(0x20F10);
		}
		::System::Threading::ExecutionContext* m_capturedContext; // 0x10
		::System::Action* m_action; // 0x18

		::System::Void _ctor(::System::Action* a1, ::System::Boolean a2, ::System::Threading::StackCrawlMark& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task* CreateTask(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Threading::Tasks::TaskScheduler* a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_CREATETASK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Run(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUN_OFFSET))(this, a1, a2);
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

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, a1);
		}

		static ::System::Void InvokeAction(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_INVOKEACTION_OFFSET))(a1);
		}

		static ::System::Threading::ContextCallback* GetInvokeActionCallback()
		{
			return ((::System::Threading::ContextCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GETINVOKEACTIONCALLBACK_OFFSET))();
		}

		::System::Void RunCallback(::System::Threading::ContextCallback* a1, ::System::Object* a2, ::System::Threading::Tasks::Task*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Threading::Tasks::Task*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void RunOrScheduleAction(::System::Action* a1, ::System::Boolean a2, ::System::Threading::Tasks::Task*& a3)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Boolean, ::System::Threading::Tasks::Task*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNORSCHEDULEACTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnsafeScheduleAction(::System::Action* a1, ::System::Threading::Tasks::Task* a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_UNSAFESCHEDULEACTION_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowAsyncIfNecessary(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_THROWASYNCIFNECESSARY_OFFSET))(a1);
		}
	};
}
