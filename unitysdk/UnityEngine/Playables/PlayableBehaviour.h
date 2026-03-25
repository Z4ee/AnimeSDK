#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_CLONE_OFFSET UNITYSDK_OFFSET(0x18A2AB70)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x18A2AB40)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18A2AB30)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x18A2AAF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x18A2AB00)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x18A2AB10)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18A2AB20)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x18A2AB50)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18A2AB60)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2AAE0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableBehaviour_TypeDefinitionIndex = 4708;

	class PlayableBehaviour : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, playable);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_CLONE_OFFSET))(this);
		}
	};
}
