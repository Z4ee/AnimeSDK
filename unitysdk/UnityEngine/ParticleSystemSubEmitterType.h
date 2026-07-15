#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemSubEmitterType_TypeDefinitionIndex = 5787;

	enum class ParticleSystemSubEmitterType : ::System::Int32
	{
		Birth = 0,
		Collision = 1,
		Death = 2,
		Trigger = 3,
		Manual = 4,
	};
}
