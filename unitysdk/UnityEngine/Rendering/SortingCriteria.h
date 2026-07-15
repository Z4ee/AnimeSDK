#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingCriteria_TypeDefinitionIndex = 4756;

	enum class SortingCriteria : ::System::Int32
	{
		None = 0,
		SortingLayer = 1,
		RenderQueue = 2,
		BackToFront = 4,
		QuantizedFrontToBack = 8,
		OptimizeStateChanges = 16,
		CanvasOrder = 32,
		RendererPriority = 64,
		CommonOpaque = 59,
		CommonTransparent = 23,
	};
}
