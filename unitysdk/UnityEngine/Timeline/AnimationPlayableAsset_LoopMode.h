#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationPlayableAsset_LoopMode_TypeDefinitionIndex = 32880;

	enum class AnimationPlayableAsset_LoopMode : ::System::Int32
	{
		UseSourceAsset = 0,
		On = 1,
		Off = 2,
	};
}
