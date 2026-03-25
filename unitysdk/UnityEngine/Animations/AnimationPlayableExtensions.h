#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIESINTERNAL_OFFSET UNITYSDK_OFFSET(0x189D5A90)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableExtensions_TypeDefinitionIndex = 5072;

	class AnimationPlayableExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetAnimatedPropertiesInternal(::UnityEngine::Playables::PlayableHandle& playable, ::UnityEngine::AnimationClip* animatedProperties)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIESINTERNAL_OFFSET))(playable, animatedProperties);
		}
	};
}
