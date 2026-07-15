#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderMode_TypeDefinitionIndex = 5347;

	enum class RenderMode : ::System::Int32
	{
		ScreenSpaceOverlay = 0,
		ScreenSpaceCamera = 1,
		WorldSpace = 2,
	};
}
