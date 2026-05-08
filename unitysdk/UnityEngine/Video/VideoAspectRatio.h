#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoAspectRatio_TypeDefinitionIndex = 25134;

	enum class VideoAspectRatio : ::System::Int32
	{
		NoScaling = 0,
		FitVertically = 1,
		FitHorizontally = 2,
		FitInside = 3,
		FitOutside = 4,
		Stretch = 5,
	};
}
