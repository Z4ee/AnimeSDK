#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_CLONE_OFFSET UNITYSDK_OFFSET(0x1B2B4BC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B2B4B90)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B2B4B80)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1B2B4B40)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1B2B4B50)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1B2B4B60)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B2B4B70)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B2B4BA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B2B4BB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B4B30)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableBehaviour_TypeDefinitionIndex = 4890;

	class PlayableBehaviour : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_CLONE_OFFSET))(this);
		}
	};
}
