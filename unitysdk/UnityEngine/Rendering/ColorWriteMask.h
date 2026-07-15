#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorWriteMask_TypeDefinitionIndex = 4685;

	enum class ColorWriteMask : ::System::Int32
	{
		Alpha = 1,
		Blue = 2,
		Green = 4,
		Red = 8,
		All = 15,
	};
}
