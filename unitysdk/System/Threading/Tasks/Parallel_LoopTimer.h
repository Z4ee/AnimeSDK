#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_THREADING_TASKS_PARALLEL_LOOPTIMER_LIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x8ED200)
#define SYSTEM_THREADING_TASKS_PARALLEL_LOOPTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED130)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Parallel_LoopTimer_TypeDefinitionIndex = 888;

	struct alignas(4) Parallel_LoopTimer
	{
		::System::Int32 m_timeLimit; // 0x10

		::System::Void _ctor(::System::Int32 nWorkerTaskIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_LOOPTIMER__CTOR_OFFSET))(this, nWorkerTaskIndex);
		}

		::System::Boolean LimitExceeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_LOOPTIMER_LIMITEXCEEDED_OFFSET))(this);
		}
	};
}
