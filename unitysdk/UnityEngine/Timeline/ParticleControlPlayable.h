#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A3E2210)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1A3E84F0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3E84D0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1A3E8910)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1A3E8900)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1A3E8650)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1A3E8510)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1A3E8500)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1A3E8820)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E8920)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ParticleControlPlayable_TypeDefinitionIndex = 35610;

	class ParticleControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::Single kUnsetTime; // 0x0
		::UnityEngine::ParticleSystem* _particleSystem_k__BackingField; // 0x10
		::System::Single m_LastParticleTime; // 0x18
		::System::Single m_LastPlayableTime; // 0x1C
		::System::UInt32 m_RandomSeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::ParticleSystem* component, ::System::UInt32 randomSeed)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET))(graph, component, randomSeed);
		}

		::UnityEngine::ParticleSystem* get_particleSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET))(this);
		}

		::System::Void set_particleSystem(::UnityEngine::ParticleSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET))(this, value);
		}

		::System::Void Initialize(::UnityEngine::ParticleSystem* ps, ::System::UInt32 randomSeed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET))(this, ps, randomSeed);
		}

		::System::Void SetRandomSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET))(this);
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
