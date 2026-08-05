#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class AnimationTrack; }

#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTINFINITETRACK_OFFSET UNITYSDK_OFFSET(0x1F243680)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1F243620)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROTATIONSTOEULER_OFFSET UNITYSDK_OFFSET(0x1F243440)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationTrack_AnimationTrackUpgrade_TypeDefinitionIndex = 32890;

	class AnimationTrack_AnimationTrackUpgrade : public ::System::Object
	{
	public:
		static ::System::Void ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack* track)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROTATIONSTOEULER_OFFSET))(track);
		}

		static ::System::Void ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack* track)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROOTMOTION_OFFSET))(track);
		}

		static ::System::Void ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack* track)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTINFINITETRACK_OFFSET))(track);
		}
	};
}
