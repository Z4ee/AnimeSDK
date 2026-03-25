#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x189A5AD0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x189A59E0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x189A5A20)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x189A5AA0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x189A5A90)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x189A5A50)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x189A5A60)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x189A5A70)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x189A5A80)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x189A5AB0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x189A5AC0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x189A59D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BasicPlayableBehaviour_TypeDefinitionIndex = 29886;

	class BasicPlayableBehaviour : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_GET_DURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, playable);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}
	};
}
