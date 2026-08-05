#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnrealTypes/ManagedList_1.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int ManagedListJobWrapper_1_TypeDefinitionIndex = 28280;

	template <typename T>
	class ManagedListJobWrapper_1 : public ::UnrealTypes::ManagedList_1<T>
	{
	public:
		::System::Boolean _disposed; // 0x0
	};
}
