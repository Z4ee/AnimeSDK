#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { class ParallelLoopStateFlags; }

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E20810)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E20800)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopState_TypeDefinitionIndex = 890;

	class ParallelLoopState : public ::System::Object
	{
	public:
		::System::Threading::Tasks::ParallelLoopStateFlags* m_flagsBase; // 0x10

		::System::Void _ctor(::System::Threading::Tasks::ParallelLoopStateFlags* fbase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ParallelLoopStateFlags*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE__CTOR_OFFSET))(this, fbase);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE__CTOR_1_OFFSET))(this);
		}
	};
}
