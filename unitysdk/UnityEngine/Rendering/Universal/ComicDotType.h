#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComicDotType_TypeDefinitionIndex = 27835;

	enum class ComicDotType : ::System::Int32
	{
		Triangle = 3,
		Octagon = 6,
		Dot = 2,
		Star = 5,
		Custom = 7,
		Quad = 4,
		None = 0,
		Line = 1,
	};
}
