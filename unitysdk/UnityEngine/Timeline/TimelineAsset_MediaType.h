#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_MediaType_TypeDefinitionIndex = 36636;

	enum class TimelineAsset_MediaType : ::System::Int32
	{
		Animation = 0,
		Audio = 1,
		Texture = 2,
		Video = 2,
		Script = 3,
		Hybrid = 4,
		Group = 5,
	};
}
