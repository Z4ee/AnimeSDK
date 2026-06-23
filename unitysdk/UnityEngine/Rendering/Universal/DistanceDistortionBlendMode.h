#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DistanceDistortionBlendMode_TypeDefinitionIndex = 26971;

	enum class DistanceDistortionBlendMode : ::System::Int32
	{
		Multiply = 2,
		Blend = 0,
		Add = 1,
	};
}
