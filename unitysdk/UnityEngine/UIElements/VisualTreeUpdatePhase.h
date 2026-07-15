#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeUpdatePhase_TypeDefinitionIndex = 6165;

	enum class VisualTreeUpdatePhase : ::System::Int32
	{
		ViewData = 0,
		Bindings = 1,
		Animation = 2,
		Styles = 3,
		Layout = 4,
		TransformClip = 5,
		Repaint = 6,
		Count = 7,
	};
}
