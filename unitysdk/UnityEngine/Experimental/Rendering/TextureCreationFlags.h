#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int TextureCreationFlags_TypeDefinitionIndex = 6330;

	enum class TextureCreationFlags : ::System::Int32
	{
		None = 0,
		MipChain = 1,
		Crunch = 64,
	};
}
