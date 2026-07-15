#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int ETrackedControllerRole_TypeDefinitionIndex = 37063;

	enum class ETrackedControllerRole : ::System::Int32
	{
		Invalid = 0,
		LeftHand = 1,
		RightHand = 2,
	};
}
