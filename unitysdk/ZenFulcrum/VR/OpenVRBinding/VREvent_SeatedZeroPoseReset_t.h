#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_SeatedZeroPoseReset_t_TypeDefinitionIndex = 37139;

	struct alignas(1) VREvent_SeatedZeroPoseReset_t
	{
		::System::Boolean bResetBySystemMenu; // 0x10
	};
}
