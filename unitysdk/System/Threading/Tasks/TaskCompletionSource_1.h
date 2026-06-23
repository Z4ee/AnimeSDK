#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Exception; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCompletionSource_1_TypeDefinitionIndex = 919;

	template <typename TResult>
	class TaskCompletionSource_1 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task_1<TResult>* m_task; // 0x0
	};
}
