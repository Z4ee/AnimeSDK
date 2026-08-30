#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/Task.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ContinuationTaskFromResultTask_1_TypeDefinitionIndex = 918;

	template <typename TAntecedentResult>
	class ContinuationTaskFromResultTask_1 : public ::System::Threading::Tasks::Task
	{
	public:
		::System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent; // 0x0
	};
}
