#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AppliedOffsetMode_TypeDefinitionIndex = 36622;

	enum class AppliedOffsetMode : ::System::Int32
	{
		NoRootTransform = 0,
		TransformOffset = 1,
		SceneOffset = 2,
		TransformOffsetLegacy = 3,
		SceneOffsetLegacy = 4,
		SceneOffsetEditor = 5,
		SceneOffsetLegacyEditor = 6,
	};
}
