#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_PerformanceTest_t_TypeDefinitionIndex = 37138;

	struct alignas(4) VREvent_PerformanceTest_t
	{
		::System::UInt32 m_nFidelityLevel; // 0x10
	};
}
