#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemAnimationMode_TypeDefinitionIndex = 5768;

	enum class ParticleSystemAnimationMode : ::System::Int32
	{
		Grid = 0,
		Sprites = 1,
	};
}
