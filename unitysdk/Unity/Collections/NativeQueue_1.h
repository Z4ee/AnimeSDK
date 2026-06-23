#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeQueueBlockPoolData.h"
#include "unitysdk/Unity/Collections/NativeQueueData.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueue_1_TypeDefinitionIndex = 18466;

	template <typename T>
	struct NativeQueue_1
	{
		::Unity::Collections::NativeQueueData* m_Buffer; // 0x0
		::Unity::Collections::NativeQueueBlockPoolData* m_QueuePool; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
