#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemSortMode_TypeDefinitionIndex = 5760;

	enum class ParticleSystemSortMode : ::System::Int32
	{
		None = 0,
		Distance = 1,
		OldestInFront = 2,
		YoungestInFront = 3,
	};
}
