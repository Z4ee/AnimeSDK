#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueueBlockHeader_TypeDefinitionIndex = 20159;

	struct alignas(8) NativeQueueBlockHeader
	{
		::Unity::Collections::NativeQueueBlockHeader* m_NextBlock; // 0x10
		::System::Int32 m_NumItems; // 0x18
	};
}
