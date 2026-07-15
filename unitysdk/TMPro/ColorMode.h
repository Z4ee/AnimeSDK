#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int ColorMode_TypeDefinitionIndex = 41743;

	enum class ColorMode : ::System::Int32
	{
		Single = 0,
		HorizontalGradient = 1,
		VerticalGradient = 2,
		FourCornersGradient = 3,
	};
}
