#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Profiling::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProfilerMarkerData_TypeDefinitionIndex = 3943;

	struct alignas(8) ProfilerMarkerData
	{
		::System::Byte Type; // 0x10
		::System::Byte reserved0; // 0x11
		::System::UInt16 reserved1; // 0x12
		::System::UInt32 Size; // 0x14
		::System::Void* Ptr; // 0x18
	};
}
