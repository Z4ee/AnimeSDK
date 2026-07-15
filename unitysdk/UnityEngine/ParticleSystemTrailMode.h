#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemTrailMode_TypeDefinitionIndex = 5789;

	enum class ParticleSystemTrailMode : ::System::Int32
	{
		PerParticle = 0,
		Ribbon = 1,
	};
}
