#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1960C030)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKFROMASYNCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1960C550)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKMULTITASKCONTINUATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1960BF40)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMMONCWANYLOGIC_OFFSET UNITYSDK_OFFSET(0x1960C640)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_1_OFFSET UNITYSDK_OFFSET(0x1960C520)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET UNITYSDK_OFFSET(0x1960C4F0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_GETDEFAULTSCHEDULER_OFFSET UNITYSDK_OFFSET(0x1960BD80)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_1_OFFSET UNITYSDK_OFFSET(0x1960C1E0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_2_OFFSET UNITYSDK_OFFSET(0x1960C3A0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET UNITYSDK_OFFSET(0x1960C0A0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1960BEA0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1960BE40)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_TypeDefinitionIndex = 932;

	class TaskFactory : public ::System::Object
	{
	public:
		::System::Threading::Tasks::TaskScheduler* m_defaultScheduler; // 0x10
		::System::Threading::CancellationToken m_defaultCancellationToken; // 0x18
		::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions; // 0x20
		::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_1_OFFSET))(this, cancellationToken, creationOptions, continuationOptions, scheduler);
		}

		::System::Threading::Tasks::TaskScheduler* GetDefaultScheduler(::System::Threading::Tasks::Task* currTask)
		{
			return ((::System::Threading::Tasks::TaskScheduler*(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_GETDEFAULTSCHEDULER_OFFSET))(this, currTask);
		}

		static ::System::Void CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET))(creationOptions);
		}

		::System::Threading::Tasks::Task* StartNew(::System::Action* action, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET))(this, action, cancellationToken, creationOptions, scheduler);
		}

		::System::Threading::Tasks::Task* StartNew_1(::System::Action_1<::System::Object*>* action, ::System::Object* state)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_1_OFFSET))(this, action, state);
		}

		::System::Threading::Tasks::Task* StartNew_2(::System::Action_1<::System::Object*>* action, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_2_OFFSET))(this, action, state, cancellationToken, creationOptions, scheduler);
		}

		::System::Threading::Tasks::Task* FromAsync(::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod, ::System::Action_1<::System::IAsyncResult*>* endMethod, ::System::Object* state)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*, ::System::Action_1<::System::IAsyncResult*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET))(this, beginMethod, endMethod, state);
		}

		::System::Threading::Tasks::Task* FromAsync_1(::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod, ::System::Action_1<::System::IAsyncResult*>* endMethod, ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*, ::System::Action_1<::System::IAsyncResult*>*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_1_OFFSET))(this, beginMethod, endMethod, state, creationOptions);
		}

		static ::System::Void CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Boolean hasBeginMethod)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKFROMASYNCOPTIONS_OFFSET))(creationOptions, hasBeginMethod);
		}

		static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* CommonCWAnyLogic(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*(*)(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_COMMONCWANYLOGIC_OFFSET))(tasks);
		}

		static ::System::Void CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskContinuationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKMULTITASKCONTINUATIONOPTIONS_OFFSET))(continuationOptions);
		}
	};
}
