#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LineTextureMode_TypeDefinitionIndex = 4171;

	enum class LineTextureMode : ::System::Int32
	{
		Stretch = 0,
		Tile = 1,
		DistributePerSegment = 2,
		RepeatPerSegment = 3,
	};
}
