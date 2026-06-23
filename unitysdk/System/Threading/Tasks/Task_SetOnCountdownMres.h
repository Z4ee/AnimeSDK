#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/ManualResetEventSlim.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1B8920)
#define SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B8800)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_SetOnCountdownMres_TypeDefinitionIndex = 903;

	class Task_SetOnCountdownMres : public ::System::Threading::ManualResetEventSlim
	{
	public:
		::System::Int32 _count; // 0x28

		::System::Void _ctor(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES__CTOR_OFFSET))(this, count);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* completingTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES_INVOKE_OFFSET))(this, completingTask);
		}
	};
}
