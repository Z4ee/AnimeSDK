#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET UNITYSDK_OFFSET(0x1EE94B00)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableGraphExtensions_TypeDefinitionIndex = 5746;

	class AnimationPlayableGraphExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean InternalCreateAnimationOutput(::UnityEngine::Playables::PlayableGraph& a1, ::System::String* a2, ::UnityEngine::Playables::PlayableOutputHandle& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET))(a1, a2, a3);
		}
	};
}
