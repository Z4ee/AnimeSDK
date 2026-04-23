#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FullScreenMode_TypeDefinitionIndex = 3928;

	enum class FullScreenMode : ::System::Int32
	{
		ExclusiveFullScreen = 0,
		FullScreenWindow = 1,
		MaximizedWindow = 2,
		Windowed = 3,
	};
}
