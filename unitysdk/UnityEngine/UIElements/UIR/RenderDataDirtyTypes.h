#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderDataDirtyTypes_TypeDefinitionIndex = 25107;

	enum class RenderDataDirtyTypes : ::System::Int32
	{
		None = 0,
		Transform = 1,
		ClipRectSize = 2,
		Clipping = 4,
		ClippingHierarchy = 8,
		Visuals = 16,
		VisualsHierarchy = 32,
		Opacity = 64,
		OpacityHierarchy = 128,
	};
}
