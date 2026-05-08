#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/AllocatorManager_BlockHandle.h"
#include "unitysdk/Unity/Collections/AllocatorManager_SmallAllocatorHandle.h"

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_RANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DE910)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_Range_TypeDefinitionIndex = 20148;

	struct alignas(8) AllocatorManager_Range
	{
		::System::IntPtr Pointer; // 0x10
		::System::Int32 Items; // 0x18
		::Unity::Collections::AllocatorManager_SmallAllocatorHandle Allocator; // 0x1C
		::Unity::Collections::AllocatorManager_BlockHandle Block; // 0x1E

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_RANGE_DISPOSE_OFFSET))(this);
		}
	};
}
