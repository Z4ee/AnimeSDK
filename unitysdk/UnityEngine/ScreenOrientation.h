#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ScreenOrientation_TypeDefinitionIndex = 4157;

	enum class ScreenOrientation : ::System::Int32
	{
		Unknown = 0,
		Portrait = 1,
		PortraitUpsideDown = 2,
		LandscapeLeft = 3,
		LandscapeRight = 4,
		AutoRotation = 5,
		Landscape = 3,
	};
}
