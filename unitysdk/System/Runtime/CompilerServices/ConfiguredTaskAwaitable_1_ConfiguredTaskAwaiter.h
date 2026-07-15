#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter_TypeDefinitionIndex = 1367;

	template <typename TResult>
	struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter
	{
		::System::Threading::Tasks::Task_1<TResult>* m_task; // 0x0
		::System::Boolean m_continueOnCapturedContext; // 0x0
	};
}
