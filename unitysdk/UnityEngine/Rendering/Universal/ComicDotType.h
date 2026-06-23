#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComicDotType_TypeDefinitionIndex = 27360;

	enum class ComicDotType : ::System::Int32
	{
		Triangle = 3,
		Octagon = 6,
		Custom = 7,
		Star = 5,
		None = 0,
		Dot = 2,
		Quad = 4,
		Line = 1,
	};
}
