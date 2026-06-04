#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/ManualResetEventSlim.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1862E3B0)
#define SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES__CTOR_OFFSET UNITYSDK_OFFSET(0x18629AE0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_SetOnInvokeMres_TypeDefinitionIndex = 897;

	class Task_SetOnInvokeMres : public ::System::Threading::ManualResetEventSlim
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONINVOKEMRES_INVOKE_OFFSET))(this, a1);
		}
	};
}
