#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int BatchQueryJob_2_TypeDefinitionIndex = 5061;

	template <typename CommandT, typename ResultT>
	struct BatchQueryJob_2
	{
		::Unity::Collections::NativeArray_1<CommandT> commands; // 0x0
		::Unity::Collections::NativeArray_1<ResultT> results; // 0x0
	};
}
