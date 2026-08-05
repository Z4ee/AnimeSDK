#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATESCRIPTOUTPUT_OFFSET UNITYSDK_OFFSET(0x1EE2A5D0)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1EE2A530)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayableBinding_TypeDefinitionIndex = 6305;

	class ScriptPlayableBinding : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::PlayableBinding Create(::System::String* name, ::UnityEngine::Object* key, ::System::Type* type)
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::System::String*, ::UnityEngine::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATE_OFFSET))(name, key, type);
		}

		static ::UnityEngine::Playables::PlayableOutput CreateScriptOutput(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATESCRIPTOUTPUT_OFFSET))(graph, name);
		}
	};
}
