#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnrealTypes/ManagedStructList_1.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int ManagedStructListJobWrapper_1_TypeDefinitionIndex = 27682;

	template <typename T>
	class ManagedStructListJobWrapper_1 : public ::UnrealTypes::ManagedStructList_1<T>
	{
	public:
		::System::Boolean _disposed; // 0x0
	};
}
