#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRingBufferMode_TypeDefinitionIndex = 5787;

	enum class ParticleSystemRingBufferMode : ::System::Int32
	{
		Disabled = 0,
		PauseUntilReplaced = 1,
		LoopUntilReplaced = 2,
	};
}
