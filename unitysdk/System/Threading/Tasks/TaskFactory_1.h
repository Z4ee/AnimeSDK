#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Threading::Tasks { class TaskScheduler; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1_TypeDefinitionIndex = 888;

	template <typename TResult>
	class TaskFactory_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken m_defaultCancellationToken; // 0x0
		::System::Threading::Tasks::TaskScheduler* m_defaultScheduler; // 0x0
		::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions; // 0x0
	};
}
