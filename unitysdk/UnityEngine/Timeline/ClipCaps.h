#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ClipCaps_TypeDefinitionIndex = 29853;

	enum class ClipCaps : ::System::Int32
	{
		None = 0,
		Looping = 1,
		Extrapolation = 2,
		ClipIn = 4,
		SpeedMultiplier = 8,
		Blending = 16,
		All = -1,
	};
}
