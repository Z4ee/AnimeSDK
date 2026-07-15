#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XRGraphics_StereoRenderingMode_TypeDefinitionIndex = 34077;

	enum class XRGraphics_StereoRenderingMode : ::System::Int32
	{
		MultiPass = 0,
		SinglePass = 1,
		SinglePassInstanced = 2,
		SinglePassMultiView = 3,
	};
}
