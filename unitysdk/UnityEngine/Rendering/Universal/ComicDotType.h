#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComicDotType_TypeDefinitionIndex = 29872;

	enum class ComicDotType : ::System::Int32
	{
		None = 0,
		Line = 1,
		Dot = 2,
		Triangle = 3,
		Quad = 4,
		Star = 5,
		Octagon = 6,
		Custom = 7,
	};
}
