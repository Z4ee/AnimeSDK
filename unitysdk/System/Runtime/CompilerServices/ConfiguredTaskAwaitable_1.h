#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_1_TypeDefinitionIndex = 1366;

	template <typename TResult>
	struct ConfiguredTaskAwaitable_1
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter; // 0x0
	};
}
