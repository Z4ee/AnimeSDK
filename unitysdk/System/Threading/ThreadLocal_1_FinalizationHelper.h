#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/ThreadLocal_1_LinkedSlotVolatile.h"

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_FinalizationHelper_TypeDefinitionIndex = 817;

	template <typename T>
	class ThreadLocal_1_FinalizationHelper : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>* SlotArray; // 0x0
		::System::Boolean m_trackAllValues; // 0x0
	};
}
