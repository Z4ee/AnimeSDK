#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuation.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"

namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x1A727E20)
#define SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A727B20)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int StandardTaskContinuation_TypeDefinitionIndex = 915;

	class StandardTaskContinuation : public ::System::Threading::Tasks::TaskContinuation
	{
	public:
		::System::Threading::Tasks::Task* m_task; // 0x10
		::System::Threading::Tasks::TaskScheduler* m_taskScheduler; // 0x18
		::System::Threading::Tasks::TaskContinuationOptions m_options; // 0x20

		::System::Void _ctor(::System::Threading::Tasks::Task* a1, ::System::Threading::Tasks::TaskContinuationOptions a2, ::System::Threading::Tasks::TaskScheduler* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Run(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_RUN_OFFSET))(this, a1, a2);
		}
	};
}
