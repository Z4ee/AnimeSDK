#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int PathCorner_TypeDefinitionIndex = 28503;

	enum class PathCorner : ::System::Int32
	{
		Tipped = 0,
		Round = 1,
		Beveled = 2,
	};
}
