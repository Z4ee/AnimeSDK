#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasScaler_ScreenMatchMode_TypeDefinitionIndex = 5925;

	enum class CanvasScaler_ScreenMatchMode : ::System::Int32
	{
		MatchWidthOrHeight = 0,
		Expand = 1,
		Shrink = 2,
	};
}
