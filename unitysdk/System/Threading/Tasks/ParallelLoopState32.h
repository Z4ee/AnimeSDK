#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/ParallelLoopState.h"

namespace System::Threading::Tasks { class ParallelLoopStateFlags32; }

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE32__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B87F0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopState32_TypeDefinitionIndex = 891;

	class ParallelLoopState32 : public ::System::Threading::Tasks::ParallelLoopState
	{
	public:
		::System::Threading::Tasks::ParallelLoopStateFlags32* m_sharedParallelStateFlags; // 0x18
		::System::Int32 m_currentIteration; // 0x20

		::System::Void _ctor(::System::Threading::Tasks::ParallelLoopStateFlags32* sharedParallelStateFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ParallelLoopStateFlags32*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE32__CTOR_OFFSET))(this, sharedParallelStateFlags);
		}
	};
}
