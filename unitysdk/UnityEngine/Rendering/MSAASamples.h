#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MSAASamples_TypeDefinitionIndex = 34144;

	enum class MSAASamples : ::System::Int32
	{
		None = 1,
		MSAA2x = 2,
		MSAA4x = 4,
		MSAA8x = 8,
	};
}
