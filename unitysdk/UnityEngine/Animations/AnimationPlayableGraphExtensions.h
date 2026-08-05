#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET UNITYSDK_OFFSET(0x1FC61890)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableGraphExtensions_TypeDefinitionIndex = 6682;

	class AnimationPlayableGraphExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean InternalCreateAnimationOutput(::UnityEngine::Playables::PlayableGraph& graph, ::System::String* name, ::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET))(graph, name, handle);
		}
	};
}
