#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainMap_ErrorCode_TypeDefinitionIndex = 5337;

	enum class TerrainUtility_TerrainMap_ErrorCode : ::System::Int32
	{
		OK = 0,
		Overlapping = 1,
		SizeMismatch = 4,
		EdgeAlignmentMismatch = 8,
	};
}
