#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading
{
	inline static constexpr unsigned int NativeOverlapped_TypeDefinitionIndex = 871;

	struct alignas(8) NativeOverlapped
	{
		::System::IntPtr InternalLow; // 0x10
		::System::IntPtr InternalHigh; // 0x18
		::System::Int32 OffsetLow; // 0x20
		::System::Int32 OffsetHigh; // 0x24
		::System::IntPtr EventHandle; // 0x28
	};
}
