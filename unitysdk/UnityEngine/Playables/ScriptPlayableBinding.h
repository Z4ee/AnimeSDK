#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATESCRIPTOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B2B65F0)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2B6560)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayableBinding_TypeDefinitionIndex = 4903;

	class ScriptPlayableBinding : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::PlayableBinding Create(::System::String* a1, ::UnityEngine::Object* a2, ::System::Type* a3)
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::System::String*, ::UnityEngine::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Playables::PlayableOutput CreateScriptOutput(::UnityEngine::Playables::PlayableGraph a1, ::System::String* a2)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATESCRIPTOUTPUT_OFFSET))(a1, a2);
		}
	};
}
