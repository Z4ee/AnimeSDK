#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureColorSpace_TypeDefinitionIndex = 34133;

	enum class TextureColorSpace : ::System::Int32
	{
		kTexColorSpaceLinear = 0,
		kTexColorSpaceSRGB = 1,
	};
}
