#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int AlignmentUnion_TypeDefinitionIndex = 2958;

	struct alignas(8) AlignmentUnion
	{
		::System::UInt64 Alignment; // 0x10
		::System::Int32 Length; // 0x10
		::System::Int32 IfIndex; // 0x14
	};
}
