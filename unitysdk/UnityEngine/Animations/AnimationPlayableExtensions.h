#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E4F6E80)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableExtensions_TypeDefinitionIndex = 6677;

	class AnimationPlayableExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetAnimatedPropertiesInternal(::UnityEngine::Playables::PlayableHandle& playable, ::UnityEngine::AnimationClip* animatedProperties)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIESINTERNAL_OFFSET))(playable, animatedProperties);
		}
	};
}
