#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemCullingMode_TypeDefinitionIndex = 5779;

	enum class ParticleSystemCullingMode : ::System::Int32
	{
		Automatic = 0,
		PauseAndCatchup = 1,
		Pause = 2,
		AlwaysSimulate = 3,
	};
}
