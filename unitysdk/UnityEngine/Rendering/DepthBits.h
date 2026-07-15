#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DepthBits_TypeDefinitionIndex = 34143;

	enum class DepthBits : ::System::Int32
	{
		None = 0,
		Depth8 = 8,
		Depth16 = 16,
		Depth24 = 24,
		Depth32 = 32,
	};
}
