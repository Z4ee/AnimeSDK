#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C666690)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKFROMASYNCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C6667F0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKMULTITASKCONTINUATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C6665C0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMMONCWANYLOGIC_OFFSET UNITYSDK_OFFSET(0x1C6636F0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET UNITYSDK_OFFSET(0x1C6666E0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C666550)
#define SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C663D10)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_TypeDefinitionIndex = 928;

	class TaskFactory : public ::System::Object
	{
	public:
		::System::Threading::Tasks::TaskScheduler* m_defaultScheduler; // 0x10
		::System::Threading::CancellationToken m_defaultCancellationToken; // 0x18
		::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions; // 0x20
		::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Threading::CancellationToken a1, ::System::Threading::Tasks::TaskCreationOptions a2, ::System::Threading::Tasks::TaskContinuationOptions a3, ::System::Threading::Tasks::TaskScheduler* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions a1)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET))(a1);
		}

		::System::Threading::Tasks::Task* StartNew(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Threading::CancellationToken a3, ::System::Threading::Tasks::TaskCreationOptions a4, ::System::Threading::Tasks::TaskScheduler* a5)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKFROMASYNCOPTIONS_OFFSET))(a1, a2);
		}

		static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* CommonCWAnyLogic(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* a1)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*(*)(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_COMMONCWANYLOGIC_OFFSET))(a1);
		}

		static ::System::Void CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions a1)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskContinuationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKMULTITASKCONTINUATIONOPTIONS_OFFSET))(a1);
		}
	};
}
