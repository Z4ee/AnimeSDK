#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TaskAwaiter_1_TypeDefinitionIndex = 1363;

	template <typename TResult>
	struct TaskAwaiter_1
	{
		::System::Threading::Tasks::Task_1<TResult>* m_task; // 0x0
	};
}
