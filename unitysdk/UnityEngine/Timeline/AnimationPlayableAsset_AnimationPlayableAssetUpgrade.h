#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class AnimationPlayableAsset; }

#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_ANIMATIONPLAYABLEASSETUPGRADE_CONVERTROTATIONTOEULER_OFFSET UNITYSDK_OFFSET(0x1A3A7120)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationPlayableAsset_AnimationPlayableAssetUpgrade_TypeDefinitionIndex = 36617;

	class AnimationPlayableAsset_AnimationPlayableAssetUpgrade : public ::System::Object
	{
	public:
		static ::System::Void ConvertRotationToEuler(::UnityEngine::Timeline::AnimationPlayableAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationPlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_ANIMATIONPLAYABLEASSETUPGRADE_CONVERTROTATIONTOEULER_OFFSET))(a1);
		}
	};
}
