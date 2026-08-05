#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/ParallelLoopStateFlags.h"

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32_GET_LOWESTBREAKITERATION_OFFSET UNITYSDK_OFFSET(0x1E418EA0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32_SHOULDEXITLOOP_1_OFFSET UNITYSDK_OFFSET(0x1E418F80)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32_SHOULDEXITLOOP_OFFSET UNITYSDK_OFFSET(0x1E418EB0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32__CTOR_OFFSET UNITYSDK_OFFSET(0x1E419010)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopStateFlags32_TypeDefinitionIndex = 893;

	class ParallelLoopStateFlags32 : public ::System::Threading::Tasks::ParallelLoopStateFlags
	{
	public:
		::System::Int32 m_lowestBreakIteration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32__CTOR_OFFSET))(this);
		}

		::System::Int32 get_LowestBreakIteration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32_GET_LOWESTBREAKITERATION_OFFSET))(this);
		}

		::System::Boolean ShouldExitLoop(::System::Int32 CallerIteration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32_SHOULDEXITLOOP_OFFSET))(this, CallerIteration);
		}

		::System::Boolean ShouldExitLoop_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS32_SHOULDEXITLOOP_1_OFFSET))(this);
		}
	};
}
