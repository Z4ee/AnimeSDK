#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKCONTINUATION_INLINEIFPOSSIBLEORELSEQUEUE_OFFSET UNITYSDK_OFFSET(0x1DC10B90)
#define SYSTEM_THREADING_TASKS_TASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC10D10)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskContinuation_TypeDefinitionIndex = 922;

	class TaskContinuation : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCONTINUATION__CTOR_OFFSET))(this);
		}

		static ::System::Void InlineIfPossibleOrElseQueue(::System::Threading::Tasks::Task* task, ::System::Boolean needsProtection)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCONTINUATION_INLINEIFPOSSIBLEORELSEQUEUE_OFFSET))(task, needsProtection);
		}
	};
}
