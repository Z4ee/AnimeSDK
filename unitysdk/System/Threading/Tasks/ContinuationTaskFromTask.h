#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/Task.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Delegate; }
namespace System { class Object; }

#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_INNERINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7278F0)
#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A727590)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ContinuationTaskFromTask_TypeDefinitionIndex = 913;

	class ContinuationTaskFromTask : public ::System::Threading::Tasks::Task
	{
	public:
		::System::Threading::Tasks::Task* m_antecedent; // 0x48

		::System::Void _ctor(::System::Threading::Tasks::Task* a1, ::System::Delegate* a2, ::System::Object* a3, ::System::Threading::Tasks::TaskCreationOptions a4, ::System::Threading::Tasks::InternalTaskOptions a5, ::System::Threading::StackCrawlMark& a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void InnerInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_INNERINVOKE_OFFSET))(this);
		}
	};
}
