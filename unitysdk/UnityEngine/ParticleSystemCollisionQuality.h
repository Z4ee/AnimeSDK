#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemCollisionQuality_TypeDefinitionIndex = 5761;

	enum class ParticleSystemCollisionQuality : ::System::Int32
	{
		High = 0,
		Medium = 1,
		Low = 2,
	};
}
