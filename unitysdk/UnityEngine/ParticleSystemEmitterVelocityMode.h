#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemEmitterVelocityMode_TypeDefinitionIndex = 5780;

	enum class ParticleSystemEmitterVelocityMode : ::System::Int32
	{
		Transform = 0,
		Rigidbody = 1,
	};
}
