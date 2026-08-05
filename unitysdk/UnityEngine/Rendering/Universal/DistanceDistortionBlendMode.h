#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DistanceDistortionBlendMode_TypeDefinitionIndex = 27574;

	enum class DistanceDistortionBlendMode : ::System::Int32
	{
		Add = 1,
		Blend = 0,
		Multiply = 2,
	};
}
