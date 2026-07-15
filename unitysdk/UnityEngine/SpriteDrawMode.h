#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteDrawMode_TypeDefinitionIndex = 4397;

	enum class SpriteDrawMode : ::System::Int32
	{
		Simple = 0,
		Sliced = 1,
		Tiled = 2,
	};
}
