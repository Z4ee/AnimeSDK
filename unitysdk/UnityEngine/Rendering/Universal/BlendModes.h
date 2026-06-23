#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BlendModes_TypeDefinitionIndex = 26857;

	enum class BlendModes : ::System::Int32
	{
		Multiply = 2,
		Add = 1,
		Overlay = 3,
		AlphaBlended = 0,
	};
}
