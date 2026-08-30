#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECBCF80)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ECC70B0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ECC6DA0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1ECC7590)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1ECC7570)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1ECC7520)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_SETHIDEFLAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1ECC70C0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC75C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PrefabControlPlayable_TypeDefinitionIndex = 37552;

	class PrefabControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* m_Instance; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Transform* a3)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::GameObject* get_prefabInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET))(this);
		}

		::UnityEngine::GameObject* Initialize(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetHideFlagsRecursive(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_SETHIDEFLAGSRECURSIVE_OFFSET))(a1);
		}
	};
}
