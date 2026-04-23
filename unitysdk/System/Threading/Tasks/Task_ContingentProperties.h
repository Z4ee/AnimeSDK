#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ManualResetEventSlim; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskExceptionHolder; }
namespace System::Threading::Tasks { template <typename T> class Shared_1; }

#define SYSTEM_THREADING_TASKS_TASK_CONTINGENTPROPERTIES_DEREGISTERCANCELLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1786E840)
#define SYSTEM_THREADING_TASKS_TASK_CONTINGENTPROPERTIES_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1786E820)
#define SYSTEM_THREADING_TASKS_TASK_CONTINGENTPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1786CB80)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_ContingentProperties_TypeDefinitionIndex = 897;

	class Task_ContingentProperties : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* m_exceptionalChildren; // 0x10
		::System::Threading::Tasks::TaskExceptionHolder* m_exceptionsHolder; // 0x18
		::System::Threading::ExecutionContext* m_capturedContext; // 0x20
		::System::Threading::CancellationToken m_cancellationToken; // 0x28
		::System::Threading::Tasks::Shared_1<::System::Threading::CancellationTokenRegistration>* m_cancellationRegistration; // 0x30
		::System::Threading::ManualResetEventSlim* m_completionEvent; // 0x38
		::System::Int32 m_internalCancellationRequested; // 0x40
		::System::Int32 m_completionCountdown; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINGENTPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::Void SetCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINGENTPROPERTIES_SETCOMPLETED_OFFSET))(this);
		}

		::System::Void DeregisterCancellationCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINGENTPROPERTIES_DEREGISTERCANCELLATIONCALLBACK_OFFSET))(this);
		}
	};
}
