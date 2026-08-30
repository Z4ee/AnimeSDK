#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/ManualResetEventSlim.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C664B70)
#define SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C662D80)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_SetOnCountdownMres_TypeDefinitionIndex = 902;

	class Task_SetOnCountdownMres : public ::System::Threading::ManualResetEventSlim
	{
	public:
		::System::Int32 _count; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES__CTOR_OFFSET))(this, a1);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETONCOUNTDOWNMRES_INVOKE_OFFSET))(this, a1);
		}
	};
}
