#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F81FAD0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_NEWUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F81FD90)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1F81FD70)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_UNFIXUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F81FDB0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F81FD40)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F8208B0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F8208A0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1F81FFA0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1F81FDD0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_NEWUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F81FDA0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1F81FD80)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_UNFIXUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F81FDC0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1F8207D0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8208C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ParticleControlPlayable_TypeDefinitionIndex = 33028;

	class ParticleControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::Single kUnsetTime; // 0x0
		// static const ::System::Boolean EnableParticleSimulationProfile; // 0x0
		::UnityEngine::ParticleSystem* _particleSystem_k__BackingField; // 0x10
		::System::UInt32 m_RandomSeed; // 0x18
		::System::Single m_LastPlayableTime; // 0x1C
		::System::Single m_LastParticleTime; // 0x20
		::System::Single m_SystemTime; // 0x24
		::System::Boolean _newUpdateMode_k__BackingField; // 0x28
		::System::Boolean _unFixUpdateMode_k__BackingField; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::ParticleSystem* component, ::System::UInt32 randomSeed, ::System::Boolean newUpdateMode, ::System::Boolean unFixUpdateMode)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET))(graph, component, randomSeed, newUpdateMode, unFixUpdateMode);
		}

		::UnityEngine::ParticleSystem* get_particleSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET))(this);
		}

		::System::Void set_particleSystem(::UnityEngine::ParticleSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET))(this, value);
		}

		::System::Boolean get_newUpdateMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_NEWUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_newUpdateMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_NEWUPDATEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_unFixUpdateMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_UNFIXUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_unFixUpdateMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_UNFIXUPDATEMODE_OFFSET))(this, value);
		}

		::System::Void Initialize(::UnityEngine::ParticleSystem* ps, ::System::UInt32 randomSeed, ::System::Boolean updateMode, ::System::Boolean unFixUpdateMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET))(this, ps, randomSeed, updateMode, unFixUpdateMode);
		}

		static ::System::Void SetRandomSeed(::UnityEngine::ParticleSystem* particleSystem, ::System::UInt32 randomSeed)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET))(particleSystem, randomSeed);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET))(this, playable, data);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void Simulate(::System::Single time, ::System::Boolean restart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SIMULATE_OFFSET))(this, time, restart);
		}
	};
}
