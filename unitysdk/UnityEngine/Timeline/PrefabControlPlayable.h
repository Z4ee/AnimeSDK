#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CLEANUPCACHE_OFFSET UNITYSDK_OFFSET(0x1E3DF9D0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E3DF0C0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E3DF9C0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3DF300)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1E3E03E0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1E3E0290)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1E3DFEA0)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_SETHIDEFLAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1E3DFD60)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0550)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0540)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PrefabControlPlayable_TypeDefinitionIndex = 32398;

	class PrefabControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>** StaticGet_s_PrefabInstanceCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(PrefabControlPlayable_TypeDefinitionIndex)->GetStaticField(0x26990);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_InUsePrefabInstanceSet()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(PrefabControlPlayable_TypeDefinitionIndex)->GetStaticField(0x26998);
		}
		static ::System::Boolean* StaticGet_UsePrefabCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PrefabControlPlayable_TypeDefinitionIndex)->GetStaticField(0x7F20);
		}
		static ::System::Int32* StaticGet_m_PrefabKey()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PrefabControlPlayable_TypeDefinitionIndex)->GetStaticField(0x7F24);
		}
		::UnityEngine::GameObject* m_Instance; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* prefabGameObject, ::UnityEngine::Transform* parentTransform)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET))(graph, prefabGameObject, parentTransform);
		}

		::UnityEngine::GameObject* get_prefabInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET))(this);
		}

		static ::System::Void CleanupCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CLEANUPCACHE_OFFSET))();
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
