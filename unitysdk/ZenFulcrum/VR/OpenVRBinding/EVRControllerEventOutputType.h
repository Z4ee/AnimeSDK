#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRControllerEventOutputType_TypeDefinitionIndex = 36293;

	enum class EVRControllerEventOutputType : ::System::Int32
	{
		ControllerEventOutput_OSEvents = 0,
		ControllerEventOutput_VREvents = 1,
	};
}
