#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x17876D70)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKFROMASYNCOPTIONS_OFFSET UNITYSDK_OFFSET(0x17876DC0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKMULTITASKCONTINUATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x17876CA0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMMONCWANYLOGIC_OFFSET UNITYSDK_OFFSET(0x17874660)
#define SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17876C30)
#define SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x17874BB0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_TypeDefinitionIndex = 924;

	class TaskFactory : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken m_defaultCancellationToken; // 0x10
		::System::Threading::Tasks::TaskScheduler* m_defaultScheduler; // 0x18
		::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions; // 0x20
		::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_1_OFFSET))(this, cancellationToken, creationOptions, continuationOptions, scheduler);
		}

		static ::System::Void CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET))(creationOptions);
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
