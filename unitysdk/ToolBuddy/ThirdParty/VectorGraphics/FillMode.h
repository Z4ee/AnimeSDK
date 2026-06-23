#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int FillMode_TypeDefinitionIndex = 31160;

	enum class FillMode : ::System::Int32
	{
		NonZero = 0,
		OddEven = 1,
	};
}
