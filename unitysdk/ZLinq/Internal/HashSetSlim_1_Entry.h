#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZLinq::Internal
{
	inline static constexpr unsigned int HashSetSlim_1_Entry_TypeDefinitionIndex = 6396;

	template <typename T>
	struct HashSetSlim_1_Entry
	{
		::System::UInt32 HashCode; // 0x0
		T Value; // 0x0
		::System::Int32 Next; // 0x0
	};
}
