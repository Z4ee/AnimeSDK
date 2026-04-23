#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATEANIMATIONOUTPUT_OFFSET UNITYSDK_OFFSET(0x1A40F330)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1A40F290)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableBinding_TypeDefinitionIndex = 5072;

	class AnimationPlayableBinding : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::PlayableBinding Create(::System::String* name, ::UnityEngine::Object* key)
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATE_OFFSET))(name, key);
		}

		static ::UnityEngine::Playables::PlayableOutput CreateAnimationOutput(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATEANIMATIONOUTPUT_OFFSET))(graph, name);
		}
	};
}
