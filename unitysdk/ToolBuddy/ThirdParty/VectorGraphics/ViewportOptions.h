#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int ViewportOptions_TypeDefinitionIndex = 28453;

	enum class ViewportOptions : ::System::Int32
	{
		DontPreserve = 0,
		PreserveViewport = 1,
		OnlyApplyRootViewBox = 2,
	};
}
