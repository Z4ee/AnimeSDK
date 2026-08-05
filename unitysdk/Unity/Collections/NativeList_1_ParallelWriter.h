#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeList.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeList_1_ParallelWriter_TypeDefinitionIndex = 18868;

	template <typename T>
	struct NativeList_1_ParallelWriter
	{
		::System::Void* Ptr; // 0x0
		::Unity::Collections::LowLevel::Unsafe::UnsafeList* ListData; // 0x0
	};
}
