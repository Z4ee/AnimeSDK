#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_ControllerMode_State_t_TypeDefinitionIndex = 37168;

	struct alignas(1) RenderModel_ControllerMode_State_t
	{
		::System::Boolean bScrollWheelVisible; // 0x10
	};
}
