#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ThreadAbortException; }
namespace System::Threading::Tasks { class ITaskCompletionAction; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x193F0900)
#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x193F09E0)
#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x193F08F0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CompletionActionInvoker_TypeDefinitionIndex = 908;

	class CompletionActionInvoker : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task* m_completingTask; // 0x10
		::System::Threading::Tasks::ITaskCompletionAction* m_action; // 0x18

		::System::Void _ctor(::System::Threading::Tasks::ITaskCompletionAction* action, ::System::Threading::Tasks::Task* completingTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ITaskCompletionAction*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER__CTOR_OFFSET))(this, action, completingTask);
		}

		::System::Void ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void MarkAborted(::System::Threading::ThreadAbortException* tae)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_MARKABORTED_OFFSET))(this, tae);
		}
	};
}
