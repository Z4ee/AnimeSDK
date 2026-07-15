#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DrawRendererFlags_TypeDefinitionIndex = 4741;

	enum class DrawRendererFlags : ::System::Int32
	{
		None = 0,
		EnableDynamicBatching = 1,
		EnableInstancing = 2,
	};
}
