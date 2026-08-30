#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_TASKS_STACKGUARD_CHECKFORSUFFICIENTSTACK_OFFSET UNITYSDK_OFFSET(0x1BC42EF0)
#define SYSTEM_THREADING_TASKS_STACKGUARD_ENDINLININGSCOPE_OFFSET UNITYSDK_OFFSET(0x1BC42F00)
#define SYSTEM_THREADING_TASKS_STACKGUARD_TRYBEGININLININGSCOPE_OFFSET UNITYSDK_OFFSET(0x1BC42EE0)
#define SYSTEM_THREADING_TASKS_STACKGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC42F20)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int StackGuard_TypeDefinitionIndex = 910;

	class StackGuard : public ::System::Object
	{
	public:
		::System::Int32 m_inliningDepth; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STACKGUARD__CTOR_OFFSET))(this);
		}

		::System::Boolean TryBeginInliningScope()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STACKGUARD_TRYBEGININLININGSCOPE_OFFSET))(this);
		}

		::System::Void EndInliningScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STACKGUARD_ENDINLININGSCOPE_OFFSET))(this);
		}

		::System::Boolean CheckForSufficientStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STACKGUARD_CHECKFORSUFFICIENTSTACK_OFFSET))(this);
		}
	};
}
