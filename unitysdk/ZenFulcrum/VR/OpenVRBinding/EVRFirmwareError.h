#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRFirmwareError_TypeDefinitionIndex = 30277;

	enum class EVRFirmwareError : ::System::Int32
	{
		None = 0,
		Success = 1,
		Fail = 2,
	};
}
