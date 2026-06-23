#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeQueueBlockPoolData.h"
#include "unitysdk/Unity/Collections/NativeQueueData.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueue_1_ParallelWriter_TypeDefinitionIndex = 18467;

	template <typename T>
	struct NativeQueue_1_ParallelWriter
	{
		::Unity::Collections::NativeQueueData* m_Buffer; // 0x0
		::Unity::Collections::NativeQueueBlockPoolData* m_QueuePool; // 0x0
		::System::Int32 m_ThreadIndex; // 0x0
	};
}
