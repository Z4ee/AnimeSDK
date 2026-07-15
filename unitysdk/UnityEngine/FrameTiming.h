#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FrameTiming_TypeDefinitionIndex = 4114;

	struct alignas(8) FrameTiming
	{
		::System::UInt64 cpuTimePresentCalled; // 0x10
		::System::Double cpuFrameTime; // 0x18
		::System::UInt64 cpuTimeFrameComplete; // 0x20
		::System::Double gpuFrameTime; // 0x28
		::System::Single heightScale; // 0x30
		::System::Single widthScale; // 0x34
		::System::UInt32 syncInterval; // 0x38
	};
}
