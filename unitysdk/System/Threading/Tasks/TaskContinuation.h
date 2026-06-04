#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKCONTINUATION_INLINEIFPOSSIBLEORELSEQUEUE_OFFSET UNITYSDK_OFFSET(0x1862E4B0)
#define SYSTEM_THREADING_TASKS_TASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1862E600)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskContinuation_TypeDefinitionIndex = 914;

	class TaskContinuation : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCONTINUATION__CTOR_OFFSET))(this);
		}

		static ::System::Void InlineIfPossibleOrElseQueue(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCONTINUATION_INLINEIFPOSSIBLEORELSEQUEUE_OFFSET))(a1, a2);
		}
	};
}
