#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AspectRatioFitter_AspectMode_TypeDefinitionIndex = 5912;

	enum class AspectRatioFitter_AspectMode : ::System::Int32
	{
		None = 0,
		WidthControlsHeight = 1,
		HeightControlsWidth = 2,
		FitInParent = 3,
		EnvelopeParent = 4,
	};
}
