#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int PathEnding_TypeDefinitionIndex = 31159;

	enum class PathEnding : ::System::Int32
	{
		Chop = 0,
		Square = 1,
		Round = 2,
	};
}
