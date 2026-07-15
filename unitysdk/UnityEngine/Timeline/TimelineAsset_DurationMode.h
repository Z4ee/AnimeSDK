#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_DurationMode_TypeDefinitionIndex = 36637;

	enum class TimelineAsset_DurationMode : ::System::Int32
	{
		BasedOnClips = 0,
		FixedLength = 1,
		BasedOnCameraClip = 2,
	};
}
