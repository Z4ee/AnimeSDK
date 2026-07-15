#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackOffset_TypeDefinitionIndex = 36621;

	enum class TrackOffset : ::System::Int32
	{
		ApplyTransformOffsets = 0,
		ApplySceneOffsets = 1,
		Auto = 2,
	};
}
