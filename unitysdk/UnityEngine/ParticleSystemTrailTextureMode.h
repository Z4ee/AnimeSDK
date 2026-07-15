#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemTrailTextureMode_TypeDefinitionIndex = 5790;

	enum class ParticleSystemTrailTextureMode : ::System::Int32
	{
		Stretch = 0,
		Tile = 1,
		DistributePerSegment = 2,
		RepeatPerSegment = 3,
	};
}
