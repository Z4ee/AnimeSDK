#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int PathCorner_TypeDefinitionIndex = 31158;

	enum class PathCorner : ::System::Int32
	{
		Tipped = 0,
		Round = 1,
		Beveled = 2,
	};
}
