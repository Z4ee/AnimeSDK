#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/ManualResetEventSlim.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x178755F0)
#define SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES__CTOR_OFFSET UNITYSDK_OFFSET(0x17870D90)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_SetOnInvokeMres_TypeDefinitionIndex = 898;

	class Task_SetOnInvokeMres : public ::System::Threading::ManualResetEventSlim
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* completingTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES_INVOKE_OFFSET))(this, completingTask);
		}
	};
}
