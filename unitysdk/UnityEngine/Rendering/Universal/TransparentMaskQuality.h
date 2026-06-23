#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TransparentMaskQuality_TypeDefinitionIndex = 26517;

	enum class TransparentMaskQuality : ::System::Int32
	{
		None = 0,
		OnlyDither = 1,
		DitherAndOffScreenParticles = 2,
	};
}
