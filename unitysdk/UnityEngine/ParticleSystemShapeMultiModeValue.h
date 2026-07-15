#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemShapeMultiModeValue_TypeDefinitionIndex = 5791;

	enum class ParticleSystemShapeMultiModeValue : ::System::Int32
	{
		Random = 0,
		Loop = 1,
		PingPong = 2,
		BurstSpread = 3,
	};
}
