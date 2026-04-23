#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { template <typename T> class ThreadLocal_1_LinkedSlot; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_LinkedSlotVolatile_TypeDefinitionIndex = 815;

	template <typename T>
	struct ThreadLocal_1_LinkedSlotVolatile
	{
		::System::Threading::ThreadLocal_1_LinkedSlot<T>* Value; // 0x0
	};
}
