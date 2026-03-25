#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VROverlayInputMethod_TypeDefinitionIndex = 30291;

	enum class VROverlayInputMethod : ::System::Int32
	{
		None = 0,
		Mouse = 1,
	};
}
