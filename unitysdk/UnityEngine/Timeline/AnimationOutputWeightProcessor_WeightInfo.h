#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationOutputWeightProcessor_WeightInfo_TypeDefinitionIndex = 36613;

	struct alignas(8) AnimationOutputWeightProcessor_WeightInfo
	{
		::UnityEngine::Playables::Playable mixer; // 0x10
		::UnityEngine::Playables::Playable parentMixer; // 0x20
		::System::Int32 port; // 0x30
	};
}
