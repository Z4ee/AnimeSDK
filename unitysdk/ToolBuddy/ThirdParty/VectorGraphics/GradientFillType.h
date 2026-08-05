#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int GradientFillType_TypeDefinitionIndex = 31776;

	enum class GradientFillType : ::System::Int32
	{
		Linear = 0,
		Radial = 1,
	};
}
