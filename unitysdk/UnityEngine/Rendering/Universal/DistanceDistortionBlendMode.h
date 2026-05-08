#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DistanceDistortionBlendMode_TypeDefinitionIndex = 29882;

	enum class DistanceDistortionBlendMode : ::System::Int32
	{
		Blend = 0,
		Add = 1,
		Multiply = 2,
	};
}
