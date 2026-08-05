#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVEMAXCONCURRENCYLEVEL_OFFSET UNITYSDK_OFFSET(0x1CCCD930)
#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVETASKSCHEDULER_OFFSET UNITYSDK_OFFSET(0x1CCCD7C0)
#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCD730)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelOptions_TypeDefinitionIndex = 886;

	class ParallelOptions : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken m_cancellationToken; // 0x10
		::System::Threading::Tasks::TaskScheduler* m_scheduler; // 0x18
		::System::Int32 m_maxDegreeOfParallelism; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Threading::Tasks::TaskScheduler* get_EffectiveTaskScheduler()
		{
			return ((::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVETASKSCHEDULER_OFFSET))(this);
		}

		::System::Int32 get_EffectiveMaxConcurrencyLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVEMAXCONCURRENCYLEVEL_OFFSET))(this);
		}
	};
}
