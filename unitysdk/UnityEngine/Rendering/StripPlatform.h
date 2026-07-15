#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int StripPlatform_TypeDefinitionIndex = 34169;

	enum class StripPlatform : ::System::Int32
	{
		None = 0,
		PC = 1,
		iOS = 2,
		Android = 4,
		PS5 = 8,
	};
}
