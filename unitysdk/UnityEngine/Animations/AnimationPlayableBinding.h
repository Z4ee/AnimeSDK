#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATEANIMATIONOUTPUT_OFFSET UNITYSDK_OFFSET(0x1ECF0510)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECF0450)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableBinding_TypeDefinitionIndex = 5737;

	class AnimationPlayableBinding : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::PlayableBinding Create(::System::String* a1, ::UnityEngine::Object* a2)
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Playables::PlayableOutput CreateAnimationOutput(::UnityEngine::Playables::PlayableGraph a1, ::System::String* a2)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATEANIMATIONOUTPUT_OFFSET))(a1, a2);
		}
	};
}
