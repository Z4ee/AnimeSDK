#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemGradientMode_TypeDefinitionIndex = 5764;

	enum class ParticleSystemGradientMode : ::System::Int32
	{
		Color = 0,
		Gradient = 1,
		TwoColors = 2,
		TwoGradients = 3,
		RandomColor = 4,
	};
}
