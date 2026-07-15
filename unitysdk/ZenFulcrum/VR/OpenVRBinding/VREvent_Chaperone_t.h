#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Chaperone_t_TypeDefinitionIndex = 37136;

	struct alignas(8) VREvent_Chaperone_t
	{
		::System::UInt64 m_nPreviousUniverse; // 0x10
		::System::UInt64 m_nCurrentUniverse; // 0x18
	};
}
