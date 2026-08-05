#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TransparentMaskQuality_TypeDefinitionIndex = 27337;

	enum class TransparentMaskQuality : ::System::Int32
	{
		DitherAndOffScreenParticles = 2,
		None = 0,
		OnlyDither = 1,
	};
}
