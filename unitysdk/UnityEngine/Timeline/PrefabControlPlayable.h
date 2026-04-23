#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A3E0370)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A3E8D70)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3E8A80)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1A3E90F0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1A3E90D0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A3E9080)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_SETHIDEFLAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A3E8D80)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E9120)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PrefabControlPlayable_TypeDefinitionIndex = 35611;

	class PrefabControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* m_Instance; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* prefabGameObject, ::UnityEngine::Transform* parentTransform)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET))(graph, prefabGameObject, parentTransform);
		}

		::UnityEngine::GameObject* get_prefabInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET))(this);
		}

		::UnityEngine::GameObject* Initialize(::UnityEngine::GameObject* prefabGameObject, ::UnityEngine::Transform* parentTransform)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_INITIALIZE_OFFSET))(this, prefabGameObject, parentTransform);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		static ::System::Void SetHideFlagsRecursive(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_SETHIDEFLAGSRECURSIVE_OFFSET))(gameObject);
		}
	};
}
