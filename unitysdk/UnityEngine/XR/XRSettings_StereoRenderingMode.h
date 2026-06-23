#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRSettings_StereoRenderingMode_TypeDefinitionIndex = 8810;

	enum class XRSettings_StereoRenderingMode : ::System::Int32
	{
		MultiPass = 0,
		SinglePass = 1,
		SinglePassInstanced = 2,
		SinglePassMultiview = 3,
	};
}
