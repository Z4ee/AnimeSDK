#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemAnimationTimeMode_TypeDefinitionIndex = 5769;

	enum class ParticleSystemAnimationTimeMode : ::System::Int32
	{
		Lifetime = 0,
		Speed = 1,
		FPS = 2,
	};
}
