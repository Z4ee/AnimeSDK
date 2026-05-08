#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define UNITYENGINE_TIMELINE_WEIGHTUTILITY_NORMALIZEMIXER_OFFSET UNITYSDK_OFFSET(0x1C3E4500)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WeightUtility_TypeDefinitionIndex = 30892;

	class WeightUtility : public ::System::Object
	{
	public:
		static ::System::Single NormalizeMixer(::UnityEngine::Playables::Playable mixer)
		{
			return ((::System::Single(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WEIGHTUTILITY_NORMALIZEMIXER_OFFSET))(mixer);
		}
	};
}
