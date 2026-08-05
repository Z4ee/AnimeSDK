#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskStatus.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Action; }
namespace System { class AggregateException; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class OperationCanceledException; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ManualResetEventSlim; }
namespace System::Threading { class ThreadAbortException; }
namespace System::Threading { class WaitHandle; }
namespace System::Threading::Tasks { class ITaskCompletionAction; }
namespace System::Threading::Tasks { class StackGuard; }
namespace System::Threading::Tasks { class TaskContinuation; }
namespace System::Threading::Tasks { class TaskFactory; }
namespace System::Threading::Tasks { class TaskScheduler; }
namespace System::Threading::Tasks { class Task_ContingentProperties; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_1_OFFSET UNITYSDK_OFFSET(0x1CCD4630)
#define SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_OFFSET UNITYSDK_OFFSET(0x1CCD5200)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFORCOMPLETEDTASK_OFFSET UNITYSDK_OFFSET(0x1CCD6400)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFROMCHILDREN_OFFSET UNITYSDK_OFFSET(0x1CCD2090)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1CCD1540)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CCD0070)
#define SYSTEM_THREADING_TASKS_TASK_ADDNEWCHILD_OFFSET UNITYSDK_OFFSET(0x1CCCE330)
#define SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATIONCOMPLEX_OFFSET UNITYSDK_OFFSET(0x1CCD5210)
#define SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1CCD3F50)
#define SYSTEM_THREADING_TASKS_TASK_ADDTOACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x1CCCD980)
#define SYSTEM_THREADING_TASKS_TASK_ASSIGNCANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1CCCE460)
#define SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1CCCF000)
#define SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CCCEF90)
#define SYSTEM_THREADING_TASKS_TASK_CANCELLATIONCLEANUPLOGIC_OFFSET UNITYSDK_OFFSET(0x1CCD3690)
#define SYSTEM_THREADING_TASKS_TASK_CONFIGUREAWAIT_OFFSET UNITYSDK_OFFSET(0x1CCB6740)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITHCORE_OFFSET UNITYSDK_OFFSET(0x1CCD4D80)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_1_OFFSET UNITYSDK_OFFSET(0x1CCD4C30)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_2_OFFSET UNITYSDK_OFFSET(0x1CCD4AC0)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_3_OFFSET UNITYSDK_OFFSET(0x1CCD5040)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_4_OFFSET UNITYSDK_OFFSET(0x1CCD5080)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x1CCD4980)
#define SYSTEM_THREADING_TASKS_TASK_COPYEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CCD10F0)
#define SYSTEM_THREADING_TASKS_TASK_CREATEREPLICATASK_OFFSET UNITYSDK_OFFSET(0x1CCD2EE0)
#define SYSTEM_THREADING_TASKS_TASK_CREATIONOPTIONSFROMCONTINUATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1CCD4C70)
#define SYSTEM_THREADING_TASKS_TASK_DELAY_1_OFFSET UNITYSDK_OFFSET(0x1CCD6B20)
#define SYSTEM_THREADING_TASKS_TASK_DELAY_2_OFFSET UNITYSDK_OFFSET(0x1CCD67F0)
#define SYSTEM_THREADING_TASKS_TASK_DELAY_OFFSET UNITYSDK_OFFSET(0x1CCD6710)
#define SYSTEM_THREADING_TASKS_TASK_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CCD1220)
#define SYSTEM_THREADING_TASKS_TASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCD1170)
#define SYSTEM_THREADING_TASKS_TASK_DISREGARDCHILD_OFFSET UNITYSDK_OFFSET(0x1CCCEAC0)
#define SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x1CCD0920)
#define SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CCCE760)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTEENTRY_OFFSET UNITYSDK_OFFSET(0x1CCD3060)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTESELFREPLICATING_OFFSET UNITYSDK_OFFSET(0x1CCD2CB0)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTEWITHTHREADLOCAL_OFFSET UNITYSDK_OFFSET(0x1CCD32A0)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CCD2B50)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTIONCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CCD3900)
#define SYSTEM_THREADING_TASKS_TASK_FINISHCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x1CCD24A0)
#define SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETHREE_OFFSET UNITYSDK_OFFSET(0x1CCD2250)
#define SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETWO_OFFSET UNITYSDK_OFFSET(0x1CCD1B50)
#define SYSTEM_THREADING_TASKS_TASK_FINISHTHREADABORTEDTASK_OFFSET UNITYSDK_OFFSET(0x1CCD13E0)
#define SYSTEM_THREADING_TASKS_TASK_FINISH_OFFSET UNITYSDK_OFFSET(0x1CCD0080)
#define SYSTEM_THREADING_TASKS_TASK_FROMCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1CCD6570)
#define SYSTEM_THREADING_TASKS_TASK_FROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CCD6510)
#define SYSTEM_THREADING_TASKS_TASK_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1CCD3A10)
#define SYSTEM_THREADING_TASKS_TASK_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x1CCD1930)
#define SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONDISPATCHINFOS_OFFSET UNITYSDK_OFFSET(0x1CCD1850)
#define SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1CCD06B0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ACTIVECHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CCD0FF0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1CCD0E40)
#define SYSTEM_THREADING_TASKS_TASK_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1CCD09F0)
#define SYSTEM_THREADING_TASKS_TASK_GET_CAPTUREDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CCD1060)
#define SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDEVENT_OFFSET UNITYSDK_OFFSET(0x1CCD0B80)
#define SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDTASK_OFFSET UNITYSDK_OFFSET(0x1CCD0EC0)
#define SYSTEM_THREADING_TASKS_TASK_GET_CREATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1CCCE2E0)
#define SYSTEM_THREADING_TASKS_TASK_GET_CURRENTSTACKGUARD_OFFSET UNITYSDK_OFFSET(0x1CCD0550)
#define SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTIONRECORDED_OFFSET UNITYSDK_OFFSET(0x1CCD1010)
#define SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CCD0680)
#define SYSTEM_THREADING_TASKS_TASK_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1CCD0E60)
#define SYSTEM_THREADING_TASKS_TASK_GET_HANDEDOVERCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1CCD3030)
#define SYSTEM_THREADING_TASKS_TASK_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CCCDBD0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x1CCD08C0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONACKNOWLEDGED_OFFSET UNITYSDK_OFFSET(0x1CCD0A10)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x1CCD08E0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1CCD0FA0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCOMPLETEDSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x1CCD0A20)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CCCFDE0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISDELEGATEINVOKED_OFFSET UNITYSDK_OFFSET(0x1CCD1B40)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISEXCEPTIONOBSERVEDBYPARENT_OFFSET UNITYSDK_OFFSET(0x1CCD1B30)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISFAULTED_OFFSET UNITYSDK_OFFSET(0x1CCD06A0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISRANTOCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1CCD0A40)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISSELFREPLICATINGROOT_OFFSET UNITYSDK_OFFSET(0x1CCCF200)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLEDORNOTRANTOCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1CCCF160)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1CCCF130)
#define SYSTEM_THREADING_TASKS_TASK_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1CCCE780)
#define SYSTEM_THREADING_TASKS_TASK_GET_SAVEDSTATEFORNEXTREPLICA_OFFSET UNITYSDK_OFFSET(0x1CCD2FF0)
#define SYSTEM_THREADING_TASKS_TASK_GET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET UNITYSDK_OFFSET(0x1CCD3010)
#define SYSTEM_THREADING_TASKS_TASK_GET_SHOULDNOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1CCCF180)
#define SYSTEM_THREADING_TASKS_TASK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CCD0860)
#define SYSTEM_THREADING_TASKS_TASK_HANDLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CCD2DC0)
#define SYSTEM_THREADING_TASKS_TASK_INNERINVOKEWITHARG_OFFSET UNITYSDK_OFFSET(0x1CCD39E0)
#define SYSTEM_THREADING_TASKS_TASK_INNERINVOKE_OFFSET UNITYSDK_OFFSET(0x1CCD3970)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALCANCEL_OFFSET UNITYSDK_OFFSET(0x1CCCE7D0)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALCURRENTIFATTACHED_OFFSET UNITYSDK_OFFSET(0x1CCCD3E0)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALRUNSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1CCCF790)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALSTARTNEW_OFFSET UNITYSDK_OFFSET(0x1CCD0280)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALWAIT_OFFSET UNITYSDK_OFFSET(0x1CCD41B0)
#define SYSTEM_THREADING_TASKS_TASK_ISCOMPLETEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1CCCF500)
#define SYSTEM_THREADING_TASKS_TASK_MARKSTARTED_OFFSET UNITYSDK_OFFSET(0x1CCCF190)
#define SYSTEM_THREADING_TASKS_TASK_NEWID_OFFSET UNITYSDK_OFFSET(0x1CCD04E0)
#define SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETIONIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1CCCD6F0)
#define SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1CCCF140)
#define SYSTEM_THREADING_TASKS_TASK_OPTIONSMETHOD_OFFSET UNITYSDK_OFFSET(0x1CCCEF80)
#define SYSTEM_THREADING_TASKS_TASK_POSSIBLYCAPTURECONTEXT_OFFSET UNITYSDK_OFFSET(0x1CCCD540)
#define SYSTEM_THREADING_TASKS_TASK_PROCESSCHILDCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1CCD22E0)
#define SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1CCD4860)
#define SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_2_OFFSET UNITYSDK_OFFSET(0x1CCD48E0)
#define SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_OFFSET UNITYSDK_OFFSET(0x1CCD47A0)
#define SYSTEM_THREADING_TASKS_TASK_REMOVECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1CCCEC40)
#define SYSTEM_THREADING_TASKS_TASK_REMOVEFROMACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x1CCCDCB0)
#define SYSTEM_THREADING_TASKS_TASK_RUNSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1CCCF710)
#define SYSTEM_THREADING_TASKS_TASK_RUN_OFFSET UNITYSDK_OFFSET(0x1CCD6650)
#define SYSTEM_THREADING_TASKS_TASK_SCHEDULEANDSTART_OFFSET UNITYSDK_OFFSET(0x1CCCF510)
#define SYSTEM_THREADING_TASKS_TASK_SETCANCELLATIONACKNOWLEDGED_OFFSET UNITYSDK_OFFSET(0x1CCD3A00)
#define SYSTEM_THREADING_TASKS_TASK_SETCONTINUATIONFORAWAIT_OFFSET UNITYSDK_OFFSET(0x1CCD3A20)
#define SYSTEM_THREADING_TASKS_TASK_SETNOTIFICATIONFORWAITCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1CCCF080)
#define SYSTEM_THREADING_TASKS_TASK_SET_CAPTUREDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CCCEF00)
#define SYSTEM_THREADING_TASKS_TASK_SET_HANDEDOVERCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1CCD3040)
#define SYSTEM_THREADING_TASKS_TASK_SET_SAVEDSTATEFORNEXTREPLICA_OFFSET UNITYSDK_OFFSET(0x1CCD3000)
#define SYSTEM_THREADING_TASKS_TASK_SET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET UNITYSDK_OFFSET(0x1CCD3020)
#define SYSTEM_THREADING_TASKS_TASK_SHOULDREPLICATE_OFFSET UNITYSDK_OFFSET(0x1CCD2ED0)
#define SYSTEM_THREADING_TASKS_TASK_SPINTHENBLOCKINGWAIT_OFFSET UNITYSDK_OFFSET(0x1CCCFE30)
#define SYSTEM_THREADING_TASKS_TASK_SPINWAIT_OFFSET UNITYSDK_OFFSET(0x1CCD43D0)
#define SYSTEM_THREADING_TASKS_TASK_START_1_OFFSET UNITYSDK_OFFSET(0x1CCCF350)
#define SYSTEM_THREADING_TASKS_TASK_START_OFFSET UNITYSDK_OFFSET(0x1CCCF260)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1CCD0A60)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1CCD0E50)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1CCD3050)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1CCD3220)
#define SYSTEM_THREADING_TASKS_TASK_TASKCANCELCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CCCEB80)
#define SYSTEM_THREADING_TASKS_TASK_TASKCONSTRUCTORCORE_OFFSET UNITYSDK_OFFSET(0x1CCCDFA0)
#define SYSTEM_THREADING_TASKS_TASK_THROWIFEXCEPTIONAL_OFFSET UNITYSDK_OFFSET(0x1CCD1950)
#define SYSTEM_THREADING_TASKS_TASK_UPDATEEXCEPTIONOBSERVEDSTATUS_OFFSET UNITYSDK_OFFSET(0x1CCD19B0)
#define SYSTEM_THREADING_TASKS_TASK_WAITALLBLOCKINGCORE_OFFSET UNITYSDK_OFFSET(0x1CCD6190)
#define SYSTEM_THREADING_TASKS_TASK_WAITALL_1_OFFSET UNITYSDK_OFFSET(0x1CCD5580)
#define SYSTEM_THREADING_TASKS_TASK_WAITALL_2_OFFSET UNITYSDK_OFFSET(0x1CCD5630)
#define SYSTEM_THREADING_TASKS_TASK_WAITALL_OFFSET UNITYSDK_OFFSET(0x1CCD5510)
#define SYSTEM_THREADING_TASKS_TASK_WAIT_1_OFFSET UNITYSDK_OFFSET(0x1CCD4000)
#define SYSTEM_THREADING_TASKS_TASK_WAIT_OFFSET UNITYSDK_OFFSET(0x1CCD3FF0)
#define SYSTEM_THREADING_TASKS_TASK_WHENANY_OFFSET UNITYSDK_OFFSET(0x1CCD6B80)
#define SYSTEM_THREADING_TASKS_TASK_WRAPPEDTRYRUNINLINE_OFFSET UNITYSDK_OFFSET(0x1CCD42F0)
#define SYSTEM_THREADING_TASKS_TASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD6D60)
#define SYSTEM_THREADING_TASKS_TASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCCDE80)
#define SYSTEM_THREADING_TASKS_TASK__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CCCDE90)
#define SYSTEM_THREADING_TASKS_TASK__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CCCE150)
#define SYSTEM_THREADING_TASKS_TASK__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CCCD470)
#define SYSTEM_THREADING_TASKS_TASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCDDF0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_TypeDefinitionIndex = 900;

	class Task : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::TaskFactory** StaticGet_s_factory()
		{
			return (::System::Threading::Tasks::TaskFactory**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0xE0);
		}
		static ::System::Object** StaticGet_s_taskCompletionSentinel()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0xE8);
		}
		static ::System::Predicate_1<::System::Threading::Tasks::Task*>** StaticGet_s_IsExceptionObservedByParentPredicate()
		{
			return (::System::Predicate_1<::System::Threading::Tasks::Task*>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0xF0);
		}
		static ::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>** StaticGet_s_createContingentProperties()
		{
			return (::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0xF8);
		}
		static ::System::Threading::ContextCallback** StaticGet_s_ecCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x100);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::Tasks::Task*>** StaticGet_s_currentActiveTasks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::Tasks::Task*>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x108);
		}
		static ::System::Threading::Tasks::Task** StaticGet_s_completedTask()
		{
			return (::System::Threading::Tasks::Task**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x110);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_s_taskCancelCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x118);
		}
		static ::System::Predicate_1<::System::Object*>** StaticGet_s_IsTaskContinuationNullPredicate()
		{
			return (::System::Predicate_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x120);
		}
		static ::System::Object** StaticGet_s_activeTasksLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x128);
		}
		static ::System::Boolean* StaticGet_s_asyncDebuggingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::Int32* StaticGet_s_taskIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x34);
		}
		static ::System::Threading::Tasks::Task** StaticGet_t_currentTask()
		{
			return (::System::Threading::Tasks::Task**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::Tasks::StackGuard** StaticGet_t_stackGuard()
		{
			return (::System::Threading::Tasks::StackGuard**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Threading::Tasks::Task_ContingentProperties* m_contingentProperties; // 0x10
		::System::Object* m_stateObject; // 0x18
		::System::Object* m_action; // 0x20
		::System::Object* m_continuationObject; // 0x28
		::System::Threading::Tasks::TaskScheduler* m_taskScheduler; // 0x30
		::System::Threading::Tasks::Task* m_parent; // 0x38
		::System::Int32 m_stateFlags; // 0x40
		::System::Int32 m_taskId; // 0x44

		::System::Void _ctor(::System::Boolean canceled, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK__CTOR_OFFSET))(this, canceled, creationOptions, ct);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Boolean promiseStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK__CTOR_2_OFFSET))(this, state, creationOptions, promiseStyle);
		}

		::System::Void _ctor_3(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK__CTOR_3_OFFSET))(this, action);
		}

		::System::Void _ctor_4(::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK__CTOR_4_OFFSET))(this, action, state, parent, cancellationToken, creationOptions, internalOptions, scheduler);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK__CCTOR_OFFSET))();
		}

		static ::System::Boolean AddToActiveTasks(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Boolean(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDTOACTIVETASKS_OFFSET))(task);
		}

		static ::System::Void RemoveFromActiveTasks(::System::Int32 taskId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_REMOVEFROMACTIVETASKS_OFFSET))(taskId);
		}

		::System::Void TaskConstructorCore(::System::Object* action, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_TASKCONSTRUCTORCORE_OFFSET))(this, action, state, cancellationToken, creationOptions, internalOptions, scheduler);
		}

		::System::Void AssignCancellationToken(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::Task* antecedent, ::System::Threading::Tasks::TaskContinuation* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuation*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ASSIGNCANCELLATIONTOKEN_OFFSET))(this, cancellationToken, antecedent, continuation);
		}

		static ::System::Void TaskCancelCallback(::System::Object* o)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_TASKCANCELCALLBACK_OFFSET))(o);
		}

		::System::Void PossiblyCaptureContext(::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_POSSIBLYCAPTURECONTEXT_OFFSET))(this, stackMark);
		}

		::System::Threading::Tasks::TaskCreationOptions get_Options()
		{
			return ((::System::Threading::Tasks::TaskCreationOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_OPTIONS_OFFSET))(this);
		}

		static ::System::Threading::Tasks::TaskCreationOptions OptionsMethod(::System::Int32 flags)
		{
			return ((::System::Threading::Tasks::TaskCreationOptions(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_OPTIONSMETHOD_OFFSET))(flags);
		}

		::System::Boolean AtomicStateUpdate(::System::Int32 newBits, ::System::Int32 illegalBits)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_OFFSET))(this, newBits, illegalBits);
		}

		::System::Boolean AtomicStateUpdate_1(::System::Int32 newBits, ::System::Int32 illegalBits, ::System::Int32& oldFlags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_1_OFFSET))(this, newBits, illegalBits, oldFlags);
		}

		::System::Void SetNotificationForWaitCompletion(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETNOTIFICATIONFORWAITCOMPLETION_OFFSET))(this, enabled);
		}

		::System::Boolean NotifyDebuggerOfWaitCompletionIfNecessary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETIONIFNECESSARY_OFFSET))(this);
		}

		::System::Boolean get_IsWaitNotificationEnabledOrNotRanToCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLEDORNOTRANTOCOMPLETION_OFFSET))(this);
		}

		::System::Boolean get_ShouldNotifyDebuggerOfWaitCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_SHOULDNOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET))(this);
		}

		::System::Boolean get_IsWaitNotificationEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLED_OFFSET))(this);
		}

		::System::Void NotifyDebuggerOfWaitCompletion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET))(this);
		}

		::System::Boolean MarkStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_MARKSTARTED_OFFSET))(this);
		}

		::System::Void AddNewChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDNEWCHILD_OFFSET))(this);
		}

		::System::Void DisregardChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DISREGARDCHILD_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_START_OFFSET))(this);
		}

		::System::Void Start_1(::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_START_1_OFFSET))(this, scheduler);
		}

		::System::Void RunSynchronously(::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RUNSYNCHRONOUSLY_OFFSET))(this, scheduler);
		}

		::System::Void InternalRunSynchronously(::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Boolean waitForCompletion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskScheduler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALRUNSYNCHRONOUSLY_OFFSET))(this, scheduler, waitForCompletion);
		}

		static ::System::Threading::Tasks::Task* InternalStartNew(::System::Threading::Tasks::Task* creatingTask, ::System::Delegate* action, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::Tasks::TaskCreationOptions options, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Delegate*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALSTARTNEW_OFFSET))(creatingTask, action, state, cancellationToken, scheduler, options, internalOptions, stackMark);
		}

		static ::System::Int32 NewId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_NEWID_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ID_OFFSET))(this);
		}

		static ::System::Threading::Tasks::Task* InternalCurrentIfAttached(::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::TaskCreationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALCURRENTIFATTACHED_OFFSET))(creationOptions);
		}

		static ::System::Threading::Tasks::StackGuard* get_CurrentStackGuard()
		{
			return ((::System::Threading::Tasks::StackGuard*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CURRENTSTACKGUARD_OFFSET))();
		}

		::System::AggregateException* get_Exception()
		{
			return ((::System::AggregateException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Threading::Tasks::TaskStatus get_Status()
		{
			return ((::System::Threading::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean get_IsCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELED_OFFSET))(this);
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONREQUESTED_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitialized(::System::Boolean needsProtection)
		{
			return ((::System::Threading::Tasks::Task_ContingentProperties*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZED_OFFSET))(this, needsProtection);
		}

		::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitializedCore(::System::Boolean needsProtection)
		{
			return ((::System::Threading::Tasks::Task_ContingentProperties*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZEDCORE_OFFSET))(this, needsProtection);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Boolean get_IsCancellationAcknowledged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONACKNOWLEDGED_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCOMPLETED_OFFSET))(this);
		}

		static ::System::Boolean IsCompletedMethod(::System::Int32 flags)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ISCOMPLETEDMETHOD_OFFSET))(flags);
		}

		::System::Boolean get_IsCompletedSuccessfully()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCOMPLETEDSUCCESSFULLY_OFFSET))(this);
		}

		::System::Boolean get_IsRanToCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISRANTOCOMPLETION_OFFSET))(this);
		}

		::System::Threading::Tasks::TaskCreationOptions get_CreationOptions()
		{
			return ((::System::Threading::Tasks::TaskCreationOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CREATIONOPTIONS_OFFSET))(this);
		}

		::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Boolean System_IAsyncResult_get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		static ::System::Threading::Tasks::TaskFactory* get_Factory()
		{
			return ((::System::Threading::Tasks::TaskFactory*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_FACTORY_OFFSET))();
		}

		static ::System::Threading::Tasks::Task* get_CompletedTask()
		{
			return ((::System::Threading::Tasks::Task*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDTASK_OFFSET))();
		}

		::System::Threading::ManualResetEventSlim* get_CompletedEvent()
		{
			return ((::System::Threading::ManualResetEventSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDEVENT_OFFSET))(this);
		}

		::System::Boolean get_IsSelfReplicatingRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISSELFREPLICATINGROOT_OFFSET))(this);
		}

		::System::Boolean get_IsChildReplica()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCHILDREPLICA_OFFSET))(this);
		}

		::System::Int32 get_ActiveChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ACTIVECHILDCOUNT_OFFSET))(this);
		}

		::System::Boolean get_ExceptionRecorded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTIONRECORDED_OFFSET))(this);
		}

		::System::Boolean get_IsFaulted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISFAULTED_OFFSET))(this);
		}

		::System::Threading::ExecutionContext* get_CapturedContext()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CAPTUREDCONTEXT_OFFSET))(this);
		}

		::System::Void set_CapturedContext(::System::Threading::ExecutionContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SET_CAPTUREDCONTEXT_OFFSET))(this, value);
		}

		static ::System::Threading::ExecutionContext* CopyExecutionContext(::System::Threading::ExecutionContext* capturedContext)
		{
			return ((::System::Threading::ExecutionContext*(*)(::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_COPYEXECUTIONCONTEXT_OFFSET))(capturedContext);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void ScheduleAndStart(::System::Boolean needsProtection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SCHEDULEANDSTART_OFFSET))(this, needsProtection);
		}

		::System::Void AddException(::System::Object* exceptionObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_OFFSET))(this, exceptionObject);
		}

		::System::Void AddException_1(::System::Object* exceptionObject, ::System::Boolean representsCancellation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_1_OFFSET))(this, exceptionObject, representsCancellation);
		}

		::System::AggregateException* GetExceptions(::System::Boolean includeTaskCanceledExceptions)
		{
			return ((::System::AggregateException*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONS_OFFSET))(this, includeTaskCanceledExceptions);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONDISPATCHINFOS_OFFSET))(this);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo()
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET))(this);
		}

		::System::Void ThrowIfExceptional(::System::Boolean includeTaskCanceledExceptions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_THROWIFEXCEPTIONAL_OFFSET))(this, includeTaskCanceledExceptions);
		}

		::System::Void UpdateExceptionObservedStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_UPDATEEXCEPTIONOBSERVEDSTATUS_OFFSET))(this);
		}

		::System::Boolean get_IsExceptionObservedByParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISEXCEPTIONOBSERVEDBYPARENT_OFFSET))(this);
		}

		::System::Boolean get_IsDelegateInvoked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISDELEGATEINVOKED_OFFSET))(this);
		}

		::System::Void Finish(::System::Boolean bUserDelegateExecuted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISH_OFFSET))(this, bUserDelegateExecuted);
		}

		::System::Void FinishStageTwo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETWO_OFFSET))(this);
		}

		::System::Void FinishStageThree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETHREE_OFFSET))(this);
		}

		::System::Void ProcessChildCompletion(::System::Threading::Tasks::Task* childTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_PROCESSCHILDCOMPLETION_OFFSET))(this, childTask);
		}

		::System::Void AddExceptionsFromChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFROMCHILDREN_OFFSET))(this);
		}

		::System::Void FinishThreadAbortedTask(::System::Boolean bTAEAddedToExceptionHolder, ::System::Boolean delegateRan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHTHREADABORTEDTASK_OFFSET))(this, bTAEAddedToExceptionHolder, delegateRan);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTE_OFFSET))(this);
		}

		::System::Boolean ShouldReplicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SHOULDREPLICATE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* CreateReplicaTask(::System::Action_1<::System::Object*>* taskReplicaDelegate, ::System::Object* stateObject, ::System::Threading::Tasks::Task* parentTask, ::System::Threading::Tasks::TaskScheduler* taskScheduler, ::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplica, ::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplica)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CREATEREPLICATASK_OFFSET))(this, taskReplicaDelegate, stateObject, parentTask, taskScheduler, creationOptionsForReplica, internalOptionsForReplica);
		}

		::System::Object* get_SavedStateForNextReplica()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_SAVEDSTATEFORNEXTREPLICA_OFFSET))(this);
		}

		::System::Void set_SavedStateForNextReplica(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SET_SAVEDSTATEFORNEXTREPLICA_OFFSET))(this, value);
		}

		::System::Object* get_SavedStateFromPreviousReplica()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET))(this);
		}

		::System::Void set_SavedStateFromPreviousReplica(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET))(this, value);
		}

		::System::Threading::Tasks::Task* get_HandedOverChildReplica()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_HANDEDOVERCHILDREPLICA_OFFSET))(this);
		}

		::System::Void set_HandedOverChildReplica(::System::Threading::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SET_HANDEDOVERCHILDREPLICA_OFFSET))(this, value);
		}

		static ::System::Void ExecuteSelfReplicating(::System::Threading::Tasks::Task* root)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTESELFREPLICATING_OFFSET))(root);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, tae);
		}

		::System::Boolean ExecuteEntry(::System::Boolean bPreventDoubleExecution)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTEENTRY_OFFSET))(this, bPreventDoubleExecution);
		}

		::System::Void ExecuteWithThreadLocal(::System::Threading::Tasks::Task*& currentTaskSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTEWITHTHREADLOCAL_OFFSET))(this, currentTaskSlot);
		}

		static ::System::Void ExecutionContextCallback(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTIONCONTEXTCALLBACK_OFFSET))(obj);
		}

		::System::Void InnerInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INNERINVOKE_OFFSET))(this);
		}

		::System::Void InnerInvokeWithArg(::System::Threading::Tasks::Task* childTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INNERINVOKEWITHARG_OFFSET))(this, childTask);
		}

		::System::Void HandleException(::System::Exception* unhandledException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_HANDLEEXCEPTION_OFFSET))(this, unhandledException);
		}

		::System::Runtime::CompilerServices::TaskAwaiter GetAwaiter()
		{
			return ((::System::Runtime::CompilerServices::TaskAwaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETAWAITER_OFFSET))(this);
		}

		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable ConfigureAwait(::System::Boolean continueOnCapturedContext)
		{
			return ((::System::Runtime::CompilerServices::ConfiguredTaskAwaitable(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONFIGUREAWAIT_OFFSET))(this, continueOnCapturedContext);
		}

		::System::Void SetContinuationForAwait(::System::Action* continuationAction, ::System::Boolean continueOnCapturedContext, ::System::Boolean flowExecutionContext, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETCONTINUATIONFORAWAIT_OFFSET))(this, continuationAction, continueOnCapturedContext, flowExecutionContext, stackMark);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAIT_OFFSET))(this);
		}

		::System::Boolean Wait_1(::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAIT_1_OFFSET))(this, millisecondsTimeout, cancellationToken);
		}

		::System::Boolean WrappedTryRunInline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WRAPPEDTRYRUNINLINE_OFFSET))(this);
		}

		::System::Boolean InternalWait(::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALWAIT_OFFSET))(this, millisecondsTimeout, cancellationToken);
		}

		::System::Boolean SpinThenBlockingWait(::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SPINTHENBLOCKINGWAIT_OFFSET))(this, millisecondsTimeout, cancellationToken);
		}

		::System::Boolean SpinWait(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SPINWAIT_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean InternalCancel(::System::Boolean bCancelNonExecutingOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALCANCEL_OFFSET))(this, bCancelNonExecutingOnly);
		}

		::System::Void RecordInternalCancellationRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_OFFSET))(this);
		}

		::System::Void RecordInternalCancellationRequest_1(::System::Threading::CancellationToken tokenToRecord)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_1_OFFSET))(this, tokenToRecord);
		}

		::System::Void RecordInternalCancellationRequest_2(::System::Threading::CancellationToken tokenToRecord, ::System::Object* cancellationException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_2_OFFSET))(this, tokenToRecord, cancellationException);
		}

		::System::Void CancellationCleanupLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CANCELLATIONCLEANUPLOGIC_OFFSET))(this);
		}

		::System::Void SetCancellationAcknowledged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETCANCELLATIONACKNOWLEDGED_OFFSET))(this);
		}

		::System::Void FinishContinuations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHCONTINUATIONS_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task*>* continuationAction)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_OFFSET))(this, continuationAction);
		}

		::System::Threading::Tasks::Task* ContinueWith_1(::System::Action_1<::System::Threading::Tasks::Task*>* continuationAction, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Threading::Tasks::Task*>*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_1_OFFSET))(this, continuationAction, cancellationToken, continuationOptions, scheduler);
		}

		::System::Threading::Tasks::Task* ContinueWith_2(::System::Action_1<::System::Threading::Tasks::Task*>* continuationAction, ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_2_OFFSET))(this, continuationAction, scheduler, cancellationToken, continuationOptions, stackMark);
		}

		::System::Threading::Tasks::Task* ContinueWith_3(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* continuationAction, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_3_OFFSET))(this, continuationAction, state, cancellationToken, continuationOptions, scheduler);
		}

		::System::Threading::Tasks::Task* ContinueWith_4(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* continuationAction, ::System::Object* state, ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_4_OFFSET))(this, continuationAction, state, scheduler, cancellationToken, continuationOptions, stackMark);
		}

		static ::System::Void CreationOptionsFromContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskCreationOptions& creationOptions, ::System::Threading::Tasks::InternalTaskOptions& internalOptions)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskCreationOptions&, ::System::Threading::Tasks::InternalTaskOptions&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CREATIONOPTIONSFROMCONTINUATIONOPTIONS_OFFSET))(continuationOptions, creationOptions, internalOptions);
		}

		::System::Void ContinueWithCore(::System::Threading::Tasks::Task* continuationTask, ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITHCORE_OFFSET))(this, continuationTask, scheduler, cancellationToken, options);
		}

		::System::Void AddCompletionAction(::System::Threading::Tasks::ITaskCompletionAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ITaskCompletionAction*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_OFFSET))(this, action);
		}

		::System::Void AddCompletionAction_1(::System::Threading::Tasks::ITaskCompletionAction* action, ::System::Boolean addBeforeOthers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ITaskCompletionAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_1_OFFSET))(this, action, addBeforeOthers);
		}

		::System::Boolean AddTaskContinuationComplex(::System::Object* tc, ::System::Boolean addBeforeOthers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATIONCOMPLEX_OFFSET))(this, tc, addBeforeOthers);
		}

		::System::Boolean AddTaskContinuation(::System::Object* tc, ::System::Boolean addBeforeOthers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATION_OFFSET))(this, tc, addBeforeOthers);
		}

		::System::Void RemoveContinuation(::System::Object* continuationObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_REMOVECONTINUATION_OFFSET))(this, continuationObject);
		}

		static ::System::Void WaitAll(::Il2CppArray<::System::Threading::Tasks::Task*>* tasks)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALL_OFFSET))(tasks);
		}

		static ::System::Boolean WaitAll_1(::Il2CppArray<::System::Threading::Tasks::Task*>* tasks, ::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALL_1_OFFSET))(tasks, millisecondsTimeout);
		}

		static ::System::Boolean WaitAll_2(::Il2CppArray<::System::Threading::Tasks::Task*>* tasks, ::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALL_2_OFFSET))(tasks, millisecondsTimeout, cancellationToken);
		}

		static ::System::Boolean WaitAllBlockingCore(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* tasks, ::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALLBLOCKINGCORE_OFFSET))(tasks, millisecondsTimeout, cancellationToken);
		}

		static ::System::Void AddExceptionsForCompletedTask(::System::Collections::Generic::List_1<::System::Exception*>*& exceptions, ::System::Threading::Tasks::Task* t)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Exception*>*&, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFORCOMPLETEDTASK_OFFSET))(exceptions, t);
		}

		static ::System::Threading::Tasks::Task* FromException(::System::Exception* exception)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FROMEXCEPTION_OFFSET))(exception);
		}

		static ::System::Threading::Tasks::Task* FromCancellation(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FROMCANCELLATION_OFFSET))(cancellationToken);
		}

		static ::System::Threading::Tasks::Task* Run(::System::Action* action)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RUN_OFFSET))(action);
		}

		static ::System::Threading::Tasks::Task* Delay(::System::TimeSpan delay, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::TimeSpan, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAY_OFFSET))(delay, cancellationToken);
		}

		static ::System::Threading::Tasks::Task* Delay_1(::System::Int32 millisecondsDelay)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAY_1_OFFSET))(millisecondsDelay);
		}

		static ::System::Threading::Tasks::Task* Delay_2(::System::Int32 millisecondsDelay, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAY_2_OFFSET))(millisecondsDelay, cancellationToken);
		}

		static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* WhenAny(::Il2CppArray<::System::Threading::Tasks::Task*>* tasks)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WHENANY_OFFSET))(tasks);
		}
	};
}
