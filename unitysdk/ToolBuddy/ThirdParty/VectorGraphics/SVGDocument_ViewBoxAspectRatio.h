#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_ViewBoxAspectRatio_TypeDefinitionIndex = 31118;

	enum class SVGDocument_ViewBoxAspectRatio : ::System::Int32
	{
		DontPreserve = 0,
		FitLargestDim = 1,
		FitSmallestDim = 2,
	};
}
