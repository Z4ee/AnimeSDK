#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_Direction_TypeDefinitionIndex = 6005;

	enum class Slider_Direction : ::System::Int32
	{
		LeftToRight = 0,
		RightToLeft = 1,
		BottomToTop = 2,
		TopToBottom = 3,
	};
}
