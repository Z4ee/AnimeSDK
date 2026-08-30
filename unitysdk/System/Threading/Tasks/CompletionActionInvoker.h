#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ThreadAbortException; }
namespace System::Threading::Tasks { class ITaskCompletionAction; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1BC428C0)
#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1BC429C0)
#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC428B0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CompletionActionInvoker_TypeDefinitionIndex = 906;

	class CompletionActionInvoker : public ::System::Object
	{
	public:
		::System::Threading::Tasks::ITaskCompletionAction* m_action; // 0x10
		::System::Threading::Tasks::Task* m_completingTask; // 0x18

		::System::Void _ctor(::System::Threading::Tasks::ITaskCompletionAction* a1, ::System::Threading::Tasks::Task* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ITaskCompletionAction*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void MarkAborted(::System::Threading::ThreadAbortException* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_MARKABORTED_OFFSET))(this, a1);
		}
	};
}
