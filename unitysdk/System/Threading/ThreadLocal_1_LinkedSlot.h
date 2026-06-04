#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/ThreadLocal_1_LinkedSlotVolatile.h"

namespace System::Threading { template <typename T> class ThreadLocal_1_LinkedSlot; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_LinkedSlot_TypeDefinitionIndex = 815;

	template <typename T>
	class ThreadLocal_1_LinkedSlot : public ::System::Object
	{
	public:
		::System::Threading::ThreadLocal_1_LinkedSlot<T>* Next; // 0x0
		::System::Threading::ThreadLocal_1_LinkedSlot<T>* Previous; // 0x0
		::Il2CppArray<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>* SlotArray; // 0x0
		T Value; // 0x0
	};
}
