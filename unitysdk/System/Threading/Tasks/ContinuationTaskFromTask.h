#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/Task.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Delegate; }
namespace System { class Object; }

#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_INNERINVOKE_OFFSET UNITYSDK_OFFSET(0x1786A280)
#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1786A0C0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ContinuationTaskFromTask_TypeDefinitionIndex = 914;

	class ContinuationTaskFromTask : public ::System::Threading::Tasks::Task
	{
	public:
		::System::Threading::Tasks::Task* m_antecedent; // 0x48

		::System::Void _ctor(::System::Threading::Tasks::Task* antecedent, ::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK__CTOR_OFFSET))(this, antecedent, action, state, creationOptions, internalOptions, stackMark);
		}

		::System::Void InnerInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_INNERINVOKE_OFFSET))(this);
		}
	};
}
