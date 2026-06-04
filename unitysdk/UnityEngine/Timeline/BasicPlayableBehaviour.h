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

#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B233BF0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B233B00)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1B233B40)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B233BC0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B233BB0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1B233B70)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1B233B80)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1B233B90)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B233BA0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B233BD0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B233BE0)
#define UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B233AF0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BasicPlayableBehaviour_TypeDefinitionIndex = 35906;

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

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASICPLAYABLEBEHAVIOUR_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
